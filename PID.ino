int readPosition(int Track, int noise) {
  unsigned char i, online = 0;
  unsigned long avg = 0;
  unsigned int sum = 0;
  static int last_value = 0;
  ReadCalibrate();
  for (i = 0; i < NUM_SENSORS; i++) {
    int values = F[i];
    if (values > Track) {
      online = 1;
    }
    if (values > noise) {
      avg += (long)(values) * (i * 1000);
      sum += values;
    }
  }
  if (!online) {
    if (last_value < (NUM_SENSORS - 1) * 1000 / 2) {
      return 0;
    } else {
      return (NUM_SENSORS - 1) * 1000;
    }
  }
  last_value = avg / sum;
  return last_value;
}

void PID(int Speed, float Kp, float Kd) {
  TuneMotor(Speed);
  int Pos = readPosition(300, 50);
  int Error = Pos - ((NUM_SENSORS - 1) * 1000 / 2);
  int PID_Value = (Kp * Error) + (Kd * (Error - LastError));
  LastError = Error;
  int LeftPower = LeftBaseSpeed + PID_Value;
  int RightPower = RightBaseSpeed - PID_Value;
  if (LeftPower > MaxSpeed) LeftPower = MaxSpeed;
  if (LeftPower < MinSpeed) LeftPower = MinSpeed;
  if (RightPower > MaxSpeed) RightPower = MaxSpeed;
  if (RightPower < MinSpeed) RightPower = MinSpeed;
  motor(1,LeftPower);
  motor(2,RightPower);
  delay(1);
 //Motor(LeftPower, RightPower);
}

// int readPosition(int Track, int noise) {
//   unsigned char i, online = 0;
//   unsigned long avg = 0;
//   unsigned int sum = 0;
//   static int last_value = 0;
//   int dashedLineDetected = 0;
//   ReadCalibrate();
//   for (i = 0; i < NUM_SENSORS; i++) {
//     int values = F[i];
//     if (values > Track) {
//       online = 1;
//     }
//     if (values > noise) {
//       avg += (long)(values) * (i * 1000);
//       sum += values;
//     } else if (values > (noise / 2) && values <= noise) { // Assuming dashed line has lower values
//       dashedLineDetected = 1;
//     }
//   }
//   if (!online) {
//     if (last_value < (NUM_SENSORS - 1) * 1000 / 2) {
//       return 0;
//     } else {
//       return (NUM_SENSORS - 1) * 1000;
//     }
//   }
//   last_value = avg / sum;
//   return dashedLineDetected ? -1 : last_value; // Return -1 if dashed line detected
// }

// void PID(int Speed, float Kp, float Kd) {
//   int Pos = readPosition(300, 50);
//   if (Pos == -1) {
//     // Handle dashed line
//     ForwardSpeedTime(Speed,1);
//   } else {
//     int Error = Pos - ((NUM_SENSORS - 1) * 1000 / 2);
//   int PID_Value = (Kp * Error) + (Kd * (Error - LastError));
//   LastError = Error;
//   int LeftPower = LeftBaseSpeed + PID_Value;
//   int RightPower = RightBaseSpeed - PID_Value;
//   if (LeftPower > MaxSpeed) LeftPower = MaxSpeed;
//   if (LeftPower < MinSpeed) LeftPower = MinSpeed;
//   if (RightPower > MaxSpeed) RightPower = MaxSpeed;
//   if (RightPower < MinSpeed) RightPower = MinSpeed;
//   motor(1,LeftPower);
//   motor(2,RightPower);
//   }
// }


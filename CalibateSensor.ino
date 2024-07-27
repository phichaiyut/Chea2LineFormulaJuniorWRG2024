void CaliberateRobotSensor() {
  Serial.println("Press OK to start caribrate Front Sensor");
   Wait_sw_ok_press();
  Serial.println("Caribrating");
  beep(1);
  delay(500);
  CalibrateSensor(20, 200);
  beep(1);
  delay(500);
  Serial.println("Finish");
  Serial.println("  ");
  Serial.print("SensorValueMin(");
  for (int i = 0; i < NUM_SENSORS; i++) {
    Serial.print(MinValue[i]);
    if (i < NUM_SENSORS - 1) Serial.print(",");
    else Serial.print(");");
  }
  Serial.print("SensorValueMax(");
  for (int i = 0; i < NUM_SENSORS; i++) {
    Serial.print(MaxValue[i]);
    if (i < NUM_SENSORS - 1) Serial.print(",");
    else Serial.println(");");
  }
  while (1)
    ;
}

void CalibrateSensor(int pauseTime, int samples) {
  for (int i = 0; i < NUM_SENSORS; i++) {
    MinValue[i] = 4095;
    MaxValue[i] = 0;
  }
  for (int startSamp = 0; startSamp <= samples; startSamp++) {
    //ReadSensor();
    for (int i = 0; i < NUM_SENSORS; i++) {
      MinValue[i] = (analog(i) <= MinValue[i] ? analog(i) : MinValue[i]);
      MaxValue[i] = (analog(i) >= MaxValue[i] ? analog(i) : MaxValue[i]);
    }
    delay(pauseTime);
  }
  for (int i = 0; i < NUM_SENSORS; i++) {
    MinValue[i] += 80;
    MaxValue[i] -= 320;
  }
  beep(1);
}
void ReadCalibrate() {
  for (int i = 0; i < NUM_SENSORS; i++) {
    unsigned int calmin, calmax;
    int x = 0;
    calmin = MinValue[i];
    calmax = MaxValue[i];
    if (LineColor == 0) {
      x = map(analog(i), calmin, calmax, 0, 1000);
    } else {
      x = map(analog(i), calmin, calmax, 1000, 0);
    }
    if (x < 0) x = 0;
    if (x > 1000) x = 1000;
    F[i] = x;
  }
}

void SerialSensor() {
  while (1) {
    //ReadSensor();
    for (int _serialF = 0; _serialF < NUM_SENSORS; _serialF++) {
      Serial.print(analog(_serialF));
      Serial.print("\t");
    }
    Serial.println("");
    delay(50);
    if (SW_OK() == 1) {
      beep(1);
      break;
    }
  }
}
void SerialCalibrate() {
  while (1) {
    ReadCalibrate();
    for (int _serialF = 0; _serialF < NUM_SENSORS; _serialF++) {
      Serial.print(F[_serialF]);
      Serial.print("\t");
    }
    Serial.println("");
    delay(100);
    if (SW_OK() == 1) {
      beep(1);
      break;
    }
  }
}
void TurnSpeedLeft(int l, int r, int de) {
  LTurnSpdL = l;
  LTurnSpdR = r;
  TurnDelayL = de;
}

void TurnSpeedRight(int l, int r, int de) {
  RTurnSpdL = l;
  RTurnSpdR = r;
  TurnDelayR = de;
}
void TurnRight() {
  Motor(RTurnSpdL, -RTurnSpdR);
  delay(TurnDelayR);
  while (1) {
    Motor(RTurnSpdL, -RTurnSpdR);
    ReadCalibrate();
    if (F[3] >= 500) {
      MotorStop();
      break;
    }
  }
}

void TurnLeft() {
  Motor(-LTurnSpdL, LTurnSpdR);
  delay(TurnDelayL);
  while (1) {
    Motor(-LTurnSpdL, LTurnSpdR);
    ReadCalibrate();
    if (F[0] >= 500) {
      MotorStop();
      break;
    }
  }
}

void Left(int Speed , int Time){
  MotorStop();
  delay(10);
  sl(Speed);
  delay(Time);
  MotorStop();
  delay(10);
}
void Right(int Speed , int Time){
  MotorStop();
  delay(10);
  sr(Speed);
  delay(Time);
  MotorStop();
  delay(10);
}
void TurnLeft(int Speed , int Time){
  MotorStop();
  delay(10);
  tl(Speed);
  delay(Time);
  MotorStop();
  delay(10);
}
void TurnRight(int Speed , int Time){
  MotorStop();
  delay(10);
  tr(Speed);
  delay(Time);
  MotorStop();
  delay(10);
}
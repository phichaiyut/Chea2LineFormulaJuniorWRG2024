void TestMotor(){
  fd2(50, 0);
  delay(500);
  fd2(0,50);
  delay(500);
  MotorStop();
}

void ForwardSpeedTime(int MotorSpeed, int Time) {
  TuneMotor(MotorSpeed);
  fd2(LeftBaseSpeed, RightBaseSpeed);
  delay(Time);
}

void BackwardSpeedTime(int MotorSpeed, int Time) {
  TuneMotor(MotorSpeed);
  bk2(BackLeftBaseSpeed, BackRightBaseSpeed);
  delay(Time);
}

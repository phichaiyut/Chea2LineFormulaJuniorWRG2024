void Motor(int leftsp, int rightsp) {
  motor(1,leftsp);
  motor(2,rightsp);
}
void MotorStop() {
  AO();
}
void TuneMotor(int BaseSpeed){
  
  
  if(BaseSpeed<=40)
  {
    LeftBaseSpeed = BaseSpeed-0;
    RightBaseSpeed = BaseSpeed-0;
    BackLeftBaseSpeed = BaseSpeed-0;
    BackRightBaseSpeed = BaseSpeed-0;
    // PID_Kp = 0.011;       //forward PID
    // PID_Kd = 0.11;
    // Kt = 10;
    // PID_KpB = 0.011;       //Backward PID
    // PID_KdB = 0.11;
    // KtB = 10;
  }
  else if(BaseSpeed<=50)
  {
    LeftBaseSpeed = BaseSpeed-0;
    RightBaseSpeed = BaseSpeed-0;
    BackLeftBaseSpeed = BaseSpeed-0;
    BackRightBaseSpeed = BaseSpeed-0;
    // PID_Kp = 0.014;       //forward PID
    // PID_Kd = 0.14;
    // Kt = 10;
    // PID_KpB = 0.014;       //Backward PID
    // PID_KdB = 0.14;
    // KtB = 10;
  }
  else if(BaseSpeed<=60)
  {
    LeftBaseSpeed = BaseSpeed-0;
    RightBaseSpeed = BaseSpeed-0;
    BackLeftBaseSpeed = BaseSpeed-0;
    BackRightBaseSpeed = BaseSpeed-0;
    // PID_Kp = 0.017;       //forward PID
    // PID_Kd = 0.17;
    // Kt = 10;
    // PID_KpB = 0.017;       //Backward PID
    // PID_KdB = 0.17;
    // KtB = 10;
  }
  else if(BaseSpeed<=70)
  {
    LeftBaseSpeed = BaseSpeed-0;
    RightBaseSpeed = BaseSpeed-0;
    BackLeftBaseSpeed = BaseSpeed-0;
    BackRightBaseSpeed = BaseSpeed-0;
    // PID_Kp = 0.030;       //forward PID
    // PID_Kd = 0.30;
    // Kt = 10;
    // PID_KpB = 0.030;       //Backward PID
    // PID_KdB = 0.30;
    // KtB = 10;
  }
  else if(BaseSpeed<=80)
  {
    LeftBaseSpeed = BaseSpeed-0;
    RightBaseSpeed = BaseSpeed-0;
    BackLeftBaseSpeed = BaseSpeed-0;
    BackRightBaseSpeed = BaseSpeed-0;
    // PID_Kp = 0.025;       //forward PID
    // PID_Kd = 0.25;
    // Kt = 10;
    // PID_KpB = 0.040;       //Backward PID
    // PID_KdB = 0.40;
    // KtB = 10;
  }
  else if(BaseSpeed<=90)
  {
    LeftBaseSpeed = BaseSpeed-0;
    RightBaseSpeed = BaseSpeed-0;
    BackLeftBaseSpeed = BaseSpeed-0;
    BackRightBaseSpeed = BaseSpeed-0;
    // PID_Kp = 0.050;       //forward PID
    // PID_Kd = 0.50;
    // Kt = 10;
    // PID_KpB = 0.050;       //Backward PID
    // PID_KdB = 0.50;
    // KtB = 10;
  }

  else
  {
    LeftBaseSpeed = BaseSpeed-0;
    RightBaseSpeed = BaseSpeed-0;
    BackLeftBaseSpeed = BaseSpeed-0;
    BackRightBaseSpeed = BaseSpeed-0;
  
  }

}
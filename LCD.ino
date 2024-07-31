void ShowCalibate(){
oled.clear();
  
  oled.text(3,0,"start caribrate Front Sensor");
 
  oled.show();}

void FinishCalibate(){
  oled.clear();
  oled.text(2,0,"          Finish   ");
  oled.text(3,0," caribrate Front Sensor");
  oled.text(3,0,"Press OK To Start");
   oled.show();
  }

void StartRound(){
  oled.clear();
  oled.text(2,0,"          Start   ");
  oled.text(3,0," Line Formula");
 
  oled.show();
  }
  
  void ShowStart(){
  oled.clear();                 //เคลียร์หน้าจอ
  oled.mode(0);                 //หมุนหน้าจอ 0 องศา
  oled.textSize(1);             //กำหนดขนาดตัวอักษร
  oled.text(0,0,"  Chea 2 Robotics"); //กำหนดข้อความที่จะแสดง
  oled.text(1,0,"  WRG 2024 Junior");
  oled.text(2,0," SW_OK : Normal");  
  oled.text(3,0," SW_OK > 2s Caribrate");
  oled.text(4,0," SW_A : AutoCaribrate");
  oled.text(5,0," SW_A > 2s : ShowCaribrate");
  oled.text(6,0," SW_B : Sumvalue");
  oled.text(7,0," SW_B > 2s : ShowAnalog");
  oled.show();  
  }

 void Show9Analog() {
    beep(0);
    while(1) {
        oled.clear();
        oled.text(0, 0, "Read A0:A8 Sensor");
        oled.text(1, 0, "A0 : %d", analog(0));        
        oled.text(2, 0, "A1 : %d", analog(1));
        oled.text(3, 0, "A2 : %d", analog(2));
        oled.text(4, 0, "A3 : %d", analog(3));
        oled.text(5, 0, "A4 : %d", analog(4));
        oled.text(6, 0, "A5 : %d", analog(5));
        oled.text(7, 0, "A6 : %d", analog(6));
        oled.text(1, 10, "A7 : %d", analog(7));
        oled.text(2, 10, "A8 : %d", analog(8));
        oled.show();
        delay(100);  // เพิ่มการหน่วงเวลา 1 วินาที
    }
}


void ShowReadCalibrate(){
beep(0);
while(1){
  ReadCalibrate();
  oled.clear();
  oled.text(0, 0, "Read Sensor Calibrate");
  oled.text(1,0,"A0 : %d", F[0]);
  oled.text(2,0,"A1 : %d", F[1]);
  oled.text(3,0,"A2 : %d", F[2]);
  oled.text(4,0,"A3 : %d", F[3]);
 
  oled.show();    
}
}

void ShowCaliberateRobotSensor(){
  beep(0);
  oled.clear();
  oled.text(0,0,"Press OK caribrate");
  oled.show();
  SW_OK_press();        // รอจนกว่าจะกดปุ่ม OK
  beep(0);
  CalibrateSensor(20, 200);
  beep(0);
  oled.clear();
  oled.text(0,0,"SensorValueMin");
  oled.text(1,0,"A0 : %d", MinValue[0]);
  oled.text(2,0,"A1 : %d", MinValue[1]);
  oled.text(3,0,"A2 : %d", MinValue[2]);
  oled.text(4,0,"A3 : %d", MinValue[3]);

  oled.show();

   SW_OK_press();        // รอจนกว่าจะกดปุ่ม OK
   beep(0);
  oled.clear();
  oled.text(0,0,"SensorValueMax");
  oled.text(1,0,"A0 : %d", MaxValue[0]);
  oled.text(2,1,"A1 : %d", MaxValue[1]);
  oled.text(3,1,"A2 : %d", MaxValue[2]);
  oled.text(4,1,"A3 : %d", MaxValue[3]);
  
  oled.show();    

}
void ShowRead_sumValue_sensor(){
beep(0);
while(1){
  ReadCalibrate();
  oled.clear();
  oled.text(0, 0, "Read_sumValue_sensor");
  oled.text(1,0,"Sum :  : %d", Read_sumValue_sensor());
  oled.show();    
}
}

char Read_sw_OK()  {
  if (SW_OK()) return(1);     //press sw OK
  //else if(digitalRead(18)==0) {digital_sw = 1; return(1);}  //press digital sw 
  else return(0);
}
void sw_ok_unpress()  {
  while(Read_sw_OK()) {delay(10);}
}
void Wait_sw_ok_press()  {
  while(Read_sw_OK()==0) {delay(10);}
}
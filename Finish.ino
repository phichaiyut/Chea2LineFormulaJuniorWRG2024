void Finish() {
  long int RunningTime;
  RunningTime = ReadTimer2(); 
  AO();
  beep(0);
  oled.textSize(1);
  oled.clear();
  oled.text(0,0,"   Finish.   ");
  oled.text(2,0,"Running Time.");
  oled.text(4,0,"%l.%l seconds", RunningTime/1000, RunningTime%1000);
  oled.show();                  //แสดงบนหน้าจอ
  while(1){};
}
void StartTimer()  {
  Timer = millis();
}
long int ReadTimer()  {
  return(millis() - Timer);
}
void StartTimer2()  {
  Timer2 = millis();
}
long int ReadTimer2()  {
  return(millis() - Timer2);
}
void StartTimer3()  {
  Timer3 = millis();
}
long int ReadTimer3()  {
  return(millis() - Timer3);
}
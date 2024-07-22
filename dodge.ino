void dodgeR(){
  Motor(70,-40);  delay(90);
  //Motor(47,70);  delay(350);
  Motor(35,50);  delay(200);
  while(1){
    ReadCalibrate();
    if (F[0] >= 600){

      break;
    }
    Motor(30,50);
}

}

void dodgeL(){
  Motor(-40,70);  delay(90);
  //Motor(70,40);  delay(350);
  Motor(50,35);  delay(200);
  while(1){
    ReadCalibrate();
    if (F[7] >= 600){

      break;
    }
    Motor(50,30);
}

}
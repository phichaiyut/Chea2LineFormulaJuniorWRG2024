
void SensorValueMin(uint16_t minF0, uint16_t minF1, uint16_t minF2, uint16_t minF3){

  MinValue[0] = minF0;
  MinValue[1] = minF1;
  MinValue[2] = minF2;
  MinValue[3] = minF3;
 

}
void SensorValueMax(uint16_t maxF0, uint16_t maxF1, uint16_t maxF2, uint16_t maxF3) {
 

  MaxValue[0] = maxF0;
  MaxValue[1] = maxF1;
  MaxValue[2] = maxF2;
  MaxValue[3] = maxF3;
 
}
void SensorValue(uint16_t minF0, uint16_t minF1, uint16_t minF2, uint16_t minF3, uint16_t maxF0, uint16_t maxF1, uint16_t maxF2, uint16_t maxF3) {
  MinValue[0] = minF0;
  MinValue[1] = minF1;
  MinValue[2] = minF2;
  MinValue[3] = minF3;

  MaxValue[0] = maxF0;
  MaxValue[1] = maxF1;
  MaxValue[2] = maxF2;
  MaxValue[3] = maxF3;

}
void TrackLineColor(int Col) {
  LineColor = Col;
}
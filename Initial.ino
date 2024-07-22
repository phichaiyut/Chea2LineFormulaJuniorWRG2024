
void SensorValueMin(uint16_t minF0, uint16_t minF1, uint16_t minF2, uint16_t minF3, uint16_t minF4, uint16_t minF5, uint16_t minF6, uint16_t minF7){

  MinValue[0] = minF0;
  MinValue[1] = minF1;
  MinValue[2] = minF2;
  MinValue[3] = minF3;
  MinValue[4] = minF4;
  MinValue[5] = minF5;
  MinValue[6] = minF6;
  MinValue[7] = minF7;

}
void SensorValueMax(uint16_t maxF0, uint16_t maxF1, uint16_t maxF2, uint16_t maxF3, uint16_t maxF4, uint16_t maxF5, uint16_t maxF6, uint16_t maxF7) {
 

  MaxValue[0] = maxF0;
  MaxValue[1] = maxF1;
  MaxValue[2] = maxF2;
  MaxValue[3] = maxF3;
  MaxValue[4] = maxF4;
  MaxValue[5] = maxF5;
  MaxValue[6] = maxF6;
  MaxValue[7] = maxF7;
}
void SensorValue(uint16_t minF0, uint16_t minF1, uint16_t minF2, uint16_t minF3, uint16_t minF4, uint16_t minF5, uint16_t minF6, uint16_t minF7, uint16_t maxF0, uint16_t maxF1, uint16_t maxF2, uint16_t maxF3, uint16_t maxF4, uint16_t maxF5, uint16_t maxF6, uint16_t maxF7) {
  MinValue[0] = minF0;
  MinValue[1] = minF1;
  MinValue[2] = minF2;
  MinValue[3] = minF3;
  MinValue[4] = minF4;
  MinValue[5] = minF5;
  MinValue[6] = minF6;
  MinValue[7] = minF7;

  MaxValue[0] = maxF0;
  MaxValue[1] = maxF1;
  MaxValue[2] = maxF2;
  MaxValue[3] = maxF3;
  MaxValue[4] = maxF4;
  MaxValue[5] = maxF5;
  MaxValue[6] = maxF6;
  MaxValue[7] = maxF7;
}
void TrackLineColor(int Col) {
  LineColor = Col;
}
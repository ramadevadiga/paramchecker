bool isBpmOK(float bpm) {  
  if(bpm < 70 || bpm > 150) {
    return false;
  } 
  return true;
}
bool isSpoOK(float spo2) {  
  if(spo2 < 80) {
    return false;
  }
  return true;
}
bool isRespRateOK(float respRate) {  
  if(respRate < 30 || respRate > 60) {
    return false;
  }
  return true;
}
bool vitalsAreOk(float bpm, float spo2, float respRate) {
  return isBpmOK(bpm) &&  isSpoOK(spo2) && isRespRateOK(respRate);
}

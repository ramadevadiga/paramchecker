#define BP_HIGH (150)
#define BP_LOW (70)
#define SP_HIGH (101)
#define SP_LOW (80)
#define RES_HIGH (60)
#define RES_LOW (30)

bool checkVitalsOk(float val, int minLimit, int maxLimit)
{
 bool bRet = true;
  if((val < minLimit || (val > maxLimit))
  {
    bRet = false;
  }
     return bRet;
}

bool vitalsAreOk(float bpm, float spo2, float respRate) {
  return (checkVitalsOk(bpm, BP_LOW, BP_HIGH) &&  checkVitalsOk(spo2, SP_LOW, SP_HIGH)
    && checkVitalsOk(respRate, RES_LOW, RES_HIGH));
}

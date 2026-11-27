// 0x1800a4370  FUN_1800a4370
// size=612 thunk=false
// signature: undefined FUN_1800a4370()
// status: ok


char * FUN_1800a4370(undefined8 param_1,longlong param_2,longlong param_3,double param_4,
                    float *param_5,float *param_6)

{
  double dVar1;
  double dVar2;
  short sVar3;
  char *pcVar4;
  char *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  *param_6 = 1e+30;
  if ((((param_2 == 0) || (param_3 == 0)) || (DAT_1805c7a28 != param_2)) ||
     ((((DAT_1805c7a30 != param_3 || (((uint)*param_5 & 0x7f800000) == 0x7f800000)) ||
       ((((uint)param_5[1] & 0x7f800000) == 0x7f800000 ||
        ((((uint)param_5[2] & 0x7f800000) == 0x7f800000 ||
         (sVar3 = _dclass(param_4), dVar1 = DAT_1805c7a38, 0 < sVar3)))))) ||
      ((sVar3 = _dclass(DAT_1805c7a38), dVar2 = DAT_180380d08, 0 < sVar3 ||
       (((dVar1 < 0.0 || (param_4 < dVar1)) || (DAT_180380d08 < param_4 - dVar1)))))))) {
    pcVar4 = (char *)0x0;
  }
  else {
    pcVar5 = &DAT_1805c5a20;
    pcVar4 = (char *)0x0;
    do {
      if (((*pcVar5 != '\0') && (((uint)((ulonglong)param_4 >> 0x34) & 0x7ff) != 0x7ff)) &&
         ((((dVar1 = *(double *)(pcVar5 + 8), ((uint)((ulonglong)dVar1 >> 0x34) & 0x7ff) != 0x7ff &&
            ((0.0 <= dVar1 && (dVar1 <= param_4)))) && (param_4 - dVar1 <= dVar2)) &&
          (((((uint)*(float *)(pcVar5 + 0x10) & 0x7f800000) != 0x7f800000 &&
            (((uint)*(float *)(pcVar5 + 0x14) & 0x7f800000) != 0x7f800000)) &&
           (((uint)*(float *)(pcVar5 + 0x18) & 0x7f800000) != 0x7f800000)))))) {
        fVar6 = *param_5 - *(float *)(pcVar5 + 0x10);
        fVar7 = param_5[1] - *(float *)(pcVar5 + 0x14);
        fVar8 = param_5[2] - *(float *)(pcVar5 + 0x18);
        fVar6 = (float)(*(code *)PTR_FUN_1803da018)(fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8);
        if ((fVar6 < *param_6) ||
           (((fVar6 == *param_6 && (pcVar4 != (char *)0x0)) &&
            (*(double *)(pcVar4 + 8) <= *(double *)(pcVar5 + 8) &&
             *(double *)(pcVar5 + 8) != *(double *)(pcVar4 + 8))))) {
          *param_6 = fVar6;
          pcVar4 = pcVar5;
        }
      }
      pcVar5 = pcVar5 + 0x40;
    } while (pcVar5 != (char *)&DAT_1805c7a20);
  }
  return pcVar4;
}



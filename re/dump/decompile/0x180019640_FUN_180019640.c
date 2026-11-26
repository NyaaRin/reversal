// 0x180019640  FUN_180019640
// size=178 thunk=false
// signature: undefined FUN_180019640()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180019640(undefined8 param_1,longlong param_2,char *param_3)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  
  if (((DAT_1803da5c4 < 0) && (param_3 != (char *)0x0)) &&
     (((byte)(*param_3 - 0x30U) < 10 || ((byte)(*param_3 - 0x2dU) < 2)))) {
    dVar3 = atof(param_3);
    fVar5 = (float)((uint)(float)dVar3 & _DAT_1803817c0) * DAT_180380964;
    fVar4 = DAT_180380964;
    if (DAT_180380964 <= fVar5) {
      fVar4 = fVar5;
    }
    if ((float)((uint)((float)((uint)param_2 ^ *(uint *)(param_2 + 0x54)) - (float)dVar3) &
               _DAT_1803817c0) <= fVar4) {
      uVar1 = *(uint *)(param_2 + 0x58);
      uVar2 = atoi(param_3);
      if (((uint)param_2 ^ uVar1) == uVar2) {
        DAT_1803da5c4 = 1;
        return;
      }
    }
    DAT_1803da5c4 = 0;
  }
  return;
}



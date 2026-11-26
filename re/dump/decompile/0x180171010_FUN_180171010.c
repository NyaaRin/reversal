// 0x180171010  FUN_180171010
// size=322 thunk=false
// signature: undefined FUN_180171010()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_180171010(longlong *param_1,uint param_2,undefined8 param_3,float *param_4)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fStack_24;
  
  if ((param_1 != (longlong *)0x0) &&
     ((iVar1 = (**(code **)(*param_1 + 8))(), iVar1 == 4 || (iVar1 == 7)))) {
    if (param_2 == 8) {
      fStack_24 = (float)((ulonglong)param_3 >> 0x20);
      fVar6 = (float)((uint)((float)param_3 - *param_4) & _DAT_1803817c0);
      fVar5 = (float)((uint)(fStack_24 - param_4[3]) & _DAT_1803817c0);
      fVar4 = (float)((uint)(fStack_24 - param_4[1]) & _DAT_1803817c0);
      fVar3 = fVar4;
      if (fVar5 < fVar4) {
        fVar3 = fVar5;
      }
      uVar2 = (uint)(fVar5 < fVar4);
      if (fVar6 < fVar3) {
        uVar2 = 2;
        fVar3 = fVar6;
      }
      if ((float)((uint)((float)param_3 - param_4[2]) & _DAT_1803817c0) < fVar3) {
        uVar2 = 3;
      }
      return uVar2;
    }
    if ((param_2 & 0xfffffffa) == 0) {
      if (param_2 != 1) {
        return 0;
      }
    }
    else if ((param_2 != 1) && (1 < param_2 - 6)) {
      if ((param_2 == 2) || (param_2 - 9 < 2)) {
        return 2;
      }
      if ((param_2 - 3 & 0xfffffff6) != 0) {
        return param_2;
      }
      if (param_2 == 4) {
        return 4;
      }
      return 3;
    }
    param_2 = 1;
  }
  return param_2;
}



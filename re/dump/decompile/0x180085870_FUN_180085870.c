// 0x180085870  FUN_180085870
// size=334 thunk=false
// signature: undefined FUN_180085870()
// status: ok


float FUN_180085870(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = *(float *)(param_1 + 8);
  if (*(char *)(param_1 + 0x48) != '\0') {
    if (*(char *)(param_1 + 0x54) != '\0') {
      if ((DAT_1803fd0c8 == 0) && (DAT_1803fa340 != 0)) {
        DAT_1803fd0c8 = FUN_180016fb0("weapon_accuracy_nospread");
      }
      lVar1 = DAT_1803fd0c8;
      if ((DAT_1804261b0 == 0) && (DAT_1803fa340 != 0)) {
        DAT_1804261b0 = FUN_180016fb0("weapon_accuracy_forcespread");
      }
      lVar2 = DAT_1804261b0;
      if (((lVar1 == 0) || (iVar3 = FUN_1800197a0(lVar1), iVar3 == 0)) &&
         ((lVar2 == 0 || (fVar4 = (float)FUN_180019700(lVar2), fVar4 <= 0.0)))) {
        fVar4 = (float)FUN_1800855f0(param_1,param_1 + 0x54);
        fVar5 = (float)FUN_1800855f0(param_1,param_1 + 0x48);
        fVar4 = (fVar4 - fVar5) + fVar6;
        if (0.0 <= fVar4) {
          fVar6 = DAT_180380bb0;
          if (fVar4 <= DAT_180380bb0) {
            fVar6 = fVar4;
          }
        }
        else {
          fVar6 = 0.0;
        }
      }
    }
    return fVar6;
  }
  return fVar6;
}



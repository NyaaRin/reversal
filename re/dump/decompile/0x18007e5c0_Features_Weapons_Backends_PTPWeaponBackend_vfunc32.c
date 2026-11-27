// 0x18007e5c0  Features_Weapons_Backends_PTPWeaponBackend_vfunc32
// size=363 thunk=false
// signature: undefined Features_Weapons_Backends_PTPWeaponBackend_vfunc32()
// status: ok


float * Features_Weapons_Backends_PTPWeaponBackend_vfunc32
                  (longlong param_1,float *param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float local_res18 [4];
  
  if (param_3 == 0) {
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    return param_2;
  }
  if ((param_3 == *(longlong *)(param_1 + 8)) && (*(char *)(param_1 + 0x10) != '\0')) {
    local_res18[0] = 0.0;
    fVar6 = 0.0;
    lVar2 = param_1;
    cVar1 = FUN_18007dd10(param_1,param_4,local_res18);
    fVar7 = local_res18[0];
    if (cVar1 == '\0') {
      fVar7 = *(float *)(lVar2 + 0x18);
    }
    if (fVar6 < fVar7) {
      if (((param_4 != 0) && ((*(byte *)(param_4 + 0x20) & 1) != 0)) &&
         (iVar3 = DAT_1804007c0 + 1, bVar5 = DAT_1804007c0 == (DAT_1804007c0 / 0x78) * 0x78,
         DAT_1804007c0 = iVar3, bVar5)) {
        if (*(char *)(param_1 + 0x11) == '\0') {
          pcVar4 = "base";
          if (*(char *)(param_1 + 0x12) != '\0') {
            pcVar4 = "scoped";
          }
        }
        else {
          pcVar4 = "shotgun";
        }
        FUN_180014410("[PTP] cone=%.5f derived=%d live=%.5f iron=%d dead=%d ground=%d dialect=%s\n",
                      (double)fVar7,cVar1,(double)*(float *)(param_1 + 0x18),
                      *(char *)(param_1 + 0x13) != '\0',*(char *)(param_1 + 0x14) != '\0',
                      *(char *)(param_1 + 0x3c) != '\0',pcVar4);
      }
      *param_2 = fVar7;
      param_2[1] = fVar7;
      param_2[2] = 0.0;
      return param_2;
    }
  }
  vfunc_shared_180077890();
  return param_2;
}



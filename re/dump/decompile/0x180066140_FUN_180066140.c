// 0x180066140  FUN_180066140
// size=114 thunk=false
// signature: undefined FUN_180066140()
// status: ok


bool FUN_180066140(uint *param_1)

{
  uint *puVar1;
  longlong lVar2;
  uint *puVar3;
  
  puVar3 = param_1;
  if (7 < *(ulonglong *)(param_1 + 6)) {
    puVar3 = *(uint **)param_1;
  }
  lVar2 = *(longlong *)(param_1 + 4) * 2 >> 1;
  if ((1 < lVar2) && ((*puVar3 & 0xffffffdf) - 0x3a0041 < 0x1a)) {
    if (2 < lVar2) {
      if (((short)puVar3[1] == 0x5c) || ((short)puVar3[1] == 0x2f)) {
        return true;
      }
    }
    return false;
  }
  puVar1 = (uint *)FUN_180065240(puVar3,*(longlong *)(param_1 + 4) * 2 + (longlong)puVar3);
  return puVar3 != puVar1;
}



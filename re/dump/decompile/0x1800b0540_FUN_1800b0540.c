// 0x1800b0540  FUN_1800b0540
// size=539 thunk=false
// signature: undefined FUN_1800b0540()
// status: ok


undefined4 FUN_1800b0540(char *param_1,char *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pcVar3 = *(char **)param_1;
  }
  iVar2 = _stricmp(pcVar3,"SniperPenetratedRound");
  *param_2 = iVar2 == 0;
  pcVar3 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pcVar3 = *(char **)param_1;
  }
  iVar2 = _stricmp(pcVar3,"pistol");
  if (iVar2 != 0) {
    pcVar3 = param_1;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      pcVar3 = *(char **)param_1;
    }
    iVar2 = _stricmp(pcVar3,"buckshot");
    if (iVar2 != 0) {
      pcVar3 = param_1;
      if (0xf < *(ulonglong *)(param_1 + 0x18)) {
        pcVar3 = *(char **)param_1;
      }
      iVar2 = _stricmp(pcVar3,"slam");
      if (iVar2 != 0) {
        uVar1 = 0;
        goto LAB_1800b05d6;
      }
    }
  }
  uVar1 = 1;
LAB_1800b05d6:
  *param_3 = uVar1;
  if (*param_2 != '\0') {
    return DAT_180381024;
  }
  pcVar3 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pcVar3 = *(char **)param_1;
  }
  iVar2 = _stricmp(pcVar3,"pistol");
  if (iVar2 != 0) {
    pcVar3 = param_1;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      pcVar3 = *(char **)param_1;
    }
    iVar2 = _stricmp(pcVar3,"357");
    if (iVar2 != 0) {
      pcVar3 = param_1;
      if (0xf < *(ulonglong *)(param_1 + 0x18)) {
        pcVar3 = *(char **)param_1;
      }
      iVar2 = _stricmp(pcVar3,"smg1");
      if (iVar2 == 0) {
        return DAT_180380fe0;
      }
      pcVar3 = param_1;
      if (0xf < *(ulonglong *)(param_1 + 0x18)) {
        pcVar3 = *(char **)param_1;
      }
      iVar2 = _stricmp(pcVar3,"ar2");
      if (iVar2 == 0) {
        return DAT_180380fe8;
      }
      pcVar3 = param_1;
      if (0xf < *(ulonglong *)(param_1 + 0x18)) {
        pcVar3 = *(char **)param_1;
      }
      iVar2 = _stricmp(pcVar3,"buckshot");
      if (iVar2 != 0) {
        pcVar3 = param_1;
        if (0xf < *(ulonglong *)(param_1 + 0x18)) {
          pcVar3 = *(char **)param_1;
        }
        iVar2 = _stricmp(pcVar3,"slam");
        if (iVar2 != 0) {
          if (0xf < *(ulonglong *)(param_1 + 0x18)) {
            param_1 = *(char **)param_1;
          }
          iVar2 = _stricmp(param_1,"AirboatGun");
          if (iVar2 != 0) {
            return DAT_180380fe0;
          }
          return DAT_180380ffc;
        }
      }
      return DAT_180380f00;
    }
    return DAT_180380fd8;
  }
  return DAT_180380fc4;
}



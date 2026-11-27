// 0x1800d2cb0  FUN_1800d2cb0
// size=285 thunk=false
// signature: undefined FUN_1800d2cb0()
// status: ok


undefined8 FUN_1800d2cb0(void)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  int *piVar4;
  
  uVar2 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
  uVar2 = FUN_180241610(uVar2,0x9653fa4f0c4e1755);
  pcVar3 = (char *)FUN_1801fcfc0(uVar2);
  if (*pcVar3 != '\0') {
    uVar2 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
    uVar2 = FUN_180241610(uVar2,0xf49ef2058e631d85);
    pcVar3 = (char *)FUN_1801fcfc0(uVar2);
    if (*pcVar3 != '\0') {
      uVar2 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
      uVar2 = FUN_180241610(uVar2,0x402819404e703058);
      pcVar3 = (char *)FUN_1801fcfc0(uVar2);
      if (*pcVar3 != '\0') {
        return 1;
      }
    }
  }
  uVar2 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
  uVar2 = FUN_180241610(uVar2,0x9fc064cf8b020230);
  piVar4 = (int *)FUN_1802029c0(uVar2);
  iVar1 = *piVar4;
  uVar2 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
  uVar2 = FUN_180241610(uVar2,0x148d378145076092);
  pcVar3 = (char *)FUN_1801fcfc0(uVar2);
  if ((*pcVar3 == '\0') || (iVar1 != 1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



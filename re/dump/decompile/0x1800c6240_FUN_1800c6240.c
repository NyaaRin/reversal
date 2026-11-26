// 0x1800c6240  FUN_1800c6240
// size=131 thunk=false
// signature: undefined FUN_1800c6240()
// status: ok


undefined1 FUN_1800c6240(void)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined1 uVar3;
  char cVar4;
  
  uVar1 = FUN_180241610(&DAT_1803fadf0,0x13806d9e35de0023);
  uVar1 = FUN_180241610(uVar1,0x72114d0ef27e6e77);
  pcVar2 = (char *)FUN_1801fcfc0(uVar1);
  if (*pcVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar1 = FUN_180241610(&DAT_1803fadf0,0x13806d9e35de0023);
    uVar1 = FUN_180241610(uVar1,0x402819404e703058);
    pcVar2 = (char *)FUN_1801fcfc0(uVar1);
    if ((*pcVar2 == '\0') && (cVar4 = FUN_1800b8200(), cVar4 == '\0')) {
      return 0;
    }
    uVar3 = 1;
  }
  return uVar3;
}



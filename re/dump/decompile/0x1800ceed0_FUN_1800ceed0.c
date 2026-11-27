// 0x1800ceed0  FUN_1800ceed0
// size=75 thunk=false
// signature: undefined FUN_1800ceed0()
// status: ok


undefined1 FUN_1800ceed0(void)

{
  undefined8 uVar1;
  char *pcVar2;
  char cVar3;
  
  uVar1 = FUN_180241610(&DAT_1803fadf0,0x13806d9e35de0023);
  uVar1 = FUN_180241610(uVar1,0x402819404e703058);
  pcVar2 = (char *)FUN_1801fcfc0(uVar1);
  if ((*pcVar2 == '\0') && (cVar3 = FUN_1800b8200(), cVar3 == '\0')) {
    return 0;
  }
  return 1;
}



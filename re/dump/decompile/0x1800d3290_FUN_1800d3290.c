// 0x1800d3290  FUN_1800d3290
// size=116 thunk=false
// signature: undefined FUN_1800d3290()
// status: ok


undefined1 FUN_1800d3290(longlong param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  
  uVar1 = FUN_180241610(&DAT_1803fadf0,0x13806d9e35de0023);
  uVar1 = FUN_180241610(uVar1,0x402819404e703058);
  pcVar2 = (char *)FUN_1801fcfc0(uVar1);
  if (*pcVar2 == '\0') {
    cVar4 = FUN_1800b8200();
    bVar3 = false;
    if (cVar4 == '\0') goto LAB_1800d32d9;
  }
  bVar3 = true;
LAB_1800d32d9:
  if (bVar3) {
    if (*(char *)(param_1 + 0x1850) == '\0') {
      return 0;
    }
    uVar5 = FUN_1800c60c0(param_1);
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



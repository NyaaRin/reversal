// 0x18002dda0  FUN_18002dda0
// size=354 thunk=false
// signature: undefined FUN_18002dda0()
// status: ok


longlong FUN_18002dda0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  
  if ((((param_1 == (longlong *)0x0) || (lVar3 = param_1[1], lVar3 == 0)) ||
      (DAT_1803faff8 == (code *)0x0)) || (DAT_1803faf18 == (code *)0x0)) {
    pcVar4 = "[TRAMP] %s: raw API unavailable\n";
  }
  else {
    FUN_18002db10(lVar3,0xffffffff);
    iVar1 = (*DAT_1803faff8)(lVar3,0xffffffff);
    if (iVar1 == 6) {
      lVar3 = (*DAT_1803faf18)(lVar3,0xffffffff);
      if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (param_1[1] == 0)) {
        (**(code **)(*param_1 + 0x10))(param_1,1);
      }
      else {
        iVar2 = (*DAT_1803fb088)();
        iVar1 = 0;
        if (-1 < iVar2 + -1) {
          iVar1 = iVar2 + -1;
        }
        (*DAT_1803faf10)(param_1[1],iVar1);
      }
      if (lVar3 == 0) {
        FUN_180014410("[TRAMP] %s: is Lua, not C (cannot grab)\n",param_3);
      }
      return lVar3;
    }
    if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (param_1[1] == 0)) {
      (**(code **)(*param_1 + 0x10))(param_1,1);
      pcVar4 = "[TRAMP] %s: not a function\n";
    }
    else {
      iVar2 = (*DAT_1803fb088)();
      iVar1 = 0;
      if (-1 < iVar2 + -1) {
        iVar1 = iVar2 + -1;
      }
      (*DAT_1803faf10)(param_1[1],iVar1);
      pcVar4 = "[TRAMP] %s: not a function\n";
    }
  }
  FUN_180014410(pcVar4,param_3);
  return 0;
}



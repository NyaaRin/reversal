// 0x180016fb0  FUN_180016fb0
// size=125 thunk=false
// signature: undefined FUN_180016fb0()
// status: ok


longlong FUN_180016fb0(char *param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((DAT_1803fa340 == (longlong *)0x0) || (param_1 == (char *)0x0)) {
    return 0;
  }
  if (*(code **)(*DAT_1803fa340 + 0x88) == (code *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(*DAT_1803fa340 + 0x88))(DAT_1803fa340,param_1);
  }
  if (((lVar2 != 0) && (*(char **)(lVar2 + 0x18) != (char *)0x0)) &&
     (iVar1 = strcmp(*(char **)(lVar2 + 0x18),param_1), iVar1 == 0)) {
    return lVar2;
  }
  return 0;
}



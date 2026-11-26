// 0x180146830  FUN_180146830
// size=92 thunk=false
// signature: undefined FUN_180146830()
// status: ok


longlong FUN_180146830(char *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((DAT_1803f9250 == (longlong *)0x0) || (param_1 == (char *)0x0)) || (*param_1 == '\0')) {
    lVar3 = 0;
  }
  else {
    lVar1 = (**(code **)(*DAT_1803f9250 + 0x138))(DAT_1803f9250,param_1);
    lVar3 = lVar1;
    if (lVar1 != 0) {
      lVar2 = (**(code **)(*DAT_1803f9250 + 0xe0))(DAT_1803f9250,lVar1);
      lVar3 = 0;
      if (lVar2 != 0) {
        lVar3 = lVar1;
      }
    }
  }
  return lVar3;
}



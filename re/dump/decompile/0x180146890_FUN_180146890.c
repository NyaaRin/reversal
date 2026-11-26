// 0x180146890  FUN_180146890
// size=144 thunk=false
// signature: undefined FUN_180146890()
// status: ok


undefined8 FUN_180146890(char *param_1,longlong *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_2 = 0;
  *param_3 = -1;
  if (((DAT_1803f9250 != (longlong *)0x0) && (param_1 != (char *)0x0)) && (*param_1 != '\0')) {
    lVar2 = FUN_180146830();
    *param_2 = lVar2;
    if (lVar2 != 0) {
      iVar1 = (**(code **)(*DAT_1803f9250 + 0x10))(DAT_1803f9250,param_1);
      if (-1 < iVar1) {
        lVar2 = *param_2;
        lVar3 = (**(code **)(*DAT_1803f9250 + 8))(DAT_1803f9250,iVar1);
        if (lVar3 == lVar2) {
          *param_3 = iVar1;
        }
      }
      return 1;
    }
  }
  return 0;
}



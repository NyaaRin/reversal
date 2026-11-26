// 0x18015e6e0  FUN_18015e6e0
// size=261 thunk=false
// signature: undefined FUN_18015e6e0()
// status: ok


bool FUN_18015e6e0(char *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (((DAT_1803f9248 != (longlong *)0x0) && (param_1 != (char *)0x0)) && (*param_1 != '\0')) {
    lVar2 = (**(code **)(*DAT_1803f9248 + 0x10))
                      (DAT_1803f9248,param_1,&DAT_1803589f0,&DAT_1803589e8);
    if (lVar2 != 0) {
      if (*param_2 != param_2[1]) {
        param_2[1] = *param_2;
      }
      (**(code **)(*DAT_1803f9248 + 0x20))(DAT_1803f9248,lVar2,0,0);
      uVar3 = 0;
      do {
        FUN_180218360(param_2,uVar3 + 0x40000);
        iVar1 = (**(code **)*DAT_1803f9248)(DAT_1803f9248,*param_2 + uVar3,0x40000,lVar2);
        if (0 < iVar1) {
          uVar3 = uVar3 + (longlong)iVar1;
        }
        if (iVar1 < 0x40000) goto LAB_18015e7a7;
      } while (uVar3 < 0x10000001);
      uVar3 = 0;
LAB_18015e7a7:
      (**(code **)(*DAT_1803f9248 + 0x18))(DAT_1803f9248,lVar2);
      FUN_180218360(param_2,uVar3);
      return uVar3 != 0;
    }
  }
  return false;
}



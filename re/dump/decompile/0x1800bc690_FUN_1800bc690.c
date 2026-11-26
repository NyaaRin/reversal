// 0x1800bc690  FUN_1800bc690
// size=252 thunk=false
// signature: undefined FUN_1800bc690()
// status: ok


undefined8 FUN_1800bc690(undefined8 *param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  BOOL BVar3;
  longlong *plVar4;
  
  if ((char)param_2[0xc] != '\0') {
    return 1;
  }
  if ((*(float *)*param_1 < (float)param_2[2]) ||
     ((param_2[6] < 2 && (*(float *)*param_1 < (float)param_2[7])))) {
    return 0;
  }
  if (*param_2 < 1) {
    return 1;
  }
  if (*param_2 < 0x81) {
    plVar4 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,*param_2);
    if ((((plVar4 == (longlong *)0x0) || (BVar3 = IsBadReadPtr(plVar4,8), BVar3 != 0)) ||
        (BVar3 = IsBadReadPtr((void *)*plVar4,8), BVar3 != 0)) ||
       ((plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(), plVar4 == (longlong *)0x0 ||
        (cVar2 = (**(code **)(*plVar4 + 0x40))(), cVar2 != '\0')))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((1 < param_2[6]) && ((*(char *)param_1[1] != '\0' || (bVar1)))) {
      FUN_1800bbcc0(*param_2,param_2[8],param_2);
    }
    return 1;
  }
  return 1;
}



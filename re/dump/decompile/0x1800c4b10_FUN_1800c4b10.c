// 0x1800c4b10  FUN_1800c4b10
// size=381 thunk=false
// signature: undefined FUN_1800c4b10()
// status: ok


void FUN_1800c4b10(longlong *param_1)

{
  char cVar1;
  int iVar2;
  BOOL BVar3;
  longlong *plVar4;
  undefined8 *lp;
  undefined8 local_res10;
  longlong local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [32];
  
  param_1[1] = 0;
  if ((((longlong *)*param_1 != (longlong *)0x0) && (DAT_1803fa360 != (longlong *)0x0)) &&
     (plVar4 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x20))(), plVar4 != (longlong *)0x0)
     ) {
    iVar2 = (**(code **)(*plVar4 + 0x48))(plVar4);
    if ((((DAT_180423a28 != '\0') && (0.0 <= DAT_1803e9240)) &&
        ((DAT_1803fa608 != (float *)0x0 &&
         ((0.0 <= (double)*DAT_1803fa608 - DAT_1803e9240 &&
          ((double)*DAT_1803fa608 - DAT_1803e9240 <= DAT_180380cb0)))))) &&
       ((iVar2 - 1U < 0x80 &&
        ((((0 < *(int *)(&DAT_180423760 + (longlong)iVar2 * 4) &&
           (lp = (undefined8 *)(**(code **)(*DAT_1803fa360 + 0x18))(), lp != (undefined8 *)0x0)) &&
          (BVar3 = IsBadReadPtr(lp,8), BVar3 == 0)) &&
         (BVar3 = IsBadReadPtr((void *)*lp,8), BVar3 == 0)))))) {
      local_res10 = 0;
      cVar1 = FUN_1800c4a70(lp,&local_48,&local_38,&local_res10,local_28);
      if (cVar1 != '\0') {
        param_1[1] = (longlong)lp;
        param_1[2] = local_48;
        *(undefined4 *)(param_1 + 3) = local_40;
        *(undefined8 *)((longlong)param_1 + 0x1c) = local_38;
        *(undefined4 *)((longlong)param_1 + 0x24) = local_30;
      }
    }
  }
  return;
}



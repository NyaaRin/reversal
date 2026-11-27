// 0x1801924f0  FUN_1801924f0
// size=516 thunk=false
// signature: undefined FUN_1801924f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1801924f0(undefined8 *param_1,char *param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined8 uVar5;
  undefined8 *lp;
  undefined8 *puVar6;
  bool bVar7;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  if ((((param_1 == (undefined8 *)0x0) || (BVar1 = IsBadReadPtr(param_1,8), BVar1 != 0)) ||
      (BVar1 = IsBadReadPtr((void *)*param_1,8), BVar1 != 0)) ||
     ((param_2 == (char *)0x0 || (DAT_1803fa360 == (longlong *)0x0)))) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    local_30 = &local_b0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    FUN_18001d080(&local_b0,"DT_BasePlayer",0xd);
    local_30 = &local_b0;
    local_b8 = (undefined8 *)local_70;
    uVar3 = FUN_18016d4c0(local_70,&local_b0);
    uVar3 = FUN_180018ef0(&DAT_1803fac80,uVar3);
    FUN_18020e450(&local_b0);
    local_b8 = &local_90;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    local_78 = 0;
    sVar4 = strlen(param_2);
    FUN_18001d080(&local_90,param_2,sVar4);
    local_30 = &local_90;
    local_b8 = (undefined8 *)local_50;
    uVar5 = FUN_18016d4c0(local_50,&local_90);
    iVar2 = FUN_180018c10(uVar3,uVar5);
    FUN_18020e450(&local_90);
    if (iVar2 == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    else if (*(int *)((longlong)iVar2 + (longlong)param_1) - 1U < 0xfffffffe) {
      local_30 = (undefined8 *)
                 CONCAT44(local_30._4_4_,*(int *)((longlong)iVar2 + (longlong)param_1));
      lp = (undefined8 *)(**(code **)(*DAT_1803fa360 + 0x20))(DAT_1803fa360,&local_30);
      bVar7 = false;
      if ((lp != (undefined8 *)0x0) && (BVar1 = IsBadReadPtr(lp,8), BVar1 == 0)) {
        BVar1 = IsBadReadPtr((void *)*lp,8);
        bVar7 = BVar1 == 0;
      }
      puVar6 = (undefined8 *)0x0;
      if (bVar7) {
        puVar6 = lp;
      }
    }
    else {
      puVar6 = (undefined8 *)0x0;
    }
  }
  return puVar6;
}



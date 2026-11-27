// 0x180159980  FUN_180159980
// size=623 thunk=false
// signature: undefined FUN_180159980()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180159980(undefined8 *param_1,int param_2)

{
  char cVar1;
  BOOL BVar2;
  longlong *lp;
  longlong *plVar3;
  longlong lVar4;
  char *_Str;
  size_t sVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 *local_60;
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  local_68 = 0;
  local_60 = param_1;
  if ((param_2 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    FUN_18001d080(param_1,&DAT_18033e5ea,0);
  }
  else {
    lp = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))();
    if ((((lp != (longlong *)0x0) && (BVar2 = IsBadReadPtr(lp,8), BVar2 == 0)) &&
        (BVar2 = IsBadReadPtr((void *)*lp,8), BVar2 == 0)) &&
       ((plVar3 = (longlong *)(**(code **)(*lp + 0x20))(lp), plVar3 != (longlong *)0x0 &&
        (cVar1 = (**(code **)(*plVar3 + 0x40))(plVar3), cVar1 == '\0')))) {
      lVar4 = FUN_18001dbf0(lp);
      if (lVar4 == 0) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        FUN_18001d080(param_1,&DAT_18033e5ea,0);
        return param_1;
      }
      _Str = (char *)FUN_18001e4e0(lVar4);
      if (((char *)0x10000 < _Str) && (*_Str != '\0')) {
        local_38 = 0;
        uStack_30 = 0;
        local_28 = 0;
        uStack_20 = 0;
        sVar5 = strlen(_Str);
        FUN_18001d080(&local_38,_Str,sVar5);
        lVar4 = FUN_1800e0870(&local_38,"weapon_");
        if (lVar4 == 0) {
          uVar6 = FUN_18020e670(&local_38,local_58,7,0xffffffffffffffff);
          FUN_18020e8a0(&local_38,uVar6);
          FUN_18020e450(local_58);
        }
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        *(undefined4 *)param_1 = (undefined4)local_38;
        *(undefined4 *)((longlong)param_1 + 4) = local_38._4_4_;
        *(undefined4 *)(param_1 + 1) = (undefined4)uStack_30;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_30._4_4_;
        *(undefined4 *)(param_1 + 2) = (undefined4)local_28;
        *(undefined4 *)((longlong)param_1 + 0x14) = local_28._4_4_;
        *(undefined4 *)(param_1 + 3) = (undefined4)uStack_20;
        *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_20._4_4_;
        local_28 = 0;
        uStack_20 = 0xf;
        local_38 = local_38 & 0xffffffffffffff00;
        local_68 = 1;
        FUN_18020e450(&local_38);
        return param_1;
      }
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      FUN_18001d080(param_1,&DAT_18033e5ea,0);
      return param_1;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    FUN_18001d080(param_1,&DAT_18033e5ea,0);
  }
  return param_1;
}



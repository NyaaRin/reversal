// 0x1801338c0  FUN_1801338c0
// size=322 thunk=false
// signature: undefined FUN_1801338c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1801338c0(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  longlong local_70;
  undefined1 local_60 [16];
  longlong local_50;
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_a0 = param_1;
  FUN_1801336f0(&local_98);
  plVar2 = (longlong *)FUN_180132830(local_40);
  lVar3 = *plVar2;
  lVar1 = plVar2[1];
  do {
    if (lVar3 == lVar1) {
      FUN_18020d5c0(local_40);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0xf;
      *(undefined1 *)param_1 = 0;
      local_a8 = 1;
LAB_1801339a0:
      FUN_18020d5c0(&local_98);
      return param_1;
    }
    FUN_180132b90(local_60,lVar3);
    if (local_50 != 0) {
      FUN_180132d90(local_80,local_60,&local_98);
      if (local_70 != 0) {
        FUN_18016d4c0(param_1,local_80);
        local_a8 = 1;
        FUN_18020e450(local_80);
        FUN_18020e450(local_60);
        FUN_18020d5c0(local_40);
        goto LAB_1801339a0;
      }
      FUN_18020e450(local_80);
    }
    FUN_18020e450(local_60);
    lVar3 = lVar3 + 0x20;
  } while( true );
}



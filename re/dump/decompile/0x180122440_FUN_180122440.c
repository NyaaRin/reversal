// 0x180122440  FUN_180122440
// size=345 thunk=false
// signature: undefined FUN_180122440()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180122440(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  lVar2 = FUN_180122350();
  if (lVar2 == 0) {
    uStack_80 = 0;
    local_78 = _DAT_1803814b0;
    uStack_70 = _UNK_1803814b8;
    local_88 = 0;
    local_68 = 0x1000101;
    local_64 = 0;
    local_62 = 1;
    local_60 = 0;
    local_5c = 0x3f19999a;
    local_58 = 0x3f59999a;
    local_54 = 0x3f800000;
    local_50 = 0x3f800000;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0x3eb33333;
    local_40 = 0x3f59999a;
    local_3c = 0x3f800000;
    local_38 = ram0x0001803815c0;
    uStack_30 = _UNK_1803815c8;
    local_28 = 0x3f800000;
    local_24 = 0;
    local_20 = 2;
    uVar3 = ram0x0001803815c0;
    if (&local_88 != param_1) {
      puVar1 = param_1 + 2;
      if (0xf < (ulonglong)param_1[3]) {
        param_1 = (undefined8 *)*param_1;
      }
      uVar3 = FUN_180212700(&local_88,param_1,*puVar1);
    }
    if (DAT_1803eb380 == DAT_1803eb388) {
      FUN_180225990(uVar3,DAT_1803eb380,&local_88);
    }
    else {
      FUN_180232650();
      DAT_1803eb380 = DAT_1803eb380 + 0x70;
    }
    DAT_1803e8978 = (int)(DAT_1803eb380 - DAT_1803eb378 >> 4) * -0x49249249 + -1;
    FUN_18020e450(&local_88);
  }
  return;
}



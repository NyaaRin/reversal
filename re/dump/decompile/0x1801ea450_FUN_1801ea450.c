// 0x1801ea450  FUN_1801ea450
// size=270 thunk=false
// signature: undefined FUN_1801ea450()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1801ea450(void)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  undefined **ppuStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined1 local_50 [32];
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  local_60 = &DAT_180427640;
  local_80 = 0;
  ppuStack_78 = &PTR_vftable_std__System_error_category_1803e9500;
  FUN_1801a8740(local_30);
  FUN_180067d80(local_30,&local_80);
  local_58 = &local_80;
  local_80 = 0;
  ppuStack_78 = (undefined **)0x0;
  local_70 = 0;
  local_68 = 0;
  FUN_180211510(&local_80,L"imgui.ini",9);
  local_88 = 0;
  uVar1 = FUN_180066720(local_50,local_30,&local_80);
  FUN_180065810(uVar1,&DAT_180427640);
  local_88 = 1;
  FUN_18021e290(local_50);
  FUN_18021e290(&local_80);
  FUN_18021e290(local_30);
  return &DAT_180427640;
}



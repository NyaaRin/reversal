// 0x180198080  FUN_180198080
// size=261 thunk=false
// signature: undefined FUN_180198080()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180198080(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined **ppuStack_a0;
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  FUN_180197fc0(local_38);
  if (local_28 == 0) {
    FUN_18020e450(local_38);
  }
  else {
    uVar1 = FUN_180203b30(local_58,local_38);
    uVar2 = FUN_1801968e0(local_78);
    uVar1 = FUN_180066720(local_98,uVar2,uVar1);
    local_a8 = 0;
    ppuStack_a0 = &PTR_vftable_std__System_error_category_1803e9500;
    FUN_180067d80(uVar1,&local_a8);
    if ((int)local_a8 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1800670f0("create_directories",&local_a8,uVar1);
    }
    FUN_18021e290(local_98);
    FUN_18021e290(local_78);
    FUN_18021e290(local_58);
    FUN_18020e450(local_38);
  }
  return;
}



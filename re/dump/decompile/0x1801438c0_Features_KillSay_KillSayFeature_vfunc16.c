// 0x1801438c0  Features_KillSay_KillSayFeature_vfunc16
// size=162 thunk=false
// signature: undefined Features_KillSay_KillSayFeature_vfunc16()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_KillSay_KillSayFeature_vfunc16(void)

{
  code *pcVar1;
  int iVar2;
  
  DAT_180409848 = 0;
  DAT_18040984c = 0;
  DAT_180409841 = 0;
  DAT_180409851 = 0;
  DAT_180409850 = 0;
  DAT_180409840 = 0;
  iVar2 = _Mtx_lock(&DAT_1803e7c90);
  if (iVar2 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803e7cdc == 0x7fffffff) {
    DAT_1803e7cdc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  FUN_18021d430(&DAT_18056dea0);
  _DAT_1803e7ce4 = 0xc2c80000;
  DAT_1803e7ce0 = 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x00018014395b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Mtx_unlock(&DAT_1803e7c90);
  return;
}



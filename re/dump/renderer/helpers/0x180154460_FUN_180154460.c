// 180154460  FUN_180154460
// signature: undefined FUN_180154460()
// status: ok


void FUN_180154460(void)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = DAT_180400af0;
  LOCK();
  DAT_180400af0 = 0;
  UNLOCK();
  if (iVar2 == 0) {
    return;
  }
  iVar2 = _Mtx_lock(&DAT_1803e79f0);
  if (iVar2 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803e7a3c == 0x7fffffff) {
    DAT_1803e7a3c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  FUN_180153bc0();
                    /* WARNING: Could not recover jumptable at 0x0001801544c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Mtx_unlock(&DAT_1803e79f0);
  return;
}



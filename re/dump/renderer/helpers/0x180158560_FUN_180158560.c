// 180158560  FUN_180158560
// signature: undefined FUN_180158560()
// status: ok


void FUN_180158560(void)

{
  code *pcVar1;
  int iVar2;
  
  if (DAT_180409d40 != '\0') {
    return;
  }
  iVar2 = _Mtx_lock(&DAT_1803e8780);
  if (iVar2 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803e87cc == 0x7fffffff) {
    DAT_1803e87cc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  if (DAT_180409d40 == '\0') {
    FUN_1801582f0();
    DAT_180409d40 = '\x01';
  }
                    /* WARNING: Could not recover jumptable at 0x0001801585d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Mtx_unlock(&DAT_1803e8780);
  return;
}



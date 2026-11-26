// 0x1801ea8f0  FUN_1801ea8f0
// size=552 thunk=false
// signature: undefined FUN_1801ea8f0()
// status: ok


void FUN_1801ea8f0(void)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = _Mtx_lock(&DAT_1803da6b0);
  if (iVar3 == 0) {
    if (DAT_1803da6fc == 0x7fffffff) {
      DAT_1803da6fc = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    if ((DAT_1803fa452 != '\0') || (DAT_1803fa588 != 0)) {
      DAT_1803fa452 = '\0';
      if ((DAT_1803fa4f0 != 0) && (DAT_1803fa618 != (HWND)0x0)) {
        SetWindowLongPtrW(DAT_1803fa618,-4,DAT_1803fa4f0);
        DAT_1803fa4f0 = 0;
        FUN_180014410("[UNLOAD] WndProc restored\n");
      }
      uVar4 = _set_se_translator(FUN_180014ce0);
      FUN_1801eab30();
      FUN_1801eab30();
      FUN_1801eab30();
      lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar1 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      *(undefined8 *)(lVar1 + 0xec0) = 0;
      DAT_1803fa570 = 0;
      if (DAT_1803fa4c8 != (longlong *)0x0) {
        (**(code **)(*DAT_1803fa4c8 + 0x10))();
        DAT_1803fa4c8 = (longlong *)0x0;
      }
      if (DAT_1803fa500 != (longlong *)0x0) {
        (**(code **)(*DAT_1803fa500 + 0x10))();
        DAT_1803fa500 = (longlong *)0x0;
      }
      if (DAT_1803fa578 != (longlong *)0x0) {
        (**(code **)(*DAT_1803fa578 + 0x10))();
        DAT_1803fa578 = (longlong *)0x0;
      }
      if (DAT_1803fa510 != (longlong *)0x0) {
        (**(code **)(*DAT_1803fa510 + 0x10))();
        DAT_1803fa510 = (longlong *)0x0;
      }
      if (DAT_1803fa4c0 != (longlong *)0x0) {
        (**(code **)(*DAT_1803fa4c0 + 0x10))();
        DAT_1803fa4c0 = (longlong *)0x0;
      }
      if (DAT_1803fa580 != (longlong *)0x0) {
        (**(code **)(*DAT_1803fa580 + 0x10))();
        DAT_1803fa580 = (longlong *)0x0;
      }
      if (DAT_1803fa4b0 != (longlong *)0x0) {
        (**(code **)(*DAT_1803fa4b0 + 0x10))();
        DAT_1803fa4b0 = (longlong *)0x0;
      }
      if (DAT_1803fa4b8 != (longlong *)0x0) {
        (**(code **)(*DAT_1803fa4b8 + 0x10))();
        DAT_1803fa4b8 = (longlong *)0x0;
      }
      FUN_180014410("[UNLOAD] visuals shut down (imgui + render targets released)\n");
      _set_se_translator(uVar4);
    }
                    /* WARNING: Could not recover jumptable at 0x0001801eab1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    _Mtx_unlock(&DAT_1803da6b0);
    return;
  }
  std::_Throw_Cpp_error(5);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



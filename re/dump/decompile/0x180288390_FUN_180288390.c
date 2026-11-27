// 0x180288390  FUN_180288390
// size=163 thunk=false
// signature: undefined FUN_180288390()
// status: ok


void FUN_180288390(longlong param_1)

{
  longlong lVar1;
  void *_Str;
  FILE *_File;
  size_t local_res8;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  *(undefined4 *)(*(longlong *)(lVar1 + 0xec0) + 0x27a4) = 0;
  if (param_1 != 0) {
    local_res8 = 0;
    _Str = (void *)FUN_180288440(&local_res8);
    _File = (FILE *)FUN_180268a40(param_1,&DAT_18037f548);
    if (_File != (FILE *)0x0) {
      fwrite(_Str,1,local_res8,_File);
      fclose(_File);
    }
  }
  return;
}



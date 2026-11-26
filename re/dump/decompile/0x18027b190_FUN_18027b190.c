// 0x18027b190  FUN_18027b190
// size=346 thunk=false
// signature: undefined FUN_18027b190()
// status: ok


char * FUN_18027b190(uint param_1)

{
  char *_Str;
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  size_t sVar5;
  uint uVar6;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  uVar2 = param_1 & 0xffff0fff;
  uVar3 = param_1 & 0xffff0fff;
  uVar6 = param_1 & 0xffff0fff;
  if (uVar6 - 0x20f < 8) {
    if ((uVar6 - 0x20f & 0xfffffffb) == 0) {
      uVar4 = 0xffffefff;
    }
    else if ((uVar6 - 0x210 & 0xfffffffb) == 0) {
      uVar4 = 0xffffdfff;
    }
    else if ((uVar6 - 0x211 & 0xfffffffb) == 0) {
      uVar4 = 0xffffbfff;
    }
    else {
      uVar4 = 0xffff7fff;
      if ((uVar6 - 0x212 & 0xfffffffb) != 0) {
        uVar4 = 0xffffffff;
      }
    }
    param_1 = param_1 & uVar4;
  }
  if ((uVar2 != 0) || (param_1 == 0)) {
    FUN_18027b110(uVar6);
  }
  _Str = (char *)(lVar1 + 11000);
  FUN_180268750(_Str,0x40,"%s%s%s%s%s");
  if (((uVar3 == 0) && (param_1 != 0)) && (sVar5 = strlen(_Str), sVar5 != 0)) {
    *(char *)(sVar5 + 10999 + lVar1) = (char)uVar6;
  }
  return _Str;
}



// 0x180115600  FUN_180115600
// size=370 thunk=false
// signature: undefined FUN_180115600()
// status: ok


void FUN_180115600(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  ULONGLONG UVar4;
  code *pcVar5;
  int iVar6;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(char *)(lVar1 + 0xfc4) == '\0') && (cVar2 = FUN_1801143e0(), cVar2 != '\0')) {
    cVar2 = '\x01';
    *(int *)(lVar1 + 0xfa4) = *(int *)(lVar1 + 0xfa4) + -1;
  }
  else {
    cVar2 = '\0';
  }
  local_48 = 0;
  local_40 = (code *)0x0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  cVar3 = FUN_180115420(param_1,&local_48);
  pcVar5 = local_40;
  if ((cVar3 != '\0') && (local_40 != (code *)0x0)) {
    if (cVar2 != '\0') {
      *(undefined1 *)(lVar1 + 4000) = 1;
    }
    cVar3 = FUN_1801151c0(cVar2);
    lVar1 = DAT_18040a260;
    if (cVar3 == '\0') {
      if ((((cVar2 != '\0') && (DAT_18040a378 != 0)) && (DAT_18040a389 != '\0')) &&
         (((DAT_18040a260 == 0 || (UVar4 = GetTickCount64(), 500 < UVar4 - lVar1)) &&
          (lVar1 = DAT_18040a260, iVar6 = DAT_1803fd0a8 + 1, DAT_1803fd0a8 = iVar6, iVar6 < 0xb))))
      {
        UVar4 = GetTickCount64();
        FUN_180014410("[SP] CopyRT(15) NOT redirected: clean frame %llu ms old -> live framebuffer #%d\n"
                      ,UVar4 - lVar1,iVar6);
      }
    }
    else {
      DAT_1804260c0 = DAT_1804260c0 + 1;
      if (DAT_1804260c0 < 0x1f) {
        FUN_180014410("[SP] CopyRT(15) redirected -> cleanRT #%d\n");
      }
      cVar2 = FUN_180115510(&local_48,param_1,param_2);
      pcVar5 = local_40;
      if (cVar2 != '\0') {
        return;
      }
    }
    (*pcVar5)(param_1,param_2);
  }
  return;
}



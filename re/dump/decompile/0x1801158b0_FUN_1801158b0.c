// 0x1801158b0  FUN_1801158b0
// size=295 thunk=false
// signature: undefined FUN_1801158b0()
// status: ok


void FUN_1801158b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  code *pcVar4;
  undefined8 local_78;
  undefined8 local_70;
  code *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(char *)(lVar1 + 0xfc4) == '\0') && (cVar2 = FUN_1801143e0(), cVar2 != '\0')) {
    cVar2 = '\x01';
    *(int *)(lVar1 + 0xfa4) = *(int *)(lVar1 + 0xfa4) + -1;
  }
  else {
    cVar2 = '\0';
  }
  local_78 = 0;
  local_70 = 0;
  local_68 = (code *)0x0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  cVar3 = FUN_180115420(param_1,&local_78);
  pcVar4 = local_68;
  if ((cVar3 != '\0') && (local_68 != (code *)0x0)) {
    if (cVar2 != '\0') {
      *(undefined1 *)(lVar1 + 4000) = 1;
    }
    cVar2 = FUN_1801151c0(cVar2);
    if (cVar2 != '\0') {
      DAT_1803fea24 = DAT_1803fea24 + 1;
      if (DAT_1803fea24 < 0x1f) {
        FUN_180014410("[SP] CopyRT(109) redirected -> cleanRT #%d\n");
      }
      cVar2 = FUN_180115780(&local_78,param_1,param_2,param_3,param_4,param_5);
      pcVar4 = local_68;
      if (cVar2 != '\0') {
        return;
      }
    }
    (*pcVar4)(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}



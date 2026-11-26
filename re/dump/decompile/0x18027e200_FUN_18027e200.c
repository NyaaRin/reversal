// 0x18027e200  FUN_18027e200
// size=206 thunk=false
// signature: undefined FUN_18027e200()
// status: ok


bool FUN_18027e200(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar3 = FUN_18027b0a0(param_1);
  uVar4 = uVar3 & 0xf000;
  if (*(uint *)(*(longlong *)(lVar1 + 0xec0) + 0x120) != uVar4) {
    return false;
  }
  uVar5 = uVar3 & 0xffff0fff;
  if ((uVar3 & 0xffff0fff) == 0) {
    if (uVar4 == 0x1000) {
      uVar5 = 0x297;
    }
    else if (uVar4 == 0x2000) {
      uVar5 = 0x298;
    }
    else if (uVar4 == 0x4000) {
      uVar5 = 0x299;
    }
    else {
      uVar5 = uVar4;
      if (uVar4 == 0x8000) {
        uVar5 = 0x29a;
      }
    }
  }
  cVar2 = FUN_18027bb30(uVar5,param_2,param_3);
  return cVar2 != '\0';
}



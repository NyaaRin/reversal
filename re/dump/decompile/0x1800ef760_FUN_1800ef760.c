// 0x1800ef760  FUN_1800ef760
// size=234 thunk=false
// signature: undefined FUN_1800ef760()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800ef760(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20 [3];
  
  local_20[0] = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    local_28 = 0;
    puVar4 = (ulonglong *)&local_28;
    local_24 = 2;
    do {
      plVar3 = (longlong *)FUN_1800ebf80((int)*puVar4);
      if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar2 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar2 = *(longlong *)(lVar2 + 0xec0);
        fVar1 = *(float *)(lVar2 + 0x34);
        (**(code **)(*plVar3 + 0xf0))(plVar3,(double)*(float *)(lVar2 + 0x30));
        (**(code **)(*plVar3 + 0xf0))(plVar3,(double)fVar1);
        return 2;
      }
      puVar4 = (ulonglong *)((longlong)puVar4 + 4);
    } while (puVar4 != local_20);
  }
  return 0;
}



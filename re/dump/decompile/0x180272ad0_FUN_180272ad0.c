// 0x180272ad0  FUN_180272ad0
// size=298 thunk=false
// signature: undefined FUN_180272ad0()
// status: ok


undefined8 *
FUN_180272ad0(undefined8 *param_1,char *param_2,char *param_3,char param_4,undefined4 param_5)

{
  char *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  char *pcVar4;
  float local_res10;
  undefined4 uStackX_14;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar3 + 0xec0);
  if (param_4 != '\0') {
    pcVar4 = (char *)0xffffffffffffffff;
    if (param_3 != (char *)0x0) {
      pcVar4 = param_3;
    }
    param_3 = param_2;
    if (param_2 < pcVar4) {
      while (*param_3 != '\0') {
        pcVar1 = param_3 + 1;
        if (((*param_3 == '#') && (*pcVar1 == '#')) || (param_3 = pcVar1, pcVar4 <= pcVar1)) break;
      }
    }
  }
  uVar2 = *(undefined4 *)(lVar3 + 0x1238);
  if (param_2 == param_3) {
    *(undefined4 *)((longlong)param_1 + 4) = uVar2;
    *(undefined4 *)param_1 = 0;
  }
  else {
    FUN_18029e350(&local_res10,*(undefined8 *)(lVar3 + 0x1228),uVar2,DAT_180381308,param_5,param_2,
                  param_3,param_3,0);
    *param_1 = CONCAT44(uStackX_14,(float)(int)(local_res10 + DAT_180380ba8));
  }
  return param_1;
}



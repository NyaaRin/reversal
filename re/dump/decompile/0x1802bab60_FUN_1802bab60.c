// 0x1802bab60  FUN_1802bab60
// size=253 thunk=false
// signature: undefined FUN_1802bab60()
// status: ok


void FUN_1802bab60(undefined4 *param_1,float *param_2,float *param_3,float *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  if (*(int *)(lVar2 + 0x2654) == *(int *)(lVar2 + 0x2650)) {
    local_48 = *param_1;
    local_44 = param_1[1];
    local_40 = param_1[2];
    local_3c = 0;
    iVar1 = FUN_180268ed0(&local_48);
    if (*(int *)(lVar2 + 0x2660) == iVar1) {
      if ((*param_3 == 0.0) || ((*param_2 == 0.0 && (*(float *)(lVar2 + 0x2658) == DAT_180380bb0))))
      {
        *param_2 = *(float *)(lVar2 + 0x2658);
      }
      if (*param_4 == 0.0) {
        *param_3 = *(float *)(lVar2 + 0x265c);
      }
    }
  }
  return;
}



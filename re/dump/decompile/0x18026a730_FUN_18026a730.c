// 0x18026a730  FUN_18026a730
// size=220 thunk=false
// signature: undefined FUN_18026a730()
// status: ok


void FUN_18026a730(int param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  float fVar4;
  int local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = (longlong)param_1 + 0xdb;
  lVar3 = *(longlong *)(lVar3 + 0xec0);
  puVar2 = (undefined4 *)(lVar3 + lVar1 * 0x10);
  local_44 = *puVar2;
  uStack_40 = puVar2[1];
  uStack_3c = puVar2[2];
  uStack_38 = puVar2[3];
  local_48 = param_1;
  FUN_18028a220(lVar3 + 0x1fc8,&local_48);
  fVar4 = DAT_18038096c;
  if (*(int *)(lVar3 + 0x1fc4) != param_1) {
    *(float *)(lVar3 + lVar1 * 0x10) = (float)(param_2 & 0xff) * DAT_18038096c;
    *(float *)(lVar3 + 4 + lVar1 * 0x10) = (float)((param_2 & 0xffffffff) >> 8 & 0xff) * fVar4;
    *(float *)(lVar3 + 8 + lVar1 * 0x10) = (float)(param_2 >> 0x10 & 0xff) * fVar4;
    *(float *)(lVar3 + 0xc + lVar1 * 0x10) = (float)(param_2 >> 0x18 & 0xff) * fVar4;
  }
  return;
}



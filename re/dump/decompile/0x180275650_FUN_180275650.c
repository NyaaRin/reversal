// 0x180275650  FUN_180275650
// size=459 thunk=false
// signature: undefined FUN_180275650()
// status: ok


void FUN_180275650(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  float fVar7;
  float local_res8;
  float local_resc;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar1 = *(float *)(param_1 + 100);
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  uVar4 = FUN_18026a6a0(5,DAT_180380bb0);
  if (0.0 < fVar1) {
    if ((*(byte *)(param_1 + 0x14) & 0x80) == 0) {
      local_res8 = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x30);
      local_resc = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x34);
      FUN_180294f00(*(undefined8 *)(param_1 + 0x2c8),param_1 + 0x28,&local_res8,uVar4,
                    *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),0);
    }
    else {
      if ((*(byte *)(param_1 + 0x18) & 4) != 0) {
        FUN_180275440(param_1,1,uVar4,fVar1);
      }
      if ((*(byte *)(param_1 + 0x18) & 8) != 0) {
        FUN_180275440(param_1,3,uVar4,fVar1);
      }
    }
  }
  cVar6 = *(char *)(param_1 + 0xd8);
  if (cVar6 == -1) {
    if (*(char *)(param_1 + 0xd9) == -1) goto LAB_1802757b0;
    cVar3 = *(char *)(param_1 + 0xd9);
LAB_18027577a:
    cVar6 = cVar3;
    cVar3 = cVar6;
  }
  else {
    cVar3 = *(char *)(param_1 + 0xd9);
    if (cVar3 != -1) goto LAB_18027577a;
  }
  uVar5 = FUN_18026a6a0((cVar3 != -1) + '\x1d',DAT_180380bb0);
  fVar7 = DAT_180380d30;
  if (DAT_180380d30 <= *(float *)(param_1 + 100)) {
    fVar7 = *(float *)(param_1 + 100);
  }
  FUN_180275440(param_1,(int)cVar6,uVar5,fVar7);
LAB_1802757b0:
  fVar7 = *(float *)(lVar2 + 0xcd0);
  if ((0.0 < fVar7) && ((*(byte *)(param_1 + 0x14) & 1) == 0)) {
    FUN_180294d60(*(undefined8 *)(param_1 + 0x2c8),
                  *(float *)(param_1 + 0x28) + fVar1 * DAT_180380ac0,
                  (*(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x30)) - fVar1 * DAT_180380ac0,
                  (*(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x2c)) - DAT_180380bb0,uVar4,
                  fVar7);
  }
  return;
}



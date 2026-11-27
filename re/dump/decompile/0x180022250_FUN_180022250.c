// 0x180022250  FUN_180022250
// size=601 thunk=false
// signature: undefined FUN_180022250()
// status: ok


undefined8
FUN_180022250(longlong param_1,longlong param_2,char *param_3,undefined8 param_4,undefined4 param_5,
             float param_6)

{
  ushort uVar1;
  float fVar2;
  int iVar3;
  size_t sVar4;
  longlong lVar5;
  byte *pbVar6;
  float fVar7;
  float fVar8;
  float local_res8;
  float local_resc;
  float fStack_54;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_3 == (char *)0x0) {
    return 0;
  }
  if (*param_3 == '\0') {
    return 0;
  }
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(longlong *)(param_2 + 8) != *(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x60)) {
    return 0;
  }
  param_6 = param_6 + DAT_180380ac0;
  iVar3 = (int)param_6;
  if ((param_6 < 0.0) && ((float)iVar3 != param_6)) {
    iVar3 = iVar3 + -1;
  }
  fVar8 = (float)iVar3;
  if (fVar8 < DAT_180380bb0) {
    return 0;
  }
  local_res8 = 0.0;
  sVar4 = strlen(param_3);
  FUN_180268c20(&local_res8,param_3,param_3 + sVar4);
  fVar2 = local_res8;
  if (0xfffe < (int)local_res8 - 1U) {
    return 0;
  }
  lVar5 = FUN_18029db30(param_2,fVar8,DAT_180381384);
  if (lVar5 == 0) {
    return 0;
  }
  if (*(float *)(lVar5 + 0x14) <= 0.0) {
    return 0;
  }
  if ((ulonglong)((uint)fVar2 & 0xffff) < (ulonglong)(longlong)*(int *)(lVar5 + 0x20)) {
    uVar1 = *(ushort *)(*(longlong *)(lVar5 + 0x28) + (ulonglong)((uint)fVar2 & 0xffff) * 2);
    if (uVar1 == 0xfffe) {
      return 0;
    }
    if (uVar1 != 0xffff) {
      pbVar6 = (byte *)((ulonglong)uVar1 * 0x2c + *(longlong *)(lVar5 + 0x38));
      goto LAB_1800223e5;
    }
  }
  *(uint *)(lVar5 + 0x4c) = *(uint *)(lVar5 + 0x4c) | 0x8000000;
  pbVar6 = (byte *)FUN_18029c810(lVar5,(uint)fVar2 & 0xffff,0);
  *(uint *)(lVar5 + 0x4c) = *(uint *)(lVar5 + 0x4c) & 0xf7ffffff;
LAB_1800223e5:
  if ((pbVar6 != (byte *)0x0) && ((*pbVar6 & 2) != 0)) {
    fVar7 = fVar8 / *(float *)(lVar5 + 0x14);
    local_res8 = (float)param_4 -
                 (*(float *)(pbVar6 + 0x10) + *(float *)(pbVar6 + 8)) * DAT_180380ac0 * fVar7;
    fStack_54 = (float)((ulonglong)param_4 >> 0x20);
    local_resc = fStack_54 -
                 (*(float *)(pbVar6 + 0x14) + *(float *)(pbVar6 + 0xc)) * DAT_180380ac0 * fVar7;
    FUN_18029e680(param_2,param_1,fVar8,&local_res8,param_5,SUB42(fVar2,0),0);
    return 1;
  }
  return 0;
}



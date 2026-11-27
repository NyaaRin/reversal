// 0x18029a5d0  FUN_18029a5d0
// size=297 thunk=false
// signature: undefined FUN_18029a5d0()
// status: ok


void FUN_18029a5d0(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 local_68;
  float local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  
  if (*(uint *)(param_2 + 0x20) < 0x21) {
LAB_18029a628:
    *(uint *)(param_2 + 0x4c) = *(uint *)(param_2 + 0x4c) | 0x8000000;
    puVar3 = (uint *)FUN_18029c810(param_2,0x20,0);
    *(uint *)(param_2 + 0x4c) = *(uint *)(param_2 + 0x4c) & 0xf7ffffff;
LAB_18029a650:
    if (puVar3 != (uint *)0x0) {
      *puVar3 = *puVar3 & 0xfffffffd;
    }
  }
  else {
    uVar1 = *(ushort *)(*(longlong *)(param_2 + 0x28) + 0x40);
    if (uVar1 != 0xfffe) {
      if (uVar1 == 0xffff) goto LAB_18029a628;
      puVar3 = (uint *)((ulonglong)uVar1 * 0x2c + *(longlong *)(param_2 + 0x38));
      goto LAB_18029a650;
    }
    puVar3 = (uint *)0x0;
  }
  puVar4 = (uint *)(param_2 + 0x4c);
  if (*(uint *)(param_2 + 0x20) < 10) {
LAB_18029a67c:
    *puVar4 = *puVar4 | 0x8000000;
    lVar2 = FUN_18029c810(param_2,9,0);
    *puVar4 = *puVar4 & 0xf7ffffff;
  }
  else {
    uVar1 = *(ushort *)(*(longlong *)(param_2 + 0x28) + 0x12);
    if (uVar1 == 0xfffe) goto LAB_18029a69d;
    if (uVar1 == 0xffff) goto LAB_18029a67c;
    lVar2 = (ulonglong)uVar1 * 0x2c + *(longlong *)(param_2 + 0x38);
  }
  if (lVar2 != 0) {
    return;
  }
LAB_18029a69d:
  if (puVar3 != (uint *)0x0) {
    local_40 = 0xffffffff;
    local_60 = 0;
    uStack_58 = 0;
    local_64 = (float)puVar3[1] * DAT_180380e9c;
    local_68 = 0x240;
    local_50 = 0;
    uStack_48 = 0;
    FUN_18029d4d0(param_1,param_2,0,&local_68);
  }
  return;
}



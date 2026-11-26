// 0x180291fa0  FUN_180291fa0
// size=519 thunk=false
// signature: undefined FUN_180291fa0()
// status: ok


void FUN_180291fa0(undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (1 < (int)param_1[0x23]) {
    FUN_180296e30(param_1 + 0x22,param_1);
  }
  iVar2 = param_1[1];
  if (iVar2 < 0) {
    iVar2 = iVar2 + iVar2 / 2;
    iVar4 = 0;
    if (0 < iVar2) {
      iVar4 = iVar2;
    }
    FUN_18028ad40(param_1,iVar4);
  }
  *param_1 = 0;
  FUN_180260a20(param_1 + 4,0);
  iVar2 = param_1[9];
  if (iVar2 < 0) {
    iVar2 = iVar2 + iVar2 / 2;
    iVar4 = 0;
    if (0 < iVar2) {
      iVar4 = iVar2;
    }
    FUN_18028a980(param_1 + 8,iVar4);
  }
  param_1[8] = 0;
  param_1[0xc] = *(undefined4 *)(*(longlong *)(param_1 + 0xe) + 0x34);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0xd] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  iVar2 = param_1[0x29];
  if (iVar2 < 0) {
    iVar3 = iVar2 / 2 + iVar2;
    iVar4 = 0;
    if (0 < iVar3) {
      iVar4 = iVar3;
    }
    if (iVar2 < iVar4) {
      pvVar1 = (void *)FUN_18026f580((longlong)iVar4 << 4);
      if (*(void **)(param_1 + 0x2a) != (void *)0x0) {
        memcpy(pvVar1,*(void **)(param_1 + 0x2a),(longlong)(int)param_1[0x28] << 4);
        FUN_18026f680(*(undefined8 *)(param_1 + 0x2a));
      }
      *(void **)(param_1 + 0x2a) = pvVar1;
      param_1[0x29] = iVar4;
    }
  }
  param_1[0x28] = 0;
  iVar2 = param_1[0x2d];
  if (iVar2 < 0) {
    iVar3 = iVar2 / 2 + iVar2;
    iVar4 = 0;
    if (0 < iVar3) {
      iVar4 = iVar3;
    }
    if (iVar2 < iVar4) {
      pvVar1 = (void *)FUN_18026f580((longlong)iVar4 << 4);
      if (*(void **)(param_1 + 0x2e) != (void *)0x0) {
        memcpy(pvVar1,*(void **)(param_1 + 0x2e),(longlong)(int)param_1[0x2c] << 4);
        FUN_18026f680(*(undefined8 *)(param_1 + 0x2e));
      }
      *(void **)(param_1 + 0x2e) = pvVar1;
      param_1[0x2d] = iVar4;
    }
  }
  param_1[0x2c] = 0;
  FUN_18028a8d0(param_1 + 0x30,0);
  FUN_18028a820(param_1 + 0x14,0);
  param_1[0x22] = 0;
  param_1[0x23] = 1;
  local_38 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_18028acb0(param_1,&local_78);
  param_1[0x34] = *(undefined4 *)(*(longlong *)(param_1 + 0xe) + 0x30);
  return;
}



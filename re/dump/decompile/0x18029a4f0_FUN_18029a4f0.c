// 0x18029a4f0  FUN_18029a4f0
// size=214 thunk=false
// signature: undefined FUN_18029a4f0()
// status: ok


void FUN_18029a4f0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 local_38;
  float local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (*(short *)(lVar1 + 0x32) != 0) {
    lVar2 = FUN_18029da20();
    if (lVar2 != 0) goto LAB_18029a58f;
  }
  lVar2 = FUN_18029da20(param_1,0x20);
  local_10 = 0xffffffff;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  if (lVar2 == 0) {
    local_34 = (float)(int)(*(float *)(param_1 + 0x14) * DAT_180380a94 + DAT_180380ac0);
  }
  else {
    local_34 = *(float *)(lVar2 + 4);
  }
  lVar2 = FUN_18029d4d0(*(undefined8 *)(lVar1 + 8),param_1,0,&local_38);
LAB_18029a58f:
  *(int *)(param_1 + 0x40) = (int)((lVar2 - *(longlong *)(param_1 + 0x38)) / 0x2c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar2 + 4);
  return;
}



// 0x1800b0bd0  vfunc_shared_1800b0bd0
// size=338 thunk=false
// signature: undefined vfunc_shared_1800b0bd0()
// status: ok


void vfunc_shared_1800b0bd0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  float local_res8 [2];
  undefined1 local_res18 [16];
  
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  local_res8[0] = 0.0;
  cVar1 = FUN_1800ac6b0(param_2,"PenStr",local_res8);
  if ((cVar1 != '\0') && (0.0 < local_res8[0])) {
    *(float *)(param_1 + 8) = local_res8[0];
    local_res8[0] = 1.0;
    cVar1 = FUN_1800ac6b0(param_2,"PenMod",local_res8);
    if ((cVar1 == '\0') || (local_res8[0] <= 0.0)) {
      *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
    }
    else {
      *(float *)(param_1 + 0xc) = local_res8[0];
    }
    local_res8[0] = 0.0;
    cVar1 = FUN_1800ac6b0(param_2,"PenetrativeRange",local_res8);
    if ((cVar1 == '\0') || (local_res8[0] <= 0.0)) {
      *(undefined4 *)(param_1 + 0x10) = 0x46000000;
    }
    else {
      *(float *)(param_1 + 0x10) = local_res8[0];
    }
    local_res18[0] = 1;
    local_res8[0] = (float)((uint)local_res8[0] & 0xffffff00);
    cVar1 = FUN_1800ac790(param_2,"CanPenetrate",local_res18,local_res8);
    if ((cVar1 == '\0') || (local_res8[0]._0_1_ == '\0')) {
      *(undefined1 *)(param_1 + 0x19) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x19) = local_res18[0];
    }
    local_res8[0] = 0.0;
    cVar1 = FUN_1800ac6b0(param_2,"Damage",local_res8);
    if ((cVar1 != '\0') && (0.0 < local_res8[0])) {
      *(float *)(param_1 + 0x14) = local_res8[0];
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
    *(undefined1 *)(param_1 + 0x1a) = 1;
  }
  return;
}



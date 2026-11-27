// 0x180206cf0  FUN_180206cf0
// size=163 thunk=false
// signature: undefined FUN_180206cf0()
// status: ok


void FUN_180206cf0(void)

{
  void *pvVar1;
  undefined8 in_R9;
  undefined4 extraout_XMM0_Da;
  void *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  
  local_res18 = (undefined8 *)FUN_1802d8350(0x40);
  *local_res18 = 0;
  local_res18[1] = 0;
  local_res18[2] = 0;
  local_res18[3] = 0;
  local_res18[4] = 0;
  local_res18[5] = 0;
  local_res18[6] = 0;
  local_res18[7] = 0;
  pvVar1 = (void *)FUN_18015a210();
  local_res10 = 0;
  if (DAT_1803fcc70 == DAT_1803fcc78) {
    local_res8 = pvVar1;
    FUN_180233a50(extraout_XMM0_Da,DAT_1803fcc70,&local_res8,in_R9,1);
  }
  else {
    local_res8 = (void *)0x0;
    *DAT_1803fcc70 = pvVar1;
    DAT_1803fcc70 = DAT_1803fcc70 + 1;
  }
  if (local_res8 != (void *)0x0) {
    free(local_res8);
  }
  return;
}



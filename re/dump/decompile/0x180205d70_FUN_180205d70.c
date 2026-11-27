// 0x180205d70  FUN_180205d70
// size=195 thunk=false
// signature: undefined FUN_180205d70()
// status: ok


void FUN_180205d70(void)

{
  undefined8 in_R9;
  undefined8 *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  
  local_res18 = (undefined8 *)FUN_1802d8350(0x50);
  *local_res18 = vftable_Features_FreeCam_FreeCamFeature;
  local_res18[1] = 0;
  local_res18[2] = 0;
  local_res18[3] = 0;
  local_res18[4] = 0;
  local_res18[5] = 0;
  local_res18[6] = 0;
  *(undefined1 *)(local_res18 + 7) = 0;
  *(undefined8 *)((longlong)local_res18 + 0x3c) = 0;
  *(undefined4 *)((longlong)local_res18 + 0x44) = 0;
  *(undefined2 *)(local_res18 + 9) = 0;
  *(undefined4 *)((longlong)local_res18 + 0x4c) = 0xffffffff;
  local_res10 = 0;
  if (DAT_1803fcc70 == DAT_1803fcc78) {
    local_res8 = local_res18;
    FUN_180233a50(vftable_Features_FreeCam_FreeCamFeature,DAT_1803fcc70,&local_res8,in_R9,1);
  }
  else {
    local_res8 = (undefined8 *)0x0;
    *DAT_1803fcc70 = local_res18;
    DAT_1803fcc70 = DAT_1803fcc70 + 1;
  }
  if (local_res8 != (undefined8 *)0x0) {
    free(local_res8);
  }
  return;
}



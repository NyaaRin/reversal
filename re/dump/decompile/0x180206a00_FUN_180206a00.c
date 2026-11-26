// 0x180206a00  FUN_180206a00
// size=252 thunk=false
// signature: undefined FUN_180206a00()
// status: ok


void FUN_180206a00(void)

{
  undefined8 in_R9;
  undefined8 *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  
  local_res18 = (undefined8 *)FUN_1802d8350(0x80);
  *local_res18 = 0;
  local_res18[1] = 0;
  local_res18[2] = 0;
  local_res18[3] = 0;
  local_res18[4] = 0;
  local_res18[5] = 0;
  local_res18[8] = 0;
  local_res18[9] = 0;
  local_res18[10] = 0;
  local_res18[0xb] = 0;
  local_res18[0xc] = 0;
  local_res18[0xd] = 0;
  local_res18[0xe] = 0;
  local_res18[0xf] = 0;
  *local_res18 = vftable_Features_Toolbox_ToolboxFeature;
  *(undefined4 *)(local_res18 + 1) = 0;
  local_res18[2] = 0;
  local_res18[3] = 0;
  *(undefined1 *)(local_res18 + 4) = 0;
  *(undefined8 *)((longlong)local_res18 + 0x24) = 0xffffffffffffffff;
  local_res18[6] = 0;
  local_res18[7] = 0;
  local_res18[8] = 0;
  local_res18[9] = 0xf;
  *(undefined1 *)(local_res18 + 6) = 0;
  local_res18[10] = 0;
  local_res18[0xb] = 0;
  *(undefined4 *)(local_res18 + 0xc) = 0xffffffff;
  local_res18[0xd] = 0;
  local_res18[0xe] = 0;
  local_res18[0xf] = 0;
  local_res10 = 0;
  if (DAT_1803fcc70 == DAT_1803fcc78) {
    local_res8 = local_res18;
    FUN_180233a50(vftable_Features_Toolbox_ToolboxFeature,DAT_1803fcc70,&local_res8,in_R9,1);
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



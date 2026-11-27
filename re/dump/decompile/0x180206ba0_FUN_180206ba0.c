// 0x180206ba0  FUN_180206ba0
// size=146 thunk=false
// signature: undefined FUN_180206ba0()
// status: ok


void FUN_180206ba0(void)

{
  undefined8 in_R9;
  undefined8 *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  
  local_res18 = (undefined8 *)FUN_1802d8350(8);
  *local_res18 = vftable_Features_LuaFileCloak_LuaFileCloakFeature;
  local_res10 = 0;
  if (DAT_1803fcc70 == DAT_1803fcc78) {
    local_res8 = local_res18;
    FUN_180233a50(vftable_Features_LuaFileCloak_LuaFileCloakFeature,DAT_1803fcc70,&local_res8,in_R9,
                  1);
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



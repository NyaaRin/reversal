// 0x1800b1790  FUN_1800b1790
// size=1496 thunk=false
// signature: undefined FUN_1800b1790()
// status: ok


void FUN_1800b1790(void)

{
  undefined8 *puVar1;
  undefined8 in_R9;
  undefined8 *local_res8;
  undefined8 local_res10;
  
  if (DAT_1803e9b98 == DAT_1803e9ba0) {
    puVar1 = (undefined8 *)FUN_1802d8350(0x30);
    *(undefined4 *)(puVar1 + 2) = 0x100;
    *(undefined4 *)((longlong)puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1d) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1f) = 0;
    *puVar1 = vftable_Features_Autowall_ArcCWAutowall;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0x3f800000;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    local_res10 = 0;
    if (DAT_1803e9ba0 == DAT_1803e9ba8) {
      local_res8 = puVar1;
      FUN_180233490(vftable_Features_Autowall_ArcCWAutowall,DAT_1803e9ba0,&local_res8,in_R9,1);
    }
    else {
      local_res8 = (undefined8 *)0x0;
      *DAT_1803e9ba0 = puVar1;
      DAT_1803e9ba0 = DAT_1803e9ba0 + 1;
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    puVar1 = (undefined8 *)FUN_1802d8350(0x28);
    *(undefined2 *)((longlong)puVar1 + 0x15) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x17) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 1;
    *puVar1 = vftable_Features_Autowall_ARC9Autowall;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc) = 0x3dcccccd;
    *(undefined1 *)((longlong)puVar1 + 0x14) = 0;
    *(undefined4 *)(puVar1 + 3) = 3;
    puVar1[4] = 0;
    local_res10 = 0;
    if (DAT_1803e9ba0 == DAT_1803e9ba8) {
      local_res8 = puVar1;
      FUN_180233490(vftable_Features_Autowall_ARC9Autowall,DAT_1803e9ba0,&local_res8,in_R9,2);
    }
    else {
      local_res8 = (undefined8 *)0x0;
      *DAT_1803e9ba0 = puVar1;
      DAT_1803e9ba0 = DAT_1803e9ba0 + 1;
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    puVar1 = (undefined8 *)FUN_1802d8350(0x20);
    *(undefined4 *)((longlong)puVar1 + 0x13) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x17) = 0;
    *puVar1 = vftable_Features_Autowall_TacRPAutowall;
    puVar1[1] = 0;
    *(undefined2 *)(puVar1 + 2) = 0x100;
    *(undefined1 *)((longlong)puVar1 + 0x12) = 0;
    puVar1[3] = 0;
    local_res10 = 0;
    if (DAT_1803e9ba0 == DAT_1803e9ba8) {
      local_res8 = puVar1;
      FUN_180233490(vftable_Features_Autowall_TacRPAutowall,DAT_1803e9ba0,&local_res8,in_R9,4);
    }
    else {
      local_res8 = (undefined8 *)0x0;
      *DAT_1803e9ba0 = puVar1;
      DAT_1803e9ba0 = DAT_1803e9ba0 + 1;
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    puVar1 = (undefined8 *)FUN_1802d8350(0x40);
    *(undefined2 *)((longlong)puVar1 + 0x11) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x13) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x21) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x25) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x27) = 0;
    puVar1[7] = 4;
    *puVar1 = vftable_Features_Autowall_SWCSAutowall;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0x46000000;
    *(undefined4 *)(puVar1 + 3) = 0x3f7ae148;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 1;
    *(undefined1 *)(puVar1 + 4) = 0;
    puVar1[5] = 0;
    puVar1[6] = 0x46000000;
    local_res10 = 0;
    if (DAT_1803e9ba0 == DAT_1803e9ba8) {
      local_res8 = puVar1;
      FUN_180233490(vftable_Features_Autowall_SWCSAutowall,DAT_1803e9ba0,&local_res8,in_R9,8);
    }
    else {
      local_res8 = (undefined8 *)0x0;
      *DAT_1803e9ba0 = puVar1;
      DAT_1803e9ba0 = DAT_1803e9ba0 + 1;
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    puVar1 = (undefined8 *)FUN_1802d8350(0x40);
    *(undefined2 *)((longlong)puVar1 + 0x15) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x17) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 1;
    *puVar1 = vftable_Features_Autowall_TFAAutowall;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x14) = 0;
    *(undefined4 *)(puVar1 + 3) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0x447a0000;
    *(undefined4 *)(puVar1 + 4) = 4;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    local_res10 = 0;
    if (DAT_1803e9ba0 == DAT_1803e9ba8) {
      local_res8 = puVar1;
      FUN_180233490(vftable_Features_Autowall_TFAAutowall,DAT_1803e9ba0,&local_res8,in_R9,0x10);
    }
    else {
      local_res8 = (undefined8 *)0x0;
      *DAT_1803e9ba0 = puVar1;
      DAT_1803e9ba0 = DAT_1803e9ba0 + 1;
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    puVar1 = (undefined8 *)FUN_1802d8350(0x28);
    puVar1[2] = 0x10100;
    *puVar1 = vftable_Features_Autowall_M9KAutowall;
    puVar1[1] = 0x41600000;
    puVar1[3] = 0;
    puVar1[4] = 0;
    local_res10 = 0;
    if (DAT_1803e9ba0 == DAT_1803e9ba8) {
      local_res8 = puVar1;
      FUN_180233490(vftable_Features_Autowall_M9KAutowall,DAT_1803e9ba0,&local_res8,in_R9,0x20);
    }
    else {
      local_res8 = (undefined8 *)0x0;
      *DAT_1803e9ba0 = puVar1;
      DAT_1803e9ba0 = DAT_1803e9ba0 + 1;
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    puVar1 = (undefined8 *)FUN_1802d8350(0x20);
    *(undefined4 *)((longlong)puVar1 + 0x1b) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1f) = 0;
    *puVar1 = vftable_Features_Autowall_CW20Autowall;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
    *(undefined2 *)(puVar1 + 3) = 0x100;
    *(undefined1 *)((longlong)puVar1 + 0x1a) = 0;
    local_res10 = 0;
    if (DAT_1803e9ba0 == DAT_1803e9ba8) {
      local_res8 = puVar1;
      FUN_180233490(vftable_Features_Autowall_CW20Autowall,DAT_1803e9ba0,&local_res8,in_R9,0x40);
    }
    else {
      local_res8 = (undefined8 *)0x0;
      *DAT_1803e9ba0 = puVar1;
      DAT_1803e9ba0 = DAT_1803e9ba0 + 1;
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    puVar1 = (undefined8 *)FUN_1802d8350(0x20);
    *(undefined4 *)((longlong)puVar1 + 0x1b) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1f) = 0;
    *puVar1 = vftable_Features_Autowall_SWBAutowall;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
    *(undefined2 *)(puVar1 + 3) = 0x100;
    *(undefined1 *)((longlong)puVar1 + 0x1a) = 0;
    local_res10 = 0;
    if (DAT_1803e9ba0 == DAT_1803e9ba8) {
      local_res8 = puVar1;
      FUN_180233490(vftable_Features_Autowall_SWBAutowall,DAT_1803e9ba0,&local_res8,in_R9,0x80);
    }
    else {
      local_res8 = (undefined8 *)0x0;
      *DAT_1803e9ba0 = puVar1;
      DAT_1803e9ba0 = DAT_1803e9ba0 + 1;
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    puVar1 = (undefined8 *)FUN_1802d8350(0x18);
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0x100;
    *puVar1 = vftable_Features_Autowall_FAS2Autowall;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc) = 0x3f800000;
    local_res10 = 0;
    if (DAT_1803e9ba0 == DAT_1803e9ba8) {
      local_res8 = puVar1;
      FUN_180233490(vftable_Features_Autowall_FAS2Autowall,DAT_1803e9ba0,&local_res8,in_R9,0x100);
    }
    else {
      local_res8 = (undefined8 *)0x0;
      *DAT_1803e9ba0 = puVar1;
      DAT_1803e9ba0 = DAT_1803e9ba0 + 1;
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    puVar1 = (undefined8 *)FUN_1802d8350(0x10);
    puVar1[1] = 0;
    *puVar1 = vftable_Features_Autowall_HomigradAutowall;
    local_res10 = 0;
    if (DAT_1803e9ba0 == DAT_1803e9ba8) {
      local_res8 = puVar1;
      FUN_180233490(vftable_Features_Autowall_HomigradAutowall,DAT_1803e9ba0,&local_res8,in_R9,0x200
                   );
    }
    else {
      local_res8 = (undefined8 *)0x0;
      *DAT_1803e9ba0 = puVar1;
      DAT_1803e9ba0 = DAT_1803e9ba0 + 1;
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  return;
}



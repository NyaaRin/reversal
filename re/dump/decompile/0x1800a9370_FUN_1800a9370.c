// 0x1800a9370  FUN_1800a9370
// size=3900 thunk=false
// signature: undefined FUN_1800a9370()
// status: ok


void FUN_1800a9370(void)

{
  undefined8 *puVar1;
  void *_Dst;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 in_R9;
  undefined4 extraout_XMM0_Da;
  undefined8 *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined8 uVar4;
  
  local_res18 = (undefined8 *)FUN_1802d8350(8);
  *local_res18 = vftable_Features_Weapons_Backends_CSGOWeaponBackend;
  local_res10 = 0;
  if (DAT_1803eb448 == DAT_1803eb450) {
    local_res8 = local_res18;
    FUN_180233770(vftable_Features_Weapons_Backends_CSGOWeaponBackend,DAT_1803eb448,&local_res8,
                  in_R9,1);
  }
  else {
    local_res8 = (undefined8 *)0x0;
    *DAT_1803eb448 = local_res18;
    DAT_1803eb448 = DAT_1803eb448 + 1;
  }
  if (local_res8 != (undefined8 *)0x0) {
    free(local_res8);
  }
  puVar1 = (undefined8 *)FUN_1802d8350(0x478);
  *puVar1 = vftable_Features_Weapons_Backends_SWCSWeaponBackend;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 1;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0x437a0000;
  *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x44) = 0x43200000;
  *(undefined2 *)(puVar1 + 9) = 0x100;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0x100;
  puVar1[0xb] = 0;
  *(undefined2 *)(puVar1 + 0xc) = 0;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar2 = puVar1 + 0xd;
  lVar3 = 0x40;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(undefined1 *)(puVar1 + 0x8d) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x46c) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x474) = 0;
  uVar4 = 0;
  if (DAT_1803eb448 == DAT_1803eb450) {
    local_res8 = puVar1;
    FUN_180233770(puVar2,DAT_1803eb448,&local_res8,in_R9,2,0,puVar1);
  }
  else {
    local_res8 = (undefined8 *)0x0;
    *DAT_1803eb448 = puVar1;
    DAT_1803eb448 = DAT_1803eb448 + 1;
  }
  if (local_res8 != (undefined8 *)0x0) {
    free(local_res8);
  }
  local_res18 = (undefined8 *)FUN_1802d8350(0x70);
  *local_res18 = vftable_Features_Weapons_Backends_ArcCWWeaponBackend;
  *(undefined4 *)(local_res18 + 1) = 0;
  *(undefined8 *)((longlong)local_res18 + 0xc) = 0x3a72b9d6;
  *(undefined8 *)((longlong)local_res18 + 0x14) = 0;
  *(undefined8 *)((longlong)local_res18 + 0x1c) = 0;
  local_res18[5] = 0;
  local_res18[6] = 0;
  local_res18[7] = 0;
  local_res18[8] = 0xf;
  *(undefined1 *)(local_res18 + 5) = 0;
  local_res18[9] = 0;
  local_res18[10] = 0;
  local_res18[0xb] = 0;
  *(undefined1 *)(local_res18 + 0xc) = 0;
  *(undefined8 *)((longlong)local_res18 + 100) = 0;
  *(undefined2 *)((longlong)local_res18 + 0x6c) = 0;
  local_res10 = 0;
  if (DAT_1803eb448 == DAT_1803eb450) {
    local_res8 = local_res18;
    FUN_180233770(vftable_Features_Weapons_Backends_ArcCWWeaponBackend,DAT_1803eb448,&local_res8,
                  in_R9,4,uVar4,puVar1);
  }
  else {
    local_res8 = (undefined8 *)0x0;
    *DAT_1803eb448 = local_res18;
    DAT_1803eb448 = DAT_1803eb448 + 1;
  }
  if (local_res8 != (undefined8 *)0x0) {
    free(local_res8);
  }
  local_res18 = (undefined8 *)FUN_1802d8350();
  *local_res18 = 0;
  local_res18[1] = 0;
  local_res18[2] = 0;
  local_res18[3] = 0;
  local_res18[4] = 0;
  local_res18[5] = 0;
  local_res18[6] = 0;
  local_res18[7] = 0;
  local_res18[8] = 0;
  *local_res18 = vftable_Features_Weapons_Backends_TFAWeaponBackend;
  *(undefined4 *)(local_res18 + 1) = 0x3c23d70a;
  *(undefined4 *)((longlong)local_res18 + 0xc) = 0x3f800000;
  *(undefined4 *)(local_res18 + 2) = 0x3f800000;
  *(undefined4 *)((longlong)local_res18 + 0x14) = 1;
  local_res18[3] = 0;
  local_res18[4] = 0;
  *(undefined4 *)(local_res18 + 5) = 0;
  *(undefined1 *)((longlong)local_res18 + 0x2c) = 0;
  local_res18[6] = 0;
  *(undefined1 *)(local_res18 + 7) = 0;
  *(undefined8 *)((longlong)local_res18 + 0x3c) = 0;
  local_res10 = 0;
  if (DAT_1803eb448 == DAT_1803eb450) {
    local_res8 = local_res18;
    FUN_180233770(vftable_Features_Weapons_Backends_TFAWeaponBackend,DAT_1803eb448,&local_res8,in_R9
                  ,8);
  }
  else {
    local_res8 = (undefined8 *)0x0;
    *DAT_1803eb448 = local_res18;
    DAT_1803eb448 = DAT_1803eb448 + 1;
  }
  if (local_res8 != (undefined8 *)0x0) {
    free(local_res8);
  }
  local_res18 = (undefined8 *)FUN_1802d8350(8);
  *local_res18 = vftable_Features_Weapons_Backends_CombineWeapWeaponBackend;
  local_res10 = 0;
  if (DAT_1803eb448 == DAT_1803eb450) {
    local_res8 = local_res18;
    FUN_180233770(vftable_Features_Weapons_Backends_CombineWeapWeaponBackend,DAT_1803eb448,
                  &local_res8,in_R9,0x10);
  }
  else {
    local_res8 = (undefined8 *)0x0;
    *DAT_1803eb448 = local_res18;
    DAT_1803eb448 = DAT_1803eb448 + 1;
  }
  if (local_res8 != (undefined8 *)0x0) {
    free(local_res8);
  }
  local_res18 = (undefined8 *)FUN_1802d8350(0x38);
  *(undefined4 *)(local_res18 + 1) = 0;
  *(undefined1 *)((longlong)local_res18 + 0xc) = 0;
  *(undefined4 *)(local_res18 + 2) = 0;
  *(undefined1 *)((longlong)local_res18 + 0x14) = 0;
  local_res18[3] = 0;
  local_res18[4] = 0;
  local_res18[5] = 0;
  *local_res18 = vftable_Features_Weapons_Backends_FAS2WeaponBackend;
  local_res10 = 0;
  if (DAT_1803eb448 == DAT_1803eb450) {
    local_res8 = local_res18;
    FUN_180233770(vftable_Features_Weapons_Backends_FAS2WeaponBackend,DAT_1803eb448,&local_res8,
                  in_R9,0x20);
  }
  else {
    local_res8 = (undefined8 *)0x0;
    *DAT_1803eb448 = local_res18;
    DAT_1803eb448 = DAT_1803eb448 + 1;
  }
  if (local_res8 != (undefined8 *)0x0) {
    free(local_res8);
  }
  local_res18 = (undefined8 *)FUN_1802d8350(0x88);
  *(undefined4 *)(local_res18 + 1) = 0;
  *(undefined1 *)((longlong)local_res18 + 0xc) = 0;
  *(undefined4 *)(local_res18 + 2) = 0;
  *(undefined1 *)((longlong)local_res18 + 0x14) = 0;
  local_res18[3] = 0;
  local_res18[4] = 0;
  local_res18[5] = 0;
  *local_res18 = vftable_Features_Weapons_Backends_UTSWBWeaponBackend;
  *(undefined2 *)(local_res18 + 6) = 0;
  *(undefined1 *)((longlong)local_res18 + 0x32) = 0;
  *(undefined4 *)((longlong)local_res18 + 0x34) = 0x3f800000;
  *(undefined1 *)(local_res18 + 7) = 0;
  *(undefined4 *)((longlong)local_res18 + 0x3c) = 0;
  *(undefined1 *)(local_res18 + 8) = 0;
  *(undefined8 *)((longlong)local_res18 + 0x44) = 0;
  *(undefined8 *)((longlong)local_res18 + 0x4c) = 0;
  *(undefined8 *)((longlong)local_res18 + 0x54) = 0;
  *(undefined4 *)((longlong)local_res18 + 0x5c) = 0;
  local_res18[0xc] = 0;
  local_res18[0xd] = 0;
  *(undefined4 *)(local_res18 + 0xe) = 0;
  *(undefined8 *)((longlong)local_res18 + 0x74) = 1;
  *(undefined2 *)((longlong)local_res18 + 0x7c) = 0;
  local_res18[0x10] = 0;
  local_res10 = 0;
  if (DAT_1803eb448 == DAT_1803eb450) {
    local_res8 = local_res18;
    FUN_180233770(vftable_Features_Weapons_Backends_UTSWBWeaponBackend,DAT_1803eb448,&local_res8,
                  in_R9,0x40);
  }
  else {
    local_res8 = (undefined8 *)0x0;
    *DAT_1803eb448 = local_res18;
    DAT_1803eb448 = DAT_1803eb448 + 1;
  }
  if (local_res8 != (undefined8 *)0x0) {
    free(local_res8);
  }
  local_res18 = (undefined8 *)FUN_1802d8350();
  *local_res18 = 0;
  local_res18[1] = 0;
  local_res18[2] = 0;
  local_res18[3] = 0;
  local_res18[4] = 0;
  local_res18[5] = 0;
  local_res18[6] = 0;
  local_res18[7] = 0;
  local_res18[8] = 0;
  local_res18[9] = 0;
  local_res18[10] = 0;
  local_res18[0xb] = 0;
  local_res18[0xc] = 0;
  local_res18[0xd] = 0;
  local_res18[0xe] = 0;
  local_res18[0xf] = 0;
  local_res18[0x10] = 0;
  *(undefined4 *)(local_res18 + 1) = 0;
  *(undefined1 *)((longlong)local_res18 + 0xc) = 0;
  *(undefined4 *)(local_res18 + 2) = 0;
  *(undefined1 *)((longlong)local_res18 + 0x14) = 0;
  local_res18[3] = 0;
  local_res18[4] = 0;
  local_res18[5] = 0;
  *local_res18 = vftable_Features_Weapons_Backends_CWBaseWeaponBackend;
  *(undefined1 *)(local_res18 + 6) = 0;
  *(undefined4 *)((longlong)local_res18 + 0x34) = 0;
  *(undefined1 *)(local_res18 + 7) = 0;
  *(undefined8 *)((longlong)local_res18 + 0x3c) = 0;
  *(undefined4 *)((longlong)local_res18 + 0x44) = 0;
  *(undefined1 *)(local_res18 + 9) = 0;
  *(undefined4 *)((longlong)local_res18 + 0x4c) = 0;
  *(undefined1 *)(local_res18 + 10) = 0;
  *(undefined8 *)((longlong)local_res18 + 0x54) = 0;
  *(undefined8 *)((longlong)local_res18 + 0x5c) = 0x3f800000;
  *(undefined4 *)((longlong)local_res18 + 100) = 0;
  *(undefined2 *)(local_res18 + 0xd) = 0;
  local_res18[0xe] = 0;
  local_res18[0xf] = 0;
  *(undefined4 *)(local_res18 + 0x10) = 0;
  local_res10 = 0;
  if (DAT_1803eb448 == DAT_1803eb450) {
    local_res8 = local_res18;
    FUN_180233770(vftable_Features_Weapons_Backends_CWBaseWeaponBackend,DAT_1803eb448,&local_res8,
                  in_R9,0x80);
  }
  else {
    local_res8 = (undefined8 *)0x0;
    *DAT_1803eb448 = local_res18;
    DAT_1803eb448 = DAT_1803eb448 + 1;
  }
  if (local_res8 != (undefined8 *)0x0) {
    free(local_res8);
  }
  local_res18 = (undefined8 *)FUN_1802d8350();
  *local_res18 = 0;
  local_res18[1] = 0;
  local_res18[2] = 0;
  local_res18[3] = 0;
  local_res18[4] = 0;
  local_res18[5] = 0;
  local_res18[6] = 0;
  local_res18[7] = 0;
  local_res18[8] = 0;
  local_res18[9] = 0;
  local_res18[10] = 0;
  local_res18[0xb] = 0;
  local_res18[0xc] = 0;
  local_res18[0xd] = 0;
  local_res18[0xe] = 0;
  local_res18[0xf] = 0;
  local_res18[0x10] = 0;
  *(undefined4 *)(local_res18 + 1) = 0;
  *(undefined1 *)((longlong)local_res18 + 0xc) = 0;
  *(undefined4 *)(local_res18 + 2) = 0;
  *(undefined1 *)((longlong)local_res18 + 0x14) = 0;
  local_res18[3] = 0;
  local_res18[4] = 0;
  local_res18[5] = 0;
  *(undefined1 *)(local_res18 + 6) = 0;
  *(undefined4 *)((longlong)local_res18 + 0x34) = 0;
  *(undefined1 *)(local_res18 + 7) = 0;
  *(undefined8 *)((longlong)local_res18 + 0x3c) = 0;
  *(undefined4 *)((longlong)local_res18 + 0x44) = 0;
  *(undefined1 *)(local_res18 + 9) = 0;
  *(undefined4 *)((longlong)local_res18 + 0x4c) = 0;
  *(undefined1 *)(local_res18 + 10) = 0;
  *(undefined8 *)((longlong)local_res18 + 0x54) = 0;
  *(undefined8 *)((longlong)local_res18 + 0x5c) = 0x3f800000;
  *(undefined4 *)((longlong)local_res18 + 100) = 0;
  *(undefined2 *)(local_res18 + 0xd) = 0;
  local_res18[0xe] = 0;
  local_res18[0xf] = 0;
  *(undefined4 *)(local_res18 + 0x10) = 0;
  *local_res18 = vftable_Features_Weapons_Backends_SWBWeaponBackend;
  local_res10 = 0;
  if (DAT_1803eb448 == DAT_1803eb450) {
    local_res8 = local_res18;
    FUN_180233770(vftable_Features_Weapons_Backends_SWBWeaponBackend,DAT_1803eb448,&local_res8,in_R9
                  ,0x100);
  }
  else {
    local_res8 = (undefined8 *)0x0;
    *DAT_1803eb448 = local_res18;
    DAT_1803eb448 = DAT_1803eb448 + 1;
  }
  if (local_res8 != (undefined8 *)0x0) {
    free(local_res8);
  }
  local_res18 = (undefined8 *)FUN_1802d8350(0x30);
  *local_res18 = vftable_Features_Weapons_Backends_CW20WeaponBackend;
  *(undefined4 *)(local_res18 + 1) = 0;
  *(undefined1 *)((longlong)local_res18 + 0xc) = 0;
  *(undefined4 *)(local_res18 + 2) = 0;
  *(undefined1 *)((longlong)local_res18 + 0x14) = 0;
  local_res18[3] = 0;
  local_res18[4] = 0;
  local_res18[5] = 0;
  local_res10 = 0;
  if (DAT_1803eb448 == DAT_1803eb450) {
    local_res8 = local_res18;
    FUN_180233770(vftable_Features_Weapons_Backends_CW20WeaponBackend,DAT_1803eb448,&local_res8,
                  in_R9,0x200);
  }
  else {
    local_res8 = (undefined8 *)0x0;
    *DAT_1803eb448 = local_res18;
    DAT_1803eb448 = DAT_1803eb448 + 1;
  }
  if (local_res8 != (undefined8 *)0x0) {
    free(local_res8);
  }
  local_res18 = (undefined8 *)FUN_1802d8350(8);
  *local_res18 = vftable_Features_Weapons_Backends_HVH2WeaponBackend;
  local_res10 = 0;
  if (DAT_1803eb448 == DAT_1803eb450) {
    local_res8 = local_res18;
    FUN_180233770(vftable_Features_Weapons_Backends_HVH2WeaponBackend,DAT_1803eb448,&local_res8,
                  in_R9,0x400);
  }
  else {
    local_res8 = (undefined8 *)0x0;
    *DAT_1803eb448 = local_res18;
    DAT_1803eb448 = DAT_1803eb448 + 1;
  }
  if (local_res8 != (undefined8 *)0x0) {
    free(local_res8);
  }
  local_res18 = (undefined8 *)FUN_1802d8350();
  *local_res18 = 0;
  local_res18[1] = 0;
  local_res18[2] = 0;
  local_res18[3] = 0;
  local_res18[4] = 0;
  *local_res18 = vftable_Features_Weapons_Backends_M9KWeaponBackend;
  local_res18[1] = 0;
  *(undefined2 *)(local_res18 + 2) = 0;
  *(undefined1 *)((longlong)local_res18 + 0x12) = 0;
  *(undefined8 *)((longlong)local_res18 + 0x14) = 0;
  *(undefined8 *)((longlong)local_res18 + 0x1c) = 0;
  local_res10 = 0;
  if (DAT_1803eb448 == DAT_1803eb450) {
    local_res8 = local_res18;
    FUN_180233770(vftable_Features_Weapons_Backends_M9KWeaponBackend,DAT_1803eb448,&local_res8,in_R9
                  ,0x800);
  }
  else {
    local_res8 = (undefined8 *)0x0;
    *DAT_1803eb448 = local_res18;
    DAT_1803eb448 = DAT_1803eb448 + 1;
  }
  if (local_res8 != (undefined8 *)0x0) {
    free(local_res8);
  }
  local_res18 = (undefined8 *)FUN_1802d8350();
  *local_res18 = 0;
  local_res18[1] = 0;
  local_res18[2] = 0;
  local_res18[3] = 0;
  local_res18[4] = 0;
  local_res18[5] = 0;
  local_res18[6] = 0;
  local_res18[7] = 0;
  local_res18[8] = 0;
  *local_res18 = vftable_Features_Weapons_Backends_PTPWeaponBackend;
  local_res18[1] = 0;
  *(undefined4 *)(local_res18 + 2) = 0;
  *(undefined1 *)((longlong)local_res18 + 0x14) = 0;
  local_res18[3] = 0;
  local_res18[4] = 0;
  local_res18[5] = 0;
  local_res18[6] = 0;
  *(undefined4 *)(local_res18 + 7) = 0;
  *(undefined1 *)((longlong)local_res18 + 0x3c) = 0;
  *(undefined4 *)(local_res18 + 8) = 0x80000000;
  local_res10 = 0;
  if (DAT_1803eb448 == DAT_1803eb450) {
    local_res8 = local_res18;
    FUN_180233770(vftable_Features_Weapons_Backends_PTPWeaponBackend,DAT_1803eb448,&local_res8,in_R9
                  ,0x1000);
  }
  else {
    local_res8 = (undefined8 *)0x0;
    *DAT_1803eb448 = local_res18;
    DAT_1803eb448 = DAT_1803eb448 + 1;
  }
  if (local_res8 != (undefined8 *)0x0) {
    free(local_res8);
  }
  local_res18 = (undefined8 *)FUN_1802d8350(0x10);
  *local_res18 = vftable_Features_Weapons_Backends_TTTWeaponBackend;
  *(undefined4 *)(local_res18 + 1) = 0x3c23d70a;
  local_res10 = 0;
  if (DAT_1803eb448 == DAT_1803eb450) {
    local_res8 = local_res18;
    FUN_180233770(vftable_Features_Weapons_Backends_TTTWeaponBackend,DAT_1803eb448,&local_res8,in_R9
                  ,0x2000);
  }
  else {
    local_res8 = (undefined8 *)0x0;
    *DAT_1803eb448 = local_res18;
    DAT_1803eb448 = DAT_1803eb448 + 1;
  }
  if (local_res8 != (undefined8 *)0x0) {
    free(local_res8);
  }
  local_res18 = (undefined8 *)FUN_1802d8350(8);
  *local_res18 = vftable_Features_Weapons_Backends_HL2WeaponBackend;
  local_res10 = 0;
  if (DAT_1803eb448 == DAT_1803eb450) {
    local_res8 = local_res18;
    FUN_180233770(vftable_Features_Weapons_Backends_HL2WeaponBackend,DAT_1803eb448,&local_res8,in_R9
                  ,0x4000);
  }
  else {
    local_res8 = (undefined8 *)0x0;
    *DAT_1803eb448 = local_res18;
    DAT_1803eb448 = DAT_1803eb448 + 1;
  }
  if (local_res8 != (undefined8 *)0x0) {
    free(local_res8);
  }
  local_res18 = (undefined8 *)FUN_1802d8350(0x60);
  *local_res18 = vftable_Features_Weapons_Backends_ARC9WeaponBackend;
  local_res18[1] = 0;
  local_res18[2] = 0;
  local_res18[3] = 0;
  local_res18[4] = 0;
  *(undefined4 *)(local_res18 + 5) = 0x1000000;
  *(undefined2 *)((longlong)local_res18 + 0x2c) = 0;
  *(undefined4 *)(local_res18 + 6) = 1;
  *(undefined1 *)((longlong)local_res18 + 0x34) = 0;
  local_res18[7] = 0;
  local_res18[8] = 0;
  *(undefined4 *)(local_res18 + 9) = 0xffffffff;
  *(undefined8 *)((longlong)local_res18 + 0x4c) = 1;
  *(undefined8 *)((longlong)local_res18 + 0x54) = 0;
  *(undefined1 *)((longlong)local_res18 + 0x5c) = 1;
  local_res10 = 0;
  if (DAT_1803eb448 == DAT_1803eb450) {
    local_res8 = local_res18;
    FUN_180233770(vftable_Features_Weapons_Backends_ARC9WeaponBackend,DAT_1803eb448,&local_res8,
                  in_R9,0x8000);
  }
  else {
    local_res8 = (undefined8 *)0x0;
    *DAT_1803eb448 = local_res18;
    DAT_1803eb448 = DAT_1803eb448 + 1;
  }
  if (local_res8 != (undefined8 *)0x0) {
    free(local_res8);
  }
  local_res18 = (undefined8 *)FUN_1802d8350(0x70);
  *local_res18 = vftable_Features_Weapons_Backends_TacRPWeaponBackend;
  local_res18[1] = 0;
  *(undefined4 *)(local_res18 + 2) = 0;
  *(undefined4 *)((longlong)local_res18 + 0x14) = 1;
  *(undefined2 *)(local_res18 + 3) = 0;
  *(undefined8 *)((longlong)local_res18 + 0x1c) = 0;
  *(undefined8 *)((longlong)local_res18 + 0x24) = 0;
  *(undefined8 *)((longlong)local_res18 + 0x2c) = 0;
  *(undefined8 *)((longlong)local_res18 + 0x34) = 0;
  *(undefined8 *)((longlong)local_res18 + 0x3c) = 0;
  *(undefined8 *)((longlong)local_res18 + 0x44) = 0;
  *(undefined1 *)((longlong)local_res18 + 0x4c) = 0;
  local_res18[10] = 0;
  local_res18[0xb] = 0;
  *(undefined2 *)(local_res18 + 0xc) = 0x100;
  *(undefined4 *)((longlong)local_res18 + 100) = 0x40000000;
  local_res18[0xd] = 0x44160000;
  local_res10 = 0;
  if (DAT_1803eb448 == DAT_1803eb450) {
    local_res8 = local_res18;
    FUN_180233770(vftable_Features_Weapons_Backends_TacRPWeaponBackend,DAT_1803eb448,&local_res8,
                  in_R9,0x10000);
  }
  else {
    local_res8 = (undefined8 *)0x0;
    *DAT_1803eb448 = local_res18;
    DAT_1803eb448 = DAT_1803eb448 + 1;
  }
  if (local_res8 != (undefined8 *)0x0) {
    free(local_res8);
  }
  local_res18 = (undefined8 *)FUN_1802d8350();
  *local_res18 = 0;
  local_res18[1] = 0;
  local_res18[2] = 0;
  local_res18[3] = 0;
  local_res18[4] = 0;
  local_res18[5] = 0;
  local_res18[6] = 0;
  local_res18[7] = 0;
  local_res18[8] = 0;
  local_res18[9] = 0;
  local_res18[10] = 0;
  local_res18[0xb] = 0;
  local_res18[0xc] = 0;
  *local_res18 = vftable_Features_Weapons_Backends_ZSWeaponBackend;
  local_res18[1] = 0;
  local_res18[2] = 0;
  *(undefined4 *)(local_res18 + 3) = 0x3f800000;
  *(undefined4 *)((longlong)local_res18 + 0x1c) = 0x3f800000;
  local_res18[4] = 1;
  *(undefined4 *)(local_res18 + 5) = 0x3f800000;
  *(undefined2 *)((longlong)local_res18 + 0x2c) = 0;
  *(undefined4 *)(local_res18 + 6) = 0x80000000;
  *(undefined4 *)((longlong)local_res18 + 0x34) = 0x80000000;
  *(undefined4 *)(local_res18 + 7) = 0;
  local_res18[8] = 0xbff0000000000000;
  local_res18[9] = 0;
  local_res18[10] = 0;
  *(undefined1 *)(local_res18 + 0xb) = 0;
  *(undefined4 *)((longlong)local_res18 + 0x5c) = 0;
  *(undefined4 *)(local_res18 + 0xc) = 0x80000000;
  local_res10 = 0;
  if (DAT_1803eb448 == DAT_1803eb450) {
    local_res8 = local_res18;
    FUN_180233770(vftable_Features_Weapons_Backends_ZSWeaponBackend,DAT_1803eb448,&local_res8,in_R9,
                  0x20000);
  }
  else {
    local_res8 = (undefined8 *)0x0;
    *DAT_1803eb448 = local_res18;
    DAT_1803eb448 = DAT_1803eb448 + 1;
  }
  if (local_res8 != (undefined8 *)0x0) {
    free(local_res8);
  }
  local_res18 = (undefined8 *)FUN_1802d8350();
  *local_res18 = 0;
  local_res18[1] = 0;
  local_res18[2] = 0;
  local_res18[3] = 0;
  local_res18[4] = 0;
  local_res18[5] = 0;
  local_res18[6] = 0;
  local_res18[7] = 0;
  local_res18[8] = 0;
  local_res18[9] = 0;
  local_res18[10] = 0;
  local_res18[0xb] = 0;
  local_res18[0xc] = 0;
  local_res18[0xd] = 0;
  local_res18[0xe] = 0;
  *local_res18 = vftable_Features_Weapons_Backends_ORPWeaponBackend;
  local_res18[1] = 0;
  *(undefined4 *)(local_res18 + 2) = 0x100;
  local_res18[3] = 0xbff0000000000000;
  local_res18[4] = 0xbff0000000000000;
  local_res18[10] = 0;
  *(undefined4 *)((longlong)local_res18 + 0x4c) = 0;
  *(undefined4 *)(local_res18 + 0xb) = 0xffffffff;
  local_res18[0xc] = 0;
  local_res18[0xd] = 0xffffffffffffffff;
  *(undefined4 *)(local_res18 + 0xe) = 0;
  local_res10 = 0;
  if (DAT_1803eb448 == DAT_1803eb450) {
    local_res8 = local_res18;
    FUN_180233770(vftable_Features_Weapons_Backends_ORPWeaponBackend,DAT_1803eb448,&local_res8,in_R9
                  ,0x40000);
  }
  else {
    local_res8 = (undefined8 *)0x0;
    *DAT_1803eb448 = local_res18;
    DAT_1803eb448 = DAT_1803eb448 + 1;
  }
  if (local_res8 != (undefined8 *)0x0) {
    free(local_res8);
  }
  _Dst = (void *)FUN_1802d8350(0xf8);
  local_res18 = _Dst;
  memset(_Dst,0,0xf8);
  memset(_Dst,0,0xf8);
  puVar2 = (undefined8 *)FUN_1800a0be0(_Dst);
  local_res10 = 0;
  if (DAT_1803eb448 == DAT_1803eb450) {
    local_res8 = puVar2;
    FUN_180233770(extraout_XMM0_Da,DAT_1803eb448,&local_res8,in_R9,0x80000);
  }
  else {
    local_res8 = (undefined8 *)0x0;
    *DAT_1803eb448 = puVar2;
    DAT_1803eb448 = DAT_1803eb448 + 1;
  }
  if (local_res8 != (undefined8 *)0x0) {
    free(local_res8);
  }
  puVar2 = (undefined8 *)FUN_1802d8350(0xd8);
  local_res18 = puVar2;
  memset(puVar2,0,0xd8);
  *puVar2 = vftable_Features_Weapons_Backends_OctoWeaponBackend;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 0;
  puVar2[3] = 0xbff0000000000000;
  puVar2[4] = 0xbff0000000000000;
  puVar2[5] = 0xbff0000000000000;
  puVar2[6] = 0xbff0000000000000;
  *(undefined4 *)(puVar2 + 7) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x3c) = 1;
  *(undefined1 *)((longlong)puVar2 + 0x44) = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0x100;
  *(undefined1 *)(puVar2 + 0xc) = 0;
  puVar2[0xd] = 0xbff0000000000000;
  puVar2[0xe] = 0;
  *(undefined4 *)(puVar2 + 0xf) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x7c) = 0;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  *(undefined1 *)(puVar2 + 0x13) = 0;
  puVar2[0x14] = 0xbff0000000000000;
  *(undefined4 *)(puVar2 + 0x15) = 0;
  puVar2[0x16] = 0;
  puVar2[0x17] = 0;
  puVar2[0x18] = 0;
  puVar2[0x19] = 0;
  *(undefined4 *)(puVar2 + 0x1a) = 0;
  *(undefined1 *)((longlong)puVar2 + 0xd4) = 0;
  local_res10 = 0;
  if (DAT_1803eb448 == DAT_1803eb450) {
    local_res8 = puVar2;
    FUN_180233770();
  }
  else {
    local_res8 = (undefined8 *)0x0;
    *DAT_1803eb448 = puVar2;
    DAT_1803eb448 = DAT_1803eb448 + 1;
  }
  if (local_res8 != (undefined8 *)0x0) {
    free(local_res8);
  }
  local_res18 = (undefined8 *)FUN_1802d8350(8);
  *local_res18 = vftable_Features_Weapons_Backends_GenericWeaponBackend;
  local_res10 = 0;
  if (DAT_1803eb448 == DAT_1803eb450) {
    local_res8 = local_res18;
    FUN_180233770(vftable_Features_Weapons_Backends_GenericWeaponBackend,DAT_1803eb448,&local_res8,
                  in_R9,0x200000);
  }
  else {
    local_res8 = (undefined8 *)0x0;
    *DAT_1803eb448 = local_res18;
    DAT_1803eb448 = DAT_1803eb448 + 1;
  }
  if (local_res8 != (undefined8 *)0x0) {
    free(local_res8);
  }
  return;
}



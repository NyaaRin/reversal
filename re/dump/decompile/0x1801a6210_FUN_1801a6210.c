// 0x1801a6210  FUN_1801a6210
// size=2613 thunk=false
// signature: undefined FUN_1801a6210()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801a6210(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  float fVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  undefined1 uVar15;
  char cVar16;
  char cVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  char local_res18;
  char local_res20;
  float fVar22;
  uint uVar23;
  uint uVar24;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  undefined8 local_d8;
  undefined8 uStack_d0;
  
  if (DAT_1803fa547 == '\0') {
    return;
  }
  if (DAT_1803fb24c != 4) {
    return;
  }
  DAT_1803fb24c = 4;
  if (DAT_1803fa564 == '\0') {
    DAT_1803da718._0_4_ = 380.0;
    DAT_1803da718._4_4_ = 520.0;
    DAT_1803fa564 = '\x01';
    DAT_1803da710 = DAT_1803da700 + DAT_180380fe0 + DAT_1803fa530;
    DAT_1803da714 = DAT_1803fa534 + 0.0;
  }
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  cVar8 = *(char *)(lVar4 + 0x10);
  if (cVar8 == '\0') {
    __dyn_tls_on_demand_init();
    cVar8 = *(char *)(lVar4 + 0x10);
  }
  lVar5 = *(longlong *)(lVar4 + 0xec0);
  if (*(char *)(lVar5 + 0x108) == '\0') {
    DAT_1803fa46d = '\0';
    _DAT_1803fa518 = 0;
  }
  else if (DAT_1803fa46d != '\0') {
    DAT_1803da714 = *(float *)(lVar5 + 0x104) - _DAT_1803fa51c;
    DAT_1803da710 = *(float *)(lVar5 + 0x100) - _DAT_1803fa518;
  }
  if (cVar8 == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar4 + 0xec0);
  *(uint *)(lVar5 + 0x1f48) = *(uint *)(lVar5 + 0x1f48) | 1;
  *(float *)(lVar5 + 0x1f58) = DAT_1803da710;
  *(float *)(lVar5 + 0x1f5c) = DAT_1803da714;
  *(undefined8 *)(lVar5 + 0x1f60) = 0;
  *(undefined4 *)(lVar5 + 0x1f4c) = 1;
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar21 = DAT_180381228;
  fVar7 = DAT_18038120c;
  lVar5 = *(longlong *)(lVar4 + 0xec0);
  local_res8 = 460.0;
  *(uint *)(lVar5 + 0x1f48) = *(uint *)(lVar5 + 0x1f48) | 2;
  *(ulonglong *)(lVar5 + 0x1f68) = CONCAT44(DAT_1803da718._4_4_,(float)DAT_1803da718);
  *(undefined4 *)(lVar5 + 0x1f50) = 1;
  local_resc = 560.0;
  local_res10 = 360.0;
  local_res14 = 440.0;
  FUN_180279900(&local_res10,&local_res8);
  fVar22 = DAT_180380bb0;
  local_res8 = 1.0;
  local_resc = 1.0;
  FUN_18026aad0(2,&local_res8);
  FUN_18026a940(3,DAT_180380fcc);
  FUN_18026a810(2,&DAT_1803dcc98);
  FUN_18026a810(5,&DAT_1803dccd8);
  cVar8 = FUN_180276630("Theme editor##AOS_CustomTheme",&DAT_1803fa547,0x121);
  if (cVar8 == '\0') goto LAB_1801a6bed;
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  cVar8 = *(char *)(lVar4 + 0x10);
  lVar5 = *(longlong *)(lVar4 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar5 + 0x1520) + 0xce) = 1;
  uVar6 = *(undefined8 *)(*(longlong *)(lVar5 + 0x1520) + 0x2c8);
  if (cVar8 == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar4 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar5 + 0x1520) + 0xce) = 1;
  lVar5 = *(longlong *)(lVar5 + 0x1520);
  fVar1 = *(float *)(lVar5 + 0x2c);
  fVar2 = *(float *)(lVar5 + 0x28);
  fVar20 = fVar1 + DAT_1803810b8;
  fVar19 = fVar2 + *(float *)(lVar5 + 0x30);
  local_d8 = CONCAT44(fVar20,fVar2 + 0.0);
  local_f0 = fVar19 - _DAT_180381130;
  uStack_d0 = CONCAT44(fVar1 + *(float *)(lVar5 + 0x34),fVar19);
  local_ec = fVar1;
  local_e8 = fVar19;
  local_e4 = fVar20;
  FUN_1801a5660(&DAT_1803fa46d,&DAT_1803fa518,&local_d8,&local_f0);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  cVar8 = *(char *)(lVar4 + 0x10);
  lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x1520);
  DAT_1803da710 = *(float *)(lVar5 + 0x28);
  DAT_1803da714 = *(float *)(lVar5 + 0x2c);
  if (cVar8 == '\0') {
    __dyn_tls_on_demand_init();
    cVar8 = *(char *)(lVar4 + 0x10);
  }
  fVar3 = *(float *)(*(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x1520) + 0x34);
  if ((fVar21 <= fVar3) && (fVar21 = DAT_180381258, fVar3 <= DAT_180381258)) {
    fVar21 = fVar3;
  }
  if (cVar8 == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar3 = *(float *)(*(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x1520) + 0x30);
  DAT_1803da718._0_4_ = fVar7;
  if ((fVar7 <= fVar3) && (DAT_1803da718._0_4_ = DAT_180381240, fVar3 <= DAT_180381240)) {
    DAT_1803da718._0_4_ = fVar3;
  }
  local_d8 = _DAT_1803dccb8;
  uStack_d0 = _DAT_1803dccc0;
  local_res10 = fVar2 + fVar22;
  local_res8 = fVar19 - fVar22;
  local_res14 = fVar1 + fVar22;
  DAT_1803da718._4_4_ = fVar21;
  local_resc = fVar20;
  uVar18 = FUN_180268ed0(&local_d8);
  uVar24 = 0;
  FUN_180295000(uVar6,&local_res10,&local_res8,uVar18,DAT_180380fc4,0x30);
  local_d8 = _DAT_1803dccd8;
  uStack_d0 = _DAT_1803dcce0;
  local_res8 = fVar19;
  local_resc = fVar20;
  local_res10 = fVar2;
  local_res14 = fVar20;
  uVar18 = FUN_180268ed0(&local_d8);
  FUN_180294c90(uVar6,&local_res10,&local_res8,uVar18,fVar22);
  local_res8 = 22.0;
  local_resc = 14.0;
  FUN_18027f6a0(&local_res8);
  FUN_1802aabb0(&DAT_1803dcd38,"CUSTOM THEME");
  local_res8 = 22.0;
  local_resc = 33.0;
  FUN_18027f6a0(&local_res8);
  FUN_1802aabb0(&DAT_1803dcd48,"Saved with the selected config.");
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_resc = 13.0;
  local_res8 = *(float *)(*(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x1520) + 0x30) -
               _DAT_18038111c;
  FUN_18027f6a0(&local_res8);
  uVar24 = uVar24 & 0xffffff00;
  local_res8 = 76.0;
  local_d8 = _DAT_1803dcd28;
  uStack_d0 = CONCAT44(_DAT_1803dcd34,_DAT_1803dcd30);
  local_resc = 30.0;
  uVar23 = (uint)fVar22 & 0xffffff00;
  cVar8 = FUN_18019cb40("Close##theme_editor_close",9,&local_res8,&local_d8,uVar23,uVar24);
  if (cVar8 != '\0') {
    DAT_1803fa547 = '\0';
  }
  local_res8 = 20.0;
  local_resc = 76.0;
  FUN_18027f6a0(&local_res8);
  FUN_18026a810(3,&DAT_1803dccb8);
  FUN_18026a810(5,&DAT_1803dccd8);
  local_res8 = 18.0;
  local_resc = 16.0;
  FUN_18026aad0(2,&local_res8);
  FUN_18026a940(7,DAT_180380fa8);
  local_res8 = -20.0;
  local_resc = -20.0;
  FUN_180272fa0("##theme_editor_scroll",&local_res8,1,0);
  FUN_1802aabb0(&DAT_1803dcce8,"FOUNDATION");
  cVar8 = FUN_1801a5b80("Canvas",&DAT_1803dcc98);
  cVar9 = FUN_1801a5b80("Navigation",&DAT_1803dcca8);
  cVar10 = FUN_1801a5b80(&DAT_180363ee4,&DAT_1803dccb8);
  cVar11 = FUN_1801a5b80("Control",&DAT_1803dccc8);
  cVar12 = FUN_1801a5b80("Hairline",&DAT_1803dccd8);
  local_res8 = 0.0;
  local_resc = 6.0;
  FUN_1802af260(&local_res8);
  FUN_1802afb40();
  local_res8 = 0.0;
  local_resc = 6.0;
  FUN_1802af260(&local_res8);
  FUN_1802aabb0(&DAT_1803dcce8,"IDENTITY");
  cVar13 = FUN_1801a5b80("Primary",&DAT_1803dcce8);
  cVar14 = FUN_1801a5b80("Primary surface",&DAT_1803dccf8);
  local_res8 = 0.0;
  local_resc = 6.0;
  FUN_1802af260(&local_res8);
  FUN_1802afb40();
  local_res8 = 0.0;
  local_resc = 6.0;
  FUN_1802af260(&local_res8);
  FUN_1802aabb0(&DAT_1803dcce8,"FEEDBACK");
  local_res20 = FUN_1801a5b80("Positive",&DAT_1803dcd08);
  local_res18 = FUN_1801a5b80("Attention",&DAT_1803dcd18);
  uVar15 = FUN_1801a5b80("Critical",&DAT_1803dcd28);
  local_res10 = (float)CONCAT31(local_res10._1_3_,uVar15);
  local_res8 = 0.0;
  local_resc = 6.0;
  FUN_1802af260(&local_res8);
  FUN_1802afb40();
  local_res8 = 0.0;
  local_resc = 6.0;
  FUN_1802af260(&local_res8);
  FUN_1802aabb0(&DAT_1803dcce8,&DAT_1803428b4);
  uVar15 = FUN_1801a5b80("Primary text",&DAT_1803dcd38);
  local_res8 = (float)CONCAT31(local_res8._1_3_,uVar15);
  cVar16 = FUN_1801a5b80("Secondary text",&DAT_1803dcd48);
  local_f0 = 0.0;
  local_ec = 8.0;
  FUN_1802af260(&local_f0);
  local_f0 = 122.0;
  local_d8 = _DAT_1803dcce8;
  uStack_d0 = _DAT_1803dccf0;
  local_ec = 30.0;
  cVar17 = FUN_18019cb40("Reset##theme_reset",0xb,&local_f0,&local_d8,uVar23 & 0xffffff00,
                         uVar24 & 0xffffff00);
  if (cVar17 == '\0') {
    if (((((((((((cVar16 != '\0' || local_res8._0_1_ != '\0') || local_res10._0_1_ != '\0') ||
               local_res18 != '\0') || local_res20 != '\0') || cVar14 != '\0') || cVar13 != '\0') ||
           cVar12 != '\0') || cVar11 != '\0') || cVar10 != '\0') || cVar9 != '\0') || cVar8 != '\0')
    goto LAB_1801a6baf;
  }
  else {
    _DAT_1803dcc98 = _DAT_1803dc978;
    _DAT_1803dcd50 = DAT_1803dca30;
    _DAT_1803dcca0 = _DAT_1803dc980;
    _DAT_1803dcca8 = _DAT_1803dc988;
    PTR_s_Custom_1803dcc90 = s_Custom_180363bb0;
    _DAT_1803dccb0 = _DAT_1803dc990;
    _DAT_1803dccb8 = _DAT_1803dc998;
    _DAT_1803dccc0 = _DAT_1803dc9a0;
    _DAT_1803dccc8 = _DAT_1803dc9a8;
    _DAT_1803dccd0 = _DAT_1803dc9b0;
    _DAT_1803dccd8 = _DAT_1803dc9b8;
    _DAT_1803dcce0 = _DAT_1803dc9c0;
    _DAT_1803dcce8 = _DAT_1803dc9c8;
    _DAT_1803dccf0 = _DAT_1803dc9d0;
    _DAT_1803dccf8 = _DAT_1803dc9d8;
    _DAT_1803dcd00 = _DAT_1803dc9e0;
    _DAT_1803dcd08 = _DAT_1803dc9e8;
    _DAT_1803dcd10 = _DAT_1803dc9f0;
    _DAT_1803dcd18 = _DAT_1803dc9f8;
    _DAT_1803dcd20 = _DAT_1803dca00;
    _DAT_1803dcd28 = _DAT_1803dca08;
    _DAT_1803dcd30 = _DAT_1803dca10;
    _DAT_1803dcd34 = uRam00000001803dca14;
    _DAT_1803dcd38 = _DAT_1803dca18;
    _DAT_1803dcd3c = _DAT_1803dca1c;
    _DAT_1803dcd40 = _DAT_1803dca20;
    _DAT_1803dcd48 = _DAT_1803dca28;
LAB_1801a6baf:
    FUN_180199890();
  }
  FUN_180273410();
  FUN_18026abb0(2);
  FUN_18026a890(2);
LAB_1801a6bed:
  FUN_180278d40();
  FUN_18026a890(2);
  FUN_18026abb0(2);
  return;
}



// 0x1801a5b80  FUN_1801a5b80
// size=1669 thunk=false
// signature: undefined FUN_1801a5b80()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1801a5b80(undefined8 param_1,float *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  char cVar6;
  undefined1 uVar7;
  char cVar8;
  undefined4 uVar9;
  uint uVar10;
  float *pfVar11;
  float *pfVar12;
  longlong lVar13;
  undefined4 extraout_XMM0_Da;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 in_stack_fffffffffffffef8;
  undefined4 uVar23;
  ulonglong uVar21;
  undefined8 uVar22;
  float local_e8 [2];
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  float fStack_cc;
  
  uVar23 = (undefined4)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
  pfVar12 = (float *)&local_e0;
  if (-1 < (int)DAT_1803fb24c) {
    pfVar12 = &DAT_1803fb24c;
  }
  local_e8[0] = 5.60519e-45;
  local_e0 = local_e0 & 0xffffffff00000000;
  pfVar11 = local_e8;
  if ((int)DAT_1803fb24c < 5) {
    pfVar11 = pfVar12;
  }
  DAT_1803fb24c = *pfVar11;
  lVar13 = (longlong)(int)DAT_1803fb24c * 200;
  FUN_18027abf0(param_1);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_e0 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0xec0) + 0x1520) + 0x118);
  fVar19 = (float)local_e0;
  cVar6 = *(char *)(lVar3 + 0x10);
  if (cVar6 == '\0') {
    __dyn_tls_on_demand_init();
    cVar6 = *(char *)(lVar3 + 0x10);
  }
  lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0xec0) + 0x1520);
  if ((*(longlong *)(lVar4 + 0x1c8) != 0) ||
     (pfVar12 = (float *)(lVar4 + 0x280), *(longlong *)(*(longlong *)(lVar3 + 0xec0) + 0x2368) != 0)
     ) {
    pfVar12 = (float *)(lVar4 + 0x250);
  }
  fVar18 = local_e0._4_4_;
  fVar17 = local_e0._4_4_ + DAT_180381078;
  fVar16 = (*pfVar12 - *(float *)(lVar4 + 0x118)) + fVar19;
  local_e8[1] = fVar17;
  local_e8[0] = fVar16;
  if (cVar6 == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar3 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar4 + 0x1520) + 0xce) = 1;
  lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x1520) + 0x2c8);
  local_d8 = *(undefined4 *)(&DAT_1803dc9a8 + lVar13);
  uStack_d4 = *(undefined4 *)(&DAT_1803dc9ac + lVar13);
  uStack_d0 = *(undefined4 *)(&DAT_1803dc9b0 + lVar13);
  fStack_cc = *(float *)(&DAT_1803dc9b4 + lVar13) * DAT_180380a74;
  uVar9 = FUN_180268ed0(&local_d8);
  fVar14 = DAT_180380fa8;
  uVar21 = CONCAT44(uVar23,DAT_180380fa8);
  FUN_180295000(lVar4,&local_e0,local_e8,uVar9,uVar21,0);
  local_d8 = *(undefined4 *)(&DAT_1803dc9b8 + lVar13);
  uStack_d4 = *(undefined4 *)(&DAT_1803dc9bc + lVar13);
  uStack_d0 = *(undefined4 *)(&DAT_1803dc9c0 + lVar13);
  fStack_cc = *(float *)(&DAT_1803dc9c4 + lVar13) * _DAT_180380ad0;
  uVar10 = FUN_180268ed0(&local_d8);
  fVar15 = DAT_180380bb0;
  fVar5 = DAT_180380ac0;
  uVar23 = (undefined4)(uVar21 >> 0x20);
  if ((uVar10 & 0xff000000) != 0) {
    uVar21 = uVar21 & 0xffffffff00000000;
    if ((*(byte *)(lVar4 + 0x30) & 1) == 0) {
      local_e8[1] = fVar17 - _DAT_180380abc;
      local_e8[0] = fVar16 - _DAT_180380abc;
      local_e0 = CONCAT44(fVar18 + DAT_180380ac0,fVar19 + DAT_180380ac0);
    }
    else {
      local_e8[1] = fVar17 - DAT_180380ac0;
      local_e8[0] = fVar16 - DAT_180380ac0;
      local_e0 = CONCAT44(fVar18 + DAT_180380ac0,fVar19 + DAT_180380ac0);
    }
    FUN_180294990(lVar4,&local_e0,local_e8,fVar14,uVar21);
    uVar22 = CONCAT44((int)(uVar21 >> 0x20),fVar15);
    FUN_1802929d0(lVar4,*(undefined8 *)(lVar4 + 0x58),*(undefined4 *)(lVar4 + 0x50),uVar10,uVar22,
                  0x200);
    uVar23 = (undefined4)((ulonglong)uVar22 >> 0x20);
    *(undefined4 *)(lVar4 + 0x50) = 0;
  }
  fVar20 = fVar19 + DAT_180380fd8;
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar3 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar4 + 0x1520) + 0xce) = 1;
  lVar4 = *(longlong *)(lVar4 + 0x1520);
  *(float *)(lVar4 + 0x118) = fVar20;
  *(float *)(lVar4 + 0x11c) = fVar18 + fVar14;
  *(undefined1 *)(lVar4 + 0x159) = 1;
  FUN_1802aabb0(&DAT_1803dca18 + lVar13,&DAT_1803431ac,param_1);
  fVar16 = fVar16 - DAT_1803810d4;
  fVar18 = fVar18 + DAT_180380f90;
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar13 = *(longlong *)(lVar3 + 0xec0);
  local_e8[0] = 44.0;
  local_e8[1] = 20.0;
  uVar7 = 0;
  *(undefined1 *)(*(longlong *)(lVar13 + 0x1520) + 0xce) = 1;
  lVar13 = *(longlong *)(lVar13 + 0x1520);
  *(float *)(lVar13 + 0x118) = fVar16;
  *(float *)(lVar13 + 0x11c) = fVar18;
  *(undefined1 *)(lVar13 + 0x159) = 1;
  cVar6 = FUN_1802be530("##preview",param_2,0x4000,local_e8);
  if (cVar6 != '\0') {
    fVar18 = *param_2;
    if (0.0 <= fVar18) {
      fVar16 = fVar15;
      if (fVar18 <= fVar15) {
        fVar16 = fVar18;
      }
    }
    else {
      fVar16 = 0.0;
    }
    fVar18 = param_2[1];
    if (0.0 <= fVar18) {
      fVar14 = fVar15;
      if (fVar18 <= fVar15) {
        fVar14 = fVar18;
      }
    }
    else {
      fVar14 = 0.0;
    }
    fVar18 = param_2[2];
    if (0.0 <= fVar18) {
      if (fVar18 <= fVar15) {
        fVar15 = fVar18;
      }
    }
    else {
      fVar15 = 0.0;
    }
    FUN_180012ac0(&DAT_1803e7870,0x40,"#%02X%02X%02X",(int)(fVar16 * DAT_1803811c8 + fVar5),
                  CONCAT44(uVar23,(int)(fVar14 * DAT_1803811c8 + fVar5)),
                  (int)(fVar15 * DAT_1803811c8 + fVar5));
    FUN_180280fd0("picker");
  }
  cVar6 = FUN_18019a680("picker");
  if (cVar6 != '\0') {
    FUN_18027f8a0(DAT_1803811d4);
    uVar7 = FUN_1802bbfc0("##picker_color",param_2,0x140100,0);
    FUN_18027f940();
    FUN_1802afb40();
    if (*(char *)(lVar3 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar13 = *(longlong *)(lVar3 + 0xec0);
    local_e8[0] = 0.0;
    local_e8[1] = 0.0;
    puVar1 = (uint *)(lVar13 + 0x1ec0);
    *puVar1 = *puVar1 | 1;
    *(undefined4 *)(lVar13 + 0x1ed8) = 0x432e0000;
    cVar6 = FUN_1802b74e0("##hex_rgb",0,&DAT_1803e7870,0x40,local_e8,0x40,0,0);
    uVar23 = DAT_180381384;
    FUN_18027f5b0(0,DAT_180381384);
    FUN_1802aac00("Hex/RGB");
    FUN_18027f5b0(0,uVar23);
    local_e8[0] = 54.0;
    local_e8[1] = 0.0;
    cVar8 = FUN_1802abf60("Apply",local_e8,0);
    if ((cVar8 != '\0') || (cVar6 != '\0')) {
      cVar6 = FUN_1801a58a0(extraout_XMM0_Da,param_2);
      if (cVar6 != '\0') {
        uVar7 = 1;
      }
    }
    if (DAT_1803facfd == '\0') {
      FUN_180281800();
    }
    else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
      DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
    }
  }
  fVar17 = fVar17 + DAT_180380f40;
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  cVar6 = *(char *)(lVar3 + 0x10);
  lVar13 = *(longlong *)(lVar3 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar13 + 0x1520) + 0xce) = 1;
  lVar13 = *(longlong *)(lVar13 + 0x1520);
  *(float *)(lVar13 + 0x118) = fVar19;
  *(float *)(lVar13 + 0x11c) = fVar17;
  *(undefined1 *)(lVar13 + 0x159) = 1;
  if (cVar6 == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0xec0) + 0x1520);
  iVar2 = *(int *)(lVar3 + 0x108);
  if (iVar2 < 2) {
    FUN_18027e9c0("Calling PopID() too many times!");
  }
  else {
    *(int *)(lVar3 + 0x108) = iVar2 + -1;
  }
  return uVar7;
}



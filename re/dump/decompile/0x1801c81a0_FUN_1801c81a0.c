// 0x1801c81a0  FUN_1801c81a0
// size=1962 thunk=false
// signature: undefined FUN_1801c81a0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_1801c81a0(undefined8 param_1,char *param_2,char *param_3,char param_4,char param_5,
             float *param_6,char param_7)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  undefined1 uVar6;
  char cVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar12;
  char cVar13;
  float *pfVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulonglong in_stack_fffffffffffffee0;
  undefined8 uVar21;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  float local_e4;
  char local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8 [2];
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float *pfVar11;
  
  pfVar14 = local_c8;
  if (-1 < (int)DAT_1803fb24c) {
    pfVar14 = &DAT_1803fb24c;
  }
  local_f0 = 5.60519e-45;
  local_c8[0] = 0.0;
  pfVar11 = &local_f0;
  if ((int)DAT_1803fb24c < 5) {
    pfVar11 = pfVar14;
  }
  DAT_1803fb24c = *pfVar11;
  lVar10 = (longlong)(int)DAT_1803fb24c;
  lVar15 = lVar10 * 200;
  FUN_18027abf0();
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  cVar7 = *(char *)(lVar3 + 0x10);
  if (cVar7 == '\0') {
    __dyn_tls_on_demand_init();
    cVar7 = *(char *)(lVar3 + 0x10);
  }
  lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0xec0) + 0x1520);
  if ((*(longlong *)(lVar4 + 0x1c8) != 0) ||
     (pfVar14 = (float *)(lVar4 + 0x280), *(longlong *)(*(longlong *)(lVar3 + 0xec0) + 0x2368) != 0)
     ) {
    pfVar14 = (float *)(lVar4 + 0x250);
  }
  fVar17 = *pfVar14;
  fVar20 = *(float *)(lVar4 + 0x118);
  if (cVar7 == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar18 = *(float *)(*(longlong *)(lVar3 + 0xec0) + 0x1238);
  fVar19 = fVar18;
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    fVar19 = fVar18 + fVar18;
  }
  fVar19 = fVar19 + DAT_180380f40;
  local_f0 = fVar17 - fVar20;
  local_ec = fVar19;
  uVar6 = FUN_1802c1850("##row",param_4,0,&local_f0);
  cVar7 = FUN_18026ee60(0);
  local_e0 = cVar7;
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_f0 = *(float *)(*(longlong *)(lVar3 + 0xec0) + 0x1f0c);
  fVar17 = *(float *)(*(longlong *)(lVar3 + 0xec0) + 0x1f10);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar20 = *(float *)(*(longlong *)(lVar3 + 0xec0) + 0x1f04);
  fVar1 = *(float *)(*(longlong *)(lVar3 + 0xec0) + 0x1f08);
  local_b8 = local_f0;
  local_c0 = fVar20;
  local_bc = fVar1;
  local_b4 = fVar17;
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar5 = DAT_180380e28;
  lVar4 = *(longlong *)(lVar3 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar4 + 0x1520) + 0xce) = 1;
  lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x1520) + 0x2c8);
  fVar16 = DAT_1803809fc;
  if ((param_4 != '\0') || (fVar16 = DAT_1803809d4, cVar7 != '\0')) {
    local_f0 = *(float *)(&DAT_1803dc9c8 + lVar15);
    local_e4 = fVar16 * *(float *)(&DAT_1803dc9d4 + lVar15);
    local_ec = *(float *)(&DAT_1803dc9cc + lVar15);
    local_e8 = *(undefined4 *)(&DAT_1803dc9d0 + lVar15);
    uVar8 = FUN_180268ed0(&local_f0);
    in_stack_fffffffffffffee0 = in_stack_fffffffffffffee0 & 0xffffffff00000000;
    FUN_180295000(lVar4,&local_c0,&local_b8,uVar8,DAT_180380f00,in_stack_fffffffffffffee0);
    fStack_cc = DAT_180380ad4;
    if (param_4 != '\0') {
      fStack_cc = DAT_180380b68;
    }
    local_d8 = *(float *)(&DAT_1803dc9c8 + lVar15);
    fStack_cc = fStack_cc * *(float *)(&DAT_1803dc9d4 + lVar15);
    fStack_d4 = *(float *)(&DAT_1803dc9cc + lVar15);
    fStack_d0 = *(float *)(&DAT_1803dc9d0 + lVar15);
    local_f0 = fVar20 + fVar5;
    local_ec = fVar17;
    uVar8 = FUN_180268ed0(&local_d8);
    FUN_180295000(lVar4,&local_c0,&local_f0,uVar8,DAT_180380d30,
                  in_stack_fffffffffffffee0 & 0xffffffff00000000);
  }
  fVar16 = DAT_180380ac0;
  fVar17 = DAT_180380fcc;
  if (param_5 != '\0') {
    local_d8 = *param_6;
    fStack_d4 = param_6[1];
    fStack_d0 = param_6[2];
    fStack_cc = param_6[3];
    uVar9 = FUN_180268ed0(&local_d8);
    local_f0 = fVar20 + DAT_180380fdc;
    local_ec = fVar19 * fVar16 + fVar1;
    cVar7 = local_e0;
    fVar17 = _DAT_180381034;
    if ((uVar9 & 0xff000000) != 0) {
      FUN_180293e00(lVar4,&local_f0,fVar5,0,0x30);
      *(int *)(lVar4 + 0x50) = *(int *)(lVar4 + 0x50) + -1;
      FUN_1802938c0(lVar4,*(undefined8 *)(lVar4 + 0x58),*(undefined4 *)(lVar4 + 0x50),uVar9);
      *(undefined4 *)(lVar4 + 0x50) = 0;
      cVar7 = local_e0;
      fVar17 = _DAT_180381034;
    }
  }
  fVar20 = fVar20 + fVar17;
  if (param_7 == '\0') {
LAB_1801c85d4:
    lVar12 = 0;
  }
  else {
    cVar13 = *(char *)(lVar3 + 0x10);
    if (cVar13 == '\0') {
      __dyn_tls_on_demand_init();
      cVar13 = *(char *)(lVar3 + 0x10);
    }
    if (*(int *)(*(longlong *)(*(longlong *)(lVar3 + 0xec0) + 0x60) + 0x68) == 0)
    goto LAB_1801c85d4;
    if (cVar13 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar12 = **(longlong **)(*(longlong *)(*(longlong *)(lVar3 + 0xec0) + 0x60) + 0x70);
  }
  uVar21 = 0;
  if ((cVar7 == '\0') && (param_4 == '\0')) {
    local_d8 = (*(float *)(&DAT_1803dca28 + lVar15) - *(float *)(&DAT_1803dca18 + lVar15)) *
               DAT_180380a1c + *(float *)(&DAT_1803dca18 + lVar15);
    fStack_d4 = (*(float *)(&DAT_1803dca2c + lVar15) - *(float *)(&DAT_1803dca1c + lVar15)) *
                DAT_180380a1c + *(float *)(&DAT_1803dca1c + lVar15);
    fStack_d0 = (*(float *)(&DAT_1803dca30 + lVar10 * 0x19) - *(float *)(&DAT_1803dca20 + lVar15)) *
                DAT_180380a1c + *(float *)(&DAT_1803dca20 + lVar15);
    fStack_cc = (*(float *)((longlong)&DAT_1803dca30 + lVar15 + 4) -
                *(float *)(&DAT_1803dca24 + lVar15)) * DAT_180380a1c +
                *(float *)(&DAT_1803dca24 + lVar15);
  }
  else {
    local_d8 = *(float *)(&DAT_1803dca18 + lVar15);
    fStack_d4 = *(float *)(&DAT_1803dca1c + lVar15);
    fStack_d0 = *(float *)(&DAT_1803dca20 + lVar15);
    fStack_cc = *(float *)(&DAT_1803dca24 + lVar15);
  }
  uVar9 = FUN_180268ed0(&local_d8);
  uVar8 = (undefined4)uVar21;
  local_f0 = fVar20;
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    local_ec = (fVar19 - fVar18) * fVar16 + fVar1;
    if (lVar12 == 0) {
      if ((((uVar9 & 0xff000000) == 0) || (param_2 == (char *)0x0)) || (*param_2 == '\0'))
      goto LAB_1801c88ce;
      goto LAB_1801c88ab;
    }
    if ((((uVar9 & 0xff000000) == 0) || (param_2 == (char *)0x0)) || (*param_2 == '\0'))
    goto LAB_1801c88ce;
    if (fVar18 == 0.0) {
      fVar18 = *(float *)(*(longlong *)(lVar4 + 0x38) + 0x20);
    }
  }
  else {
    local_ec = fVar1 + fVar5;
    if (lVar12 == 0) {
      if ((((uVar9 & 0xff000000) != 0) && (param_2 != (char *)0x0)) && (*param_2 != '\0')) {
        lVar12 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + 0x18);
        fVar17 = *(float *)(*(longlong *)(lVar4 + 0x38) + 0x20);
        goto LAB_1801c874e;
      }
    }
    else if ((((uVar9 & 0xff000000) != 0) && (param_2 != (char *)0x0)) && (*param_2 != '\0')) {
      fVar17 = fVar18;
      if (fVar18 == 0.0) {
        fVar17 = *(float *)(*(longlong *)(lVar4 + 0x38) + 0x20);
      }
LAB_1801c874e:
      local_d8 = *(float *)(lVar4 + 0x60);
      fStack_d4 = *(float *)(lVar4 + 100);
      fStack_d0 = *(float *)(lVar4 + 0x68);
      fStack_cc = *(float *)(lVar4 + 0x6c);
      FUN_18029e990(lVar12,lVar4,fVar17,&local_f0,uVar9,&local_d8,param_2,uVar21,0,uVar8);
    }
    local_d8 = *(float *)(&DAT_1803dca28 + lVar15);
    fStack_d4 = *(float *)(&DAT_1803dca2c + lVar15);
    fStack_d0 = *(float *)(&DAT_1803dca30 + lVar10 * 0x19);
    fStack_cc = *(float *)((longlong)&DAT_1803dca30 + lVar15 + 4);
    uVar9 = FUN_180268ed0(&local_d8);
    local_ec = fVar1 + fVar5 + fVar18;
    local_f0 = fVar20;
    if (((uVar9 & 0xff000000) == 0) || (*param_3 == '\0')) goto LAB_1801c88ce;
    uVar8 = 0;
    uVar21 = 0;
    param_2 = param_3;
LAB_1801c88ab:
    fVar18 = *(float *)(*(longlong *)(lVar4 + 0x38) + 0x20);
    lVar12 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + 0x18);
  }
  local_d8 = *(float *)(lVar4 + 0x60);
  fStack_d4 = *(float *)(lVar4 + 100);
  fStack_d0 = *(float *)(lVar4 + 0x68);
  fStack_cc = *(float *)(lVar4 + 0x6c);
  local_f0 = fVar20;
  FUN_18029e990(lVar12,lVar4,fVar18,&local_f0,uVar9,&local_d8,param_2,uVar21,0,uVar8);
LAB_1801c88ce:
  if (*(char *)(lVar3 + 0x10) == '\0') {
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
  return uVar6;
}



// 0x1801a2d90  FUN_1801a2d90
// size=2083 thunk=false
// signature: undefined FUN_1801a2d90()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1801a2d90(void)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char cVar14;
  char cVar15;
  undefined4 uVar16;
  longlong lVar17;
  float *pfVar18;
  size_t sVar19;
  float *pfVar20;
  undefined *puVar21;
  undefined8 ****ppppuVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 *in_R9;
  uint uVar25;
  ulonglong uVar26;
  undefined1 uVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  float in_stack_00000030;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  float local_114;
  float local_110 [2];
  undefined8 local_108;
  float fStack_100;
  float fStack_fc;
  undefined4 uStack_f8;
  undefined8 ***local_f0;
  undefined8 uStack_e8;
  longlong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_1803da4c0 ^ (ulonglong)auStack_138;
  FUN_18019a460("Hitboxes",0);
  local_114 = 5.60519e-45;
  iVar28 = 0;
  local_110[0] = 0.0;
  pfVar20 = local_110;
  if (-1 < (int)DAT_1803fb24c) {
    pfVar20 = &DAT_1803fb24c;
  }
  pfVar18 = &local_114;
  if ((int)DAT_1803fb24c < 5) {
    pfVar18 = pfVar20;
  }
  DAT_1803fb24c = *pfVar18;
  lVar17 = (longlong)(int)DAT_1803fb24c;
  local_108 = lVar17 * 200;
  FUN_18027abf0("hitboxes");
  local_110[0] = 1.5;
  local_114 = 0.75;
  pfVar20 = &local_114;
  if (DAT_180380b20 <= DAT_1803da6a4) {
    pfVar20 = &DAT_1803da6a4;
  }
  pfVar18 = local_110;
  if (DAT_1803da6a4 <= DAT_180380c50) {
    pfVar18 = pfVar20;
  }
  fVar30 = *pfVar18;
  in_stack_00000030 = fVar30 * in_stack_00000030;
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar11 = *(longlong *)(*(longlong *)(lVar10 + 0xec0) + 0x1520);
  fVar2 = *(float *)(lVar11 + 0x11c);
  fVar3 = *(float *)(lVar11 + 0x2c);
  fVar4 = *(float *)(lVar11 + 0x9c);
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar11 = *(longlong *)(*(longlong *)(lVar10 + 0xec0) + 0x1520);
  fVar23 = *(float *)(lVar11 + 0x118);
  fVar5 = *(float *)(lVar11 + 0x11c);
  local_114 = fVar23;
  FUN_1802af4c0();
  FUN_1802aabb0(&DAT_1803dca28 + lVar17 * 200,&DAT_1803431ac,"Hitboxes");
  FUN_18027f5b0(0,DAT_180381384);
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar17 = *(longlong *)(*(longlong *)(lVar10 + 0xec0) + 0x1520);
  fVar29 = *(float *)(lVar17 + 0x280);
  fVar6 = *(float *)(lVar17 + 0x28);
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar17 = *(longlong *)(lVar10 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar17 + 0x1520) + 0xce) = 1;
  lVar17 = *(longlong *)(lVar17 + 0x1520);
  *(float *)(lVar17 + 0x118) =
       (*(float *)(lVar17 + 0x28) - *(float *)(lVar17 + 0x98)) +
       ((fVar29 - fVar6) - in_stack_00000030);
  *(undefined1 *)(lVar17 + 0x159) = 1;
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar17 = *(longlong *)(lVar10 + 0xec0);
  puVar1 = (uint *)(lVar17 + 0x1ec0);
  *puVar1 = *puVar1 | 1;
  *(float *)(lVar17 + 0x1ed8) = in_stack_00000030;
  uStack_e8 = 0;
  local_e0 = 0;
  local_d8 = 0xf;
  local_f0 = (undefined8 ****)0x0;
  if (((char *)*in_R9 != (char *)0x0) && (*(char *)*in_R9 != '\0')) {
    iVar28 = 1;
    sVar19 = strlen(PTR_DAT_1803e7800);
    FUN_18021aef0(&local_f0,PTR_DAT_1803e7800,sVar19);
  }
  if (((char *)in_R9[1] != (char *)0x0) && (*(char *)in_R9[1] != '\0')) {
    iVar28 = iVar28 + 1;
    if (local_e0 != 0) {
      FUN_18021aef0(&local_f0,&DAT_1803467d0,2);
    }
    sVar19 = strlen(PTR_s_Chest_1803e7808);
    FUN_18021aef0(&local_f0,PTR_s_Chest_1803e7808,sVar19);
  }
  if (((char *)in_R9[2] != (char *)0x0) && (*(char *)in_R9[2] != '\0')) {
    iVar28 = iVar28 + 1;
    if (local_e0 != 0) {
      FUN_18021aef0(&local_f0,&DAT_1803467d0,2);
    }
    sVar19 = strlen(PTR_s_Stomach_1803e7810);
    FUN_18021aef0(&local_f0,PTR_s_Stomach_1803e7810,sVar19);
  }
  if (((char *)in_R9[3] != (char *)0x0) && (*(char *)in_R9[3] != '\0')) {
    iVar28 = iVar28 + 1;
    if (local_e0 != 0) {
      FUN_18021aef0(&local_f0,&DAT_1803467d0,2);
    }
    sVar19 = strlen(PTR_DAT_1803e7818);
    FUN_18021aef0(&local_f0,PTR_DAT_1803e7818,sVar19);
  }
  if (((char *)in_R9[4] != (char *)0x0) && (*(char *)in_R9[4] != '\0')) {
    iVar28 = iVar28 + 1;
    if (local_e0 != 0) {
      FUN_18021aef0(&local_f0,&DAT_1803467d0,2);
    }
    sVar19 = strlen(PTR_DAT_1803e7820);
    FUN_18021aef0(&local_f0,PTR_DAT_1803e7820,sVar19);
  }
  if (iVar28 == 0) {
    uVar24 = 4;
    puVar21 = &DAT_18033ea58;
  }
  else {
    if (iVar28 != 5) goto LAB_1801a31a5;
    uVar24 = 3;
    puVar21 = &DAT_180363ce8;
  }
  FUN_180212700(&local_f0,puVar21,uVar24);
LAB_1801a31a5:
  uVar27 = 0;
  local_118 = 0;
  ppppuVar22 = &local_f0;
  if (0xf < local_d8) {
    ppppuVar22 = (undefined8 ****)local_f0;
  }
  cVar14 = FUN_1802b0590("##value",ppppuVar22,0);
  lVar17 = local_108;
  fVar29 = DAT_180380ac0;
  if (cVar14 != '\0') {
    uVar26 = 0;
    do {
      if ((char *)in_R9[uVar26] != (char *)0x0) {
        cVar14 = *(char *)in_R9[uVar26];
        FUN_18027ae00(uVar26);
        if (cVar14 != '\0') {
          if (*(char *)(lVar10 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar11 = *(longlong *)(lVar10 + 0xec0);
          fStack_100 = *(float *)(lVar11 + 0xdb4);
          fStack_fc = *(float *)(lVar11 + 0xdb8);
          uStack_f8 = *(undefined4 *)(lVar11 + 0xdbc);
          local_108 = (ulonglong)*(uint *)(lVar11 + 0xdb0) << 0x20;
          FUN_18028a220(lVar11 + 0x1fc8,&local_108);
          uVar27 = local_118;
          if (*(int *)(lVar11 + 0x1fc4) != 0) {
            uVar16 = *(undefined4 *)(&DAT_1803dc9cc + lVar17);
            uVar12 = *(undefined4 *)(&DAT_1803dc9d0 + lVar17);
            uVar13 = *(undefined4 *)(&DAT_1803dc9d4 + lVar17);
            *(undefined4 *)(lVar11 + 0xdb0) = *(undefined4 *)(&DAT_1803dc9c8 + lVar17);
            *(undefined4 *)(lVar11 + 0xdb4) = uVar16;
            *(undefined4 *)(lVar11 + 0xdb8) = uVar12;
            *(undefined4 *)(lVar11 + 0xdbc) = uVar13;
          }
        }
        local_110[0] = 0.0;
        local_110[1] = 0.0;
        cVar15 = FUN_1802c1850((&PTR_DAT_1803e7800)[uVar26],cVar14,1,local_110);
        if (cVar15 != '\0') {
          *(bool *)in_R9[uVar26] = cVar14 == '\0';
          uVar27 = 1;
          local_118 = 1;
        }
        if (cVar14 != '\0') {
          if (*(char *)(lVar10 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          fVar23 = *(float *)(*(longlong *)(lVar10 + 0xec0) + 0x1f0c);
          fVar6 = *(float *)(*(longlong *)(lVar10 + 0xec0) + 0x1f10);
          if (*(char *)(lVar10 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          fVar7 = *(float *)(*(longlong *)(lVar10 + 0xec0) + 0x1f08);
          if (*(char *)(lVar10 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          fVar8 = *(float *)(*(longlong *)(lVar10 + 0xec0) + 0x1238);
          if (*(char *)(lVar10 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          local_108 = *(longlong *)(&DAT_1803dc9c8 + lVar17);
          fStack_100 = *(float *)(&DAT_1803dc9d0 + lVar17);
          fStack_fc = *(float *)(&DAT_1803dc9d4 + lVar17) *
                      *(float *)(*(longlong *)(lVar10 + 0xec0) + 0xc84);
          uVar16 = FUN_180268ed0(&local_108);
          if (*(char *)(lVar10 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          fVar9 = *(float *)(*(longlong *)(lVar10 + 0xec0) + 0xcc4);
          if (*(char *)(lVar10 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar11 = *(longlong *)(lVar10 + 0xec0);
          *(undefined1 *)(*(longlong *)(lVar11 + 0x1520) + 0xce) = 1;
          FUN_18029f350(*(undefined8 *)(*(longlong *)(lVar11 + 0x1520) + 0x2c8),
                        CONCAT44(((fVar6 - fVar7) - fVar8) * fVar29 + fVar7,(fVar23 - fVar8) - fVar9
                                ),uVar16,fVar8);
          FUN_18026a890(1);
        }
        if (*(char *)(lVar10 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar11 = *(longlong *)(*(longlong *)(lVar10 + 0xec0) + 0x1520);
        iVar28 = *(int *)(lVar11 + 0x108);
        if (iVar28 < 2) {
          FUN_18027e9c0("Calling PopID() too many times!");
        }
        else {
          *(int *)(lVar11 + 0x108) = iVar28 + -1;
        }
      }
      uVar25 = (int)uVar26 + 1;
      uVar26 = (ulonglong)uVar25;
    } while ((int)uVar25 < 5);
    FUN_1802b1130();
    fVar23 = local_114;
  }
  cVar14 = FUN_18026ee60(0);
  if (cVar14 != '\0') {
    FUN_180280d00(&DAT_1803431ac,
                  "Which hitboxes the aimbot may shoot.\nClick entries to tick them, the list stays open."
                 );
  }
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar29 = *(float *)(*(longlong *)(lVar10 + 0xec0) + 0xcc8);
  fVar30 = fVar30 * DAT_18038104c;
  fVar29 = fVar29 + fVar29 + *(float *)(*(longlong *)(lVar10 + 0xec0) + 0x1238) + DAT_180380e28;
  if (fVar30 <= fVar29) {
    fVar30 = fVar29;
  }
  FUN_1801a1860(fVar30 + (fVar2 - fVar3) + fVar4);
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar2 = *(float *)(*(longlong *)(*(longlong *)(lVar10 + 0xec0) + 0x1520) + 0x28);
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar17 = *(longlong *)(*(longlong *)(lVar10 + 0xec0) + 0x1520);
  local_108 = CONCAT44(fVar5,fVar23);
  fStack_100 = (*(float *)(lVar17 + 0x280) - *(float *)(lVar17 + 0x28)) + fVar2;
  fStack_fc = fVar5 + fVar30;
  FUN_18019a7a0("Hitboxes",&local_108);
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar17 = *(longlong *)(*(longlong *)(lVar10 + 0xec0) + 0x1520);
  iVar28 = *(int *)(lVar17 + 0x108);
  if (iVar28 < 2) {
    FUN_18027e9c0("Calling PopID() too many times!");
  }
  else {
    *(int *)(lVar17 + 0x108) = iVar28 + -1;
  }
  FUN_18020e450(&local_f0);
  return uVar27;
}



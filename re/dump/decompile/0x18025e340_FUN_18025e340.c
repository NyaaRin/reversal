// 0x18025e340  FUN_18025e340
// size=1521 thunk=false
// signature: undefined FUN_18025e340()
// status: ok


undefined1 FUN_18025e340(undefined8 *param_1,undefined8 *param_2,float param_3,char param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined4 uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  byte bVar11;
  undefined4 uVar12;
  longlong lVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fVar23;
  float fVar24;
  undefined8 local_res8;
  float local_res10;
  float local_res14;
  undefined4 local_res18;
  undefined1 local_res20;
  undefined *puVar25;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  float fStack_b4;
  
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar7 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_res8 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar7 + 0xec0) + 0x1520) + 0x118);
  if (*(char *)(lVar7 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar13 = *(longlong *)(lVar7 + 0xec0);
  fVar23 = *(float *)(lVar13 + 0xcc8) + *(float *)(lVar13 + 0xcc8) + *(float *)(lVar13 + 0x1238) +
           *(float *)(lVar13 + 0xcd8);
  local_res10 = param_3;
  local_res14 = fVar23;
  local_res20 = FUN_1802ac3c0("suggestion",&local_res10);
  if (*(char *)(lVar7 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  cVar4 = *(char *)(lVar7 + 0x10);
  lVar13 = *(longlong *)(lVar7 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar13 + 0x1520) + 0xce) = 1;
  uVar8 = *(undefined8 *)(*(longlong *)(lVar13 + 0x1520) + 0x2c8);
  if (cVar4 == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar9 = *(undefined8 *)(*(longlong *)(lVar7 + 0xec0) + 0x1228);
  if (*(char *)(lVar7 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar3 = *(undefined4 *)(*(longlong *)(lVar7 + 0xec0) + 0x1238);
  if (*(char *)(lVar7 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  puVar25 = &DAT_18037cafc;
  FUN_18029e350(&local_res10,*(undefined8 *)(*(longlong *)(lVar7 + 0xec0) + 0x1228),
                *(undefined4 *)(*(longlong *)(lVar7 + 0xec0) + 0x1238),DAT_180381308,DAT_180381384,
                &DAT_18037cafc,0,0,0);
  fVar10 = local_res8._4_4_;
  fVar24 = (float)local_res8;
  fVar22 = local_res10 + DAT_180380ba8;
  if (param_4 != '\0') {
    uVar12 = FUN_18026a6a0(0x19,DAT_180380bb0);
    local_res10 = fVar24 + param_3;
    local_res14 = fVar10 + fVar23;
    FUN_180295000(uVar8,&local_res8,&local_res10,uVar12,0,(ulonglong)puVar25 & 0xffffffff00000000);
  }
  if (*(char *)(lVar7 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pbVar14 = (byte *)*param_1;
  fVar24 = fVar24 + *(float *)(*(longlong *)(lVar7 + 0xec0) + 0xcc4);
  pbVar16 = (byte *)*param_2;
  local_res8 = CONCAT44(fVar10 + *(float *)(*(longlong *)(lVar7 + 0xec0) + 0xcc8),fVar24);
  pbVar1 = pbVar14 + param_1[1];
  pbVar2 = pbVar16 + param_2[1];
  if ((((2 < (longlong)param_1[1]) && (*pbVar14 == 0xef)) && (pbVar14[1] == 0xbb)) &&
     (pbVar14[2] == 0xbf)) {
    pbVar14 = pbVar14 + 3;
  }
  if (((2 < (longlong)param_2[1]) && (*pbVar16 == 0xef)) &&
     ((pbVar16[1] == 0xbb && (pbVar16[2] == 0xbf)))) {
    pbVar16 = pbVar16 + 3;
  }
  do {
    if (pbVar1 <= pbVar14) {
      return local_res20;
    }
    uVar17 = (ushort)(char)*pbVar14;
    if ((char)*pbVar14 < '\0') {
      pbVar15 = pbVar14 + 1;
      if ((pbVar15 < pbVar1) && ((*pbVar14 & 0xe0) == 0xc0)) {
        uVar17 = (ushort)(*pbVar14 & 0x1f) << 6 | (ushort)(*pbVar15 & 0x3f);
        pbVar15 = pbVar14 + 2;
      }
      else if ((pbVar14 + 2 < pbVar1) && ((*pbVar14 & 0xf0) == 0xe0)) {
        uVar17 = ((ushort)(*pbVar15 & 0x3f) | (short)(char)*pbVar14 << 6) << 6 |
                 (ushort)(pbVar14[2] & 0x3f);
        pbVar15 = pbVar14 + 3;
      }
      else if ((pbVar14 + 3 < pbVar1) && ((*pbVar14 & 0xf8) == 0xf0)) {
        uVar17 = 0xfffd;
        pbVar15 = pbVar14 + 4;
      }
      else {
        uVar17 = 0xfffd;
      }
    }
    else {
      pbVar15 = pbVar14 + 1;
    }
    if (*(char *)(lVar7 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    uVar21 = 0xfffd;
    lVar13 = *(longlong *)(lVar7 + 0xec0);
    local_c0 = *(undefined4 *)(lVar13 + 0xdb0);
    uStack_bc = *(undefined4 *)(lVar13 + 0xdb4);
    uStack_b8 = *(undefined4 *)(lVar13 + 0xdb8);
    fStack_b4 = *(float *)(lVar13 + 0xdbc) * *(float *)(lVar13 + 0xc84);
    local_res18 = FUN_180268ed0(&local_c0);
    uVar12 = local_res18;
    if (pbVar16 < pbVar2) {
      uVar20 = (uint)(char)*pbVar16;
      pbVar14 = pbVar16 + 1;
      if ((char)*pbVar16 < '\0') {
        if ((pbVar14 < pbVar2) && ((*pbVar16 & 0xe0) == 0xc0)) {
          bVar11 = *pbVar14;
          uVar19 = (ushort)(*pbVar16 & 0x1f);
          pbVar14 = pbVar16 + 2;
LAB_18025e771:
          uVar20 = (uint)(ushort)(uVar19 << 6 | (ushort)(bVar11 & 0x3f));
          goto LAB_18025e77f;
        }
        if ((pbVar16 + 2 < pbVar2) && ((*pbVar16 & 0xf0) == 0xe0)) {
          bVar5 = *pbVar14;
          pbVar14 = pbVar16 + 3;
          bVar11 = pbVar16[2];
          uVar19 = (ushort)(bVar5 & 0x3f) | (short)(char)*pbVar16 << 6;
          goto LAB_18025e771;
        }
        if ((pbVar16 + 3 < pbVar2) && ((*pbVar16 & 0xf8) == 0xf0)) {
          pbVar14 = pbVar16 + 4;
        }
        else {
          uVar21 = uVar21 & 0xffff;
        }
LAB_18025e7bf:
        lVar13 = FUN_180261490(extraout_XMM0_Da,uVar21 & 0xffff);
        uVar18 = (ushort)uVar21;
        uVar12 = extraout_XMM0_Da_00;
        if ((lVar13 != 0) && (iVar6 = *(int *)(lVar13 + 8), iVar6 != 0)) {
          if (iVar6 == 0xffff) {
            uVar18 = uVar18 | 1;
          }
          else {
            uVar18 = (short)iVar6 + uVar18;
          }
        }
      }
      else {
LAB_18025e77f:
        uVar19 = (ushort)uVar20;
        uVar21 = uVar20;
        if (0x7e < uVar19) goto LAB_18025e7bf;
        uVar12 = extraout_XMM0_Da;
        uVar18 = uVar19 | 0x20;
        if (0x19 < (uVar20 & 0xffff) - 0x41) {
          uVar18 = uVar19;
        }
      }
      uVar19 = uVar17;
      if (uVar17 < 0x7f) {
        if (uVar17 - 0x41 < 0x1a) {
          uVar19 = uVar17 | 0x20;
        }
      }
      else {
        lVar13 = FUN_180261490(uVar12,uVar17);
        if ((lVar13 != 0) && (iVar6 = *(int *)(lVar13 + 8), iVar6 != 0)) {
          if (iVar6 == 0xffff) {
            uVar19 = uVar17 | 1;
          }
          else {
            uVar19 = (short)iVar6 + uVar17;
          }
        }
      }
      uVar12 = local_res18;
      if (uVar18 == uVar19) {
        lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar13 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar13 = *(longlong *)(lVar13 + 0xec0);
        local_c0 = *(undefined4 *)(lVar13 + 0x10e0);
        uStack_bc = *(undefined4 *)(lVar13 + 0x10e4);
        uStack_b8 = *(undefined4 *)(lVar13 + 0x10e8);
        fStack_b4 = *(float *)(lVar13 + 0x10ec) * *(float *)(lVar13 + 0xc84);
        uVar12 = FUN_180268ed0(&local_c0);
        pbVar16 = pbVar14;
      }
    }
    FUN_18029e680(uVar9,uVar8,uVar3,&local_res8,uVar12,uVar17,0);
    fVar24 = fVar24 + (float)(int)fVar22;
    local_res8 = CONCAT44(local_res8._4_4_,fVar24);
    pbVar14 = pbVar15;
  } while( true );
}



// 0x1801ed5d0  FUN_1801ed5d0
// size=678 thunk=false
// signature: undefined FUN_1801ed5d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1801ed5d0(undefined8 param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  byte bVar16;
  ulonglong uVar17;
  longlong *plVar18;
  int *piVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  longlong lVar22;
  undefined1 auStack_208 [32];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8 [9];
  undefined1 uStack_16f;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_208;
  if (DAT_1803fa3d8 == (code *)0x0) {
    return local_38 & 0xffffffffffffff00;
  }
  if (DAT_1803ff270 == '\0') {
    uVar17 = (*DAT_1803fa3d8)(param_1,param_2,param_3);
    return uVar17;
  }
  cVar15 = FUN_180129a60();
  if (cVar15 == '\0') {
LAB_1801ed6a6:
    bVar13 = false;
  }
  else {
    local_1c8 = 0x93fd561a96ab0c67;
    local_1c0 = 0xffac8367807810dc;
    plVar18 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1e8,&local_1c8);
    plVar18 = (longlong *)FUN_180241a30(*plVar18 + 0x28,local_1d8,&local_1c0);
    piVar19 = (int *)FUN_1802029c0(*plVar18 + 0x28);
    if (*piVar19 != 4) goto LAB_1801ed6a6;
    bVar13 = true;
  }
  cVar15 = FUN_180129a60();
  if (cVar15 != '\0') {
    local_1c0 = 0x93fd561a96ab0c67;
    local_1c8 = 0xffac8367807810dc;
    plVar18 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1d8,&local_1c0);
    plVar18 = (longlong *)FUN_180241a30(*plVar18 + 0x28,local_1e8,&local_1c8);
    piVar19 = (int *)FUN_1802029c0(*plVar18 + 0x28);
    if ((*piVar19 == 4) && (DAT_180409884 == 0)) {
      bVar14 = true;
      goto LAB_1801ed70a;
    }
  }
  bVar14 = false;
LAB_1801ed70a:
  if ((bVar13) || (DAT_1803fa451 != '\0')) {
    lVar22 = 3;
    puVar20 = param_2;
    puVar21 = local_1b8;
    do {
      uVar9 = puVar20[1];
      uVar10 = puVar20[2];
      uVar11 = puVar20[3];
      *puVar21 = *puVar20;
      puVar21[1] = uVar9;
      uVar9 = puVar20[4];
      uVar12 = puVar20[5];
      puVar21[2] = uVar10;
      puVar21[3] = uVar11;
      uVar10 = puVar20[6];
      uVar11 = puVar20[7];
      puVar21[4] = uVar9;
      puVar21[5] = uVar12;
      uVar9 = puVar20[8];
      uVar12 = puVar20[9];
      puVar21[6] = uVar10;
      puVar21[7] = uVar11;
      uVar10 = puVar20[10];
      uVar11 = puVar20[0xb];
      puVar21[8] = uVar9;
      puVar21[9] = uVar12;
      uVar1 = *(undefined4 *)(puVar20 + 0xc);
      uVar2 = *(undefined4 *)((longlong)puVar20 + 100);
      uVar3 = *(undefined4 *)(puVar20 + 0xd);
      uVar4 = *(undefined4 *)((longlong)puVar20 + 0x6c);
      puVar21[10] = uVar10;
      puVar21[0xb] = uVar11;
      uVar5 = *(undefined4 *)(puVar20 + 0xe);
      uVar6 = *(undefined4 *)((longlong)puVar20 + 0x74);
      uVar7 = *(undefined4 *)(puVar20 + 0xf);
      uVar8 = *(undefined4 *)((longlong)puVar20 + 0x7c);
      *(undefined4 *)(puVar21 + 0xc) = uVar1;
      *(undefined4 *)((longlong)puVar21 + 100) = uVar2;
      *(undefined4 *)(puVar21 + 0xd) = uVar3;
      *(undefined4 *)((longlong)puVar21 + 0x6c) = uVar4;
      *(undefined4 *)(puVar21 + 0xe) = uVar5;
      *(undefined4 *)((longlong)puVar21 + 0x74) = uVar6;
      *(undefined4 *)(puVar21 + 0xf) = uVar7;
      *(undefined4 *)((longlong)puVar21 + 0x7c) = uVar8;
      lVar22 = lVar22 + -1;
      puVar20 = puVar20 + 0x10;
      puVar21 = puVar21 + 0x10;
    } while (lVar22 != 0);
    if (bVar13) {
      if (DAT_1803fa451 == '\0') {
        DAT_1803f925c = *(undefined1 *)((longlong)param_2 + 0x49);
        DAT_1803fa451 = '\x01';
        FUN_180014410("[Fullbright/ConfigHook] captured=%u force=%d\n",DAT_1803f925c,param_3);
      }
      uStack_16f = DAT_1803f925c;
      if (bVar14) {
        uStack_16f = 1;
      }
      bVar16 = (*DAT_1803fa3d8)(param_1,local_1b8,param_3);
    }
    else {
      uStack_16f = DAT_1803f925c;
      bVar16 = (*DAT_1803fa3d8)(param_1,local_1b8,param_3);
      FUN_180014410("[Fullbright/ConfigHook] restored=%u force=%d result=%d\n",uStack_16f,param_3,
                    bVar16 != 0);
      DAT_1803fa451 = '\0';
    }
    uVar17 = (ulonglong)bVar16;
  }
  else {
    uVar17 = (*DAT_1803fa3d8)(param_1,param_2,param_3);
  }
  return uVar17;
}



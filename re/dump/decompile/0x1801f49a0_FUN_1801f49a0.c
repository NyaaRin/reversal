// 0x1801f49a0  FUN_1801f49a0
// size=2458 thunk=false
// signature: undefined FUN_1801f49a0()
// status: ok


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801f49a0(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                  undefined1 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  longlong *plVar11;
  float *pfVar12;
  longlong lVar13;
  float *pfVar14;
  ulonglong uVar15;
  int *piVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_1b68 [32];
  undefined1 *local_1b48;
  char *local_1b40;
  char *local_1b38;
  char local_1b28;
  char local_1b27;
  char local_1b26;
  char local_1b25;
  int local_1b24;
  undefined8 local_1b20;
  int local_1b18;
  float local_1b14;
  float local_1b10;
  int local_1b0c;
  int local_1b08;
  undefined8 local_1b00;
  longlong local_1af8;
  undefined1 *local_1af0;
  undefined1 auStack_1ae8 [64];
  undefined4 local_1aa8;
  undefined4 local_1aa4;
  undefined4 local_1aa0;
  longlong local_1a98;
  undefined4 local_1a90;
  undefined4 local_1a88;
  undefined4 local_1a84;
  undefined4 local_1a80;
  undefined1 local_1a78 [16];
  longlong local_1a68 [64];
  undefined1 local_1868 [6144];
  ulonglong local_68;
  
  uVar4 = DAT_1803fa378;
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_1b68;
  local_1b20 = DAT_1803fa378;
  local_1b25 = DAT_1803ff232;
  local_1b28 = '\0';
  local_1b27 = '\0';
  local_1b26 = '\0';
  local_1b38 = &local_1b27;
  local_1b40 = &local_1b28;
  local_1b48 = param_5;
  local_1b00 = param_2;
  FUN_1801f4610(DAT_1803fa378);
  if (((((((DAT_1803fa668 == (longlong *)0x0) ||
          (cVar6 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar6 == '\0')) ||
         (iVar9 = *(int *)(param_4 + 0x44), iVar8 = (**(code **)(*DAT_1803fa668 + 0x60))(),
         iVar9 != iVar8)) ||
        ((param_5 == (undefined1 *)0x0 || (cVar6 = FUN_1800bee10(), cVar6 == '\0')))) ||
       (cVar6 = FUN_1800b8160(), cVar6 == '\0')) ||
      (((DAT_180409ce4 == '\0' || (DAT_1804236a5 != '\0')) ||
       ((DAT_180423650 != 0 ||
        (((DAT_1804236a0 != 0 || (DAT_1803fa46f != '\0')) || (DAT_1803fa598 == (longlong *)0x0))))))
      )) || (DAT_1803f9280 == (longlong *)0x0)) {
    fVar17 = DAT_180380bb0;
    lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (((*(char *)(lVar13 + 0xf48) != '\0') && (DAT_1803fa598 != (longlong *)0x0)) &&
       (DAT_1803f9280 != (longlong *)0x0)) {
      iVar9 = *(int *)(lVar13 + 0xf0c);
      plVar11 = *(longlong **)(lVar13 + 0xf28);
      if (plVar11 == (longlong *)0x0) {
        plVar11 = *(longlong **)(lVar13 + 0xf40);
      }
      local_1a98 = lVar13 + 0xf18;
      fVar18 = DAT_180380bb0;
      if (iVar9 != 1) {
        local_1b10 = 1.0;
        local_1b14 = 0.05;
        fVar18 = *(float *)(lVar13 + 0xf10);
        pfVar14 = &local_1b14;
        if (DAT_1803809c4 <= fVar18) {
          pfVar14 = (float *)(lVar13 + 0xf10);
        }
        pfVar12 = &local_1b10;
        if (fVar18 <= DAT_180380bb0) {
          pfVar12 = pfVar14;
        }
        fVar18 = *pfVar12;
      }
      local_1b27 = '\x01';
      (**(code **)(*DAT_1803f9280 + 0x20))(DAT_1803f9280,fVar18);
      if (iVar9 == 1) {
        local_1a98 = 0x3f8000003f800000;
        local_1a90 = 0x3f800000;
        local_1b28 = '\x01';
        (**(code **)(*DAT_1803fa598 + 8))(DAT_1803fa598,0,0);
        (**(code **)(*DAT_1803f9280 + 0x30))(DAT_1803f9280,&local_1a98);
        local_1b24 = 0;
        iVar9 = 0;
        if (((local_1b25 != '\0') && (iVar9 = 0, DAT_1803f9250 != (longlong *)0x0)) &&
           (*(longlong *)(param_4 + 0x20) != 0)) {
          iVar9 = (**(code **)(*DAT_1803f9250 + 0x78))();
          if (iVar9 < 0) {
            iVar9 = 0;
            local_1b24 = 0;
          }
          else {
            if (iVar9 < 0x41) {
              local_1b24 = iVar9;
              if (iVar9 < 1) goto LAB_1801f4e1f;
            }
            else {
              local_1b24 = 0x40;
            }
            iVar9 = local_1b24;
            (**(code **)(*DAT_1803f9250 + 0x80))
                      (DAT_1803f9250,*(undefined8 *)(param_4 + 0x20),local_1b24,local_1a68);
          }
        }
LAB_1801f4e1f:
        iVar8 = 0;
        while (local_1b0c = iVar8, iVar8 < iVar9) {
          plVar11 = (longlong *)local_1a68[iVar8];
          if (plVar11 == (longlong *)0x0) {
            if (0x3f < (ulonglong)(longlong)iVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_1802d8348();
            }
            auStack_1ae8[iVar8] = 0;
            iVar8 = iVar8 + 1;
          }
          else {
            uVar7 = (**(code **)(*plVar11 + 0xf0))(plVar11,0x8000);
            auStack_1ae8[iVar8] = uVar7;
            (**(code **)(*(longlong *)local_1a68[iVar8] + 0xe8))
                      ((longlong *)local_1a68[iVar8],0x8000);
            iVar8 = iVar8 + 1;
          }
        }
        if (DAT_1803fa630 != (longlong *)0x0) {
          local_1b26 = '\x01';
          (**(code **)(*DAT_1803fa630 + 0x240))(DAT_1803fa630,1,0);
        }
        cVar6 = local_1b25;
        if (local_1b25 != '\0') {
          FUN_1801e95f0(0);
        }
        local_1b48 = param_5;
        FUN_1801f3560(local_1b20,local_1b00,param_3,param_4);
        if (cVar6 != '\0') {
          FUN_1801e95f0(1);
        }
        if (DAT_1803fa630 != (longlong *)0x0) {
          (**(code **)(*DAT_1803fa630 + 0x240))(DAT_1803fa630,0,1);
        }
        for (iVar8 = 0; local_1b08 = iVar8, iVar8 < iVar9; iVar8 = iVar8 + 1) {
          if ((longlong *)local_1a68[iVar8] != (longlong *)0x0) {
            (**(code **)(*(longlong *)local_1a68[iVar8] + 0xe8))();
          }
        }
      }
      else {
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0xe8))(plVar11,0x8000,1);
        }
        local_1b28 = '\x01';
        (**(code **)(*DAT_1803fa598 + 8))(DAT_1803fa598,plVar11,0);
        (**(code **)(*DAT_1803f9280 + 0x30))(DAT_1803f9280,lVar13 + 0xf30);
        if (DAT_1803fa630 != (longlong *)0x0) {
          local_1b26 = '\x01';
          (**(code **)(*DAT_1803fa630 + 0x240))(DAT_1803fa630,1,0);
        }
        cVar6 = local_1b25;
        if (local_1b25 != '\0') {
          FUN_1801e95f0(0);
        }
        uVar5 = local_1b00;
        uVar4 = local_1b20;
        local_1b48 = param_5;
        FUN_1801f3560(local_1b20,local_1b00,param_3,param_4);
        if (cVar6 != '\0') {
          FUN_1801e95f0(1);
        }
        if (DAT_1803fa630 != (longlong *)0x0) {
          (**(code **)(*DAT_1803fa630 + 0x240))(DAT_1803fa630,0,1);
        }
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0xe8))(plVar11,0x8000,0);
        }
        (**(code **)(*DAT_1803fa598 + 8))(DAT_1803fa598,plVar11,0);
        (**(code **)(*DAT_1803f9280 + 0x30))(DAT_1803f9280,local_1a98);
        (**(code **)(*DAT_1803f9280 + 0x20))(DAT_1803f9280,fVar18);
        local_1b48 = param_5;
        FUN_1801f3560(uVar4,uVar5,param_3,param_4);
      }
      (**(code **)(*DAT_1803fa598 + 8))(DAT_1803fa598,0,0);
      uVar15 = (ulonglong)_tls_index;
      *(undefined1 *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xf48) = 0;
      cVar6 = local_1b26;
      goto LAB_1801f5227;
    }
    if (((*(char *)(lVar13 + 0xf88) == '\0') || (DAT_1803fa598 == (longlong *)0x0)) ||
       (DAT_1803f9280 == (longlong *)0x0)) {
      if (((DAT_180401592 == '\0') || (DAT_1803f9280 == (longlong *)0x0)) ||
         (((DAT_1803fa608 == 0 || ((DAT_1804236a5 != '\0' || (DAT_180423650 != 0)))) ||
          ((DAT_1804236a0 != 0 ||
           ((DAT_1803fa46f != '\0' ||
            (((0 < *(int *)(param_4 + 0x44) &&
              (*(int *)(param_4 + 0x44) <= *(int *)(DAT_1803fa608 + 0x1c))) ||
             (cVar6 = FUN_180121200(param_4), fVar17 = DAT_180380bb0, cVar6 != '\0')))))))))) {
        bVar3 = false;
        fVar17 = DAT_180380bb0;
      }
      else {
        bVar3 = true;
        local_1b27 = '\x01';
        (**(code **)(*DAT_1803f9280 + 0x20))(DAT_1803f9280,DAT_180380bb0);
        (**(code **)(*DAT_1803f9280 + 0x30))(DAT_1803f9280,&DAT_1803e7b60);
      }
      local_1b48 = param_5;
      FUN_1801f3560(uVar4,param_2,param_3,param_4);
      if (bVar3) {
        local_1a88 = 0x3f800000;
        local_1a84 = 0x3f800000;
        local_1a80 = 0x3f800000;
        (**(code **)(*DAT_1803f9280 + 0x30))(DAT_1803f9280,&local_1a88);
      }
    }
    else {
      local_1b27 = '\x01';
      (**(code **)(*DAT_1803f9280 + 0x20))(DAT_1803f9280,DAT_180380bb0);
      (**(code **)(*DAT_1803f9280 + 0x30))(DAT_1803f9280,lVar13 + 0xf70);
      if (*(longlong *)(lVar13 + 0xf80) != 0) {
        local_1b28 = '\x01';
        (**(code **)(*DAT_1803fa598 + 8))(DAT_1803fa598,*(longlong *)(lVar13 + 0xf80),0);
      }
      local_1b48 = param_5;
      FUN_1801f3560(uVar4,param_2,param_3,param_4);
      (**(code **)(*DAT_1803fa598 + 8))(DAT_1803fa598,0,0);
      *(undefined1 *)(lVar13 + 0xf88) = 0;
    }
  }
  else {
    local_1b48 = param_5;
    FUN_1801f3560(uVar4,param_2,param_3,param_4);
    local_1b18 = 0x80;
    if (*param_3 != 0) {
      piVar16 = (int *)(*param_3 + 0x9c);
      iVar9 = *piVar16;
      if (0 < iVar9) {
        local_1b20 = CONCAT44(local_1b20._4_4_,0x80);
        local_1b00 = CONCAT44(local_1b00._4_4_,1);
        piVar10 = (int *)&local_1b20;
        if (iVar9 < 0x81) {
          piVar10 = piVar16;
        }
        local_1b18 = *piVar10;
      }
    }
    local_1af0 = local_1868;
    lVar13 = 0x80;
    while (local_1af8 = lVar13 + -1, lVar13 != 0) {
      local_1af0 = local_1af0 + 0x30;
      lVar13 = local_1af8;
    }
    local_1b48 = (undefined1 *)*param_3;
    FUN_1801f3e40(param_5,local_1868,local_1b18,param_4);
    plVar11 = (longlong *)FUN_1801073d0();
    fVar17 = DAT_180380bb0;
    if (plVar11 != (longlong *)0x0) {
      uVar7 = (**(code **)(*plVar11 + 0xf0))(plVar11,0x8000);
      FUN_1800beeb0(local_1a78);
      (**(code **)(*plVar11 + 0xe8))(plVar11,0x8000,1);
      local_1b28 = '\x01';
      (**(code **)(*DAT_1803fa598 + 8))(DAT_1803fa598,plVar11,0);
      local_1b27 = '\x01';
      (**(code **)(*DAT_1803f9280 + 0x30))(DAT_1803f9280,local_1a78);
      (**(code **)(*DAT_1803f9280 + 0x20))(DAT_1803f9280,DAT_180380ad4);
      local_1b48 = local_1868;
      FUN_1801f3560(uVar4,param_2,param_3,param_4);
      (**(code **)(*plVar11 + 0xe8))(plVar11,0x8000,uVar7);
      fVar17 = DAT_180380bb0;
    }
  }
  uVar15 = (ulonglong)_tls_index;
  cVar6 = '\0';
LAB_1801f5227:
  if ((local_1b28 != '\0') && (DAT_1803fa598 != (longlong *)0x0)) {
    (**(code **)(*DAT_1803fa598 + 8))(DAT_1803fa598,0,0);
  }
  if ((local_1b27 != '\0') && (DAT_1803f9280 != (longlong *)0x0)) {
    local_1aa8 = 0x3f800000;
    local_1aa4 = 0x3f800000;
    local_1aa0 = 0x3f800000;
    (**(code **)(*DAT_1803f9280 + 0x30))(DAT_1803f9280,&local_1aa8);
    (**(code **)(*DAT_1803f9280 + 0x20))(DAT_1803f9280,fVar17);
  }
  if ((cVar6 != '\0') && (DAT_1803fa630 != (longlong *)0x0)) {
    (**(code **)(*DAT_1803fa630 + 0x240))(DAT_1803fa630,0,1);
  }
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8);
  lVar1 = *(longlong *)(lVar13 + 0xed8);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar13 + 0xdb8);
    *(undefined8 *)(lVar13 + 0xed8) = 0;
    *(undefined8 *)(lVar13 + 0xdb8) = 0;
    if (lVar2 != 0) {
      FUN_1801e95c0(lVar2,lVar1);
    }
    FUN_180114540(lVar1);
  }
  return;
}



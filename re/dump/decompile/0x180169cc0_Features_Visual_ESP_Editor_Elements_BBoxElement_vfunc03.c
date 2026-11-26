// 0x180169cc0  Features_Visual_ESP_Editor_Elements_BBoxElement_vfunc03
// size=1410 thunk=false
// signature: undefined Features_Visual_ESP_Editor_Elements_BBoxElement_vfunc03()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_Visual_ESP_Editor_Elements_BBoxElement_vfunc03
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  bool bVar2;
  code *pcVar3;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  byte bVar9;
  byte bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  undefined8 local_f8 [2];
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 *local_d0;
  ulonglong local_c8;
  
  local_c8 = DAT_1803da4c0 ^ (ulonglong)auStack_138;
  local_e8._4_4_ = (float)((ulonglong)param_3 >> 0x20);
  fVar18 = (float)param_3 + DAT_1803fcb58;
  fVar16 = (float)param_3 + _DAT_1803fcb50;
  fVar19 = local_e8._4_4_ + DAT_1803fcb5c;
  fVar17 = local_e8._4_4_ + _DAT_1803fcb54;
  local_108 = fVar16;
  local_104 = fVar17;
  local_100 = fVar18;
  local_fc = fVar19;
  local_f8[0] = param_2;
  local_e8 = param_3;
  if ((((*(char *)(param_1 + 0x7a) == '\0') || (DAT_1803fcb80 != '\0')) ||
      (DAT_1803fcb60 == (longlong *)0x0)) ||
     (plVar8 = (longlong *)(**(code **)(*DAT_1803fcb60 + 0x20))(), plVar8 == (longlong *)0x0)) {
LAB_180169dcf:
    bVar2 = false;
  }
  else {
    uVar6 = (**(code **)(*plVar8 + 0x48))(plVar8);
    cVar4 = FUN_1800c4740(uVar6);
    if (cVar4 == '\0') goto LAB_180169dcf;
    bVar2 = true;
  }
  fVar13 = *(float *)(param_1 + 0x40);
  fVar14 = *(float *)(param_1 + 0x44);
  fVar15 = *(float *)(param_1 + 0x48);
  fVar12 = *(float *)(param_1 + 0x4c);
  if (((*(char *)(param_1 + 0x80) != '\0') && (DAT_1803fcb60 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*DAT_1803fcb60 + 0x420))(), pcVar3 = DAT_1803fe548, cVar4 != '\0')) {
    if (DAT_1803fe548 == (code *)0x0) {
      bVar9 = 0xff;
      bVar10 = 0xff;
      bVar5 = 0xff;
    }
    else {
      uVar6 = FUN_18001c560(DAT_1803fcb60);
      (*pcVar3)(&local_e8,uVar6);
      bVar9 = local_e8._1_1_;
      bVar10 = local_e8._2_1_;
      bVar5 = (byte)local_e8;
    }
    fVar12 = *(float *)(param_1 + 0x4c);
    fVar13 = (float)bVar5 / DAT_1803811c8;
    fVar15 = (float)bVar10 / DAT_1803811c8;
    fVar14 = (float)bVar9 / DAT_1803811c8;
  }
  if (bVar2) {
    fVar13 = *(float *)(param_1 + 0x60);
    fVar14 = *(float *)(param_1 + 100);
    fVar15 = *(float *)(param_1 + 0x68);
    fVar12 = *(float *)(param_1 + 0x6c);
  }
  fVar11 = (float)FUN_1801691d0(param_1);
  if ((DAT_1803fcb80 == '\0') && (DAT_1803fcb60 != (longlong *)0x0)) {
    plVar8 = (longlong *)(**(code **)(*DAT_1803fcb60 + 0x20))();
    pcVar3 = DAT_1803ff0c8;
    local_e8 = 0;
    uStack_e0 = 0;
    if (plVar8 != (longlong *)0x0) {
      if (DAT_1803ff0c8 != (code *)0x0) {
        uVar6 = (**(code **)(*plVar8 + 0x48))(plVar8);
        cVar4 = (*pcVar3)(uVar6,&local_e8);
        if (cVar4 != '\0') {
          uStack_e0 = CONCAT44(fVar12,(float)uStack_e0);
          fVar13 = (float)local_e8;
          fVar14 = local_e8._4_4_;
          fVar15 = (float)uStack_e0;
        }
      }
      pcVar3 = DAT_1804258c0;
      if (DAT_1804258c0 != (code *)0x0) {
        uVar6 = (**(code **)(*plVar8 + 0x48))(plVar8);
        cVar4 = (*pcVar3)(uVar6,&local_e8);
        if (cVar4 != '\0') {
          uStack_e0 = CONCAT44(fVar12,(float)uStack_e0);
          fVar13 = (float)local_e8;
          fVar14 = local_e8._4_4_;
          fVar15 = (float)uStack_e0;
        }
      }
      pcVar3 = DAT_180426168;
      if (DAT_180426168 != (code *)0x0) {
        uVar6 = (**(code **)(*plVar8 + 0x48))(plVar8);
        cVar4 = (*pcVar3)(uVar6,&local_e8);
        if (cVar4 != '\0') {
          uStack_e0 = CONCAT44(fVar12,(float)uStack_e0);
          fVar13 = (float)local_e8;
          fVar14 = local_e8._4_4_;
          fVar15 = (float)uStack_e0;
        }
      }
      pcVar3 = DAT_1803fea10;
      if (DAT_1803fea10 != (code *)0x0) {
        uVar6 = (**(code **)(*plVar8 + 0x48))(plVar8);
        cVar4 = (*pcVar3)(uVar6,&local_e8);
        if (cVar4 != '\0') {
          uStack_e0 = CONCAT44(fVar12,(float)uStack_e0);
          fVar13 = (float)local_e8;
          fVar14 = local_e8._4_4_;
          fVar15 = (float)uStack_e0;
        }
      }
      pcVar3 = DAT_1803fe4a0;
      if (DAT_1803fe4a0 != (code *)0x0) {
        uVar6 = (**(code **)(*plVar8 + 0x48))(plVar8);
        cVar4 = (*pcVar3)(uVar6,&local_e8);
        if (cVar4 != '\0') {
          fVar13 = (float)local_e8;
          fVar14 = local_e8._4_4_;
          fVar15 = (float)uStack_e0;
        }
      }
    }
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_e8 = CONCAT44(fVar14,fVar13);
  uStack_e0 = CONCAT44(fVar12 * fVar11 * *(float *)(*(longlong *)(lVar1 + 0xec0) + 0xc84),fVar15);
  uVar6 = FUN_180268ed0(&local_e8);
  local_d0 = local_f8;
  local_d8 = param_1;
  if (*(char *)(param_1 + 0x79) == '\0') {
LAB_18016a180:
    if (*(char *)(param_1 + 0x78) == '\0') goto LAB_18016a1b8;
  }
  else if (*(char *)(param_1 + 0x78) == '\0') {
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    local_e8 = *(undefined8 *)(param_1 + 0x50);
    uStack_e0 = CONCAT44(fVar11 * *(float *)(param_1 + 0x5c) *
                         *(float *)(*(longlong *)(lVar1 + 0xec0) + 0xc84),
                         *(undefined4 *)(param_1 + 0x58));
    uVar7 = FUN_180268ed0(&local_e8);
    fVar12 = DAT_180380bb0;
    local_e8 = CONCAT44(fVar17 - DAT_180380bb0,fVar16 - DAT_180380bb0);
    uStack_e0 = CONCAT44(fVar19 + DAT_180380bb0,fVar18 + DAT_180380bb0);
    FUN_18016a250(&local_d8,&local_e8,uVar7);
    local_e8 = CONCAT44(fVar17 + fVar12,fVar16 + fVar12);
    uStack_e0 = CONCAT44(fVar19 - fVar12,fVar18 - fVar12);
    FUN_18016a250(&local_d8,&local_e8,uVar7);
    goto LAB_18016a180;
  }
  if (*(int *)(param_1 + 0x7c) == 0) {
    local_118 = *(undefined4 *)(param_1 + 0x70);
    local_110 = 0xf;
    FUN_180295000(local_f8[0],&local_108,&local_100,uVar6);
    return;
  }
LAB_18016a1b8:
  local_108 = fVar16;
  local_104 = fVar17;
  local_100 = fVar18;
  local_fc = fVar19;
  FUN_18016a250(&local_d8,&local_108,uVar6);
  return;
}



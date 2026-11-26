// 0x18014b170  Features_Toolbox_ToolboxFeature_vfunc01
// size=1437 thunk=false
// signature: undefined Features_Toolbox_ToolboxFeature_vfunc01()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_Toolbox_ToolboxFeature_vfunc01(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  longlong *plVar10;
  int *piVar11;
  char *pcVar12;
  int *piVar13;
  int *piVar14;
  undefined8 uVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  int local_70 [2];
  undefined8 local_68;
  undefined *local_60 [2];
  undefined8 local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  FUN_18014a290();
  local_a8 = 0;
  lStack_a0 = 0;
  local_98 = 0;
  local_60[0] = &DAT_1803e83b0;
  iVar8 = _Mtx_lock(&DAT_1803e83b0);
  if (iVar8 == 0) {
    if (DAT_1803e83fc == 0x7fffffff) {
      DAT_1803e83fc = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    lVar6 = DAT_1803e9ee0;
    lVar16 = DAT_1803e9ed8;
    if (DAT_1803e9ed8 == DAT_1803e9ee0) {
      _Mtx_unlock(&DAT_1803e83b0);
    }
    else {
      local_a8 = DAT_1803e9ed8;
      DAT_1803e9ed8 = 0;
      lStack_a0 = DAT_1803e9ee0;
      DAT_1803e9ee0 = 0;
      local_98 = DAT_1803e9ee8;
      DAT_1803e9ee8 = 0;
      _Mtx_unlock(&DAT_1803e83b0);
      do {
        FUN_1801457e0(lVar16);
        lVar16 = lVar16 + 0x48;
      } while (lVar16 != lVar6);
    }
    FUN_18020ac70(&local_a8);
    LOCK();
    bVar17 = DAT_180409b80 == 1;
    if (bVar17) {
      DAT_180409b80 = 2;
    }
    UNLOCK();
    if (bVar17) {
      FUN_180146a00();
    }
    local_70[0] = -0x6954f399;
    local_70[1] = -0x6c02a9e6;
    local_68 = 0xc9339fae2fcb199e;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_60,local_70);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_50,&local_68);
    piVar11 = (int *)FUN_1802029c0(*plVar10 + 0x28);
    iVar8 = *piVar11;
    local_70[0] = -0x6954f399;
    local_70[1] = -0x6c02a9e6;
    local_68 = 0x2cdd3384c259d442;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_60,local_70);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_50,&local_68);
    pcVar12 = (char *)FUN_1801fcfc0(*plVar10 + 0x28);
    if ((*pcVar12 == '\0') ||
       ((0 < iVar8 &&
        ((((0xfe < iVar8 || (cVar7 = FUN_180024540(), cVar7 == '\0')) || (DAT_1803fa545 != '\0')) ||
         (cVar7 = FUN_1800245f0(iVar8), cVar7 == '\0')))))) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    local_70[0] = -0x6954f399;
    local_70[1] = -0x6c02a9e6;
    local_68 = 0x217a2c6fd3b34823;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_60,local_70);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_50,&local_68);
    piVar11 = (int *)FUN_1802029c0(*plVar10 + 0x28);
    iVar8 = *piVar11;
    local_70[0] = -0x6954f399;
    local_70[1] = -0x6c02a9e6;
    local_68 = 0x5c383cfcf7076af3;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_60,local_70);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_50,&local_68);
    pcVar12 = (char *)FUN_1801fcfc0(*plVar10 + 0x28);
    if ((*pcVar12 == '\0') ||
       ((0 < iVar8 &&
        (((0xfe < iVar8 || (cVar7 = FUN_180024540(), cVar7 == '\0')) ||
         ((DAT_1803fa545 != '\0' || (cVar7 = FUN_1800245f0(iVar8), cVar7 == '\0')))))))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    local_70[0] = -0x6954f399;
    local_70[1] = -0x6c02a9e6;
    local_68 = 0xdd80ea0cec10ff07;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_60,local_70);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_50,&local_68);
    piVar11 = (int *)FUN_1802029c0(*plVar10 + 0x28);
    iVar8 = *piVar11;
    local_70[0] = -0x6954f399;
    local_70[1] = -0x6c02a9e6;
    local_68 = 0x8af36191ef71bd97;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_60,local_70);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_50,&local_68);
    pcVar12 = (char *)FUN_1801fcfc0(*plVar10 + 0x28);
    if ((*pcVar12 == '\0') ||
       ((0 < iVar8 &&
        (((0xfe < iVar8 || (cVar7 = FUN_180024540(), cVar7 == '\0')) ||
         ((DAT_1803fa545 != '\0' || (cVar7 = FUN_1800245f0(iVar8), cVar7 == '\0')))))))) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    local_70[0] = -0x6954f399;
    local_70[1] = -0x6c02a9e6;
    local_68 = 0x65489c45ca370d45;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_60,local_70);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_50,&local_68);
    piVar11 = (int *)FUN_1802029c0(*plVar10 + 0x28);
    iVar8 = *piVar11;
    local_70[0] = -0x6954f399;
    local_70[1] = -0x6c02a9e6;
    local_68 = 0xff1f894095ee67b5;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_60,local_70);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_50,&local_68);
    pcVar12 = (char *)FUN_1801fcfc0(*plVar10 + 0x28);
    if ((*pcVar12 == '\0') ||
       ((0 < iVar8 &&
        ((((0xfe < iVar8 || (cVar7 = FUN_180024540(), cVar7 == '\0')) || (DAT_1803fa545 != '\0')) ||
         (cVar7 = FUN_1800245f0(iVar8), cVar7 == '\0')))))) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (((param_3 == 0) || (DAT_1803fa545 != '\0')) ||
       (((!bVar17 && ((!bVar3 && (!bVar4)))) && (!bVar5)))) {
      *(undefined4 *)(param_1 + 8) = 0;
    }
    else {
      local_70[0] = 0x20;
      local_68 = CONCAT44(local_68._4_4_,1);
      local_50[0] = 0x93fd561a96ab0c67;
      local_60[0] = (undefined *)0xa4ac668505cca8d5;
      plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_90,local_50);
      plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_80,local_60);
      piVar13 = (int *)FUN_1802029c0(*plVar10 + 0x28);
      iVar8 = *(int *)(param_1 + 8);
      piVar11 = (int *)&local_68;
      if (0 < *piVar13) {
        piVar11 = piVar13;
      }
      piVar14 = local_70;
      if (*piVar13 < 0x21) {
        piVar14 = piVar11;
      }
      iVar1 = *piVar14;
      *(int *)(param_1 + 8) = iVar8 + 1;
      if (iVar8 % (iVar1 + 1) == 0) {
        if (bVar17) {
          *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) | 0x20;
        }
        if (bVar3) {
          *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) | 1;
          DAT_1803db5ee = 1;
        }
        if (bVar4) {
          *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) | 0x800;
          DAT_1803db5f1 = 1;
        }
        if ((bVar5) && (*(char *)(param_3 + 0x35) == '\0')) {
          *(undefined1 *)(param_3 + 0x35) = 100;
        }
      }
    }
    pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar9 = (**(code **)(*DAT_1803fa668 + 0x60))();
    uVar15 = (*pcVar2)(DAT_1803fa360,uVar9);
    FUN_18014a8f0(param_1,uVar15,1);
    return;
  }
  std::_Throw_Cpp_error(5);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



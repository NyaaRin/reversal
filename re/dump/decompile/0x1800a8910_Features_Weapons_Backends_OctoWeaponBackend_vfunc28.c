// 0x1800a8910  Features_Weapons_Backends_OctoWeaponBackend_vfunc28
// size=2069 thunk=false
// signature: undefined Features_Weapons_Backends_OctoWeaponBackend_vfunc28()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_Weapons_Backends_OctoWeaponBackend_vfunc28
               (longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  longlong *plVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  char *pcVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_188 [32];
  undefined4 *local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  uint local_140;
  undefined4 local_138;
  longlong local_128;
  undefined4 local_11f;
  undefined2 local_11b;
  undefined1 local_119;
  longlong *local_118;
  undefined8 uStack_110;
  longlong local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  int local_d0;
  undefined4 local_bf;
  undefined2 local_bb;
  undefined1 local_b9;
  longlong local_b8;
  undefined4 local_af;
  undefined2 local_ab;
  undefined1 local_a9;
  undefined4 local_9f;
  undefined2 local_9b;
  undefined1 local_99;
  longlong local_98;
  undefined4 local_8f;
  undefined2 local_8b;
  undefined1 local_89;
  undefined4 local_7f;
  undefined2 local_7b;
  undefined1 local_79;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  cVar5 = FUN_1800a7ab0();
  if (cVar5 == '\0') {
    return;
  }
  if (param_3 == (undefined4 *)0x0) {
    return;
  }
  iVar7 = FUN_1800a7800();
  if (iVar7 != 2) {
    return;
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x41) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x58) == '\0') {
    if (*(char *)(param_1 + 0x5a) == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0x5b) = 0;
    *(undefined1 *)(param_1 + 0x7c) = 0;
    DAT_180423986 = 0;
    DAT_18042398b = 0;
    DAT_1803e91f8 = DAT_1803813b0;
    *(undefined8 *)(param_1 + 0x68) = 0xbff0000000000000;
    *(undefined1 *)(param_1 + 0x98) = 0;
    return;
  }
  if (DAT_1803fa678 == 0) {
    return;
  }
  if (DAT_1803fa608 == (float *)0x0) {
    return;
  }
  local_118 = (longlong *)0x0;
  uStack_110 = 0;
  local_108 = 0;
  FUN_18001bcd0(0,&local_118);
  if ((local_118 == (longlong *)0x0) || (local_118[1] == 0)) goto LAB_1800a909d;
  pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar8 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar10 = (*pcVar2)(DAT_1803fa360,uVar8);
  if (lVar10 == 0) goto LAB_1800a909d;
  if ((*(char *)(param_1 + 0x5b) != '\0') && (DAT_1803fa608 != (float *)0x0)) {
    dVar3 = (double)*DAT_1803fa608;
    sVar6 = _dclass(SUB84(dVar3,0));
    if (sVar6 < 1) {
      dVar1 = *(double *)(param_1 + 0x68);
      sVar6 = _dclass(SUB84(dVar1,0));
      if ((((0 < sVar6) || (dVar1 < 0.0)) || (dVar3 < dVar1)) || (DAT_180380d08 < dVar3 - dVar1))
      goto LAB_1800a8b0c;
      if ((float)((uint)((float)param_3[2] - *(float *)(param_1 + 0x5c)) & _DAT_1803817c0) <=
          DAT_180381024) {
        if (*(char *)(param_1 + 0x58) == *(char *)(param_1 + 0x60)) {
          DAT_180423986 = 1;
          DAT_18042398b = 1;
          DAT_1803e91f8 = dVar3;
          goto LAB_1800a8b9c;
        }
        pcVar11 = "ads changed";
      }
      else {
        pcVar11 = "pitch drift";
      }
    }
    else {
LAB_1800a8b0c:
      pcVar11 = "sample too old";
    }
    if (((DAT_1804258f8 != pcVar11) || (DAT_1803e7368 < 0.0)) ||
       (DAT_180380d68 <= dVar3 - DAT_1803e7368)) {
      DAT_1803e7368 = dVar3;
      DAT_1804258f8 = pcVar11;
      FUN_180014410(&DAT_180349ec0,&DAT_18034a000);
    }
    DAT_1803e91f8 = DAT_1803813b0;
    *(undefined1 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0xbff0000000000000;
    DAT_18042398b = 0;
    DAT_180423986 = 0;
    *(undefined1 *)(param_1 + 0x7c) = 0;
    *(undefined1 *)(param_1 + 0x5b) = 0;
  }
LAB_1800a8b9c:
  iVar7 = DAT_180425870 + 1;
  bVar12 = DAT_180425870 == (DAT_180425870 / 0xf0) * 0xf0;
  DAT_180425870 = iVar7;
  if ((bVar12) && (*(char *)(param_1 + 0x7c) != '\0')) {
    iVar7 = (**(code **)*local_118)();
    local_d0 = iVar7;
    cVar5 = FUN_18001e2b0(param_2,local_118);
    plVar4 = local_118;
    if (cVar5 != '\0') {
      uVar8 = (**(code **)*local_118)();
      local_78 = 0.0;
      local_74 = 0.0;
      local_70 = 0.0;
      local_f0 = 0.0;
      local_ec = 0.0;
      local_e8 = 0.0;
      local_68 = 0;
      local_64 = 0;
      local_60 = 0;
      local_168 = &local_68;
      cVar5 = FUN_1800a5580(local_118,uVar8,lVar10,&local_78);
      fVar13 = 0.0;
      fVar14 = 0.0;
      if ((cVar5 == '\0') ||
         (cVar5 = FUN_1800a7660(local_118,lVar10,&local_f0), fVar13 = local_f0, fVar14 = local_ec,
         cVar5 == '\0')) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      plVar4 = local_118;
      if ((local_118 != (longlong *)0x0) &&
         (iVar9 = (**(code **)*local_118)(local_118), iVar7 < iVar9)) {
        (**(code **)(*plVar4 + 0x10))(plVar4,iVar9 - iVar7);
      }
      if (!bVar12) {
        if (local_118 == (longlong *)0x0) {
          return;
        }
        (**(code **)*local_118)();
        if (local_108 == 0) {
          DAT_1803fa330 = local_98;
          DAT_1803fa339 = local_8f;
          DAT_1803fa33d = local_8b;
          local_99 = local_89;
        }
        else {
          DAT_1803fa330 = local_108;
          DAT_1803fa339 = local_9f;
          DAT_1803fa33d = local_9b;
        }
        DAT_1803fa338 = local_108 != 0;
        DAT_1803fa33f = local_99;
        return;
      }
      local_100 = local_78 - fVar13;
      local_fc = local_74 - fVar14;
      local_f8 = local_70 - local_e8;
      FUN_180022190(&local_100);
      local_e0 = local_100 - *(float *)(param_1 + 0x70);
      local_dc = local_fc - *(float *)(param_1 + 0x74);
      local_d8 = local_f8 - *(float *)(param_1 + 0x78);
      FUN_180022190();
      local_148 = (double)fVar14;
      local_150 = (double)fVar13;
      local_158 = (double)local_dc;
      local_160 = (double)local_e0;
      local_168 = (undefined4 *)(double)*(float *)(param_1 + 0x74);
      local_138 = *param_3;
      local_140 = (uint)(*(char *)(param_1 + 0x58) != '\0');
      FUN_180014410("[OCTO-TICK] probe tick=(%.2f,%.2f) render=(%.2f,%.2f) delta=(%.2f,%.2f) eye=(%.2f,%.2f) ready=%d cmd#%d\n"
                    ,(double)local_100,(double)local_fc,(double)*(float *)(param_1 + 0x70));
      if (local_118 == (longlong *)0x0) {
        return;
      }
      (**(code **)*local_118)();
      if (local_108 == 0) {
        DAT_1803fa330 = local_128;
        DAT_1803fa339 = local_11f;
        DAT_1803fa33d = local_11b;
        local_79 = local_119;
      }
      else {
        DAT_1803fa330 = local_108;
        DAT_1803fa339 = local_7f;
        DAT_1803fa33d = local_7b;
      }
      DAT_1803fa338 = local_108 != 0;
      DAT_1803fa33f = local_79;
      return;
    }
    if ((local_118 != (longlong *)0x0) &&
       (iVar9 = (**(code **)*local_118)(local_118), iVar7 < iVar9)) {
      (**(code **)(*plVar4 + 0x10))(plVar4,iVar9 - iVar7);
    }
    if (local_118 == (longlong *)0x0) {
      return;
    }
    (**(code **)*local_118)();
    if (local_108 == 0) {
      DAT_1803fa330 = local_b8;
      DAT_1803fa339 = local_af;
      DAT_1803fa33d = local_ab;
      local_b9 = local_a9;
    }
    else {
      DAT_1803fa330 = local_108;
      DAT_1803fa339 = local_bf;
      DAT_1803fa33d = local_bb;
    }
    DAT_1803fa338 = local_108 != 0;
    DAT_1803fa33f = local_b9;
    return;
  }
LAB_1800a909d:
  if (local_118 != (longlong *)0x0) {
    (**(code **)*local_118)();
    DAT_1803fa338 = local_108 != 0;
    DAT_1803fa330 = local_128;
    if ((bool)DAT_1803fa338) {
      DAT_1803fa330 = local_108;
    }
    DAT_1803fa339 = local_11f;
    DAT_1803fa33d = local_11b;
    DAT_1803fa33f = local_119;
  }
  return;
}



// 0x180143970  Features_KillSay_KillSayFeature_vfunc01
// size=941 thunk=false
// signature: undefined Features_KillSay_KillSayFeature_vfunc01()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_KillSay_KillSayFeature_vfunc01(longlong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  char *pcVar5;
  float *pfVar6;
  float *pfVar7;
  undefined8 uVar8;
  float *pfVar9;
  undefined8 ****ppppuVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_108 [32];
  undefined *local_e8;
  undefined1 local_e0 [32];
  float local_c0 [2];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90 [2];
  undefined8 local_80 [2];
  undefined8 ***local_70 [3];
  ulonglong local_58;
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  local_b8 = 0x93fd561a96ab0c67;
  plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_90,&local_b8);
  local_c0[0] = -2.7126216e-08;
  local_c0[1] = 3.998266e+22;
  plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_80,local_c0);
  pcVar5 = (char *)FUN_1801fcfc0(*plVar4 + 0x28);
  if (*pcVar5 == '\0') {
    local_90[0] = &DAT_1803e7c90;
    iVar3 = _Mtx_lock(&DAT_1803e7c90);
    if (iVar3 == 0) {
      if (DAT_1803e7cdc == 0x7fffffff) {
        DAT_1803e7cdc = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      FUN_18021d430(&DAT_18056dea0);
      _Mtx_unlock(&DAT_1803e7c90);
      return;
    }
    std::_Throw_Cpp_error(5);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (DAT_1803fa608 == 0) {
    return;
  }
  if (DAT_1803fa668 == 0) {
    return;
  }
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0xf;
  local_b0 = 0;
  local_e8 = &DAT_1803e7c90;
  iVar3 = _Mtx_lock(&DAT_1803e7c90);
  if (iVar3 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (DAT_1803e7cdc == 0x7fffffff) {
    DAT_1803e7cdc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  if (DAT_18056dec0 != 0) {
    fVar12 = (float)*(double *)(DAT_1803fa608 + 0x10);
    fVar11 = *(float *)(param_1 + 8);
    if (fVar12 + DAT_180381068 < fVar11) {
      *(undefined4 *)(param_1 + 8) = 0;
      fVar11 = 0.0;
    }
    if (fVar11 <= fVar12) {
      puVar1 = *(undefined8 **)(DAT_18056dea8 + (DAT_18056deb0 - 1U & DAT_18056deb8) * 8);
      if (&local_b0 != puVar1) {
        local_b0 = *puVar1;
        uStack_a8 = puVar1[1];
        local_a0 = puVar1[2];
        uStack_98 = puVar1[3];
        puVar1[2] = 0;
        puVar1[3] = 0xf;
        *(undefined1 *)puVar1 = 0;
      }
      FUN_18020e450(*(undefined8 *)(DAT_18056dea8 + (DAT_18056deb0 - 1U & DAT_18056deb8) * 8));
      fVar11 = DAT_180380a6c;
      DAT_18056dec0 = DAT_18056dec0 + -1;
      if (DAT_18056dec0 == 0) {
        DAT_18056deb8 = 0;
      }
      else {
        DAT_18056deb8 = DAT_18056deb8 + 1;
      }
      local_b8 = CONCAT44(local_b8._4_4_,0x41200000);
      local_c0[0] = 0.3;
      local_80[0] = 0x93fd561a96ab0c67;
      plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_e0,local_80);
      local_90[0] = (undefined *)0x96ef6034594ad9f2;
      plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_70,local_90);
      pfVar6 = (float *)FUN_180202dc0(*plVar4 + 0x28);
      pfVar9 = local_c0;
      if (fVar11 <= *pfVar6) {
        pfVar9 = pfVar6;
      }
      pfVar7 = (float *)&local_b8;
      if (*pfVar6 <= DAT_180380fcc) {
        pfVar7 = pfVar9;
      }
      *(float *)(param_1 + 8) = fVar12 + *pfVar7;
      _Mtx_unlock(&DAT_1803e7c90);
      uVar8 = FUN_1801fd120(local_e0,"say \"",&local_b0);
      FUN_1801fc680(local_70,uVar8,&DAT_18033f5a8);
      FUN_18020e450(local_e0);
      ppppuVar10 = local_70;
      if (0xf < local_58) {
        ppppuVar10 = (undefined8 ****)local_70[0];
      }
      FUN_1801424f0(DAT_1803fa668,ppppuVar10);
      FUN_18020e450(local_70);
      goto LAB_180143ce6;
    }
  }
  _Mtx_unlock(&DAT_1803e7c90);
LAB_180143ce6:
  FUN_18020e450(&local_b0);
  return;
}



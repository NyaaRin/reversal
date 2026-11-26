// 0x18007c0e0  Features_Weapons_Backends_UTSWBWeaponBackend_vfunc04
// size=1272 thunk=false
// signature: undefined Features_Weapons_Backends_UTSWBWeaponBackend_vfunc04()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * Features_Weapons_Backends_UTSWBWeaponBackend_vfunc04
                  (longlong *param_1,float *param_2,undefined8 param_3,int *param_4)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  byte *pbVar5;
  HMODULE pHVar6;
  char cVar7;
  bool bVar8;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_d8 [32];
  float *local_b8;
  float *local_b0;
  undefined1 local_a8;
  char local_a0;
  float *local_98;
  float *local_90;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  ulonglong local_68;
  
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  if ((char)param_1[6] == '\0') {
    vfunc_shared_180079040();
    return param_2;
  }
  fVar12 = *(float *)(param_1 + 1);
  *(float *)((longlong)param_1 + 0x6c) = fVar12;
  *(undefined4 *)(param_1 + 0xe) = 0xbf800000;
  if (((char)param_1[7] != '\0') && ((char)param_1[8] != '\0')) {
    FUN_1802d4050(param_4 + 2,&local_78);
    local_78 = local_78 - *(float *)((longlong)param_1 + 0x44);
    local_70 = local_70 - *(float *)((longlong)param_1 + 0x4c);
    fVar13 = *(float *)((longlong)param_1 + 0x3c);
    fVar10 = (local_74 - *(float *)(param_1 + 9)) * (local_74 - *(float *)(param_1 + 9)) +
             local_78 * local_78 + local_70 * local_70;
    if (fVar10 < 0.0) {
      fVar10 = sqrtf(fVar10);
    }
    else {
      fVar10 = SQRT(fVar10);
    }
    fVar11 = (fVar10 * DAT_180380ac0 - fVar13) * DAT_180380a58 + fVar13;
    fVar10 = 0.0;
    if (0.0 <= fVar12 - fVar13) {
      fVar10 = fVar12 - fVar13;
    }
    fVar10 = fVar10 + fVar11;
    fVar12 = *(float *)(param_1 + 10) + DAT_1803809e8;
    if (fVar10 <= *(float *)(param_1 + 10) + DAT_1803809e8) {
      fVar12 = fVar10;
    }
    *(float *)(param_1 + 0xe) = fVar11;
  }
  if (fVar12 <= 0.0) {
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    goto LAB_18007c5a4;
  }
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar3 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar4 = (*pcVar1)(DAT_1803fa360,uVar3);
  if (lVar4 != 0) {
    pbVar5 = (byte *)FUN_18001d710(lVar4,&local_88);
    if ((*pbVar5 & 2) != 0) {
      fVar12 = fVar12 * DAT_180380b4c;
    }
    pbVar5 = (byte *)FUN_18001d710(lVar4,&local_88);
    if ((*pbVar5 & 1) == 0) {
      fVar12 = fVar12 * DAT_180380e28;
    }
  }
  fVar12 = fVar12 * *(float *)((longlong)param_1 + 0x34);
  if (((*(int *)((longlong)param_1 + 0x74) != 1) || (0.0 < *(float *)(param_1 + 0xf))) ||
     ((*(char *)((longlong)param_1 + 0x7c) == '\0' && (*(char *)((longlong)param_1 + 0x7d) == '\0'))
     )) {
    bVar8 = false;
LAB_18007c2a3:
    cVar7 = '\0';
  }
  else {
    bVar8 = 0.0 < *(float *)(param_1 + 0x10);
    if (*(float *)((longlong)param_1 + 0x84) <= 0.0) goto LAB_18007c2a3;
    cVar7 = '\x01';
  }
  dVar9 = (double)(**(code **)(*param_1 + 0x108))(param_1,param_4);
  param_1[0xc] = (longlong)(dVar9 - (double)*param_4);
  *(float *)(param_1 + 0xd) = fVar12;
  local_7c = 0.0;
  local_88 = 0.0;
  local_80 = 0.0;
  local_84 = 0.0;
  local_90 = &local_84;
  local_98 = &local_80;
  local_b0 = &local_88;
  local_b8 = &local_7c;
  local_a8 = bVar8;
  local_a0 = cVar7;
  cVar2 = FUN_18007af40();
  fVar13 = local_84;
  fVar10 = local_88;
  fVar11 = local_7c;
  if (cVar2 == '\0') {
    FUN_180020770(SUB84(dVar9,0));
    if (*(char *)((longlong)param_1 + 0x31) != '\0') {
      if ((DAT_18042f184 & 1) == 0) {
        DAT_18042f184 = DAT_18042f184 | 1;
        pHVar6 = GetModuleHandleA("vstdlib.dll");
        DAT_1805c51e8 = GetProcAddress(pHVar6,"RandomFloat");
      }
      if (DAT_1805c51e8 != (FARPROC)0x0) {
        (*DAT_1805c51e8)(DAT_180380b74);
      }
    }
    fVar10 = (float)((uint)fVar12 ^ DAT_1803817f0);
    if ((DAT_18042f184 & 1) == 0) {
      DAT_18042f184 = DAT_18042f184 | 1;
      pHVar6 = GetModuleHandleA("vstdlib.dll");
      DAT_1805c51e8 = GetProcAddress(pHVar6,"RandomFloat");
    }
    fVar11 = fVar10;
    if (DAT_1805c51e8 != (FARPROC)0x0) {
      (*DAT_1805c51e8)(fVar10);
      fVar11 = extraout_XMM0_Da;
    }
    if ((DAT_18042f184 & 1) == 0) {
      DAT_18042f184 = DAT_18042f184 | 1;
      pHVar6 = GetModuleHandleA("vstdlib.dll");
      DAT_1805c51e8 = GetProcAddress(pHVar6,"RandomFloat");
    }
    if (DAT_1805c51e8 != (FARPROC)0x0) {
      (*DAT_1805c51e8)(fVar10);
      fVar10 = extraout_XMM0_Da_00;
    }
    fVar12 = DAT_180381384;
    fVar13 = local_80;
    if (bVar8 != false) {
      if ((DAT_18042f184 & 1) == 0) {
        DAT_18042f184 = DAT_18042f184 | 1;
        pHVar6 = GetModuleHandleA("vstdlib.dll");
        DAT_1805c51e8 = GetProcAddress(pHVar6,"RandomFloat");
      }
      fVar13 = fVar12;
      if (DAT_1805c51e8 != (FARPROC)0x0) {
        (*DAT_1805c51e8)();
        fVar13 = extraout_XMM0_Da_01;
      }
    }
    local_80 = fVar13;
    fVar13 = local_84;
    if (cVar7 != '\0') {
      if ((DAT_18042f184 & 1) == 0) {
        DAT_18042f184 = DAT_18042f184 | 1;
        pHVar6 = GetModuleHandleA("vstdlib.dll");
        DAT_1805c51e8 = GetProcAddress(pHVar6,"RandomFloat");
      }
      fVar13 = fVar12;
      if (DAT_1805c51e8 != (FARPROC)0x0) {
        (*DAT_1805c51e8)(fVar12);
        fVar13 = extraout_XMM0_Da_02;
      }
    }
  }
  fVar11 = fVar11 * DAT_18038103c;
  fVar10 = fVar10 * DAT_18038103c;
  if (bVar8 != false) {
    fVar12 = atanf(local_80 * *(float *)(param_1 + 0x10));
    fVar11 = fVar11 - fVar12 * DAT_1803810bc;
  }
  if (cVar7 != '\0') {
    fVar12 = atanf(fVar13 * *(float *)((longlong)param_1 + 0x84));
    fVar10 = fVar10 - fVar12 * DAT_1803810bc;
  }
  *param_2 = fVar11;
  param_2[1] = fVar10;
LAB_18007c5a4:
  param_2[2] = 0.0;
  return param_2;
}



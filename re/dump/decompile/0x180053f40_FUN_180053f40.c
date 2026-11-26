// 0x180053f40  FUN_180053f40
// size=876 thunk=false
// signature: undefined FUN_180053f40()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_180053f40(undefined4 *param_1,uint param_2,float param_3,undefined4 param_4,float param_5)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  HMODULE pHVar4;
  FARPROC pFVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  bVar3 = FUN_180015e50(param_4);
  FUN_180020770((double)bVar3);
  if (DAT_180425780 == 0) {
    DAT_180425780 = FUN_180016fb0("ai_shot_bias_min");
  }
  if (DAT_1803f91f0 == 0) {
    DAT_1803f91f0 = FUN_180016fb0("ai_shot_bias_max");
  }
  fVar2 = DAT_180381384;
  fVar7 = DAT_180381384;
  if (DAT_180425780 != 0) {
    fVar7 = (float)FUN_180019700();
  }
  fVar1 = DAT_180380bb0;
  fVar8 = DAT_180380bb0;
  if (DAT_1803f91f0 != 0) {
    fVar8 = (float)FUN_180019700(DAT_1803f91f0);
  }
  fVar11 = 0.0;
  if (0.0 <= param_5) {
    fVar11 = param_5;
  }
  fVar10 = fVar1;
  if (fVar11 <= fVar1) {
    fVar10 = fVar11;
  }
  fVar7 = fVar10 * (fVar8 - fVar7) + fVar7;
  fVar8 = (float)((uint)fVar7 & _DAT_1803817c0) * DAT_180380ac0;
  iVar6 = 0;
  pFVar5 = DAT_1805c51e8;
  do {
    if ((DAT_18042f184 & 1) == 0) {
      DAT_18042f184 = DAT_18042f184 | 1;
      pHVar4 = GetModuleHandleA("vstdlib.dll");
      pFVar5 = GetProcAddress(pHVar4,"RandomFloat");
      DAT_1805c51e8 = pFVar5;
    }
    fVar11 = fVar2;
    if (pFVar5 != (FARPROC)0x0) {
      (*pFVar5)((ulonglong)(uint)fVar2,fVar1);
      pFVar5 = DAT_1805c51e8;
      fVar11 = extraout_XMM0_Da;
    }
    if ((DAT_18042f184 & 1) == 0) {
      DAT_18042f184 = DAT_18042f184 | 1;
      pHVar4 = GetModuleHandleA("vstdlib.dll");
      pFVar5 = GetProcAddress(pHVar4,"RandomFloat");
      DAT_1805c51e8 = pFVar5;
    }
    fVar10 = fVar2;
    if (pFVar5 != (FARPROC)0x0) {
      (*pFVar5)((ulonglong)(uint)fVar2,fVar1);
      pFVar5 = DAT_1805c51e8;
      fVar10 = extraout_XMM0_Da_00;
    }
    if ((DAT_18042f184 & 1) == 0) {
      DAT_18042f184 = DAT_18042f184 | 1;
      pHVar4 = GetModuleHandleA("vstdlib.dll");
      pFVar5 = GetProcAddress(pHVar4,"RandomFloat");
      DAT_1805c51e8 = pFVar5;
    }
    fVar12 = fVar2;
    if (pFVar5 != (FARPROC)0x0) {
      (*pFVar5)((ulonglong)(uint)fVar2,fVar1);
      pFVar5 = DAT_1805c51e8;
      fVar12 = extraout_XMM0_Da_01;
    }
    if ((DAT_18042f184 & 1) == 0) {
      DAT_18042f184 = DAT_18042f184 | 1;
      pHVar4 = GetModuleHandleA("vstdlib.dll");
      pFVar5 = GetProcAddress(pHVar4,"RandomFloat");
      DAT_1805c51e8 = pFVar5;
    }
    fVar9 = fVar2;
    if (pFVar5 != (FARPROC)0x0) {
      (*pFVar5)((ulonglong)(uint)fVar2,fVar1);
      pFVar5 = DAT_1805c51e8;
      fVar9 = extraout_XMM0_Da_02;
    }
    fVar11 = (fVar1 - fVar8) * fVar11 + fVar10 * fVar8;
    fVar10 = (fVar1 - fVar8) * fVar12 + fVar9 * fVar8;
    if (fVar7 < 0.0) {
      fVar12 = fVar2;
      if (0.0 <= fVar11) {
        fVar12 = fVar1;
      }
      fVar11 = fVar12 - fVar11;
      fVar12 = fVar2;
      if (0.0 <= fVar10) {
        fVar12 = fVar1;
      }
      fVar10 = fVar12 - fVar10;
    }
  } while ((fVar1 < fVar10 * fVar10 + fVar11 * fVar11) && (iVar6 = iVar6 + 1, iVar6 < 0x40));
  *param_1 = 0x3f800000;
  param_1[1] = (float)(param_2 ^ DAT_1803817f0) * fVar11;
  param_1[2] = fVar10 * param_3;
  return param_1;
}



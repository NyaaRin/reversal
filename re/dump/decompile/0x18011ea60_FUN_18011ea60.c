// 0x18011ea60  FUN_18011ea60
// size=1161 thunk=false
// signature: undefined FUN_18011ea60()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18011ea60(undefined8 param_1,byte *param_2,longlong *param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  longlong *plVar4;
  code *pcVar5;
  int iVar6;
  HMODULE pHVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  byte *pbVar11;
  ulonglong uVar12;
  int *piVar13;
  ushort uVar14;
  ulonglong uVar15;
  undefined1 auStack_108 [32];
  byte local_e8 [16];
  longlong local_d8;
  ulonglong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  byte *local_78;
  byte *pbStack_70;
  byte *local_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  pHVar7 = GetModuleHandleA("client.dll");
  if (pHVar7 == (HMODULE)0x0) {
    return;
  }
  lVar10 = (longlong)pHVar7[0xf].unused;
  piVar13 = (int *)((longlong)&pHVar7[6].unused +
                   (ulonglong)*(ushort *)((longlong)&pHVar7[5].unused + lVar10) + lVar10);
  uVar2 = *(ushort *)((longlong)&pHVar7[1].unused + lVar10 + 2);
  uVar12 = 0;
  if (uVar2 == 0) {
    return;
  }
  while ((*piVar13 != 0x7865742e || ((char)piVar13[1] != 't'))) {
    uVar14 = (short)uVar12 + 1;
    piVar13 = piVar13 + 10;
    uVar12 = (ulonglong)uVar14;
    if (uVar2 <= uVar14) {
      return;
    }
  }
  lVar10 = (longlong)&pHVar7->unused + (ulonglong)(uint)piVar13[3];
  if (lVar10 == 0) {
    return;
  }
  uVar3 = piVar13[2];
  local_78 = (byte *)0x0;
  pbStack_70 = (byte *)0x0;
  local_68 = (byte *)0x0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  bVar1 = *param_2;
  while (bVar1 != 0) {
    while (bVar1 == 0x20) {
      param_2 = param_2 + 1;
      bVar1 = *param_2;
    }
    bVar1 = *param_2;
    if (bVar1 == 0) break;
    if (bVar1 == 0x3f) {
      local_e8[0] = 0;
      if (pbStack_70 == local_68) {
        FUN_1802281d0(&local_78,pbStack_70,local_e8);
      }
      else {
        *pbStack_70 = 0;
        pbStack_70 = pbStack_70 + 1;
      }
      if (((longlong)uStack_48 < 0) && (uStack_48 != 0)) {
        local_d8 = -((-uStack_48 - 1 >> 5) * 4 + 4);
      }
      else {
        local_d8 = (uStack_48 >> 5) * 4;
      }
      local_d8 = local_60 + local_d8;
      local_d0 = uStack_48 & 0x1f;
      local_b0 = FUN_180239b60(&local_60,&local_d8,1);
      if (((longlong)local_b0 < 0) && (local_b0 != 0)) {
        local_b8 = -((~local_b0 >> 5) * 4 + 4);
      }
      else {
        local_b8 = (local_b0 >> 5) * 4;
      }
      local_b8 = local_60 + local_b8;
      local_b0 = local_b0 & 0x1f;
      local_c8 = local_b8 + (local_b0 + 1 >> 5) * 4;
      local_c0 = (ulonglong)((uint)(local_b0 + 1) & 0x1f);
      FUN_18023b1d0(&local_b8,&local_c8,0);
      pbVar11 = param_2 + 1;
      if (*pbVar11 == 0x3f) {
        pbVar11 = param_2 + 2;
      }
    }
    else {
      if ((byte)(bVar1 - 0x30) < 10) {
        iVar9 = (char)bVar1 + -0x30;
      }
      else if ((byte)((bVar1 | 0x20) + 0x9f) < 6) {
        iVar9 = (char)(bVar1 | 0x20) + -0x57;
      }
      else {
        iVar9 = -1;
      }
      bVar1 = param_2[1];
      if ((byte)(bVar1 - 0x30) < 10) {
        iVar6 = (char)bVar1 + -0x30;
      }
      else if ((byte)((bVar1 | 0x20) + 0x9f) < 6) {
        iVar6 = (char)(bVar1 | 0x20) + -0x57;
      }
      else {
        iVar6 = -1;
      }
      if ((iVar9 < 0) || (iVar6 < 0)) goto LAB_18011ee79;
      pbVar11 = param_2 + 2;
      local_e8[0] = (char)iVar9 << 4 | (byte)iVar6;
      if (pbStack_70 == local_68) {
        FUN_1802281d0(&local_78,pbStack_70,local_e8);
      }
      else {
        *pbStack_70 = local_e8[0];
        pbStack_70 = pbStack_70 + 1;
      }
      if (((longlong)uStack_48 < 0) && (uStack_48 != 0)) {
        local_a8 = -((-uStack_48 - 1 >> 5) * 4 + 4);
      }
      else {
        local_a8 = (uStack_48 >> 5) * 4;
      }
      local_a8 = local_60 + local_a8;
      local_a0 = uStack_48 & 0x1f;
      local_80 = FUN_180239b60(&local_60,&local_a8,1);
      if (((longlong)local_80 < 0) && (local_80 != 0)) {
        local_88 = -((~local_80 >> 5) * 4 + 4);
      }
      else {
        local_88 = (local_80 >> 5) * 4;
      }
      local_88 = local_60 + local_88;
      local_80 = local_80 & 0x1f;
      local_98 = local_88 + (local_80 + 1 >> 5) * 4;
      local_90 = (ulonglong)((uint)(local_80 + 1) & 0x1f);
      FUN_18023b1d0(&local_88,&local_98,CONCAT71((int7)((ulonglong)local_88 >> 8),1));
    }
    param_2 = pbVar11;
    bVar1 = *pbVar11;
  }
  if (local_78 != pbStack_70) {
    uVar15 = (ulonglong)uVar3 + lVar10;
    uVar12 = (longlong)pbStack_70 - (longlong)local_78;
    pbVar11 = local_78;
    for (; local_d8 = lVar10, lVar10 + uVar12 < uVar15; lVar10 = lVar10 + 1) {
      uVar8 = 0;
      if (uVar12 != 0) {
        do {
          if (((*(uint *)(local_60 + (uVar8 >> 5) * 4) >> ((byte)uVar8 & 0x1f) & 1) != 0) &&
             (*(byte *)(uVar8 + lVar10) != pbVar11[uVar8])) goto LAB_18011ee65;
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar12);
      }
      plVar4 = (longlong *)param_3[1];
      if (plVar4 == (longlong *)param_3[2]) {
        FUN_180221c00(param_3,plVar4,&local_d8);
      }
      else {
        *plVar4 = lVar10;
        param_3[1] = param_3[1] + 8;
      }
      if (3 < (int)(param_3[1] - *param_3 >> 3)) break;
      lVar10 = lVar10 + -1 + uVar12;
      pbVar11 = local_78;
LAB_18011ee65:
    }
  }
LAB_18011ee79:
  FUN_18021e060(&local_60);
  if (local_78 != (byte *)0x0) {
    pbVar11 = local_78;
    if ((0xfff < (ulonglong)((longlong)local_68 - (longlong)local_78)) &&
       (pbVar11 = *(byte **)(local_78 + -8), (byte *)0x1f < local_78 + (-8 - (longlong)pbVar11))) {
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    free(pbVar11);
  }
  return;
}



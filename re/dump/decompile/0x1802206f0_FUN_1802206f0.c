// 0x1802206f0  FUN_1802206f0
// size=673 thunk=false
// signature: undefined FUN_1802206f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_1802206f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined4 *puVar6;
  undefined8 *****pppppuVar7;
  int iVar8;
  undefined8 ******ppppppuVar9;
  undefined8 *_Buf2;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  ulonglong _Size;
  undefined8 *puVar13;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 *local_c0;
  undefined8 *local_b8;
  undefined8 *****local_b0;
  ulonglong local_a8;
  undefined4 *local_a0;
  undefined8 *local_98;
  undefined4 *local_90;
  undefined4 local_88;
  undefined8 *****local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  ulonglong uStack_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_e8;
  if ((param_1 == param_2) || (local_c0 = param_1 + 0xc, local_c0 == param_2)) {
    return param_2;
  }
  puVar13 = (undefined8 *)(param_1 + 2);
  local_b8 = (undefined8 *)(param_1 + 0xe);
  puVar11 = local_c0;
  local_a0 = param_1;
  local_98 = puVar13;
  local_90 = param_2;
LAB_180220750:
  uVar1 = *puVar11;
  local_b0 = (undefined8 *****)*local_b8;
  uStack_78 = local_b8[1];
  uVar3 = local_b8[2];
  local_a8 = local_b8[3];
  *(undefined1 *)local_b8 = 0;
  local_b8[2] = 0;
  local_b8[3] = 0xf;
  iVar2 = puVar11[10];
  local_c8 = uVar1;
  local_88 = uVar1;
  local_80 = local_b0;
  local_70 = uVar3;
  uStack_68 = local_a8;
  local_60 = iVar2;
  if (iVar2 == param_1[10]) {
    uVar4 = *(ulonglong *)(param_1 + 6);
    _Buf2 = puVar13;
    if (0xf < *(ulonglong *)(param_1 + 8)) {
      _Buf2 = (undefined8 *)*puVar13;
    }
    ppppppuVar9 = &local_80;
    if (0xf < local_a8) {
      ppppppuVar9 = (undefined8 ******)local_b0;
    }
    uVar12 = uVar3;
    if (uVar4 < uVar3) {
      uVar12 = uVar4;
    }
    iVar8 = memcmp(ppppppuVar9,_Buf2,uVar12);
    if (iVar8 == 0) {
      if (uVar3 < uVar4) {
        bVar5 = true;
      }
      else {
        if (uVar4 < uVar3) goto LAB_18022080f;
        bVar5 = false;
      }
    }
    else if (iVar8 < 0) {
      bVar5 = true;
    }
    else {
LAB_18022080f:
      bVar5 = false;
    }
  }
  else {
    bVar5 = (int)param_1[10] <= iVar2;
  }
  uVar4 = local_a8;
  pppppuVar7 = local_b0;
  if (!bVar5) {
    do {
      if (iVar2 == puVar11[-2]) {
        uVar12 = *(ulonglong *)(puVar11 + -6);
        if (*(ulonglong *)(puVar11 + -4) < 0x10) {
          puVar10 = puVar11 + -10;
        }
        else {
          puVar10 = *(undefined4 **)(puVar11 + -10);
        }
        ppppppuVar9 = &local_80;
        if (0xf < uVar4) {
          ppppppuVar9 = (undefined8 ******)pppppuVar7;
        }
        _Size = uVar3;
        if (uVar12 < uVar3) {
          _Size = uVar12;
        }
        iVar8 = memcmp(ppppppuVar9,puVar10,_Size);
        if (iVar8 == 0) {
          if (uVar3 < uVar12) {
            bVar5 = true;
          }
          else {
            if (uVar12 < uVar3) goto LAB_1802208e5;
            bVar5 = false;
          }
        }
        else if (iVar8 < 0) {
          bVar5 = true;
        }
        else {
LAB_1802208e5:
          bVar5 = false;
        }
      }
      else {
        bVar5 = (int)puVar11[-2] <= iVar2;
      }
      if (!bVar5) goto LAB_180220910;
      *puVar11 = puVar11[-0xc];
      FUN_18020e8a0(puVar11 + 2,puVar11 + -10);
      puVar11[10] = puVar11[-2];
      puVar11 = puVar11 + -0xc;
    } while( true );
  }
  puVar10 = puVar11 + 0xc;
  puVar6 = puVar10;
  while (param_1 != puVar11) {
    puVar6[-0xc] = puVar11[-0xc];
    FUN_18020e8a0(puVar6 + -10,puVar11 + -10);
    puVar6[-2] = puVar11[-2];
    puVar6 = puVar6 + -0xc;
    puVar11 = puVar11 + -0xc;
  }
  *param_1 = uVar1;
  FUN_18020e8a0(puVar13,&local_80);
  param_1[10] = local_60;
  goto LAB_18022093f;
LAB_180220910:
  *puVar11 = local_c8;
  FUN_18020e8a0(puVar11 + 2,&local_80);
  puVar11[10] = local_60;
  puVar10 = local_c0 + 0xc;
  param_1 = local_a0;
  puVar13 = local_98;
LAB_18022093f:
  local_c0 = puVar10;
  FUN_18020e450(&local_80);
  local_b8 = local_b8 + 6;
  puVar11 = puVar10;
  if (puVar10 == local_90) {
    return local_90;
  }
  goto LAB_180220750;
}



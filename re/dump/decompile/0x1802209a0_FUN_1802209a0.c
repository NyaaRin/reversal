// 0x1802209a0  FUN_1802209a0
// size=529 thunk=false
// signature: undefined FUN_1802209a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1802209a0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 ******ppppppuVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  int iVar6;
  undefined8 ******ppppppuVar7;
  undefined8 *puVar8;
  undefined8 *_Buf2;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong _Size;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *****local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  ulonglong uStack_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  if ((param_1 == param_2) ||
     (puVar10 = param_1 + 5, local_90 = param_1, local_88 = param_2, puVar10 == param_2)) {
    return param_2;
  }
LAB_1802209e3:
  ppppppuVar2 = (undefined8 ******)*puVar10;
  uStack_78 = puVar10[1];
  uVar3 = puVar10[2];
  local_98 = puVar10[3];
  *(undefined1 *)puVar10 = 0;
  puVar10[2] = 0;
  puVar10[3] = 0xf;
  iVar1 = *(int *)(puVar10 + 4);
  local_80 = ppppppuVar2;
  local_70 = uVar3;
  uStack_68 = local_98;
  local_60 = iVar1;
  if (iVar1 == *(int *)(param_1 + 4)) {
    uVar4 = param_1[2];
    puVar8 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar8 = (undefined8 *)*param_1;
    }
    ppppppuVar7 = &local_80;
    if (0xf < local_98) {
      ppppppuVar7 = ppppppuVar2;
    }
    uVar11 = uVar3;
    if (uVar4 < uVar3) {
      uVar11 = uVar4;
    }
    iVar6 = memcmp(ppppppuVar7,puVar8,uVar11);
    if (iVar6 == 0) {
      if (uVar3 < uVar4) {
        bVar5 = true;
      }
      else {
        if (uVar4 < uVar3) goto LAB_180220a87;
        bVar5 = false;
      }
    }
    else if (iVar6 < 0) {
      bVar5 = true;
    }
    else {
LAB_180220a87:
      bVar5 = false;
    }
  }
  else {
    bVar5 = *(int *)(param_1 + 4) <= iVar1;
  }
  uVar4 = local_98;
  puVar8 = puVar10;
  if (!bVar5) {
    do {
      puVar9 = puVar8 + -5;
      if (iVar1 == *(int *)(puVar8 + -1)) {
        uVar11 = puVar8[-3];
        _Buf2 = puVar9;
        if (0xf < (ulonglong)puVar8[-2]) {
          _Buf2 = (undefined8 *)*puVar9;
        }
        ppppppuVar7 = &local_80;
        if (0xf < uVar4) {
          ppppppuVar7 = ppppppuVar2;
        }
        _Size = uVar3;
        if (uVar11 < uVar3) {
          _Size = uVar11;
        }
        iVar6 = memcmp(ppppppuVar7,_Buf2,_Size);
        if (iVar6 == 0) {
          if (uVar3 < uVar11) {
            bVar5 = true;
          }
          else {
            if (uVar11 < uVar3) goto LAB_180220b39;
            bVar5 = false;
          }
        }
        else if (iVar6 < 0) {
          bVar5 = true;
        }
        else {
LAB_180220b39:
          bVar5 = false;
        }
      }
      else {
        bVar5 = *(int *)(puVar8 + -1) <= iVar1;
      }
      if (!bVar5) goto LAB_180220b5d;
      FUN_18020e8a0(puVar8,puVar9);
      *(undefined4 *)(puVar8 + 4) = *(undefined4 *)(puVar8 + -1);
      puVar8 = puVar9;
    } while( true );
  }
  puVar8 = puVar10 + 5;
  puVar9 = puVar10;
  while (puVar9 != param_1) {
    FUN_18020e8a0(puVar8 + -5,puVar9 + -5);
    *(undefined4 *)(puVar8 + -1) = *(undefined4 *)(puVar9 + -1);
    puVar8 = puVar8 + -5;
    puVar9 = puVar9 + -5;
  }
  FUN_18020e8a0(param_1,&local_80);
  *(int *)(param_1 + 4) = local_60;
  goto LAB_180220b78;
LAB_180220b5d:
  FUN_18020e8a0(puVar8,&local_80);
  *(int *)(puVar8 + 4) = local_60;
  param_1 = local_90;
LAB_180220b78:
  puVar10 = puVar10 + 5;
  FUN_18020e450(&local_80);
  if (puVar10 == local_88) {
    return local_88;
  }
  goto LAB_1802209e3;
}



// 0x18023fc80  FUN_18023fc80
// size=729 thunk=false
// signature: undefined FUN_18023fc80()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00018023fec8) */
/* WARNING: Removing unreachable block (ram,0x00018023fef4) */

void FUN_18023fc80(longlong param_1,byte param_2,byte param_3)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined8 *****pppppuVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 ******ppppppuVar8;
  undefined8 ******ppppppuVar9;
  byte *pbVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_d8 [32];
  byte local_b8;
  undefined1 local_b7 [7];
  byte local_b0;
  undefined1 local_af [7];
  undefined1 local_a8;
  undefined1 local_a7 [7];
  undefined8 *****local_a0 [2];
  ulonglong local_90;
  ulonglong local_88;
  undefined8 *****local_80 [2];
  ulonglong local_70;
  ulonglong local_68;
  undefined8 *****local_60 [2];
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  lVar1 = *(longlong *)(param_1 + 8);
  uVar11 = 0;
  local_b8 = param_2;
  local_b0 = param_3;
  if ((*(uint *)(param_1 + 0x10) & 0x800) == 0) {
    if (param_2 <= param_3) {
      uVar11 = (ulonglong)param_2;
      if (*(longlong *)(lVar1 + 0x28) == 0) {
        puVar7 = (undefined8 *)FUN_1802d8350(0x20);
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        *(undefined8 **)(lVar1 + 0x28) = puVar7;
        param_3 = local_b0;
      }
      uVar12 = (uint)param_2;
      while (uVar12 <= param_3) {
        pbVar10 = (byte *)((uVar11 >> 3) + *(longlong *)(lVar1 + 0x28));
        *pbVar10 = *pbVar10 | (byte)(1 << ((uint)uVar11 & 7));
        uVar12 = (uint)uVar11 + 1;
        uVar11 = (ulonglong)uVar12;
      }
      return;
    }
    std::_Xregex_error(8);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_18023ce30(*(undefined8 *)(param_1 + 0x18),local_80,&local_b8,local_b7);
  FUN_18023ce30(*(undefined8 *)(param_1 + 0x18),local_a0,&local_b0,local_af);
  uVar3 = local_70;
  uVar15 = local_90;
  ppppppuVar9 = local_a0;
  if (0xf < local_88) {
    ppppppuVar9 = (undefined8 ******)local_a0[0];
  }
  ppppppuVar8 = local_80;
  if (0xf < local_68) {
    ppppppuVar8 = (undefined8 ******)local_80[0];
  }
  uVar13 = local_70;
  if (local_90 < local_70) {
    uVar13 = local_90;
  }
  iVar6 = memcmp(ppppppuVar8,ppppppuVar9,uVar13);
  if (iVar6 == 0) {
    if (uVar15 <= uVar3) {
      if (uVar3 <= uVar15) goto LAB_18023fd60;
      goto LAB_18023fd3f;
    }
    cVar5 = -1;
  }
  else if (iVar6 < 0) {
    cVar5 = -1;
  }
  else {
LAB_18023fd3f:
    cVar5 = '\x01';
  }
  if ('\0' < cVar5) {
    std::_Xregex_error(8);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_18023fd60:
  do {
    local_a8 = (undefined1)uVar11;
    FUN_18023ce30(*(undefined8 *)(param_1 + 0x18),local_60,&local_a8,local_a7);
    uVar13 = local_48;
    uVar3 = local_50;
    pppppuVar4 = local_60[0];
    uVar15 = local_70;
    ppppppuVar9 = local_60;
    if (0xf < local_48) {
      ppppppuVar9 = (undefined8 ******)local_60[0];
    }
    ppppppuVar8 = local_80;
    if (0xf < local_68) {
      ppppppuVar8 = (undefined8 ******)local_80[0];
    }
    uVar14 = local_70;
    if (local_50 < local_70) {
      uVar14 = local_50;
    }
    iVar6 = memcmp(ppppppuVar8,ppppppuVar9,uVar14);
    uVar14 = local_90;
    if (iVar6 == 0) {
      if (uVar15 < uVar3) {
        cVar5 = -1;
        goto LAB_18023fdca;
      }
      if (uVar3 < uVar15) goto LAB_18023fdc8;
LAB_18023fdd2:
      ppppppuVar9 = local_a0;
      if (0xf < local_88) {
        ppppppuVar9 = (undefined8 ******)local_a0[0];
      }
      ppppppuVar8 = local_60;
      if (0xf < uVar13) {
        ppppppuVar8 = (undefined8 ******)pppppuVar4;
      }
      uVar15 = uVar3;
      if (local_90 < uVar3) {
        uVar15 = local_90;
      }
      iVar6 = memcmp(ppppppuVar8,ppppppuVar9,uVar15);
      if (iVar6 == 0) {
        if (uVar3 < uVar14) {
          cVar5 = -1;
          goto LAB_18023fe16;
        }
        if (uVar14 < uVar3) goto LAB_18023fe14;
      }
      else {
        if (iVar6 < 0) {
          cVar5 = -1;
        }
        else {
LAB_18023fe14:
          cVar5 = '\x01';
        }
LAB_18023fe16:
        if ('\0' < cVar5) goto LAB_18023fe54;
      }
      puVar7 = *(undefined8 **)(lVar1 + 0x28);
      if (puVar7 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)FUN_1802d8350(0x20);
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        *(undefined8 **)(lVar1 + 0x28) = puVar7;
      }
      pbVar10 = (byte *)((uVar11 >> 3) + (longlong)puVar7);
      *pbVar10 = *pbVar10 | (byte)(1 << ((uint)uVar11 & 7));
    }
    else {
      if (iVar6 < 0) {
        cVar5 = -1;
      }
      else {
LAB_18023fdc8:
        cVar5 = '\x01';
      }
LAB_18023fdca:
      if (cVar5 < '\x01') goto LAB_18023fdd2;
    }
LAB_18023fe54:
    FUN_18020e450(local_60);
    uVar12 = (uint)uVar11 + 1;
    uVar11 = (ulonglong)uVar12;
    if (0xff < uVar12) {
      FUN_18020e450(local_a0);
      FUN_18020e450(local_80);
      puVar7 = *(undefined8 **)(lVar1 + 0x38);
      if (puVar7 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)FUN_1802d8350(0x10);
        *puVar7 = 0;
        puVar7[1] = 0;
        *(undefined8 **)(lVar1 + 0x38) = puVar7;
      }
      FUN_18023f460(puVar7,local_b8);
      FUN_18023f460(*(undefined8 *)(lVar1 + 0x38),local_b0);
      return;
    }
  } while( true );
}



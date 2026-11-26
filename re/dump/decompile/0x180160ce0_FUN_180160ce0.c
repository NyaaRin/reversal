// 0x180160ce0  FUN_180160ce0
// size=385 thunk=false
// signature: undefined FUN_180160ce0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180160ce0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  lVar6 = *param_2;
  lVar5 = param_2[1];
  lVar9 = lVar5 - lVar6 >> 4;
  iVar7 = (int)(DAT_1803e9a58 - DAT_1803e9a50 >> 3) * -0x1642c859;
  uVar10 = lVar9 * -0x5555555555555555;
  uVar4 = (ulonglong)iVar7;
  if (uVar4 < uVar10) {
    param_2[1] = uVar4 * 0x30 + lVar6;
  }
  else if (uVar10 < uVar4) {
    if ((ulonglong)((param_2[2] - lVar6 >> 4) * -0x5555555555555555) < uVar4) {
      FUN_180222e70(param_2,uVar4);
    }
    else {
      for (lVar6 = uVar4 + lVar9 * 0x5555555555555555; lVar6 != 0; lVar6 = lVar6 + -1) {
        lVar5 = lVar5 + 0x30;
      }
      param_2[1] = lVar5;
    }
  }
  iVar8 = 0;
  if (0 < iVar7) {
    lVar6 = 0;
    do {
      FUN_1802d44f0(lVar6 * 0x1c + param_1,param_1 + 0x10 + lVar6 * 0x1c,&local_58);
      iVar3 = *(int *)(lVar6 * 0xb8 + DAT_1803e9a50);
      if ((iVar3 < 0) || (iVar8 <= iVar3)) {
        lVar5 = *param_2;
        puVar1 = (undefined4 *)(lVar5 + lVar6 * 0x30);
        *puVar1 = local_58;
        puVar1[1] = uStack_54;
        puVar1[2] = uStack_50;
        puVar1[3] = uStack_4c;
        puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar6 * 0x30);
        *puVar2 = local_48;
        puVar2[1] = uStack_40;
        puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar6 * 0x30);
        *puVar2 = local_38;
        puVar2[1] = uStack_30;
      }
      else {
        FUN_1802d4110((longlong)iVar3 * 0x30 + *param_2,&local_58,lVar6 * 0x30 + *param_2);
      }
      iVar8 = iVar8 + 1;
      lVar6 = lVar6 + 1;
    } while (iVar8 < iVar7);
  }
  return;
}



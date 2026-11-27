// 0x1802564e0  FUN_1802564e0
// size=419 thunk=false
// signature: undefined FUN_1802564e0()
// status: ok


ulonglong * FUN_1802564e0(longlong *param_1,ulonglong *param_2,ulonglong *param_3,char param_4)

{
  ushort uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  undefined1 local_48 [32];
  
  if ((param_4 != '\0') && (uVar2 = param_3[1], uVar2 != 0)) {
    uVar9 = *param_3;
    lVar3 = *param_1;
    uVar6 = (param_1[1] - lVar3 >> 5) * -0x5555555555555555;
    if (uVar6 < uVar9 || uVar6 - uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180262180();
    }
    lVar4 = *(longlong *)(uVar9 * 0x60 + lVar3);
    uVar9 = *(longlong *)(uVar9 * 0x60 + 8 + lVar3) - lVar4 >> 4;
    if (uVar2 != uVar9) {
      uVar1 = *(ushort *)(lVar4 + uVar2 * 0x10);
      if (uVar1 < 0x7f) {
        if (((0x19 < (uVar1 | 0x20) - 0x61) && (9 < uVar1 - 0x30)) && (uVar1 != 0x5f)) {
LAB_1802565df:
          uVar10 = (undefined4)*param_3;
          uVar11 = *(undefined4 *)((longlong)param_3 + 4);
          uVar12 = (undefined4)param_3[1];
          uVar13 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(undefined4 *)(param_2 + 2) = uVar10;
          *(undefined4 *)((longlong)param_2 + 0x14) = uVar11;
          *(undefined4 *)(param_2 + 3) = uVar12;
          *(undefined4 *)((longlong)param_2 + 0x1c) = uVar13;
          goto LAB_18025666d;
        }
      }
      else {
        cVar5 = FUN_180260600(uVar9,uVar1);
        if (cVar5 == '\0') {
          cVar5 = FUN_180260690(extraout_XMM0_Da,uVar1);
          if (cVar5 == '\0') goto LAB_1802565df;
        }
      }
    }
  }
  local_68 = (undefined4)*param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = (undefined4)param_3[1];
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  cVar5 = FUN_180255f60(param_1,&local_68,param_4);
  local_68 = (undefined4)*param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = (undefined4)param_3[1];
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  if (cVar5 != '\0') {
    puVar7 = (ulonglong *)FUN_180255880(param_1,local_58,&local_68,param_4);
    uVar2 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = uVar2;
    uVar2 = puVar7[1];
    param_2[2] = *puVar7;
    param_2[3] = uVar2;
    return param_2;
  }
  cVar5 = FUN_180256230(param_1,&local_68,param_4);
  local_68 = (undefined4)*param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = (undefined4)param_3[1];
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  if (cVar5 != '\0') {
    puVar7 = (ulonglong *)FUN_180255690();
    uVar2 = puVar7[1];
    *param_2 = *puVar7;
    param_2[1] = uVar2;
    uVar2 = param_3[1];
    param_2[2] = *param_3;
    param_2[3] = uVar2;
    return param_2;
  }
  puVar7 = (ulonglong *)FUN_180255880(param_1,local_58,&local_68,param_4);
  local_68 = (undefined4)*param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = (undefined4)param_3[1];
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  uVar2 = *puVar7;
  uVar9 = puVar7[1];
  puVar8 = (undefined4 *)FUN_180255690(param_1,local_48,&local_68,param_4);
  param_2[2] = uVar2;
  param_2[3] = uVar9;
  uVar10 = *puVar8;
  uVar11 = puVar8[1];
  uVar12 = puVar8[2];
  uVar13 = puVar8[3];
LAB_18025666d:
  *(undefined4 *)param_2 = uVar10;
  *(undefined4 *)((longlong)param_2 + 4) = uVar11;
  *(undefined4 *)(param_2 + 1) = uVar12;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar13;
  return param_2;
}



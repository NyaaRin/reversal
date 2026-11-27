// 0x1802554b0  FUN_1802554b0
// size=474 thunk=false
// signature: undefined FUN_1802554b0()
// status: ok


ulonglong * FUN_1802554b0(longlong *param_1,ulonglong *param_2,ulonglong *param_3,char param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [16];
  
  if (param_4 == '\0') {
    lVar1 = *param_1;
    uVar2 = *param_3;
    uVar10 = (param_1[1] - lVar1 >> 5) * -0x5555555555555555;
    if (uVar2 <= uVar10 && uVar10 - uVar2 != 0) {
      uVar4 = param_3[1];
      if (uVar4 != *(longlong *)(uVar2 * 0x60 + 8 + lVar1) - *(longlong *)(uVar2 * 0x60 + lVar1) >>
                   4) {
        *param_2 = uVar2;
        param_2[1] = uVar4 + 1;
        return param_2;
      }
      if (uVar2 == uVar10 - 1) {
        param_2[1] = uVar4;
        *param_2 = uVar2;
        return param_2;
      }
      do {
        uVar2 = uVar2 + 1;
        if (uVar10 - 1 <= uVar2) break;
        if (uVar10 < uVar2 || uVar10 - uVar2 == 0) goto LAB_180255685;
      } while (*(char *)(uVar2 * 0x60 + 0x22 + lVar1) == '\x03');
      param_2[1] = 0;
      *param_2 = uVar2;
      return param_2;
    }
  }
  else {
    local_48 = (undefined4)*param_3;
    uStack_44 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_40 = (undefined4)param_3[1];
    uStack_3c = *(undefined4 *)((longlong)param_3 + 0xc);
    puVar9 = (undefined4 *)FUN_1802554b0(local_48,local_38,&local_48,0);
    lVar1 = *param_1;
    uVar5 = puVar9[1];
    uVar6 = puVar9[2];
    uVar7 = puVar9[3];
    uVar10 = (param_1[1] - lVar1 >> 5) * -0x5555555555555555;
    *(undefined4 *)param_3 = *puVar9;
    *(undefined4 *)((longlong)param_3 + 4) = uVar5;
    *(undefined4 *)(param_3 + 1) = uVar6;
    *(undefined4 *)((longlong)param_3 + 0xc) = uVar7;
    uVar2 = *param_3;
    if (uVar2 <= uVar10 && uVar10 - uVar2 != 0) {
      plVar11 = (longlong *)(uVar2 * 0x60 + lVar1);
      lVar1 = *plVar11;
      lVar3 = plVar11[1];
      for (uVar10 = param_3[1]; uVar10 < (ulonglong)(lVar3 - lVar1 >> 4); uVar10 = uVar10 + 1) {
        cVar8 = FUN_18025f490(*(undefined2 *)(lVar1 + uVar10 * 0x10));
        if (cVar8 == '\0') goto LAB_18025557f;
      }
      uVar10 = plVar11[1] - lVar1 >> 4;
LAB_18025557f:
      *param_3 = uVar2;
      param_3[1] = uVar10;
      local_48 = (undefined4)*param_3;
      uStack_44 = *(undefined4 *)((longlong)param_3 + 4);
      uStack_40 = (undefined4)param_3[1];
      uStack_3c = *(undefined4 *)((longlong)param_3 + 0xc);
      FUN_180255880(param_1,param_2,&local_48,0);
      return param_2;
    }
  }
LAB_180255685:
                    /* WARNING: Subroutine does not return */
  FUN_180262180();
}



// 0x180255300  FUN_180255300
// size=419 thunk=false
// signature: undefined FUN_180255300()
// status: ok


ulonglong * FUN_180255300(longlong *param_1,ulonglong *param_2,ulonglong *param_3,char param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [16];
  
  if (param_4 == '\0') {
    uVar7 = param_3[1];
    uVar8 = *param_3;
    if (uVar7 == 0) {
      if (uVar8 == 0) {
        param_2[1] = 0;
        *param_2 = 0;
      }
      else {
        uVar8 = uVar8 - 1;
        if (uVar8 != 0) {
          do {
            if ((ulonglong)((param_1[1] - *param_1) / 0x60) <= uVar8) goto LAB_18025549e;
          } while ((*(char *)(uVar8 * 0x60 + 0x22 + *param_1) == '\x03') &&
                  (uVar8 = uVar8 - 1, uVar8 != 0));
        }
        lVar1 = *param_1;
        uVar7 = (param_1[1] - lVar1 >> 5) * -0x5555555555555555;
        if (uVar7 < uVar8 || uVar7 - uVar8 == 0) goto LAB_18025549e;
        param_2[1] = *(longlong *)(uVar8 * 0x60 + 8 + lVar1) - *(longlong *)(uVar8 * 0x60 + lVar1)
                     >> 4;
        *param_2 = uVar8;
      }
    }
    else {
      *param_2 = uVar8;
      param_2[1] = uVar7 - 1;
    }
  }
  else {
    local_38 = (undefined4)*param_3;
    uStack_34 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_30 = (undefined4)param_3[1];
    uStack_2c = *(undefined4 *)((longlong)param_3 + 0xc);
    puVar6 = (undefined4 *)FUN_180255300(local_38,local_28,&local_38,0);
    lVar1 = *param_1;
    uVar2 = puVar6[1];
    uVar3 = puVar6[2];
    uVar4 = puVar6[3];
    uVar7 = (param_1[1] - lVar1 >> 5) * -0x5555555555555555;
    *(undefined4 *)param_3 = *puVar6;
    *(undefined4 *)((longlong)param_3 + 4) = uVar2;
    *(undefined4 *)(param_3 + 1) = uVar3;
    *(undefined4 *)((longlong)param_3 + 0xc) = uVar4;
    uVar8 = *param_3;
    if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
LAB_18025549e:
                    /* WARNING: Subroutine does not return */
      FUN_180262180();
    }
    uVar7 = param_3[1];
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar5 = FUN_18025f490(*(undefined2 *)(*(longlong *)(uVar8 * 0x60 + lVar1) + uVar7 * 0x10));
    } while (cVar5 != '\0');
    *param_3 = uVar8;
    param_3[1] = uVar7;
    local_38 = (undefined4)*param_3;
    uStack_34 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_30 = (undefined4)param_3[1];
    uStack_2c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_180255690(param_1,param_2,&local_38,0);
  }
  return param_2;
}



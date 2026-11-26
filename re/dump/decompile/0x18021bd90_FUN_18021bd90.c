// 0x18021bd90  FUN_18021bd90
// size=635 thunk=false
// signature: undefined FUN_18021bd90()
// status: ok


longlong * FUN_18021bd90(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  if (param_2 == param_3) {
    return param_3;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x18);
  puVar3 = (undefined8 *)param_2[1];
  lVar9 = param_2[1];
  lVar7 = ((((((ulonglong)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_2 + 0x11)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_2 + 0x12)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_2 + 0x13)) * 0x100000001b3 &
          *(ulonglong *)(param_1 + 0x30)) * 0x10;
  plVar6 = (longlong *)(lVar7 + lVar2);
  plVar8 = (longlong *)(lVar7 + 8 + lVar2);
  plVar4 = (longlong *)*plVar6;
  plVar10 = (longlong *)*plVar8;
  plVar5 = param_2;
  do {
    plVar11 = (longlong *)*plVar5;
    FUN_18020e450(plVar5 + 8);
    FUN_18020e450(plVar5 + 4);
    free(plVar5);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar5 == plVar10) {
      if (plVar4 == param_2) {
        *plVar6 = lVar1;
        lVar9 = lVar1;
      }
      *plVar8 = lVar9;
      while (plVar11 != param_3) {
        lVar9 = ((((((ulonglong)*(byte *)(plVar11 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar11 + 0x11)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar11 + 0x12)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar11 + 0x13)) * 0x100000001b3 &
                *(ulonglong *)(param_1 + 0x30)) * 0x10;
        plVar6 = (longlong *)(lVar9 + lVar2);
        plVar5 = (longlong *)(lVar2 + 8 + lVar9);
        plVar4 = (longlong *)*plVar5;
        plVar10 = plVar11;
        while( true ) {
          plVar11 = (longlong *)*plVar10;
          FUN_18020e450(plVar10 + 8);
          FUN_18020e450(plVar10 + 4);
          free(plVar10);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar10 == plVar4) break;
          plVar10 = plVar11;
          if (plVar11 == param_3) goto LAB_18021bfca;
        }
        *plVar6 = lVar1;
        *plVar5 = lVar1;
      }
      goto LAB_18021bfcd;
    }
    plVar5 = plVar11;
  } while (plVar11 != param_3);
  if (plVar4 == param_2) {
LAB_18021bfca:
    *plVar6 = (longlong)plVar11;
  }
LAB_18021bfcd:
  *puVar3 = plVar11;
  plVar11[1] = (longlong)puVar3;
  return param_3;
}



// 0x18021b8c0  FUN_18021b8c0
// size=486 thunk=false
// signature: undefined FUN_18021b8c0()
// status: ok


longlong * FUN_18021b8c0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *_Memory;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  if (param_2 == param_3) {
    return param_3;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x18);
  puVar3 = (undefined8 *)param_2[1];
  lVar5 = param_2[1];
  lVar6 = ((((((ulonglong)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_2 + 0x11)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_2 + 0x12)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_2 + 0x13)) * 0x100000001b3 &
          *(ulonglong *)(param_1 + 0x30)) * 0x10;
  plVar11 = (longlong *)(lVar6 + lVar2);
  plVar7 = (longlong *)(lVar6 + 8 + lVar2);
  plVar4 = (longlong *)*plVar11;
  plVar10 = (longlong *)*plVar7;
  _Memory = param_2;
  do {
    plVar9 = (longlong *)*_Memory;
    free(_Memory);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (_Memory == plVar10) {
      if (plVar4 == param_2) {
        *plVar11 = lVar1;
        lVar5 = lVar1;
      }
      *plVar7 = lVar5;
      while (plVar9 != param_3) {
        uVar8 = (((((ulonglong)*(byte *)(plVar9 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar9 + 0x11)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar9 + 0x12)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar9 + 0x13)) * 0x100000001b3 &
                *(ulonglong *)(param_1 + 0x30);
        plVar11 = (longlong *)(lVar2 + uVar8 * 0x10);
        lVar5 = lVar2 + uVar8 * 0x10;
        plVar4 = *(longlong **)(lVar5 + 8);
        plVar10 = plVar9;
        while( true ) {
          plVar9 = (longlong *)*plVar10;
          free(plVar10);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar10 == plVar4) break;
          plVar10 = plVar9;
          if (plVar9 == param_3) goto LAB_18021b9b1;
        }
        *plVar11 = lVar1;
        *(longlong *)(lVar5 + 8) = lVar1;
      }
      goto LAB_18021b9b5;
    }
    _Memory = plVar9;
  } while (plVar9 != param_3);
  if (plVar4 == param_2) {
LAB_18021b9b1:
    *plVar11 = (longlong)plVar9;
  }
LAB_18021b9b5:
  *puVar3 = plVar9;
  plVar9[1] = (longlong)puVar3;
  return param_3;
}



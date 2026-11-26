// 0x18021c010  FUN_18021c010
// size=584 thunk=false
// signature: undefined FUN_18021c010()
// status: ok


longlong * FUN_18021c010(longlong param_1,longlong *param_2,longlong *param_3)

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
  longlong *local_a8;
  
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
  local_a8 = (longlong *)(lVar6 + lVar2);
  plVar7 = (longlong *)(lVar6 + 8 + lVar2);
  plVar4 = (longlong *)*local_a8;
  plVar10 = (longlong *)*plVar7;
  _Memory = param_2;
  do {
    plVar9 = (longlong *)*_Memory;
    FUN_18020a5a0(_Memory + 4);
    free(_Memory);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (_Memory == plVar10) {
      if (plVar4 == param_2) {
        *local_a8 = lVar1;
        lVar5 = lVar1;
      }
      *plVar7 = lVar5;
      while (plVar9 != param_3) {
        uVar8 = (((((ulonglong)*(byte *)(plVar9 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar9 + 0x11)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar9 + 0x12)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar9 + 0x13)) * 0x100000001b3 &
                *(ulonglong *)(param_1 + 0x30);
        local_a8 = (longlong *)(lVar2 + uVar8 * 0x10);
        lVar5 = lVar2 + uVar8 * 0x10;
        plVar4 = *(longlong **)(lVar5 + 8);
        plVar10 = plVar9;
        while( true ) {
          plVar9 = (longlong *)*plVar10;
          FUN_18020a5a0(plVar10 + 4);
          free(plVar10);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar10 == plVar4) break;
          plVar10 = plVar9;
          if (plVar9 == param_3) goto LAB_18021c130;
        }
        *local_a8 = lVar1;
        *(longlong *)(lVar5 + 8) = lVar1;
      }
      goto LAB_18021c138;
    }
    _Memory = plVar9;
  } while (plVar9 != param_3);
  if (plVar4 == param_2) {
LAB_18021c130:
    *local_a8 = (longlong)plVar9;
  }
LAB_18021c138:
  *puVar3 = plVar9;
  plVar9[1] = (longlong)puVar3;
  return param_3;
}



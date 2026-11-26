// 0x18021de10  FUN_18021de10
// size=582 thunk=false
// signature: undefined FUN_18021de10()
// status: ok


longlong * FUN_18021de10(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *_Memory;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong local_a8;
  
  if (param_2 == param_3) {
    return param_3;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x18);
  puVar3 = (undefined8 *)param_2[1];
  local_a8 = param_2[1];
  plVar11 = param_2 + 2;
  if (0xf < (ulonglong)param_2[5]) {
    plVar11 = (longlong *)*plVar11;
  }
  uVar8 = 0xcbf29ce484222325;
  uVar7 = 0;
  if (param_2[4] != 0) {
    do {
      uVar8 = (uVar8 ^ *(byte *)((longlong)plVar11 + uVar7)) * 0x100000001b3;
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulonglong)param_2[4]);
  }
  lVar5 = (*(ulonglong *)(param_1 + 0x30) & uVar8) * 0x10;
  plVar11 = (longlong *)(lVar5 + lVar2);
  plVar6 = (longlong *)(lVar5 + 8 + lVar2);
  plVar4 = (longlong *)*plVar11;
  plVar9 = (longlong *)*plVar6;
  _Memory = param_2;
  do {
    plVar10 = (longlong *)*_Memory;
    FUN_18020e450(_Memory + 2);
    free(_Memory);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (_Memory == plVar9) {
      if (plVar4 == param_2) {
        *plVar11 = lVar1;
        local_a8 = lVar1;
      }
      *plVar6 = local_a8;
      while (plVar10 != param_3) {
        plVar11 = plVar10 + 2;
        if (0xf < (ulonglong)plVar10[5]) {
          plVar11 = (longlong *)*plVar11;
        }
        uVar8 = 0xcbf29ce484222325;
        uVar7 = 0;
        if (plVar10[4] != 0) {
          do {
            uVar8 = (uVar8 ^ *(byte *)((longlong)plVar11 + uVar7)) * 0x100000001b3;
            uVar7 = uVar7 + 1;
          } while (uVar7 < (ulonglong)plVar10[4]);
        }
        uVar8 = *(ulonglong *)(param_1 + 0x30) & uVar8;
        plVar11 = (longlong *)(lVar2 + uVar8 * 0x10);
        lVar5 = lVar2 + uVar8 * 0x10;
        plVar4 = *(longlong **)(lVar5 + 8);
        plVar9 = plVar10;
        while( true ) {
          plVar10 = (longlong *)*plVar9;
          FUN_18020e450(plVar9 + 2);
          free(plVar9);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar9 == plVar4) break;
          plVar9 = plVar10;
          if (plVar10 == param_3) {
            *plVar11 = (longlong)plVar10;
            goto LAB_18021e01a;
          }
        }
        *plVar11 = lVar1;
        *(longlong *)(lVar5 + 8) = lVar1;
      }
      goto LAB_18021e01a;
    }
    _Memory = plVar10;
  } while (plVar10 != param_3);
  if (plVar4 == param_2) {
    *plVar11 = (longlong)plVar10;
  }
LAB_18021e01a:
  *puVar3 = plVar10;
  plVar10[1] = (longlong)puVar3;
  return param_3;
}



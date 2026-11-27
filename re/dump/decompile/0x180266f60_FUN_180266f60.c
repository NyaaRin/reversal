// 0x180266f60  FUN_180266f60
// size=417 thunk=false
// signature: undefined FUN_180266f60()
// status: ok


longlong * FUN_180266f60(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
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
  lVar6 = param_2[1];
  lVar5 = (((ulonglong)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 &
          *(ulonglong *)(param_1 + 0x30)) * 0x10;
  plVar11 = (longlong *)(lVar5 + lVar2);
  plVar8 = (longlong *)(lVar2 + 8 + lVar5);
  plVar4 = (longlong *)*plVar11;
  plVar10 = (longlong *)*plVar8;
  _Memory = param_2;
  do {
    plVar9 = (longlong *)*_Memory;
    free(_Memory);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (_Memory == plVar10) {
      if (plVar4 == param_2) {
        *plVar11 = lVar1;
        lVar6 = lVar1;
      }
      *plVar8 = lVar6;
      while (plVar9 != param_3) {
        uVar7 = ((ulonglong)*(byte *)(plVar9 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 &
                *(ulonglong *)(param_1 + 0x30);
        plVar11 = (longlong *)(lVar2 + uVar7 * 0x10);
        lVar6 = lVar2 + uVar7 * 0x10;
        plVar4 = *(longlong **)(lVar6 + 8);
        plVar10 = plVar9;
        while( true ) {
          plVar9 = (longlong *)*plVar10;
          free(plVar10);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar10 == plVar4) break;
          plVar10 = plVar9;
          if (plVar9 == param_3) goto LAB_180267031;
        }
        *plVar11 = lVar1;
        *(longlong *)(lVar6 + 8) = lVar1;
      }
      goto LAB_180267035;
    }
    _Memory = plVar9;
  } while (plVar9 != param_3);
  if (plVar4 == param_2) {
LAB_180267031:
    *plVar11 = (longlong)plVar9;
  }
LAB_180267035:
  *puVar3 = plVar9;
  plVar9[1] = (longlong)puVar3;
  return param_3;
}



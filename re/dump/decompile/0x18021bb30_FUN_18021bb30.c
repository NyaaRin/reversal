// 0x18021bb30  FUN_18021bb30
// size=593 thunk=false
// signature: undefined FUN_18021bb30()
// status: ok


longlong * FUN_18021bb30(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *_Memory;
  longlong *plVar10;
  longlong *plVar11;
  
  if (param_2 == param_3) {
    return param_3;
  }
  lVar2 = *(longlong *)(param_1 + 8);
  lVar3 = *(longlong *)(param_1 + 0x18);
  puVar4 = (undefined8 *)param_2[1];
  lVar6 = param_2[1];
  lVar7 = ((((((((((ulonglong)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)param_2 + 0x11)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)param_2 + 0x12)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)param_2 + 0x13)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_2 + 0x14)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_2 + 0x15)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_2 + 0x16)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_2 + 0x17)) * 0x100000001b3 &
          *(ulonglong *)(param_1 + 0x30)) * 0x10;
  plVar1 = (longlong *)(lVar7 + lVar3);
  plVar8 = (longlong *)(lVar7 + 8 + lVar3);
  plVar5 = (longlong *)*plVar1;
  plVar10 = (longlong *)*plVar8;
  _Memory = param_2;
  do {
    plVar11 = (longlong *)*_Memory;
    free(_Memory);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (_Memory == plVar10) {
      if (plVar5 == param_2) {
        *plVar1 = lVar2;
        lVar6 = lVar2;
      }
      *plVar8 = lVar6;
      while (plVar11 != param_3) {
        uVar9 = (((((((((ulonglong)*(byte *)(plVar11 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar11 + 0x11)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar11 + 0x12)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar11 + 0x13)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar11 + 0x14)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar11 + 0x15)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar11 + 0x16)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar11 + 0x17)) * 0x100000001b3 &
                *(ulonglong *)(param_1 + 0x30);
        plVar1 = (longlong *)(lVar3 + uVar9 * 0x10);
        lVar6 = lVar3 + uVar9 * 0x10;
        plVar5 = *(longlong **)(lVar6 + 8);
        plVar10 = plVar11;
        while( true ) {
          plVar11 = (longlong *)*plVar10;
          free(plVar10);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar10 == plVar5) break;
          plVar10 = plVar11;
          if (plVar11 == param_3) {
            *plVar1 = (longlong)plVar11;
            goto LAB_18021bd4e;
          }
        }
        *plVar1 = lVar2;
        *(longlong *)(lVar6 + 8) = lVar2;
      }
      goto LAB_18021bd4e;
    }
    _Memory = plVar11;
  } while (plVar11 != param_3);
  if (plVar5 == param_2) {
    *plVar1 = (longlong)plVar11;
  }
LAB_18021bd4e:
  *puVar4 = plVar11;
  plVar11[1] = (longlong)puVar4;
  return param_3;
}



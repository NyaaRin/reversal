// 0x180204d00  FUN_180204d00
// size=261 thunk=false
// signature: undefined FUN_180204d00()
// status: ok


longlong * FUN_180204d00(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar4 = DAT_180458258;
  uVar5 = (((((((((ulonglong)*(byte *)(param_3 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)param_3 + 0x11)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)param_3 + 0x12)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_3 + 0x13)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_3 + 0x14)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_3 + 0x15)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_3 + 0x16)) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_3 + 0x17)) * 0x100000001b3 & DAT_180458280;
  lVar1 = DAT_180458268 + uVar5 * 0x10;
  plVar2 = (longlong *)(DAT_180458268 + uVar5 * 0x10);
  plVar3 = *(longlong **)(DAT_180458268 + uVar5 * 0x10);
  if (*(longlong **)(lVar1 + 8) == param_3) {
    if (plVar3 == param_3) {
      *plVar2 = DAT_180458258;
      *(longlong *)(lVar1 + 8) = lVar4;
    }
    else {
      *(longlong *)(lVar1 + 8) = param_3[1];
    }
  }
  else if (plVar3 == param_3) {
    *plVar2 = *param_3;
  }
  lVar1 = *param_3;
  DAT_180458260 = DAT_180458260 + -1;
  *(longlong *)param_3[1] = lVar1;
  *(longlong *)(lVar1 + 8) = param_3[1];
  free(param_3);
  *param_2 = lVar1;
  return param_2;
}



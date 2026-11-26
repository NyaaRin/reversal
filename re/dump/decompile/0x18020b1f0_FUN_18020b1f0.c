// 0x18020b1f0  FUN_18020b1f0
// size=212 thunk=false
// signature: undefined FUN_18020b1f0()
// status: ok


longlong * FUN_18020b1f0(undefined8 param_1,longlong *param_2,byte *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)
           (((((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)param_3[1]) * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^
                 (ulonglong)param_3[3]) * 0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^
               (ulonglong)param_3[5]) * 0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^
             (ulonglong)param_3[7]) * 0x100000001b3 & DAT_1805c7b80) * 0x10 + DAT_1805c7b68);
  lVar1 = plVar2[1];
  if (lVar1 != DAT_1805c7b58) {
    if (*(longlong *)param_3 == *(longlong *)(lVar1 + 0x10)) goto LAB_18020b2b6;
    while (lVar1 != *plVar2) {
      lVar1 = *(longlong *)(lVar1 + 8);
      if (*(longlong *)param_3 == *(longlong *)(lVar1 + 0x10)) {
        lVar3 = DAT_1805c7b58;
        if (lVar1 != 0) {
          lVar3 = lVar1;
        }
        *param_2 = lVar3;
        return param_2;
      }
    }
  }
  lVar1 = 0;
LAB_18020b2b6:
  lVar3 = DAT_1805c7b58;
  if (lVar1 != 0) {
    lVar3 = lVar1;
  }
  *param_2 = lVar3;
  return param_2;
}



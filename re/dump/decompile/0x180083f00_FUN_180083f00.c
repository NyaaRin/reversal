// 0x180083f00  FUN_180083f00
// size=117 thunk=false
// signature: undefined FUN_180083f00()
// status: ok


bool FUN_180083f00(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar3 = (undefined8 *)*param_1;
  }
  if (0xb < (ulonglong)param_1[2]) {
    lVar1 = thunk_FUN_1802d5870(puVar3,(longlong)puVar3 + 0xc,"weapon_swcs_",0xc);
    lVar2 = -1;
    if (lVar1 != (longlong)puVar3 + 0xc) {
      lVar2 = lVar1 - (longlong)puVar3;
    }
    return lVar2 == 0;
  }
  return false;
}



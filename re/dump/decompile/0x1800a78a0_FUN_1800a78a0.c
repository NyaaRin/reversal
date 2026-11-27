// 0x1800a78a0  FUN_1800a78a0
// size=117 thunk=false
// signature: undefined FUN_1800a78a0()
// status: ok


bool FUN_1800a78a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar3 = (undefined8 *)*param_1;
  }
  if (0xf < (ulonglong)param_1[2]) {
    puVar1 = (undefined8 *)thunk_FUN_1802d5870(puVar3,puVar3 + 2,"weapon_octo_base",0x10);
    lVar2 = -1;
    if (puVar1 != puVar3 + 2) {
      lVar2 = (longlong)puVar1 - (longlong)puVar3;
    }
    return lVar2 == 0;
  }
  return false;
}



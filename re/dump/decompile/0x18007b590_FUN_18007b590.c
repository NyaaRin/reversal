// 0x18007b590  FUN_18007b590
// size=138 thunk=false
// signature: undefined FUN_18007b590()
// status: ok


undefined8 FUN_18007b590(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  plVar1 = param_1 + 2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (longlong *)*param_1;
  }
  if ((*plVar1 == 8) && (*param_1 == 0x657361625f627773)) {
    puVar3 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar3 = (undefined8 *)*param_2;
    }
    if (((3 < (ulonglong)param_2[2]) &&
        (puVar2 = (undefined8 *)
                  thunk_FUN_1802d5870(puVar3,(undefined8 *)((longlong)puVar3 + 4),&DAT_180346fb8,4),
        puVar2 != (undefined8 *)((longlong)puVar3 + 4))) && (puVar2 == puVar3)) {
      return 1;
    }
  }
  return 0;
}



// 0x180261490  FUN_180261490
// size=111 thunk=false
// signature: undefined FUN_180261490()
// status: ok


undefined2 * FUN_180261490(undefined8 param_1,ushort param_2)

{
  ushort *puVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  puVar4 = (undefined2 *)&DAT_1803e1e40;
  puVar5 = &DAT_1803e5c8c;
  do {
    lVar2 = ((longlong)puVar5 - (longlong)puVar4) / 0x18;
    puVar1 = puVar4 + lVar2 * 6;
    puVar3 = puVar4 + lVar2 * 6;
    if (*puVar1 <= param_2) {
      if (param_2 <= (ushort)puVar3[1]) {
        return puVar3;
      }
      puVar4 = puVar3 + 6;
    }
    puVar3 = puVar3 + -6;
    if (*puVar1 <= param_2) {
      puVar3 = puVar5;
    }
    puVar5 = puVar3;
  } while (puVar4 <= puVar3);
  return (undefined2 *)0x0;
}



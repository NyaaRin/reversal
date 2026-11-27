// 0x18025f490  FUN_18025f490
// size=173 thunk=false
// signature: undefined FUN_18025f490()
// status: ok


undefined8 FUN_18025f490(ushort param_1)

{
  ushort uVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  
  if (param_1 < 0x7f) {
    if ((param_1 != 0x20) && (4 < param_1 - 9)) {
      return 0;
    }
    return 1;
  }
  puVar4 = &DAT_1803e64f0;
  puVar6 = &DAT_1803e651a;
  do {
    lVar2 = ((longlong)puVar6 - (longlong)puVar4) / 0xc;
    uVar1 = puVar4[lVar2 * 3];
    puVar5 = puVar4;
    if (uVar1 <= param_1) {
      if (param_1 <= (ushort)puVar4[lVar2 * 3 + 1]) {
        if ((ushort)puVar4[lVar2 * 3 + 2] == 1) {
          return 1;
        }
        if ((int)((uint)param_1 - (uint)uVar1) % (int)(uint)(ushort)puVar4[lVar2 * 3 + 2] != 0) {
          return 0;
        }
        return 1;
      }
      puVar5 = puVar4 + lVar2 * 3 + 3;
    }
    puVar3 = puVar4 + lVar2 * 3 + -3;
    if (uVar1 <= param_1) {
      puVar3 = puVar6;
    }
    puVar4 = puVar5;
    puVar6 = puVar3;
    if (puVar3 < puVar5) {
      return 0;
    }
  } while( true );
}



// 0x18025ad40  FUN_18025ad40
// size=282 thunk=false
// signature: undefined FUN_18025ad40()
// status: ok


ulonglong FUN_18025ad40(ushort param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined2 *puVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  
  if (param_1 < 0x100) {
    return (ulonglong)(byte)(&DAT_1803310f0)[param_1];
  }
  puVar5 = (undefined2 *)&DAT_1803dec00;
  puVar7 = &DAT_1803e1e34;
  do {
    lVar2 = ((longlong)puVar7 - (longlong)puVar5) / 0xc;
    puVar6 = puVar5;
    if ((ushort)puVar5[lVar2 * 3] <= param_1) {
      if (param_1 <= (ushort)puVar5[lVar2 * 3 + 1]) {
        bVar1 = *(byte *)(puVar5 + lVar2 * 3 + 2);
        uVar4 = (ulonglong)(char)bVar1;
        if (bVar1 != 0x33) {
          if ((bVar1 < 0x2f) && ((0x410000000001U >> (uVar4 & 0x3f) & 1) != 0)) {
            return 2;
          }
          if (bVar1 == 0x27) {
            return 2;
          }
          if (bVar1 == 10) {
            return 0x20;
          }
          goto LAB_18025ae56;
        }
        break;
      }
      puVar6 = puVar5 + lVar2 * 3 + 3;
    }
    puVar3 = puVar5 + lVar2 * 3 + -3;
    if ((ushort)puVar5[lVar2 * 3] <= param_1) {
      puVar3 = puVar7;
    }
    puVar5 = puVar6;
    puVar7 = puVar3;
  } while (puVar6 <= puVar3);
  if (((0x19bf < (ushort)(param_1 + 0xcc00)) && (0x51ff < (ushort)(param_1 + 0xb200))) &&
     (0x1ff < (ushort)(param_1 + 0x700))) {
    if (0x2f < (ushort)(param_1 + 0xdf60)) {
      return 2;
    }
    return 0x24;
  }
  uVar4 = 0x18;
LAB_18025ae56:
  return uVar4 & 0xff;
}



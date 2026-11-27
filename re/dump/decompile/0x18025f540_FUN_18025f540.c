// 0x18025f540  FUN_18025f540
// size=167 thunk=false
// signature: undefined FUN_18025f540()
// status: ok


ulonglong FUN_18025f540(ushort param_1)

{
  undefined *puVar1;
  ushort uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  if (param_1 < 0x1100) {
    return 0x1100;
  }
  puVar5 = &DAT_1803de140;
  puVar6 = &DAT_1803de250;
  do {
    lVar3 = (longlong)puVar6 - (longlong)puVar5 >> 2;
    if (lVar3 < 0) {
      lVar3 = lVar3 + 1;
    }
    uVar4 = lVar3 >> 1;
    if ((*(ushort *)(puVar5 + uVar4 * 4) <= param_1) &&
       (param_1 <= *(ushort *)(puVar5 + uVar4 * 4 + 2))) goto LAB_18025f5e4;
    puVar1 = puVar5 + uVar4 * 4 + -4;
    if (*(ushort *)(puVar5 + uVar4 * 4) <= param_1) {
      puVar5 = puVar5 + uVar4 * 4 + 4;
      puVar1 = puVar6;
    }
    puVar6 = puVar1;
  } while (puVar5 <= puVar6);
  uVar4 = (ulonglong)(ushort)(param_1 + 0xcc00);
  if (0x19bf < (ushort)(param_1 + 0xcc00)) {
    uVar2 = param_1 + 0xb200;
    uVar4 = (ulonglong)uVar2;
    if ((0x51ff < uVar2) &&
       (uVar4 = (ulonglong)(byte)(uVar2 >> 8) << 8, 0x1ff < (ushort)(param_1 + 0x700))) {
      return uVar4;
    }
  }
LAB_18025f5e4:
  return CONCAT71((int7)(uVar4 >> 8),1);
}



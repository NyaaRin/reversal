// 0x180260600  FUN_180260600
// size=136 thunk=false
// signature: undefined FUN_180260600()
// status: ok


ulonglong FUN_180260600(undefined8 param_1,ushort param_2)

{
  ushort uVar1;
  longlong lVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  
  puVar5 = (undefined2 *)&DAT_1803e6660;
  puVar6 = &DAT_1803e6ec4;
  do {
    lVar2 = ((longlong)puVar6 - (longlong)puVar5) / 0xc;
    uVar1 = puVar5[lVar2 * 3];
    puVar3 = puVar5 + lVar2 * 3;
    if (uVar1 <= param_2) {
      if (param_2 <= (ushort)puVar3[1]) {
        uVar4 = (uint)(ushort)puVar3[2];
        if ((uVar4 == 1) ||
           (puVar3 = (undefined2 *)
                     ((longlong)(int)((uint)param_2 - (uint)uVar1) / (longlong)(int)uVar4 &
                     0xffffffff), (int)((uint)param_2 - (uint)uVar1) % (int)uVar4 == 0)) {
          return CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
        }
        break;
      }
      puVar5 = puVar3 + 3;
    }
    puVar3 = puVar3 + -3;
    if (uVar1 <= param_2) {
      puVar3 = puVar6;
    }
    puVar6 = puVar3;
  } while (puVar5 <= puVar3);
  return (ulonglong)puVar3 & 0xffffffffffffff00;
}



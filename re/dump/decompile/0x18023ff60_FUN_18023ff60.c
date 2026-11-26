// 0x18023ff60  FUN_18023ff60
// size=187 thunk=false
// signature: undefined FUN_18023ff60()
// status: ok


void FUN_18023ff60(longlong param_1,ushort param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  uint uVar4;
  ulonglong uVar5;
  bool bVar6;
  
  lVar1 = *(longlong *)(param_1 + 8);
  uVar5 = 0;
  do {
    if (param_2 == 0xffff) {
      if (((char)uVar5 == '_') ||
         ((*(ushort *)
            (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8) + 0x18) +
            (uVar5 & 0xff) * 2) & 0x107) != 0)) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
    }
    else {
      bVar6 = (*(ushort *)
                (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8) + 0x18) +
                (uVar5 & 0xff) * 2) & param_2) != 0;
    }
    if (bVar6 != (param_3 != 0)) {
      puVar2 = *(undefined8 **)(lVar1 + 0x28);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)FUN_1802d8350(0x20);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *(undefined8 **)(lVar1 + 0x28) = puVar2;
      }
      pbVar3 = (byte *)((uVar5 >> 3) + (longlong)puVar2);
      *pbVar3 = *pbVar3 | (byte)(1 << ((uint)uVar5 & 7));
    }
    uVar4 = (uint)uVar5 + 1;
    uVar5 = (ulonglong)uVar4;
  } while (uVar4 < 0x100);
  return;
}



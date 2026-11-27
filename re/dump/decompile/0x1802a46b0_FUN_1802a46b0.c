// 0x1802a46b0  FUN_1802a46b0
// size=222 thunk=false
// signature: undefined FUN_1802a46b0()
// status: ok


void FUN_1802a46b0(longlong param_1,uint *param_2,byte param_3)

{
  float fVar1;
  uint uVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = DAT_180381384;
  uVar2 = *param_2;
  if ((param_3 & 1) != 0) {
    fVar1 = (float)param_2[8];
    fVar5 = DAT_180381384;
    if (((uVar2 & 0x10) != 0) && (0.0 < fVar1)) {
      fVar5 = fVar1;
    }
    param_2[4] = (uint)fVar5;
    if ((0.0 < fVar1) && ((uVar2 & 8) != 0)) {
      fVar4 = fVar1;
    }
    param_2[7] = (uint)fVar4;
    if (0.0 < fVar1) {
      *(undefined1 *)((longlong)param_2 + 0x6f) = 0;
    }
  }
  if ((param_3 & 2) != 0) {
    *(short *)((longlong)param_2 + 0x56) =
         (short)(((longlong)param_2 - *(longlong *)(param_1 + 0x18)) / 0x74);
  }
  if ((param_3 & 4) != 0) {
    bVar3 = ~(byte)(uVar2 >> 1) & 1;
    *(byte *)(param_2 + 0x1a) = bVar3;
    *(byte *)((longlong)param_2 + 0x67) = bVar3;
  }
  if ((param_3 & 8) != 0) {
    *(ushort *)((longlong)param_2 + 0x5e) = ((uVar2 & 4) != 0) - 1;
    if ((uVar2 & 4) != 0) {
      *(byte *)((longlong)param_2 + 0x71) = *(byte *)((longlong)param_2 + 0x71) & 0xfc;
      *(byte *)((longlong)param_2 + 0x71) =
           *(byte *)((longlong)param_2 + 0x71) | ((uVar2 >> 0xf & 1) != 0) + 1U;
      return;
    }
    *(byte *)((longlong)param_2 + 0x71) = *(byte *)((longlong)param_2 + 0x71) & 0xfc;
    *(undefined1 *)((longlong)param_2 + 0x71) = *(undefined1 *)((longlong)param_2 + 0x71);
  }
  return;
}



// 0x18018a8f0  FUN_18018a8f0
// size=447 thunk=false
// signature: undefined FUN_18018a8f0()
// status: ok


undefined8 * FUN_18018a8f0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined1 *)((longlong)param_1 + 0x2c) = *(undefined1 *)((longlong)param_2 + 0x2c);
  *(undefined1 *)((longlong)param_1 + 0x2d) = *(undefined1 *)((longlong)param_2 + 0x2d);
  lVar2 = 0;
  uVar3 = 0;
  do {
    uVar1 = uVar3 + 8;
    *(undefined4 *)((longlong)param_1 + uVar3 * 0xc + 0x30) =
         *(undefined4 *)((longlong)param_2 + uVar3 * 0xc + 0x30);
    *(undefined4 *)((longlong)param_1 + uVar3 * 0xc + 0x34) =
         *(undefined4 *)((longlong)param_2 + uVar3 * 0xc + 0x34);
    *(undefined4 *)((longlong)param_1 + uVar3 * 0xc + 0x38) =
         *(undefined4 *)((longlong)param_2 + uVar3 * 0xc + 0x38);
    *(undefined4 *)((longlong)param_1 + uVar3 * 0xc + 0x3c) =
         *(undefined4 *)((longlong)param_2 + uVar3 * 0xc + 0x3c);
    *(undefined4 *)(lVar2 + 0x40 + (longlong)param_1) =
         *(undefined4 *)(lVar2 + 0x40 + (longlong)param_2);
    *(undefined4 *)(lVar2 + 0x44 + (longlong)param_1) =
         *(undefined4 *)(lVar2 + 0x44 + (longlong)param_2);
    *(undefined4 *)((longlong)param_1 + uVar3 * 0xc + 0x48) =
         *(undefined4 *)((longlong)param_2 + uVar3 * 0xc + 0x48);
    *(undefined4 *)(lVar2 + 0x4c + (longlong)param_1) =
         *(undefined4 *)(lVar2 + 0x4c + (longlong)param_2);
    *(undefined4 *)(lVar2 + 0x50 + (longlong)param_1) =
         *(undefined4 *)(lVar2 + 0x50 + (longlong)param_2);
    *(undefined4 *)((longlong)param_1 + uVar3 * 0xc + 0x54) =
         *(undefined4 *)((longlong)param_2 + uVar3 * 0xc + 0x54);
    *(undefined4 *)(lVar2 + 0x58 + (longlong)param_1) =
         *(undefined4 *)(lVar2 + 0x58 + (longlong)param_2);
    *(undefined4 *)(lVar2 + 0x5c + (longlong)param_1) =
         *(undefined4 *)(lVar2 + 0x5c + (longlong)param_2);
    *(undefined4 *)((longlong)param_1 + uVar1 * 0xc) =
         *(undefined4 *)((longlong)param_2 + uVar1 * 0xc);
    *(undefined4 *)(lVar2 + 100 + (longlong)param_1) =
         *(undefined4 *)(lVar2 + 100 + (longlong)param_2);
    *(undefined4 *)(lVar2 + 0x68 + (longlong)param_1) =
         *(undefined4 *)(lVar2 + 0x68 + (longlong)param_2);
    *(undefined4 *)((longlong)param_1 + uVar3 * 0xc + 0x6c) =
         *(undefined4 *)((longlong)param_2 + uVar3 * 0xc + 0x6c);
    *(undefined4 *)(lVar2 + 0x70 + (longlong)param_1) =
         *(undefined4 *)(lVar2 + 0x70 + (longlong)param_2);
    *(undefined4 *)(lVar2 + 0x74 + (longlong)param_1) =
         *(undefined4 *)(lVar2 + 0x74 + (longlong)param_2);
    *(undefined4 *)((longlong)param_1 + uVar3 * 0xc + 0x78) =
         *(undefined4 *)((longlong)param_2 + uVar3 * 0xc + 0x78);
    *(undefined4 *)(lVar2 + 0x7c + (longlong)param_1) =
         *(undefined4 *)(lVar2 + 0x7c + (longlong)param_2);
    *(undefined4 *)(lVar2 + 0x80 + (longlong)param_1) =
         *(undefined4 *)(lVar2 + 0x80 + (longlong)param_2);
    *(undefined4 *)((longlong)param_1 + uVar3 * 0xc + 0x84) =
         *(undefined4 *)((longlong)param_2 + uVar3 * 0xc + 0x84);
    *(undefined4 *)(lVar2 + 0x88 + (longlong)param_1) =
         *(undefined4 *)(lVar2 + 0x88 + (longlong)param_2);
    *(undefined4 *)(lVar2 + 0x8c + (longlong)param_1) =
         *(undefined4 *)(lVar2 + 0x8c + (longlong)param_2);
    lVar2 = lVar2 + 0x60;
    uVar3 = uVar1;
  } while (uVar1 < 0xc0);
  *(undefined4 *)(param_1 + 0x126) = *(undefined4 *)(param_2 + 0x126);
  *(undefined1 *)((longlong)param_1 + 0x934) = *(undefined1 *)((longlong)param_2 + 0x934);
  *(undefined4 *)(param_1 + 0x127) = *(undefined4 *)(param_2 + 0x127);
  return param_1;
}



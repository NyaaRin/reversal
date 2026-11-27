// 0x180052250  FUN_180052250
// size=230 thunk=false
// signature: undefined FUN_180052250()
// status: ok


undefined4 * FUN_180052250(undefined4 *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
  *(undefined2 *)((longlong)param_1 + 0x32) = *(undefined2 *)((longlong)param_2 + 0x32);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  *(undefined1 *)((longlong)param_1 + 0x35) = *(undefined1 *)((longlong)param_2 + 0x35);
  *(undefined1 *)((longlong)param_1 + 0x36) = *(undefined1 *)((longlong)param_2 + 0x36);
  *(undefined1 *)((longlong)param_1 + 0x37) = *(undefined1 *)((longlong)param_2 + 0x37);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  *(undefined1 *)((longlong)param_1 + 0x39) = *(undefined1 *)((longlong)param_2 + 0x39);
  *(undefined1 *)((longlong)param_1 + 0x3a) = *(undefined1 *)((longlong)param_2 + 0x3a);
  *(undefined1 *)((longlong)param_1 + 0x3b) = *(undefined1 *)((longlong)param_2 + 0x3b);
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  *(undefined1 *)((longlong)param_1 + 0x3d) = *(undefined1 *)((longlong)param_2 + 0x3d);
  *(undefined1 *)((longlong)param_1 + 0x3e) = *(undefined1 *)((longlong)param_2 + 0x3e);
  *(undefined1 *)((longlong)param_1 + 0x3f) = *(undefined1 *)((longlong)param_2 + 0x3f);
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  uVar1 = 0;
  do {
    *(undefined1 *)((longlong)param_1 + uVar1 + 0x4c) =
         *(undefined1 *)((longlong)param_2 + uVar1 + 0x4c);
    *(undefined1 *)((longlong)param_1 + uVar1 + 0x4d) =
         *(undefined1 *)((longlong)param_2 + uVar1 + 0x4d);
    uVar1 = uVar1 + 2;
  } while (uVar1 < 0xf2);
  return param_1;
}



// 0x180215310  FUN_180215310
// size=362 thunk=false
// signature: undefined FUN_180215310()
// status: ok


undefined8 * FUN_180215310(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *local_48;
  ulonglong local_40;
  
  puVar1 = DAT_180570810;
  puVar5 = (undefined8 *)DAT_180570810[1];
  uVar6 = 0;
  puVar3 = DAT_180570810;
  if (*(char *)((longlong)puVar5 + 0x19) == '\0') {
    puVar2 = puVar5;
    do {
      puVar5 = puVar2;
      if (*param_3 <= *(int *)(puVar5 + 4)) {
        puVar2 = (undefined8 *)*puVar5;
        puVar3 = puVar5;
      }
      else {
        puVar2 = (undefined8 *)puVar5[2];
      }
      uVar6 = (uint)(*param_3 <= *(int *)(puVar5 + 4));
    } while (*(char *)((longlong)puVar2 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)puVar3 + 0x19) == '\0') && (*(int *)(puVar3 + 4) <= *param_3)) {
    *param_2 = puVar3;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    if (DAT_180570818 == 0x2aaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
      FUN_180013b80();
    }
    local_48 = &DAT_180570810;
    local_40 = 0;
    puVar3 = (undefined8 *)FUN_1802d8350(0x60);
    *(int *)(puVar3 + 4) = *param_3;
    *(undefined8 *)((longlong)puVar3 + 0x3c) = 0x3f800000;
    *(undefined2 *)((longlong)puVar3 + 0x55) = 0;
    *(undefined1 *)((longlong)puVar3 + 0x57) = 0;
    puVar3[0xb] = 0;
    puVar3[5] = 0;
    *(undefined4 *)(puVar3 + 6) = 0x3eb33333;
    *(undefined4 *)((longlong)puVar3 + 0x34) = 0x3f400000;
    *(undefined4 *)(puVar3 + 7) = 0x3f800000;
    *(undefined4 *)((longlong)puVar3 + 0x44) = 0x3eb33333;
    *(undefined4 *)(puVar3 + 9) = 0x3f400000;
    *(undefined4 *)((longlong)puVar3 + 0x4c) = 0x3f800000;
    *(undefined4 *)(puVar3 + 10) = 0x3f800000;
    *(undefined1 *)((longlong)puVar3 + 0x54) = 1;
    *puVar3 = puVar1;
    puVar3[1] = puVar1;
    puVar3[2] = puVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    local_40 = (ulonglong)uVar6;
    local_48 = puVar5;
    uVar4 = FUN_18022bb90(&DAT_180570810,&local_48,puVar3);
    *param_2 = uVar4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  return param_2;
}



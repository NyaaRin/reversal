// 0x18020cfa0  FUN_18020cfa0
// size=257 thunk=false
// signature: undefined FUN_18020cfa0()
// status: ok


undefined8 * FUN_18020cfa0(undefined8 param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *local_48;
  ulonglong local_40;
  
  puVar1 = DAT_1803fa7f0;
  puVar5 = (undefined8 *)DAT_1803fa7f0[1];
  puVar3 = DAT_1803fa7f0;
  if (*(char *)((longlong)puVar5 + 0x19) == '\0') {
    puVar2 = puVar5;
    do {
      puVar5 = puVar2;
      if (*param_2 <= (ulonglong)puVar5[4]) {
        puVar2 = (undefined8 *)*puVar5;
        puVar3 = puVar5;
      }
      else {
        puVar2 = (undefined8 *)puVar5[2];
      }
      uVar4 = (uint)(*param_2 <= (ulonglong)puVar5[4]);
    } while (*(char *)((longlong)puVar2 + 0x19) == '\0');
  }
  else {
    uVar4 = 0;
  }
  if ((*(char *)((longlong)puVar3 + 0x19) != '\0') || (*param_2 < (ulonglong)puVar3[4])) {
    if (DAT_1803fa7f8 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
      FUN_180013b80();
    }
    local_48 = &DAT_1803fa7f0;
    local_40 = 0;
    puVar3 = (undefined8 *)FUN_1802d8350(0x30);
    puVar3[4] = *param_2;
    puVar3[5] = 0;
    *puVar3 = puVar1;
    puVar3[1] = puVar1;
    puVar3[2] = puVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    local_40 = (ulonglong)uVar4;
    local_48 = puVar5;
    puVar3 = (undefined8 *)FUN_18022bb90(&DAT_1803fa7f0,&local_48);
  }
  return puVar3 + 5;
}



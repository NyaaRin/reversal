// 0x180215480  FUN_180215480
// size=295 thunk=false
// signature: undefined FUN_180215480()
// status: ok


undefined8 * FUN_180215480(undefined8 param_1,undefined8 *param_2,ulonglong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *local_58;
  ulonglong local_50;
  
  puVar1 = DAT_180458200;
  puVar6 = (undefined8 *)DAT_180458200[1];
  puVar3 = DAT_180458200;
  if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
    puVar2 = puVar6;
    do {
      puVar6 = puVar2;
      if (*param_3 <= (ulonglong)puVar6[4]) {
        puVar2 = (undefined8 *)*puVar6;
        puVar3 = puVar6;
      }
      else {
        puVar2 = (undefined8 *)puVar6[2];
      }
      uVar5 = (uint)(*param_3 <= (ulonglong)puVar6[4]);
    } while (*(char *)((longlong)puVar2 + 0x19) == '\0');
  }
  else {
    uVar5 = 0;
  }
  if ((*(char *)((longlong)puVar3 + 0x19) == '\0') && ((ulonglong)puVar3[4] <= *param_3)) {
    *param_2 = puVar3;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (DAT_180458208 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_180013b80();
  }
  local_58 = &DAT_180458200;
  local_50 = 0;
  puVar3 = (undefined8 *)FUN_1802d8350(0x30);
  puVar3[4] = *param_3;
  *(undefined1 *)(puVar3 + 5) = 0;
  *puVar3 = puVar1;
  puVar3[1] = puVar1;
  puVar3[2] = puVar1;
  *(undefined2 *)(puVar3 + 3) = 0;
  local_50 = (ulonglong)uVar5;
  local_58 = puVar6;
  uVar4 = FUN_18022bb90(&DAT_180458200,&local_58,puVar3);
  *param_2 = uVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



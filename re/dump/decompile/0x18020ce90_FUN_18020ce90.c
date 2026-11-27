// 0x18020ce90  FUN_18020ce90
// size=260 thunk=false
// signature: undefined FUN_18020ce90()
// status: ok


undefined8 * FUN_18020ce90(undefined8 param_1,int *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *local_48;
  ulonglong local_40;
  
  puVar2 = DAT_1805b8828;
  puVar6 = (undefined8 *)DAT_1805b8828[1];
  puVar4 = DAT_1805b8828;
  if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
    puVar3 = puVar6;
    do {
      puVar6 = puVar3;
      bVar1 = *param_2 <= *(int *)((longlong)puVar6 + 0x1c);
      if (bVar1) {
        puVar3 = (undefined8 *)*puVar6;
        puVar4 = puVar6;
      }
      else {
        puVar3 = (undefined8 *)puVar6[2];
      }
      uVar5 = (uint)bVar1;
    } while (*(char *)((longlong)puVar3 + 0x19) == '\0');
  }
  else {
    uVar5 = 0;
  }
  if ((*(char *)((longlong)puVar4 + 0x19) != '\0') || (*param_2 < *(int *)((longlong)puVar4 + 0x1c))
     ) {
    if (DAT_1805b8830 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
      FUN_180013b80();
    }
    local_48 = &DAT_1805b8828;
    local_40 = 0;
    puVar4 = (undefined8 *)FUN_1802d8350(0x28);
    *(int *)((longlong)puVar4 + 0x1c) = *param_2;
    *(undefined1 *)(puVar4 + 4) = 0;
    *puVar4 = puVar2;
    puVar4[1] = puVar2;
    puVar4[2] = puVar2;
    *(undefined2 *)(puVar4 + 3) = 0;
    local_40 = (ulonglong)uVar5;
    local_48 = puVar6;
    puVar4 = (undefined8 *)FUN_18022bb90(&DAT_1805b8828,&local_48);
  }
  return puVar4 + 4;
}



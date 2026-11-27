// 0x180025620  FUN_180025620
// size=540 thunk=false
// signature: undefined FUN_180025620()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180025620(ulonglong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  size_t sVar6;
  uint uVar7;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 local_60;
  ulonglong *local_58;
  char local_50 [12];
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  if ((DAT_180426234 & 1) == 0) {
    DAT_180426234 = DAT_180426234 | 1;
    DAT_180427668 = (undefined8 *)0x0;
    DAT_180427670 = 0;
    DAT_180427668 = (undefined8 *)FUN_1802d8350(0x48);
    *DAT_180427668 = DAT_180427668;
    DAT_180427668[1] = DAT_180427668;
    DAT_180427668[2] = DAT_180427668;
    *(undefined2 *)(DAT_180427668 + 3) = 0x101;
    atexit(FUN_180308bb0);
  }
  cVar1 = *(char *)((longlong)DAT_180427668[1] + 0x19);
  puVar3 = (undefined8 *)DAT_180427668[1];
  puVar5 = DAT_180427668;
  while (puVar4 = puVar3, cVar1 == '\0') {
    if ((ulonglong)puVar4[4] < param_1) {
      puVar3 = (undefined8 *)puVar4[2];
      puVar4 = puVar5;
    }
    else {
      puVar3 = (undefined8 *)*puVar4;
    }
    cVar1 = *(char *)((longlong)puVar3 + 0x19);
    puVar5 = puVar4;
  }
  if ((*(char *)((longlong)puVar5 + 0x19) != '\0') || (param_1 < (ulonglong)puVar5[4])) {
    puVar5 = DAT_180427668;
  }
  if (puVar5 == DAT_180427668) {
    FUN_180012ac0(local_50,0x11,"%016llx",param_1);
    puVar2 = DAT_180427668;
    puVar3 = (undefined8 *)DAT_180427668[1];
    puVar4 = puVar3;
    puVar5 = DAT_180427668;
    if (*(char *)((longlong)puVar3 + 0x19) == '\0') {
      do {
        puVar3 = puVar4;
        if (param_1 <= (ulonglong)puVar3[4]) {
          puVar4 = (undefined8 *)*puVar3;
          puVar5 = puVar3;
        }
        else {
          puVar4 = (undefined8 *)puVar3[2];
        }
        uVar7 = (uint)(param_1 <= (ulonglong)puVar3[4]);
      } while (*(char *)((longlong)puVar4 + 0x19) == '\0');
    }
    else {
      uVar7 = 0;
    }
    if ((*(char *)((longlong)puVar5 + 0x19) != '\0') || (param_1 < (ulonglong)puVar5[4])) {
      if (DAT_180427670 == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
        FUN_180013b80();
      }
      local_68 = &DAT_180427668;
      local_60 = (undefined8 *)0x0;
      puVar5 = (undefined8 *)FUN_1802d8350(0x48);
      local_58 = puVar5 + 4;
      *local_58 = param_1;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      puVar5[8] = 0;
      local_60 = puVar5;
      sVar6 = strlen(local_50);
      FUN_18001d080(puVar5 + 5,local_50,sVar6);
      *puVar5 = puVar2;
      puVar5[1] = puVar2;
      puVar5[2] = puVar2;
      *(undefined2 *)(puVar5 + 3) = 0;
      local_60 = (undefined8 *)CONCAT44(local_44,uVar7);
      local_68 = puVar3;
      puVar5 = (undefined8 *)FUN_18022bb90(&DAT_180427668,&local_68,puVar5);
    }
  }
  return puVar5 + 5;
}



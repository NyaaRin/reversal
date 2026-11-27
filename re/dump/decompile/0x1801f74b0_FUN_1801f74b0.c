// 0x1801f74b0  FUN_1801f74b0
// size=459 thunk=false
// signature: undefined FUN_1801f74b0()
// status: ok


void FUN_1801f74b0(undefined4 param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  
  if (DAT_1803fa430 != (code *)0x0) {
    if ((DAT_1803ff270 == '\0') || (DAT_1803f925e != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0001801f7674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_1803fa430)();
      return;
    }
    cVar1 = FUN_18003a090("CL_Move");
    if ((cVar1 != '\0') && (cVar1 = FUN_1802013c0(), cVar1 != '\0')) {
      DAT_1803db4a4 = 0;
      return;
    }
    if ((param_2 == '\0') || (DAT_1803f925e != '\0')) {
      DAT_1803db4a4 = 0;
      (*DAT_1803fa430)(param_1,param_2);
      if (0x17 < DAT_1803db4a4) {
        DAT_1803db4a4 = 0x17;
      }
      uVar2 = DAT_1803db4a4;
      if (param_2 == '\0') {
        DAT_1803db4a4 = 0;
        return;
      }
    }
    else {
      FUN_1800b5640();
      DAT_1803db4a4 = 0;
      (*DAT_1803fa430)(param_1,param_2);
      uVar2 = DAT_1803db4a4;
      if (0x17 < DAT_1803db4a4) {
        uVar2 = 0x17;
      }
    }
    DAT_1803db4a4 = 0;
    if (((uVar2 != 0) && (DAT_1803fa668 != (longlong *)0x0)) &&
       (cVar1 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar1 != '\0')) {
      DAT_1803f925e = 1;
      DAT_1803fa468 = 0;
      DAT_1803f925d = '\0';
      uVar3 = 0;
      if (uVar2 != 0) {
        do {
          uVar3 = uVar3 + 1;
          DAT_1803db4a4 = 0;
          (*DAT_1803fa430)(0,uVar3 == uVar2);
        } while (uVar3 < uVar2);
      }
      DAT_1803db4a4 = 0;
      DAT_1803f925e = '\0';
      if (DAT_1803f925d == '\0') {
        pcVar4 = "SHORT-WRITE";
        if (uVar2 <= DAT_1803fa468) {
          pcVar4 = "OK";
        }
      }
      else {
        pcVar4 = "WRITE-FAILED";
      }
      FUN_180014410("[DT] requested=%u serialized=%u status=%s\n",uVar2,DAT_1803fa468,pcVar4);
    }
  }
  return;
}



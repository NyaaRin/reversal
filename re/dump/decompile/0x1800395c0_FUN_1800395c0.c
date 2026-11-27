// 0x1800395c0  FUN_1800395c0
// size=419 thunk=false
// signature: undefined FUN_1800395c0()
// status: ok


char * FUN_1800395c0(undefined4 param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  char local_10;
  
  cVar1 = FUN_18002e100();
  if (cVar1 == '\0') {
    return "";
  }
  if (DAT_1803fa678 == (longlong *)0x0) {
LAB_180039612:
    uVar3 = 0;
  }
  else {
    lVar2 = (**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
    if (lVar2 == 0) goto LAB_180039612;
    uVar3 = *(undefined8 *)(lVar2 + 8);
  }
  FUN_18002dc30(&local_28,uVar3);
  if (DAT_1803daaf8 != '\0') {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(uint *)(lVar2 + 0x1090) & 1) == 0) {
      *(uint *)(lVar2 + 0x1090) = *(uint *)(lVar2 + 0x1090) | 1;
      FUN_1802d8910(&LAB_180309020);
    }
    pcVar4 = (char *)(lVar2 + 0xee8);
    cVar1 = FUN_180038080(param_1,&DAT_1803daae0,pcVar4);
    if ((cVar1 != '\0') && (*(longlong *)(lVar2 + 0xef8) != 0)) {
      if (0xf < *(ulonglong *)(lVar2 + 0xf00)) {
        pcVar4 = *(char **)pcVar4;
      }
      goto LAB_180039727;
    }
  }
  pcVar4 = (char *)FUN_180033da0(param_1,"DRPVar.job",&DAT_18033e5ea);
  if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
    pcVar4 = (char *)FUN_180033da0(param_1,&DAT_180341f3c,&DAT_18033e5ea);
    if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
      pcVar4 = (char *)FUN_180033da0(param_1,&DAT_180341f40,&DAT_18033e5ea);
      if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
        if (param_2 != -1) {
          pcVar4 = (char *)FUN_1800318f0(param_1,param_2,&DAT_180341f3c,&DAT_18033e5ea);
          if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) goto LAB_180039727;
        }
        pcVar4 = "";
      }
    }
  }
LAB_180039727:
  if ((local_10 != '\0') && (DAT_1803faf78 != (code *)0x0)) {
    (*DAT_1803faf78)(local_28,local_20,local_18,local_14);
  }
  return pcVar4;
}



// 0x18003cb80  FUN_18003cb80
// size=203 thunk=false
// signature: undefined FUN_18003cb80()
// status: ok


undefined8 FUN_18003cb80(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  double dVar4;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
    return 0;
  }
  dVar4 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
  uVar3 = (uint)dVar4;
  if ((((0 < (int)uVar3) && (uVar2 = (ulonglong)(uVar3 & 0xf), (uVar3 & 0xf) < 8)) &&
      ((&DAT_1803e75c0)[uVar2 * 0x30] != '\0')) &&
     (((*(uint *)(&DAT_1803e75c4 + uVar2 * 0x30) == uVar3 >> 4 && ((&DAT_1803e75d0)[uVar2 * 6] != 0)
       ) && ((&DAT_1803e75d8)[uVar2 * 6] != 0)))) {
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(int *)(&DAT_1803e75c8 + uVar2 * 0x30));
    return 1;
  }
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  return 1;
}



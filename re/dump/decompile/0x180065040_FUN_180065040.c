// 0x180065040  FUN_180065040
// size=153 thunk=false
// signature: undefined FUN_180065040()
// status: ok


undefined8 FUN_180065040(longlong param_1)

{
  code *pcVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  double dVar5;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    pcVar1 = *(code **)(*plVar2 + 0xf0);
    dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    iVar4 = 1;
    for (uVar3 = (longlong)dVar5 >> 0x3f ^ (longlong)dVar5 * 2; 0x7f < uVar3; uVar3 = uVar3 >> 7) {
      iVar4 = iVar4 + 1;
    }
    (*pcVar1)(plVar2,(double)iVar4);
    return 1;
  }
  return 0;
}



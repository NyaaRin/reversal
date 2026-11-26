// 0x180132370  FUN_180132370
// size=98 thunk=false
// signature: undefined FUN_180132370()
// status: ok


void FUN_180132370(longlong *param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (((param_1 != (longlong *)0x0) && (param_2 != 0)) && (lVar2 = FUN_180131880(), lVar2 != 0)) {
    uVar4 = 0;
    do {
      cVar1 = FUN_1801311e0(*(undefined8 *)(lVar2 + uVar4 * 8));
      if (cVar1 == '\0') break;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < 0x200);
    if (0x11 < (uint)uVar4) {
      (**(code **)(*param_1 + 0x88))(param_1,param_2);
    }
  }
  return;
}



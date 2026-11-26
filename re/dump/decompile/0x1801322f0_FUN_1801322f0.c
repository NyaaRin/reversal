// 0x1801322f0  FUN_1801322f0
// size=116 thunk=false
// signature: undefined FUN_1801322f0()
// status: ok


undefined8 FUN_1801322f0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if ((param_1 != (longlong *)0x0) && (lVar2 = FUN_180131880(), lVar2 != 0)) {
    uVar5 = 0;
    do {
      cVar1 = FUN_1801311e0(*(undefined8 *)(lVar2 + uVar5 * 8));
      if (cVar1 == '\0') break;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while ((int)uVar4 < 0x200);
    if (0xd < (uint)uVar5) {
      uVar3 = (**(code **)(*param_1 + 0x68))(param_1,&DAT_1805c3110,0x800,param_4,0);
      return uVar3;
    }
  }
  return 0;
}



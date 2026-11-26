// 0x1801323e0  FUN_1801323e0
// size=139 thunk=false
// signature: undefined FUN_1801323e0()
// status: ok


/* WARNING: Removing unreachable block (ram,0x00018013244f) */

longlong * FUN_1801323e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_1 == 0) || (lVar2 = FUN_180131880(), lVar2 == 0)) {
    return (longlong *)0x0;
  }
  lVar2 = *(longlong *)(param_1 + 8);
  if (((lVar2 != 0) &&
      (lVar3 = lVar2, iVar1 = FUN_1801318c0(lVar2,param_2,"LogOn",param_4,lVar2), -1 < iVar1)) &&
     (iVar1 = FUN_1801318c0(lVar2,param_2,"SetLoginInformation",param_4,lVar3), -1 < iVar1)) {
    return (longlong *)(param_1 + 8);
  }
  return (longlong *)0x0;
}



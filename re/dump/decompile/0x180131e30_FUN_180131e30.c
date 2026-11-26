// 0x180131e30  FUN_180131e30
// size=182 thunk=false
// signature: undefined FUN_180131e30()
// status: ok


/* WARNING: Removing unreachable block (ram,0x000180131ec0) */

longlong FUN_180131e30(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar1 = FUN_180131d80();
  if (cVar1 != '\0') {
    lVar3 = (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3);
    lVar4 = FUN_180131880();
    if (lVar4 != 0) {
      if (((lVar3 != 0) && (iVar2 = FUN_1801318c0(), -1 < iVar2)) &&
         (iVar2 = FUN_1801318c0(), -1 < iVar2)) {
        return lVar3;
      }
      return 0;
    }
  }
  return 0;
}



// 180076b00  FUN_180076b00
// signature: undefined FUN_180076b00()
// status: ok


bool FUN_180076b00(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  
  if (param_1 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_1 + 0xa0))();
    if (cVar1 == '\0') goto LAB_180076b35;
  }
  iVar3 = FUN_180076a40();
  if (iVar3 != 0) {
    return iVar3 == 1;
  }
  if (param_1 == (longlong *)0x0) {
    return false;
  }
LAB_180076b35:
                    /* WARNING: Could not recover jumptable at 0x000180076b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x98))(param_1);
  return (bool)uVar2;
}



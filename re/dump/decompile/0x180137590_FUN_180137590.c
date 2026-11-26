// 0x180137590  FUN_180137590
// size=170 thunk=false
// signature: undefined FUN_180137590()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180137590(undefined8 param_1,char *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  
  plVar1 = DAT_180409c80;
  if (DAT_180409c80 == (longlong *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar3 = FUN_1801318c0(DAT_180409c80,param_2,"BLoggedOn");
    if (iVar3 < 0) {
      uVar4 = 0;
    }
    else {
      cVar2 = (**(code **)(*plVar1 + (longlong)iVar3 * 8))(plVar1);
      uVar4 = (uint)(cVar2 != '\0');
    }
  }
  pcVar5 = "(no reason given)";
  if (param_2 != (char *)0x0) {
    pcVar5 = param_2;
  }
  FUN_180014410("[AS] *** SERVER CLOSED THE CONNECTION: \"%s\" [deployed=%d as %llu, our session loggedOn=%d]\n"
                ,pcVar5,DAT_180409c29 != '\0',DAT_180409c30,uVar4);
                    /* WARNING: Could not recover jumptable at 0x000180137633. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_180409c40)(param_1,param_2);
  return;
}



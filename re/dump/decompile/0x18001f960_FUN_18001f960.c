// 0x18001f960  FUN_18001f960
// size=107 thunk=false
// signature: undefined FUN_18001f960()
// status: ok


char * FUN_18001f960(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  char *pcVar3;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x20))();
  if ((plVar2 != (longlong *)0x0) && (iVar1 = (**(code **)(*plVar2 + 0x48))(plVar2), 0 < iVar1)) {
    if ((DAT_180426150 != (code *)0x0) &&
       ((pcVar3 = (char *)(*DAT_180426150)(iVar1), pcVar3 != (char *)0x0 && (*pcVar3 != '\0')))) {
      return pcVar3;
    }
    if (DAT_1803fe9e8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018001f9bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar3 = (char *)(*DAT_1803fe9e8)(iVar1,"UserGroup",&DAT_180340268);
      return pcVar3;
    }
  }
  return "user";
}



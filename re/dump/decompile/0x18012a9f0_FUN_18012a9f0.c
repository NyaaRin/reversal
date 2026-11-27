// 0x18012a9f0  FUN_18012a9f0
// size=94 thunk=false
// signature: undefined FUN_18012a9f0()
// status: ok


char * FUN_18012a9f0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  
  lVar2 = FUN_180016fb0("sv_skyname");
  if ((((lVar2 != 0) && (pcVar3 = (char *)FUN_18012a9d0(lVar2,0x18), pcVar3 != (char *)0x0)) &&
      (iVar1 = strcmp(pcVar3,"sv_skyname"), iVar1 == 0)) &&
     ((pcVar3 = (char *)FUN_18012a9d0(lVar2,0x48), pcVar3 != (char *)0x0 && (*pcVar3 != '\0')))) {
    return pcVar3;
  }
  return (char *)0x0;
}



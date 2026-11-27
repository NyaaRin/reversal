// 0x180018a30  FUN_180018a30
// size=147 thunk=false
// signature: undefined FUN_180018a30()
// status: ok


int FUN_180018a30(undefined8 param_1,longlong *param_2,char *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  
  iVar3 = 0;
  if (0 < (int)param_2[1]) {
    do {
      puVar4 = (undefined8 *)((longlong)iVar3 * 0x60 + *param_2);
      lVar1 = puVar4[8];
      if (((lVar1 != 0) && (0 < *(int *)(lVar1 + 8))) &&
         (iVar2 = FUN_180018a30(param_1,lVar1,param_3,0), iVar2 != 0)) {
        return *(int *)(puVar4 + 9) + iVar2;
      }
      iVar2 = _stricmp((char *)*puVar4,param_3);
      if (iVar2 == 0) {
        return *(int *)(puVar4 + 9);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_2[1]);
  }
  return 0;
}



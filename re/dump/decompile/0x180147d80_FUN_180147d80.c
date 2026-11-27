// 0x180147d80  FUN_180147d80
// size=189 thunk=false
// signature: undefined FUN_180147d80()
// status: ok


int FUN_180147d80(longlong param_1,char *param_2,int param_3)

{
  int iVar1;
  size_t _MaxCount;
  longlong lVar2;
  longlong lVar3;
  char *_Str1;
  int iVar4;
  undefined1 local_res20 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [24];
  
  _MaxCount = strlen(param_2);
  iVar4 = 0;
  while( true ) {
    while( true ) {
      while( true ) {
        if (*(int *)(param_1 + 0x10) <= iVar4) {
          return -1;
        }
        lVar2 = FUN_180147c60(param_1,iVar4,local_48,local_res20,local_50);
        if (lVar2 != 0) break;
        iVar4 = iVar4 + 1;
      }
      lVar3 = 8;
      if (param_3 != 0) {
        lVar3 = 4;
      }
      _Str1 = (char *)(lVar2 + *(int *)(lVar3 + lVar2));
      if ((_Str1 != (char *)0x0) && (*_Str1 != '\0')) break;
      iVar4 = iVar4 + 1;
    }
    if (param_3 == 2) {
      iVar1 = _strnicmp(_Str1,param_2,_MaxCount);
    }
    else {
      iVar1 = _stricmp(_Str1,param_2);
    }
    if (iVar1 == 0) break;
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}



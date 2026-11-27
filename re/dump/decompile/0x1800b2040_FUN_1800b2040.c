// 0x1800b2040  FUN_1800b2040
// size=197 thunk=false
// signature: undefined FUN_1800b2040()
// status: ok


LPVOID FUN_1800b2040(int param_1)

{
  char cVar1;
  LPVOID lp;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_res10 [6];
  
  if ((DAT_1803fa660 != (longlong *)0x0) && (DAT_1803fa620 != 0)) {
    iVar2 = *(int *)(DAT_1803fa620 + 0x20b84);
    iVar3 = -1;
    if (iVar2 < 0) {
      iVar2 = -1;
    }
    if ((-1 < iVar2) && (-1 < param_1)) {
      if (*(uint *)(DAT_1803fa620 + 0x20b88) < 0x80) {
        iVar4 = *(uint *)(DAT_1803fa620 + 0x20b88) + 1;
      }
      else {
        iVar4 = 0;
      }
      if (param_1 < iVar4) {
        iVar3 = param_1 + 1 + iVar2;
      }
    }
    if (-1 < iVar3) {
      lp = (LPVOID)(**(code **)(*DAT_1803fa660 + 0x40))(DAT_1803fa660,iVar3);
      if (lp != (LPVOID)0x0) {
        local_res10[0] = IsBadWritePtr(lp,0x140);
        if (local_res10[0] == 0) {
          cVar1 = FUN_1800b2030(lp,local_res10);
          if ((cVar1 != '\0') && (local_res10[0] == iVar3)) {
            return lp;
          }
        }
      }
    }
  }
  return (LPVOID)0x0;
}



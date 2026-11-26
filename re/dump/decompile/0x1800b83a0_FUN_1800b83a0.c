// 0x1800b83a0  FUN_1800b83a0
// size=187 thunk=false
// signature: undefined FUN_1800b83a0()
// status: ok


bool FUN_1800b83a0(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  
  if (((DAT_18042586a != '\0') && (cVar2 = FUN_18006b0e0(), iVar1 = DAT_1803ff708, cVar2 == '\0'))
     && (iVar4 = 0, 0 < DAT_1803ff708)) {
    do {
      lVar5 = (longlong)iVar4 * 0x58;
      if (((char *)(&DAT_1803eb898)[(longlong)iVar4 * 0xb] != (char *)0x0) &&
         (iVar3 = strcmp((char *)(&DAT_1803eb898)[(longlong)iVar4 * 0xb],"player_hurt"), iVar3 == 0)
         ) {
        if (lVar5 == -0x1803eb890) {
          return false;
        }
        if ((&DAT_1803eb8e4)[lVar5] == '\0') {
          return false;
        }
        if (DAT_1803e8708 < DAT_180381438) {
          return false;
        }
        if (DAT_1803fa608 == 0) {
          fVar6 = 0.0;
        }
        else {
          fVar6 = (float)*(double *)(DAT_1803fa608 + 0x10);
        }
        return fVar6 - DAT_1803e8708 <= DAT_180381094;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return false;
}



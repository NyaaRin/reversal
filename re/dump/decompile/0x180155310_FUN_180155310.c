// 0x180155310  FUN_180155310
// size=360 thunk=false
// signature: undefined FUN_180155310()
// status: ok


int FUN_180155310(char *param_1,ulonglong param_2)

{
  char cVar1;
  ulonglong _Size;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  
  pcVar2 = DAT_1803e9df8;
  iVar6 = 0;
  pcVar7 = DAT_1803e9df0;
  do {
    if (pcVar7 == pcVar2) {
      return iVar6;
    }
    if (pcVar7[0x24] == '\0') {
      _Size = *(ulonglong *)(pcVar7 + 0x10);
      if ((_Size != 0) && (_Size <= param_2)) {
        pcVar5 = pcVar7;
        if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
          pcVar5 = *(char **)pcVar7;
        }
        iVar3 = memcmp(param_1,pcVar5,_Size);
        if ((iVar3 == 0) && ((param_2 == _Size || (param_1[_Size] == '/')))) {
          if (*(int *)(pcVar7 + 0x20) == 0) {
            return 1;
          }
          if (param_2 != _Size) {
            return 1;
          }
          if (iVar6 == 0) {
            iVar6 = 2;
          }
        }
      }
    }
    else {
      pcVar5 = pcVar7;
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar5 = *(char **)pcVar7;
      }
      pcVar4 = (char *)0x0;
      pcVar8 = (char *)0x0;
      bVar10 = false;
      cVar1 = *param_1;
      pcVar9 = param_1;
      while (cVar1 != '\0') {
        cVar1 = *pcVar5;
        if (cVar1 == '*') {
          pcVar4 = pcVar5 + (ulonglong)(pcVar5[1] == '*') + 1;
          bVar10 = pcVar5[1] == '*';
          pcVar5 = pcVar4;
          pcVar8 = pcVar9;
        }
        else {
          if (cVar1 == '?') {
            if (*pcVar9 != '/') {
LAB_180155409:
              pcVar5 = pcVar5 + 1;
              pcVar9 = pcVar9 + 1;
              goto LAB_1801553c3;
            }
          }
          else if ((cVar1 != '\0') && (cVar1 == *pcVar9)) goto LAB_180155409;
          if ((pcVar4 == (char *)0x0) || ((!bVar10 && (*pcVar8 == '/')))) goto LAB_18015545a;
          pcVar9 = pcVar8 + 1;
          pcVar5 = pcVar4;
          pcVar8 = pcVar9;
        }
LAB_1801553c3:
        cVar1 = *pcVar9;
      }
      cVar1 = *pcVar5;
      while (cVar1 == '*') {
        pcVar5 = pcVar5 + (ulonglong)(pcVar5[1] == '*') + 1;
        cVar1 = *pcVar5;
      }
      if (cVar1 == '\0') {
        return 1;
      }
    }
LAB_18015545a:
    pcVar7 = pcVar7 + 0x28;
  } while( true );
}



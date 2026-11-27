// 0x180243560  FUN_180243560
// size=331 thunk=false
// signature: undefined FUN_180243560()
// status: ok


int FUN_180243560(longlong param_1,uint param_2)

{
  int iVar1;
  HANDLE hThread;
  uint uVar2;
  ulonglong uVar3;
  bool bVar4;
  LPVOID local_38;
  uint local_2c;
  
  uVar3 = 0;
  LOCK();
  bVar4 = DAT_1803fa5f4 == 0;
  if (bVar4) {
    DAT_1803fa5f4 = 1;
  }
  UNLOCK();
  while (!bVar4) {
    Sleep((uint)(0x1f < uVar3));
    uVar3 = uVar3 + 1;
    LOCK();
    bVar4 = DAT_1803fa5f4 == 0;
    if (bVar4) {
      DAT_1803fa5f4 = 1;
    }
    UNLOCK();
  }
  if (DAT_1803fa7a0 == (HANDLE)0x0) {
    iVar1 = 2;
  }
  else if (param_1 == 0) {
    iVar1 = FUN_180242e80(param_2);
  }
  else {
    uVar3 = 0;
    if (DAT_1805c847c != 0) {
      do {
        if (param_1 == *(longlong *)(uVar3 * 0x38 + DAT_1805c8470)) {
          if ((int)uVar3 != -1) {
            if ((*(byte *)(uVar3 * 0x38 + 0x20 + DAT_1805c8470) >> 1 & 1) == param_2) {
              iVar1 = 6 - (uint)(param_2 != 0);
            }
            else {
              FUN_180242bb0(&local_38,uVar3,1);
              iVar1 = FUN_180242d60(uVar3,param_2);
              if (local_38 != (LPVOID)0x0) {
                uVar3 = 0;
                if (local_2c != 0) {
                  do {
                    hThread = OpenThread(0x5a,0,*(DWORD *)((longlong)local_38 + uVar3 * 4));
                    if (hThread != (HANDLE)0x0) {
                      ResumeThread(hThread);
                      CloseHandle(hThread);
                    }
                    uVar2 = (int)uVar3 + 1;
                    uVar3 = (ulonglong)uVar2;
                  } while (uVar2 < local_2c);
                }
                HeapFree(DAT_1803fa7a0,0,local_38);
              }
            }
            goto LAB_180243693;
          }
          break;
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < DAT_1805c847c);
    }
    iVar1 = 4;
  }
LAB_180243693:
  LOCK();
  DAT_1803fa5f4 = 0;
  UNLOCK();
  return iVar1;
}



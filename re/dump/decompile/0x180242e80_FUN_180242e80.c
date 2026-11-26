// 0x180242e80  FUN_180242e80
// size=320 thunk=false
// signature: undefined FUN_180242e80()
// status: ok


int FUN_180242e80(uint param_1)

{
  int iVar1;
  HANDLE hThread;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  LPVOID local_18;
  uint local_c;
  
  iVar1 = 0;
  uVar3 = 0;
  if (DAT_1805c847c != 0) {
    while (uVar2 = (uint)uVar3, (*(byte *)(uVar3 * 0x38 + 0x20 + DAT_1805c8470) >> 1 & 1) == param_1
          ) {
      uVar3 = (ulonglong)(uVar2 + 1);
      if (DAT_1805c847c <= uVar2 + 1) {
        return 0;
      }
    }
    if (uVar2 != 0xffffffff) {
      FUN_180242bb0(&local_18,0xffffffff,param_1 != 0);
      uVar4 = DAT_1805c847c;
      if (uVar2 < DAT_1805c847c) {
        do {
          if (((*(byte *)(uVar3 * 0x38 + 0x20 + DAT_1805c8470) >> 1 & 1) != param_1) &&
             (iVar1 = FUN_180242d60(uVar3,param_1), uVar4 = DAT_1805c847c, iVar1 != 0)) break;
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
        } while (uVar2 < uVar4);
      }
      if (local_18 != (LPVOID)0x0) {
        uVar3 = 0;
        if (local_c != 0) {
          do {
            hThread = OpenThread(0x5a,0,*(DWORD *)((longlong)local_18 + uVar3 * 4));
            if (hThread != (HANDLE)0x0) {
              ResumeThread(hThread);
              CloseHandle(hThread);
            }
            uVar2 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar2;
          } while (uVar2 < local_c);
        }
        HeapFree(DAT_1803fa7a0,0,local_18);
      }
    }
  }
  return iVar1;
}



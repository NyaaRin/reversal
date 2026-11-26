// 0x180242bb0  FUN_180242bb0
// size=423 thunk=false
// signature: undefined FUN_180242bb0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180242bb0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  HANDLE hHeap;
  int iVar1;
  DWORD DVar2;
  HANDLE pvVar3;
  LPVOID lpMem;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auStack_68 [32];
  uint local_48 [2];
  DWORD local_40;
  DWORD local_3c;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  uVar4 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pvVar3 = (HANDLE)CreateToolhelp32Snapshot(4,0);
  if (pvVar3 != (HANDLE)0xffffffffffffffff) {
    local_48[0] = 0x1c;
    iVar1 = Thread32First(pvVar3,local_48);
    while (iVar1 != 0) {
      if (((0xf < local_48[0]) && (DVar2 = GetCurrentProcessId(), local_3c == DVar2)) &&
         (DVar2 = GetCurrentThreadId(), hHeap = DAT_1803fa7a0, local_40 != DVar2)) {
        lpMem = (LPVOID)*param_1;
        if (lpMem == (LPVOID)0x0) {
          *(undefined4 *)(param_1 + 1) = 0x80;
          lpMem = HeapAlloc(hHeap,0,0x200);
          *param_1 = (longlong)lpMem;
          if (lpMem == (LPVOID)0x0) break;
        }
        else if (*(uint *)(param_1 + 1) <= *(uint *)((longlong)param_1 + 0xc)) {
          lpMem = HeapReAlloc(DAT_1803fa7a0,0,lpMem,(ulonglong)(*(uint *)(param_1 + 1) * 2) << 2);
          if (lpMem == (LPVOID)0x0) break;
          *param_1 = (longlong)lpMem;
          *(int *)(param_1 + 1) = (int)param_1[1] * 2;
        }
        *(DWORD *)((longlong)lpMem + (ulonglong)*(uint *)((longlong)param_1 + 0xc) * 4) = local_40;
        *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
      }
      local_48[0] = 0x1c;
      iVar1 = Thread32Next(pvVar3,local_48);
    }
    CloseHandle(pvVar3);
  }
  if ((*param_1 != 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    do {
      pvVar3 = OpenThread(0x5a,0,*(DWORD *)(*param_1 + uVar4 * 4));
      if (pvVar3 != (HANDLE)0x0) {
        SuspendThread(pvVar3);
        FUN_1802429f0(pvVar3,param_2,param_3);
        CloseHandle(pvVar3);
      }
      uVar5 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)((longlong)param_1 + 0xc));
  }
  return;
}



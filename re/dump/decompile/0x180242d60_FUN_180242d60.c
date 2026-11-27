// 0x180242d60  FUN_180242d60
// size=273 thunk=false
// signature: undefined FUN_180242d60()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180242d60(ulonglong param_1,int param_2)

{
  SIZE_T dwSize;
  BOOL BVar1;
  undefined8 uVar2;
  HANDLE hProcess;
  byte bVar3;
  undefined8 *puVar4;
  undefined4 *lpAddress;
  undefined1 auStack_58 [32];
  DWORD local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  puVar4 = (undefined8 *)((param_1 & 0xffffffff) * 0x38 + DAT_1805c8470);
  lpAddress = (undefined4 *)((longlong)*puVar4 + -5);
  if ((*(byte *)(puVar4 + 4) & 1) == 0) {
    lpAddress = (undefined4 *)*puVar4;
  }
  dwSize = (ulonglong)(*(byte *)(puVar4 + 4) & 1) * 2 + 5;
  BVar1 = VirtualProtect(lpAddress,dwSize,0x40,local_38);
  if (BVar1 == 0) {
    uVar2 = 10;
  }
  else {
    if (param_2 == 0) {
      bVar3 = *(byte *)(puVar4 + 4);
      *lpAddress = *(undefined4 *)(puVar4 + 3);
      if ((bVar3 & 1) == 0) {
        *(undefined1 *)(lpAddress + 1) = *(undefined1 *)((longlong)puVar4 + 0x1c);
      }
      else {
        *(undefined2 *)(lpAddress + 1) = *(undefined2 *)((longlong)puVar4 + 0x1c);
        *(undefined1 *)((longlong)lpAddress + 6) = *(undefined1 *)((longlong)puVar4 + 0x1e);
      }
    }
    else {
      *(undefined1 *)lpAddress = 0xe9;
      *(int *)((longlong)lpAddress + 1) = (*(int *)(puVar4 + 1) - (int)lpAddress) + -5;
      if ((*(byte *)(puVar4 + 4) & 1) != 0) {
        *(undefined2 *)*puVar4 = 0xf9eb;
      }
    }
    VirtualProtect(lpAddress,dwSize,local_38[0],local_38);
    hProcess = GetCurrentProcess();
    FlushInstructionCache(hProcess,lpAddress,dwSize);
    bVar3 = ((char)param_2 * '\x02' ^ *(byte *)(puVar4 + 4)) & 2 ^ *(byte *)(puVar4 + 4);
    *(byte *)(puVar4 + 4) = ((char)param_2 << 2 ^ bVar3) & 4 ^ bVar3;
    uVar2 = 0;
  }
  return uVar2;
}



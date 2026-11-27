// 0x1802429f0  FUN_1802429f0
// size=435 thunk=false
// signature: undefined FUN_1802429f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802429f0(HANDLE param_1,uint param_2,int param_3)

{
  BOOL BVar1;
  uint uVar2;
  byte bVar3;
  DWORD64 DVar4;
  ulonglong uVar5;
  DWORD64 *pDVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_518 [32];
  _CONTEXT local_4f8;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_518;
  local_4f8.ContextFlags = 0x100001;
  BVar1 = GetThreadContext(param_1,&local_4f8);
  if (BVar1 != 0) {
    uVar7 = DAT_1805c847c;
    if (param_2 != 0xffffffff) {
      uVar7 = param_2 + 1;
    }
    uVar8 = 0;
    if (param_2 != 0xffffffff) {
      uVar8 = (ulonglong)param_2;
    }
    uVar9 = (uint)uVar8;
    while (uVar9 < uVar7) {
      pDVar6 = (DWORD64 *)(uVar8 * 0x38 + DAT_1805c8470);
      if (param_3 == 0) {
        bVar3 = 0;
      }
      else if (param_3 == 1) {
        bVar3 = 1;
      }
      else {
        bVar3 = (byte)pDVar6[4] >> 2 & 1;
      }
      if (((byte)pDVar6[4] >> 1 & 1) != bVar3) {
        if (bVar3 == 0) {
          if ((((byte)pDVar6[4] & 1) == 0) || (DVar4 = *pDVar6, local_4f8.Rip != DVar4 - 5)) {
            uVar9 = *(uint *)((longlong)pDVar6 + 0x24) & 0xf;
            if (uVar9 != 0) {
              uVar5 = 0;
              do {
                if (local_4f8.Rip ==
                    (ulonglong)*(byte *)(uVar5 + 0x30 + (longlong)pDVar6) + pDVar6[2]) {
                  DVar4 = (ulonglong)*(byte *)(uVar5 + 0x28 + (longlong)pDVar6) + *pDVar6;
                  goto LAB_180242ae6;
                }
                uVar2 = (int)uVar5 + 1;
                uVar5 = (ulonglong)uVar2;
              } while (uVar2 < uVar9);
            }
            if (local_4f8.Rip != pDVar6[1]) goto LAB_180242ae4;
            DVar4 = *pDVar6;
          }
        }
        else {
          uVar9 = *(uint *)((longlong)pDVar6 + 0x24) & 0xf;
          if (uVar9 != 0) {
            uVar2 = 0;
            do {
              if (local_4f8.Rip ==
                  (ulonglong)*(byte *)((ulonglong)uVar2 + 0x28 + (longlong)pDVar6) + *pDVar6) {
                DVar4 = (ulonglong)*(byte *)((ulonglong)uVar2 + 0x30 + (longlong)pDVar6) + pDVar6[2]
                ;
                goto LAB_180242ae6;
              }
              uVar2 = uVar2 + 1;
            } while (uVar2 < uVar9);
          }
LAB_180242ae4:
          DVar4 = 0;
        }
LAB_180242ae6:
        if (DVar4 != 0) {
          local_4f8.Rip = DVar4;
          SetThreadContext(param_1,&local_4f8);
        }
      }
      uVar9 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar9;
    }
  }
  return;
}



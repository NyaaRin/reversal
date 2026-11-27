// 0x180242fc0  FUN_180242fc0
// size=826 thunk=false
// signature: undefined FUN_180242fc0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180242fc0(undefined4 *param_1,LPCVOID param_2,ulonglong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *lpAddress;
  int iVar3;
  longlong lVar4;
  LPVOID pvVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined1 auStack_98 [40];
  undefined1 local_70 [24];
  SIZE_T local_58;
  DWORD local_50;
  uint local_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  uVar7 = 0;
  LOCK();
  bVar10 = DAT_1803fa5f4 == 0;
  if (bVar10) {
    DAT_1803fa5f4 = 1;
  }
  UNLOCK();
  while (!bVar10) {
    Sleep((uint)(0x1f < uVar7));
    uVar7 = uVar7 + 1;
    LOCK();
    bVar10 = DAT_1803fa5f4 == 0;
    if (bVar10) {
      DAT_1803fa5f4 = 1;
    }
    UNLOCK();
  }
  if (DAT_1803fa7a0 == (HANDLE)0x0) {
    uVar8 = 2;
    goto LAB_1802432d8;
  }
  VirtualQuery(param_1,(PMEMORY_BASIC_INFORMATION)local_70,0x30);
  if ((((local_50 != 0x1000) || ((local_4c & 0xf0) == 0)) ||
      (VirtualQuery(param_2,(PMEMORY_BASIC_INFORMATION)local_70,0x30), local_50 != 0x1000)) ||
     ((local_4c & 0xf0) == 0)) {
    uVar8 = 7;
    goto LAB_1802432d8;
  }
  uVar7 = 0;
  if (DAT_1805c847c != 0) {
    do {
      if (param_1 == *(undefined4 **)(uVar7 * 0x38 + (longlong)DAT_1805c8470)) {
        if ((int)uVar7 != -1) {
          uVar8 = 3;
          goto LAB_1802432d8;
        }
        break;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < DAT_1805c847c);
  }
  lVar4 = FUN_180241010();
  if (lVar4 != 0) {
    puVar2 = *(undefined8 **)(lVar4 + 8);
    uVar8 = *puVar2;
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
    *(undefined8 *)(lVar4 + 8) = uVar8;
    if (puVar2 != (undefined8 *)0x0) {
      local_70._0_8_ = param_1;
      local_70._8_8_ = param_2;
      local_70._16_8_ = puVar2;
      iVar3 = FUN_1802d35e0(local_70);
      if (iVar3 == 0) {
        uVar8 = 8;
      }
      else {
        if (DAT_1805c8470 == (LPVOID)0x0) {
          DAT_1805c8478 = 0x20;
          DAT_1805c8470 = HeapAlloc(DAT_1803fa7a0,0,0x700);
          if (DAT_1805c8470 != (LPVOID)0x0) goto LAB_1802431a4;
        }
        else {
          if (DAT_1805c8478 <= DAT_1805c847c) {
            pvVar5 = HeapReAlloc(DAT_1803fa7a0,0,DAT_1805c8470,(ulonglong)(DAT_1805c8478 * 2) * 0x38
                                );
            if (pvVar5 == (LPVOID)0x0) goto LAB_180243138;
            DAT_1805c8478 = DAT_1805c8478 * 2;
            DAT_1805c8470 = pvVar5;
          }
LAB_1802431a4:
          uVar7 = (ulonglong)DAT_1805c847c;
          DAT_1805c847c = DAT_1805c847c + 1;
          puVar9 = (undefined8 *)(uVar7 * 0x38 + (longlong)DAT_1805c8470);
          if (puVar9 != (undefined8 *)0x0) {
            uVar8 = 0;
            *(uint *)((longlong)puVar9 + 0x24) = *(uint *)((longlong)puVar9 + 0x24) & 0xfffffff0;
            *puVar9 = local_70._0_8_;
            puVar9[1] = local_58;
            puVar9[2] = local_70._16_8_;
            *(byte *)(puVar9 + 4) = (byte)local_50 & 1 | *(byte *)(puVar9 + 4) & 0xf8;
            *(uint *)((longlong)puVar9 + 0x24) = *(uint *)((longlong)puVar9 + 0x24) | local_4c & 0xf
            ;
            puVar9[5] = local_48;
            puVar9[6] = local_40;
            if (local_50 == 0) {
              *(undefined4 *)(puVar9 + 3) = *param_1;
              *(undefined1 *)((longlong)puVar9 + 0x1c) = *(undefined1 *)(param_1 + 1);
            }
            else {
              *(undefined4 *)(puVar9 + 3) = *(undefined4 *)((longlong)param_1 + -5);
              *(undefined2 *)((longlong)puVar9 + 0x1c) = *(undefined2 *)((longlong)param_1 + -1);
              *(undefined1 *)((longlong)puVar9 + 0x1e) = *(undefined1 *)((longlong)param_1 + 1);
            }
            if (param_3 != (ulonglong *)0x0) {
              *param_3 = local_70._16_8_;
            }
            goto LAB_1802432d8;
          }
        }
LAB_180243138:
        uVar8 = 9;
      }
      puVar9 = (undefined8 *)0x0;
      for (lpAddress = DAT_1805c8480; lpAddress != (undefined8 *)0x0;
          lpAddress = (undefined8 *)*lpAddress) {
        if (lpAddress == (undefined8 *)((ulonglong)puVar2 & 0xfffffffffffff000)) {
          *puVar2 = lpAddress[1];
          piVar1 = (int *)(lpAddress + 2);
          *piVar1 = *piVar1 + -1;
          lpAddress[1] = puVar2;
          if (*piVar1 == 0) {
            if (puVar9 == (undefined8 *)0x0) {
              DAT_1805c8480 = (undefined8 *)*lpAddress;
              VirtualFree(lpAddress,0,0x8000);
            }
            else {
              *puVar9 = (undefined8 *)*lpAddress;
              VirtualFree(lpAddress,0,0x8000);
            }
          }
          break;
        }
        puVar9 = lpAddress;
      }
      goto LAB_1802432d8;
    }
  }
  uVar8 = 9;
LAB_1802432d8:
  LOCK();
  DAT_1803fa5f4 = 0;
  UNLOCK();
  return uVar8;
}



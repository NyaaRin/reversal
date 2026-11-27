// 0x180243300  FUN_180243300
// size=602 thunk=false
// signature: undefined FUN_180243300()
// status: ok


int FUN_180243300(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 *lpAddress;
  int iVar10;
  HANDLE hThread;
  LPVOID pvVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  bool bVar17;
  LPVOID local_38;
  uint local_2c;
  
  uVar14 = 0;
  LOCK();
  bVar17 = DAT_1803fa5f4 == 0;
  if (bVar17) {
    DAT_1803fa5f4 = 1;
  }
  UNLOCK();
  while (!bVar17) {
    Sleep((uint)(0x1f < uVar14));
    uVar14 = uVar14 + 1;
    LOCK();
    bVar17 = DAT_1803fa5f4 == 0;
    if (bVar17) {
      DAT_1803fa5f4 = 1;
    }
    UNLOCK();
  }
  if (DAT_1803fa7a0 == (HANDLE)0x0) {
    iVar10 = 2;
  }
  else {
    uVar14 = 0;
    if (DAT_1805c847c == 0) {
LAB_180243382:
      iVar10 = 4;
    }
    else {
      while( true ) {
        uVar13 = (uint)uVar14;
        lVar16 = uVar14 * 0x38;
        if (param_1 == *(longlong *)(lVar16 + (longlong)DAT_1805c8470)) break;
        uVar14 = (ulonglong)(uVar13 + 1);
        if (DAT_1805c847c <= uVar13 + 1) goto LAB_180243382;
      }
      if (uVar13 == 0xffffffff) goto LAB_180243382;
      iVar10 = 0;
      if ((*(byte *)(lVar16 + 0x20 + (longlong)DAT_1805c8470) & 2) != 0) {
        FUN_180242bb0(&local_38,uVar14,0);
        iVar10 = FUN_180242d60(uVar14,0);
        if (local_38 != (LPVOID)0x0) {
          uVar14 = 0;
          if (local_2c != 0) {
            do {
              hThread = OpenThread(0x5a,0,*(DWORD *)((longlong)local_38 + uVar14 * 4));
              if (hThread != (HANDLE)0x0) {
                ResumeThread(hThread);
                CloseHandle(hThread);
              }
              uVar15 = (int)uVar14 + 1;
              uVar14 = (ulonglong)uVar15;
            } while (uVar15 < local_2c);
          }
          HeapFree(DAT_1803fa7a0,0,local_38);
        }
        if (iVar10 != 0) goto LAB_180243540;
      }
      uVar15 = DAT_1805c847c;
      pvVar11 = DAT_1805c8470;
      puVar5 = *(undefined8 **)(lVar16 + 0x10 + (longlong)DAT_1805c8470);
      puVar2 = (undefined8 *)0x0;
      for (lpAddress = DAT_1805c8480; lpAddress != (undefined8 *)0x0;
          lpAddress = (undefined8 *)*lpAddress) {
        if (lpAddress == (undefined8 *)((ulonglong)puVar5 & 0xfffffffffffff000)) {
          *puVar5 = lpAddress[1];
          piVar1 = (int *)(lpAddress + 2);
          *piVar1 = *piVar1 + -1;
          lpAddress[1] = puVar5;
          if (*piVar1 == 0) {
            puVar5 = (undefined8 *)*lpAddress;
            if (puVar2 != (undefined8 *)0x0) {
              *puVar2 = (undefined8 *)*lpAddress;
              puVar5 = DAT_1805c8480;
            }
            DAT_1805c8480 = puVar5;
            VirtualFree(lpAddress,0,0x8000);
            pvVar11 = DAT_1805c8470;
            uVar15 = DAT_1805c847c;
          }
          break;
        }
        puVar2 = lpAddress;
      }
      DAT_1805c847c = uVar15 - 1;
      if (uVar13 < DAT_1805c847c) {
        lVar12 = (ulonglong)DAT_1805c847c * 0x38;
        uVar9 = ((undefined8 *)(lVar12 + (longlong)pvVar11))[1];
        *(undefined8 *)(lVar16 + (longlong)pvVar11) = *(undefined8 *)(lVar12 + (longlong)pvVar11);
        ((undefined8 *)(lVar16 + (longlong)pvVar11))[1] = uVar9;
        puVar5 = (undefined8 *)(lVar12 + 0x10 + (longlong)pvVar11);
        uVar9 = puVar5[1];
        puVar2 = (undefined8 *)(lVar16 + 0x10 + (longlong)pvVar11);
        *puVar2 = *puVar5;
        puVar2[1] = uVar9;
        puVar3 = (undefined4 *)(lVar12 + 0x20 + (longlong)pvVar11);
        uVar6 = puVar3[1];
        uVar7 = puVar3[2];
        uVar8 = puVar3[3];
        puVar4 = (undefined4 *)(lVar16 + 0x20 + (longlong)pvVar11);
        *puVar4 = *puVar3;
        puVar4[1] = uVar6;
        puVar4[2] = uVar7;
        puVar4[3] = uVar8;
        *(undefined8 *)(lVar16 + 0x30 + (longlong)pvVar11) =
             *(undefined8 *)(lVar12 + 0x30 + (longlong)pvVar11);
        pvVar11 = DAT_1805c8470;
      }
      if (((0x1f < DAT_1805c8478 >> 1) && (DAT_1805c847c <= DAT_1805c8478 >> 1)) &&
         (pvVar11 = HeapReAlloc(DAT_1803fa7a0,0,pvVar11,(ulonglong)(DAT_1805c8478 >> 1) * 0x38),
         pvVar11 != (LPVOID)0x0)) {
        DAT_1805c8478 = DAT_1805c8478 >> 1;
        DAT_1805c8470 = pvVar11;
      }
    }
  }
LAB_180243540:
  LOCK();
  DAT_1803fa5f4 = 0;
  UNLOCK();
  return iVar10;
}



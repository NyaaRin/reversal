// 0x1801fb3a0  FUN_1801fb3a0
// size=2457 thunk=false
// signature: undefined FUN_1801fb3a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801fb3a0(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *lpAddress;
  char cVar3;
  int iVar4;
  DWORD DVar5;
  DWORD dwThreadId;
  undefined4 uVar6;
  BOOL BVar7;
  uint uVar8;
  longlong lVar9;
  HANDLE hThread;
  undefined8 uVar10;
  FILE *pFVar11;
  char *pcVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined1 auStack_588 [32];
  int local_568;
  uint local_564;
  undefined8 local_560;
  undefined *local_558;
  int iStack_550;
  undefined4 uStack_54c;
  undefined4 local_548;
  undefined4 uStack_544;
  int iStack_540;
  undefined4 uStack_53c;
  HMODULE local_538 [2];
  _CONTEXT local_528;
  ulonglong local_58;
  
  cVar3 = DAT_180423571;
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_588;
  LOCK();
  DAT_180423571 = '\x01';
  UNLOCK();
  if (cVar3 == '\0') {
    uVar15 = 0;
    DAT_180400af0 = 0;
    local_558 = &DAT_1803e79f0;
    iVar4 = _Mtx_lock(&DAT_1803e79f0);
    if (iVar4 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (DAT_1803e7a3c == 0x7fffffff) {
      DAT_1803e7a3c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    FUN_180153bc0();
    _Mtx_unlock(&DAT_1803e79f0);
    local_560 = _set_se_translator(FUN_180014ce0);
    FUN_180014410("\n=== mayrrX64 unload ===\n");
    if (DAT_1803fa628 != (HANDLE)0x0) {
      ReleaseMutex(DAT_1803fa628);
      CloseHandle(DAT_1803fa628);
      DAT_1803fa628 = (HANDLE)0x0;
      FUN_180014410("[UNLOAD] injection guard released (re-injection possible from here on)\n");
    }
    DAT_1803ff270 = 0;
    DAT_1803ff7c8 = 1;
    uVar14 = uVar15;
    while ((iVar4 = (int)uVar14, local_568 = iVar4, iVar4 < 200 && (DAT_1803ff7c8 != 2))) {
      Sleep(5);
      uVar14 = (ulonglong)(iVar4 + 1);
    }
    pcVar12 = "[UNLOAD] lua teardown did not acknowledge in 1s -- continuing\n";
    if (DAT_1803ff7c8 == 2) {
      pcVar12 = "[UNLOAD] lua teardown acknowledged\n";
    }
    FUN_180014410(pcVar12);
    DAT_180409ca0 = 1;
    if (DAT_18056de98 != 0) {
      iVar4 = _Thrd_id();
      if (DAT_18056de98 == iVar4) {
        std::_Throw_Cpp_error(5);
      }
      local_558 = _DAT_18056de90;
      iStack_550 = DAT_18056de98;
      uStack_54c = _DAT_18056de9c;
      iVar4 = _Thrd_join(&local_558,0);
      if (iVar4 != 0) {
        std::_Throw_Cpp_error(2);
      }
      _DAT_18056de90 = (undefined *)0x0;
      _DAT_18056de98 = 0;
    }
    DAT_180409c49 = 0;
    if (DAT_1805c3920 != 0) {
      iVar4 = _Thrd_id();
      if (DAT_1805c3920 == iVar4) {
        std::_Throw_Cpp_error(5);
      }
      local_548 = _DAT_1805c3918;
      uStack_544 = DAT_1805c3918_4;
      iStack_540 = DAT_1805c3920;
      uStack_53c = _DAT_1805c3924;
      iVar4 = _Thrd_join(&local_548,0);
      if (iVar4 != 0) {
        std::_Throw_Cpp_error(2);
      }
      _DAT_1805c3918 = 0;
      _DAT_1805c3920 = 0;
    }
    cVar3 = DAT_180409c70;
    LOCK();
    DAT_180409c70 = '\0';
    UNLOCK();
    if (((cVar3 != '\0') && (lVar9 = FUN_1801321e0(), lVar9 != 0)) &&
       (lVar9 = FUN_180131880(lVar9), lVar9 != 0)) {
      FUN_180243560(*(undefined8 *)(lVar9 + 0x68),0);
      FUN_180243560(*(undefined8 *)(lVar9 + 0x88),0);
      FUN_180243300(*(undefined8 *)(lVar9 + 0x68));
      FUN_180243300(*(undefined8 *)(lVar9 + 0x88));
    }
    FUN_180138480();
    FUN_18013a300();
    DAT_180409c80 = 0;
    _DAT_1803e9e40 = 0xffffffff;
    DAT_1803e85b4 = 0xffffffff;
    LOCK();
    DAT_180409c30 = 0;
    UNLOCK();
    LOCK();
    DAT_180409c24 = 0;
    UNLOCK();
    FUN_180071870();
    if (DAT_180409880 != '\0') {
      FUN_18012a2e0();
      FUN_18012a210(0);
    }
    if (DAT_180400eb8 != '\0') {
      FUN_18012c6f0(1);
    }
    FUN_18012f290();
    uVar6 = DAT_180380bb0;
    FUN_18012fc70(DAT_180380bb0,DAT_180380bb0,DAT_180380bb0);
    if (((DAT_1803fa668 != (longlong *)0x0) &&
        (cVar3 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar3 != '\0')) &&
       ((pcVar12 = (char *)FUN_18012a9f0(), pcVar12 != (char *)0x0 && (*pcVar12 != '\0')))) {
      FUN_18012ab00(pcVar12);
      FUN_18012f810(pcVar12);
      FUN_18012fc70(uVar6,uVar6,uVar6);
    }
    if ((DAT_180401593 != '\0') && (DAT_1803fa46f == '\0')) {
      FUN_180130390(uVar6,uVar6,uVar6,1);
    }
    if (DAT_1803fa5a8 != (longlong *)0x0) {
      (**(code **)(*DAT_1803fa5a8 + 0x58))(DAT_1803fa5a8,1);
    }
    DAT_18040a250 = 1;
    uVar14 = uVar15;
    do {
      if (1999 < (int)uVar14) break;
      Sleep(10);
      uVar14 = (ulonglong)((int)uVar14 + 10);
    } while (DAT_18040a250 != 2);
    if (DAT_18040a250 == 2) {
      FUN_180014410("[UNLOAD] feature teardown done on the game thread (%d ms)\n",uVar14);
    }
    else {
      DAT_18040a250 = 0;
      DAT_1804015a0 = 1;
      FUN_1801f66a0();
      FUN_180014410(
                   "[UNLOAD-WARN] game thread never ticked; feature teardown ran off-thread (camera/Lua-touching restores skipped)\n"
                   );
    }
    DAT_1803e89e0 = 0;
    FUN_1801225a0();
    Sleep(0xfa);
    FUN_180191540();
    lVar9 = DAT_1803fa320;
    local_564 = 0;
    uVar14 = uVar15;
    while (iVar4 = (int)uVar14, iVar4 < DAT_1803ff708) {
      if (lVar9 != 0) {
        FUN_18006da20(lVar9,&PTR_vftable_Core_GameEvents_Sink_1803eb890 + (longlong)iVar4 * 0xb);
      }
      (&DAT_1803eb8e4)[(longlong)iVar4 * 0x58] = 0;
      local_564 = iVar4 + 1;
      uVar14 = (ulonglong)local_564;
    }
    DAT_1803ff700 = 0;
    DAT_1803e7538 = 0xbf800000;
    FUN_180014410("[GAMEEVENT] %d listener(s) removed from the engine\n");
    dwThreadId = DAT_1803ff240;
    LOCK();
    DAT_1803ff240 = 0;
    UNLOCK();
    DAT_1803ff233 = 0;
    if (dwThreadId != 0) {
      hThread = OpenThread(0x1a,0,dwThreadId);
      if (hThread == (HANDLE)0x0) {
        DVar5 = GetLastError();
        FUN_180014410("[UNLOAD-WARN] OpenThread(%lu) failed (%lu); DR0 left armed\n",dwThreadId,
                      DVar5);
      }
      else {
        DVar5 = SuspendThread(hThread);
        if (DVar5 != 0xffffffff) {
          memset(&local_528,0,0x4d0);
          local_528.ContextFlags = 0x100010;
          BVar7 = GetThreadContext(hThread,&local_528);
          if (BVar7 != 0) {
            local_528.Dr0 = 0;
            local_528.Dr6 = 0;
            local_528.Dr7 = local_528.Dr7 & 0xfffffffffff0fffc;
            local_528.ContextFlags = 0x100010;
            BVar7 = SetThreadContext(hThread,&local_528);
            if (BVar7 == 0) {
              dwThreadId = GetLastError();
              pcVar12 = "[UNLOAD-WARN] SetThreadContext failed (%lu); DR0 left armed\n";
            }
            else {
              pcVar12 = "[UNLOAD] sendpacket DR0 trap disarmed on thread %lu\n";
            }
            FUN_180014410(pcVar12,dwThreadId);
          }
          ResumeThread(hThread);
        }
        CloseHandle(hThread);
      }
    }
    if (DAT_1803ff248 != (PVOID)0x0) {
      RemoveVectoredExceptionHandler(DAT_1803ff248);
      DAT_1803ff248 = (PVOID)0x0;
      FUN_180014410("[UNLOAD] sendpacket VEH removed\n");
    }
    DAT_1803ff298 = 1;
    uVar14 = uVar15;
    do {
      if (1999 < (int)uVar14) break;
      Sleep(10);
      uVar14 = (ulonglong)((int)uVar14 + 10);
    } while (DAT_1803ff298 != 2);
    if (DAT_1803ff298 == 2) {
      FUN_180014410("[UNLOAD] visual teardown done on the render thread (%d ms)\n",uVar14);
    }
    else {
      DAT_1803ff298 = 0;
      if ((DAT_1803fa4f0 != 0) && (DAT_1803fa618 != (HWND)0x0)) {
        SetWindowLongPtrW(DAT_1803fa618,-4,DAT_1803fa4f0);
        DAT_1803fa4f0 = 0;
        FUN_180014410("[UNLOAD] WndProc restored\n");
      }
      FUN_180014410("[UNLOAD-WARN] render thread never presented; D3D objects left allocated\n");
    }
    uVar6 = FUN_180243560(0,0);
    FUN_1802436b0(uVar6);
    FUN_180014410("[UNLOAD] MH_DisableHook: %s\n");
    Sleep(0x96);
    FUN_1801fafb0();
    Sleep(0x96);
    LOCK();
    bVar16 = DAT_1803fa5f4 == 0;
    if (bVar16) {
      DAT_1803fa5f4 = 1;
    }
    UNLOCK();
    uVar14 = uVar15;
    while (!bVar16) {
      Sleep((uint)(0x1f < uVar14));
      uVar14 = uVar14 + 1;
      LOCK();
      bVar16 = DAT_1803fa5f4 == 0;
      if (bVar16) {
        DAT_1803fa5f4 = 1;
      }
      UNLOCK();
    }
    if (DAT_1803fa7a0 == (HANDLE)0x0) {
      iVar4 = 2;
    }
    else {
      iVar4 = FUN_180242e80(0);
      lpAddress = DAT_1805c8480;
      if (iVar4 == 0) {
        DAT_1805c8480 = (undefined8 *)0x0;
        while (lpAddress != (undefined8 *)0x0) {
          puVar1 = (undefined8 *)*lpAddress;
          VirtualFree(lpAddress,0,0x8000);
          lpAddress = puVar1;
        }
        HeapFree(DAT_1803fa7a0,0,DAT_1805c8470);
        HeapDestroy(DAT_1803fa7a0);
        DAT_1803fa7a0 = (HANDLE)0x0;
        DAT_1805c8470 = (LPVOID)0x0;
        _DAT_1805c8478 = 0;
      }
    }
    LOCK();
    DAT_1803fa5f4 = 0;
    UNLOCK();
    uVar10 = FUN_1802436b0(iVar4);
    FUN_180014410("[UNLOAD] MH_Uninitialize: %s\n",uVar10);
    DAT_180409704 = 1;
    _Cnd_broadcast(&DAT_180409710);
    if (DAT_180423740 != '\0') {
      DAT_180423741 = 1;
      uVar14 = uVar15;
      do {
        if ((DAT_180423740 == '\0') && (DAT_18042373c < 1)) break;
        Sleep(5);
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
      } while ((int)uVar13 < 100);
    }
    FUN_18011afa0();
    Sleep(100);
    SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
    local_538[0] = (HMODULE)0x0;
    BVar7 = GetModuleHandleExA(6,(LPCSTR)FUN_1801fb3a0,local_538);
    if (((BVar7 == 0) || (local_538[0] != DAT_1803f9288)) || (DAT_1803fa5e8 != 0)) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
      uVar13 = FUN_1801fb310();
      FUN_180014410("[UNLOAD] loader refcount = %u\n",uVar13);
      while (1 < uVar13) {
        if (0x1f < (int)uVar15) {
LAB_1801fbc3d:
          FUN_180014410("[UNLOAD-WARN] %u references still held; module will stay mapped\n",uVar13);
          break;
        }
        FreeLibrary(DAT_1803f9288);
        uVar8 = FUN_1801fb310();
        if ((uVar8 == 0) || (uVar13 <= uVar8)) {
          FUN_180014410("[UNLOAD-WARN] refcount stuck at %u; leaving the rest\n",uVar8);
          if (1 < uVar13) goto LAB_1801fbc3d;
          break;
        }
        uVar15 = (ulonglong)((int)uVar15 + 1);
        uVar13 = uVar8;
      }
    }
    FUN_180014410("=== unload complete (%s) ===\n");
    local_558 = &DAT_1803da720;
    iVar4 = _Mtx_lock(&DAT_1803da720);
    if (iVar4 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (DAT_1803da76c == 0x7fffffff) {
      DAT_1803da76c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    if (DAT_1803f9240 != (FILE *)0x0) {
      fflush(DAT_1803f9240);
      fclose(DAT_1803f9240);
      DAT_1803f9240 = (FILE *)0x0;
    }
    cVar3 = DAT_1803fa567;
    LOCK();
    DAT_1803fa567 = '\0';
    UNLOCK();
    if (cVar3 != '\0') {
      pFVar11 = (FILE *)__acrt_iob_func(1);
      fflush(pFVar11);
      pFVar11 = (FILE *)__acrt_iob_func(1);
      fclose(pFVar11);
    }
    cVar3 = DAT_1803fa56e;
    LOCK();
    DAT_1803fa56e = '\0';
    UNLOCK();
    if (cVar3 != '\0') {
      pFVar11 = (FILE *)__acrt_iob_func(0);
      fclose(pFVar11);
    }
    FreeConsole();
    _Mtx_unlock(&DAT_1803da720);
    Sleep(0x32);
    if (bVar16) {
                    /* WARNING: Subroutine does not return */
      FreeLibraryAndExitThread(DAT_1803f9288,0);
    }
    _set_se_translator(local_560);
  }
  return;
}



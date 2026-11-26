// 0x180137640  FUN_180137640
// size=422 thunk=false
// signature: undefined FUN_180137640()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_180137640(void)

{
  longlong *plVar1;
  int iVar2;
  HMODULE pHVar3;
  HANDLE pvVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int *piVar8;
  ulonglong uVar9;
  int *piVar10;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  pHVar3 = GetModuleHandleA("engine.dll");
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (pHVar3 != (HMODULE)0x0) {
    pvVar4 = GetCurrentProcess();
    iVar2 = K32GetModuleInformation(pvVar4,pHVar3,&local_28,0x18);
    if (iVar2 != 0) {
      uVar6 = uStack_20 & 0xffffffff;
      lVar7 = 0;
      if (0x10 < uVar6) {
        do {
          plVar1 = (longlong *)((longlong)&pHVar3->unused + lVar7);
          if ((((*(char *)((longlong)&pHVar3->unused + lVar7) == 'D') &&
               (*plVar1 == s_Disconnect___s__18033ca90._0_8_)) &&
              (plVar1[1] == s_Disconnect___s__18033ca90._8_8_)) &&
             ((char)plVar1[2] == s_Disconnect___s__18033ca90[0x10])) {
            if (plVar1 == (longlong *)0x0) {
              return (int *)0x0;
            }
            lVar7 = 0;
            piVar10 = (int *)0x0;
            uVar9 = 0;
            do {
              if (((*(char *)((longlong)&pHVar3->unused + uVar9) == 'H') &&
                  (*(char *)((longlong)&pHVar3->unused + uVar9 + 1) == -0x73)) &&
                 ((*(char *)((longlong)&pHVar3->unused + uVar9 + 2) == '\r' &&
                  (((longlong *)
                    ((longlong)&pHVar3[1].unused +
                    (longlong)*(int *)((longlong)&pHVar3->unused + uVar9 + 3) + uVar9 + 3) == plVar1
                   && (*(int *)((longlong)&pHVar3[1].unused + uVar9 + 3) == DAT_18030fce0)))))) {
                uVar5 = 8;
                do {
                  if (uVar9 < uVar5) break;
                  piVar8 = (int *)((uVar9 - uVar5) + (longlong)pHVar3);
                  if ((*piVar8 == DAT_18033d5c8) && ((short)piVar8[1] == DAT_18033d5cc)) {
                    lVar7 = lVar7 + 1;
                    piVar10 = piVar8;
                    break;
                  }
                  uVar5 = uVar5 + 1;
                } while (uVar5 < 0x61);
              }
              uVar5 = uVar9 + 0xc;
              uVar9 = uVar9 + 1;
              if (uVar6 < uVar5) {
                if (lVar7 == 1) {
                  FUN_180014410("[AS] ConnectionClosing resolved: %p (engine+0x%llX) - the server\'s own disconnect reason will now be in this log\n"
                                ,piVar10,(longlong)piVar10 - (longlong)pHVar3);
                  return piVar10;
                }
                FUN_180014410("[AS] ConnectionClosing: %zu candidates - not hooking (re-run tools/find_disconnect_reason.py against the new engine.dll)\n"
                              ,lVar7);
                return (int *)0x0;
              }
            } while( true );
          }
          uVar9 = lVar7 + 0x12;
          lVar7 = lVar7 + 1;
        } while (uVar9 <= uVar6);
      }
    }
  }
  return (int *)0x0;
}



// 0x18011eef0  FUN_18011eef0
// size=593 thunk=false
// signature: undefined FUN_18011eef0()
// status: ok


ulonglong FUN_18011eef0(longlong param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  HMODULE pHVar3;
  ulonglong uVar4;
  ushort uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  pHVar3 = GetModuleHandleA("client.dll");
  if (pHVar3 != (HMODULE)0x0) {
    lVar7 = (longlong)pHVar3[0xf].unused;
    uVar11 = 0;
    uVar10 = 0;
    uVar1 = *(ushort *)((longlong)&pHVar3[1].unused + lVar7 + 2);
    lVar7 = (longlong)&pHVar3[6].unused +
            (ulonglong)*(ushort *)((longlong)&pHVar3[5].unused + lVar7) + lVar7;
    uVar5 = 0;
    if (uVar1 != 0) {
      do {
        if (((int)*(uint *)(lVar7 + 0x24) < 0) && ((*(uint *)(lVar7 + 0x24) & 0x40) != 0)) {
          uVar4 = (longlong)&pHVar3->unused + (ulonglong)*(uint *)(lVar7 + 0xc);
          uVar8 = *(uint *)(lVar7 + 8) + uVar4;
          if ((uVar11 == 0) || (uVar4 < uVar11)) {
            uVar11 = uVar4;
          }
          if (uVar10 < uVar8) {
            uVar10 = uVar8;
          }
        }
        uVar5 = uVar5 + 1;
        lVar7 = lVar7 + 0x28;
      } while (uVar5 < uVar1);
      if (uVar11 != 0) {
        uVar8 = 0;
        uVar4 = 0;
        uVar9 = 0;
        do {
          if ((*(char *)(param_1 + uVar9) == 'H') && (*(char *)(param_1 + 1 + uVar9) == -0x75)) {
            if (*(char *)(param_1 + 2 + uVar9) != '\r') {
LAB_18011f073:
              if ((*(char *)(param_1 + 2 + uVar9) != 'H') ||
                 (*(char *)(param_1 + 3 + uVar9) != -0x75)) goto LAB_18011efdc;
              if (*(char *)(param_1 + 4 + uVar9) != '\r') goto LAB_18011f04c;
              uVar6 = (longlong)*(int *)(param_1 + 5 + uVar9) + 9 + uVar9 + param_1;
              if ((uVar11 <= uVar6) && (uVar6 < uVar10)) {
                uVar2 = uVar6;
                if (uVar4 != 0) {
                  uVar2 = uVar4;
                }
                uVar4 = uVar2;
                if (uVar6 != uVar4) {
                  uVar8 = uVar6;
                }
              }
              goto LAB_18011f0c1;
            }
            uVar6 = (longlong)*(int *)(param_1 + 3 + uVar9) + 7 + uVar9 + param_1;
            if ((uVar11 <= uVar6) && (uVar6 < uVar10)) {
              uVar2 = uVar6;
              if (uVar4 != 0) {
                uVar2 = uVar4;
              }
              uVar4 = uVar2;
              if (uVar6 != uVar4) {
                uVar8 = uVar6;
              }
            }
LAB_18011efdc:
            if ((*(char *)(param_1 + 3 + uVar9) != 'H') || (*(char *)(param_1 + 4 + uVar9) != -0x75)
               ) goto LAB_18011f04c;
            if (*(char *)(param_1 + 5 + uVar9) != '\r') goto LAB_18011f0c1;
            lVar7 = (longlong)*(int *)(param_1 + 6 + uVar9) + 10;
LAB_18011f0e2:
            uVar6 = lVar7 + uVar9 + param_1;
            if ((uVar11 <= uVar6) && (uVar6 < uVar10)) {
              uVar2 = uVar6;
              if (uVar4 != 0) {
                uVar2 = uVar4;
              }
              uVar4 = uVar2;
              if (uVar6 != uVar4) {
                uVar8 = uVar6;
              }
            }
          }
          else {
            if ((*(char *)(param_1 + 1 + uVar9) != 'H') || (*(char *)(param_1 + 2 + uVar9) != -0x75)
               ) goto LAB_18011f073;
            if (*(char *)(param_1 + 3 + uVar9) != '\r') goto LAB_18011efdc;
            uVar6 = (longlong)*(int *)(param_1 + 4 + uVar9) + 8 + uVar9 + param_1;
            if ((uVar11 <= uVar6) && (uVar6 < uVar10)) {
              uVar2 = uVar6;
              if (uVar4 != 0) {
                uVar2 = uVar4;
              }
              uVar4 = uVar2;
              if (uVar6 != uVar4) {
                uVar8 = uVar6;
              }
            }
LAB_18011f04c:
            if ((*(char *)(param_1 + 4 + uVar9) == 'H') && (*(char *)(param_1 + 5 + uVar9) == -0x75)
               ) {
              if (*(char *)(param_1 + 6 + uVar9) == '\r') {
                lVar7 = (longlong)*(int *)(param_1 + 7 + uVar9) + 0xb;
                goto LAB_18011f0e2;
              }
            }
            else {
LAB_18011f0c1:
              if (((*(char *)(param_1 + 5 + uVar9) == 'H') &&
                  (*(char *)(param_1 + 6 + uVar9) == -0x75)) &&
                 (*(char *)(param_1 + 7 + uVar9) == '\r')) {
                lVar7 = (longlong)*(int *)(param_1 + 8 + uVar9) + 0xc;
                goto LAB_18011f0e2;
              }
            }
          }
          uVar9 = uVar9 + 6;
          if (299 < uVar9) {
            if (uVar8 != 0) {
              uVar4 = uVar8;
            }
            return uVar4;
          }
        } while( true );
      }
    }
  }
  return 0;
}



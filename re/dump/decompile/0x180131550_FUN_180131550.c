// 0x180131550  FUN_180131550
// size=535 thunk=false
// signature: undefined FUN_180131550()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180131550(longlong param_1,undefined8 param_2,char *param_3,undefined8 param_4,
                       ulonglong param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  HMODULE pHVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte *pbVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_d8 [32];
  byte local_b8;
  byte local_b7 [127];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  pHVar7 = DAT_180423b78;
  uVar9 = DAT_180425fd8;
  if (DAT_180425fd8 == 0) {
    pHVar7 = DAT_1803fea40;
    if (DAT_1803fea40 == (HMODULE)0x0) {
      pHVar7 = GetModuleHandleA("steamclient64.dll");
      uVar8 = 0;
      if (pHVar7 == (HMODULE)0x0) goto LAB_180131748;
    }
    DAT_1803fea40 = pHVar7;
    uVar8 = 0x5a4d;
    if ((((short)DAT_1803fea40->unused != 0x5a4d) ||
        (uVar8 = (ulonglong)DAT_1803fea40[0xf].unused,
        *(int *)((longlong)&DAT_1803fea40->unused + uVar8) != 0x4550)) ||
       (uVar9 = (ulonglong)*(uint *)((longlong)&DAT_1803fea40[0x14].unused + uVar8),
       pHVar7 = DAT_1803fea40, uVar9 == 0)) goto LAB_180131748;
  }
  DAT_180425fd8 = uVar9;
  DAT_180423b78 = pHVar7;
  uVar9 = DAT_180425fd8;
  pHVar7 = DAT_180423b78;
  uVar8 = FUN_1801311e0(param_1);
  if ((char)uVar8 != '\0') {
    uVar9 = (uVar9 - param_1) + (longlong)pHVar7;
    if (uVar9 < param_5) {
      param_5 = uVar9;
    }
    bVar2 = false;
    bVar3 = false;
    *param_3 = '\0';
    lVar11 = 0;
    if (6 < param_5) {
      do {
        if ((((byte)(*(char *)(param_1 + lVar11) + 0xb8U) < 8) &&
            (*(char *)(param_1 + 1 + lVar11) == -0x73)) &&
           (((*(byte *)(param_1 + 2 + lVar11) & 199) == 5 &&
            (cVar5 = FUN_1801314f0((longlong)*(int *)(param_1 + 3 + lVar11) + 7 + lVar11 + param_1,
                                   &local_b8), cVar5 != '\0')))) {
          iVar6 = strcmp((char *)&local_b8,"IClientUser");
          if (iVar6 == 0) {
            bVar3 = true;
          }
          else if ((!bVar2) && (local_b8 != 0)) {
            pbVar10 = &local_b8;
            lVar4 = 0;
            bVar1 = local_b8;
            do {
              lVar12 = lVar4;
              if (((0x2f < (byte)(bVar1 - 0x30)) ||
                  ((0x87fffffe03ffU >> ((ulonglong)(bVar1 - 0x30) & 0x3f) & 1) == 0)) &&
                 (0x19 < (byte)(bVar1 + 0x9f))) goto LAB_18013170e;
              bVar1 = pbVar10[1];
              pbVar10 = pbVar10 + 1;
              lVar4 = lVar12 + 1;
            } while (bVar1 != 0);
            if (lVar12 - 1U < 0x3e) {
              strncpy_s(param_3,0x80,(char *)&local_b8,0xffffffffffffffff);
              bVar2 = true;
            }
          }
        }
LAB_18013170e:
        uVar9 = lVar11 + 8;
        lVar11 = lVar11 + 1;
      } while (uVar9 <= param_5);
      if ((bVar2) && (bVar3)) {
        return CONCAT71((int7)(uVar9 >> 8),1);
      }
    }
    return uVar9 & 0xffffffffffffff00;
  }
LAB_180131748:
  return uVar8 & 0xffffffffffffff00;
}



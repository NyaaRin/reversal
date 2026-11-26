// 0x180156640  FUN_180156640
// size=915 thunk=false
// signature: undefined FUN_180156640()
// status: ok


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_180156640(undefined8 param_1)

{
  bool bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  char *pcVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  size_t _Size;
  ulonglong uVar13;
  undefined1 auStack_22d8 [32];
  int local_22b8;
  undefined8 local_22b0;
  ulonglong local_22a8 [2];
  undefined1 local_2298 [607];
  char acStack_2039 [8193];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_22d8;
  iVar5 = 0;
  if ((((DAT_180409d60 != (code *)0x0) &&
       (local_22b0 = param_1, iVar5 = (*DAT_180409d60)(), 0 < iVar5)) && (DAT_180409f60 != '\0')) &&
     ((local_22b8 = iVar5, cVar4 = FUN_180155d10(), cVar4 != '\0' &&
      (iVar6 = (*DAT_180409f10)(param_1,0xffffffff), iVar6 == 4)))) {
    local_22a8[0] = 0;
    lVar7 = (*DAT_180409e58)(param_1,0xffffffff,local_22a8);
    if ((lVar7 != 0) && (local_22a8[0] - 1 < 8000)) {
      uVar10 = 0;
      bVar1 = false;
      uVar11 = 0;
      uVar13 = local_22a8[0];
      if (local_22a8[0] != 0) {
        do {
          uVar2 = uVar11;
          if (0x1fff < uVar10 + 1) break;
          for (; (uVar9 = uVar11, uVar2 < uVar13 && (*(char *)(lVar7 + uVar2) != '\n'));
              uVar2 = uVar2 + 1) {
          }
          for (; (uVar3 = uVar9, uVar9 < uVar2 &&
                 ((*(char *)(lVar7 + uVar9) == '\t' || (*(char *)(lVar7 + uVar9) == ' '))));
              uVar9 = uVar9 + 1) {
          }
          for (; (uVar3 < uVar2 && (*(char *)(lVar7 + uVar3) != ':')); uVar3 = uVar3 + 1) {
          }
          _Size = uVar3 - uVar9;
          if (599 < _Size) {
            _Size = 599;
          }
          memcpy(local_2298,(void *)(uVar9 + lVar7),_Size);
          local_2298[_Size] = 0;
          if (((uVar3 < uVar2) && (_Size != 0)) &&
             (cVar4 = FUN_180155db0(local_2298), uVar13 = local_22a8[0], cVar4 != '\0')) {
            do {
              uVar3 = uVar3 + 1;
              if (uVar2 <= uVar3) {
                lVar12 = 0;
                goto LAB_18015682a;
              }
            } while (*(char *)(lVar7 + uVar3) != ':');
            lVar12 = lVar7 + uVar3 + 1;
            if (lVar12 == 0) {
LAB_18015682a:
              uVar11 = 0;
            }
            else {
              uVar11 = (uVar2 - lVar12) + lVar7;
            }
            pcVar8 = "\t[C]:";
            do {
              uVar9 = uVar10 + 1;
              if (0x1fff < uVar9) break;
              cVar4 = *pcVar8;
              pcVar8 = pcVar8 + 1;
              acStack_2039[uVar10 + 1] = cVar4;
              uVar10 = uVar9;
            } while (*pcVar8 != '\0');
            uVar9 = 0;
            if (uVar11 != 0) {
              do {
                uVar3 = uVar10 + 1;
                if (0x1fff < uVar3) break;
                pcVar8 = (char *)(lVar12 + uVar9);
                uVar9 = uVar9 + 1;
                acStack_2039[uVar10 + 1] = *pcVar8;
                uVar10 = uVar3;
              } while (uVar9 < uVar11);
            }
            if (lVar12 == 0) {
              pcVar8 = " in ?";
              do {
                uVar11 = uVar10 + 1;
                if (0x1fff < uVar11) break;
                cVar4 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                acStack_2039[uVar10 + 1] = cVar4;
                uVar10 = uVar11;
              } while (*pcVar8 != '\0');
            }
            bVar1 = true;
          }
          else {
            while ((uVar11 < uVar2 && (uVar10 + 1 < 0x2000))) {
              pcVar8 = (char *)(lVar7 + uVar11);
              uVar11 = uVar11 + 1;
              acStack_2039[uVar10 + 1] = *pcVar8;
              uVar10 = uVar10 + 1;
            }
          }
          if ((uVar2 < uVar13) && (uVar10 + 1 < 0x2000)) {
            acStack_2039[uVar10 + 1] = '\n';
            uVar10 = uVar10 + 1;
          }
          uVar11 = uVar2 + 1;
        } while (uVar11 < uVar13);
        iVar5 = local_22b8;
        if (bVar1) {
          (*DAT_180409f48)(local_22b0,acStack_2039 + 1,uVar10);
          (*DAT_180409f50)(local_22b0,0xfffffffe);
          LOCK();
          DAT_180409f28 = DAT_180409f28 + 1;
          UNLOCK();
          iVar5 = local_22b8;
        }
      }
    }
  }
  return iVar5;
}



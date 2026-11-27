// 0x180133200  FUN_180133200
// size=1077 thunk=false
// signature: undefined FUN_180133200()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

longlong FUN_180133200(undefined8 *param_1)

{
  longlong lVar1;
  char *pcVar2;
  BOOL BVar3;
  longlong lVar4;
  longlong lVar5;
  char *******pppppppcVar6;
  ulonglong uVar7;
  BYTE *******pppppppBVar8;
  void *_Dst;
  longlong lVar9;
  ulonglong _Size;
  char *******pppppppcVar10;
  undefined8 *puVar11;
  undefined1 auStackY_b8 [32];
  DWORD local_74;
  BYTE *******local_70 [2];
  ulonglong local_60;
  ulonglong local_58;
  char *******local_50 [2];
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStackY_b8;
  lVar9 = 0;
  puVar11 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar11 = (undefined8 *)*param_1;
  }
  if (((param_1[2] != 0) &&
      (lVar1 = (longlong)puVar11 + param_1[2], lVar4 = thunk_FUN_1802d5c20(puVar11,lVar1,0x2e),
      lVar4 != lVar1)) && (lVar4 = lVar4 - (longlong)puVar11, lVar4 != -1)) {
    uVar7 = lVar4 + 1;
    puVar11 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar11 = (undefined8 *)*param_1;
    }
    if (((uVar7 < (ulonglong)param_1[2]) &&
        (lVar1 = (longlong)puVar11 + param_1[2],
        lVar5 = thunk_FUN_1802d5c20(uVar7 + (longlong)puVar11,lVar1,0x2e), lVar5 != lVar1)) &&
       (lVar5 - (longlong)puVar11 != -1)) {
      FUN_18020e670(param_1,local_50,uVar7,((lVar5 - (longlong)puVar11) - lVar4) + -1);
      if ((local_40 != 0) && (local_40 < 0x1001)) {
        pppppppcVar6 = local_50[0];
        if (local_38 < 0x10) {
          pppppppcVar6 = (char *******)local_50;
        }
        pppppppcVar10 = (char *******)((longlong)pppppppcVar6 + local_40);
        for (; pppppppcVar6 != pppppppcVar10;
            pppppppcVar6 = (char *******)((longlong)pppppppcVar6 + 1)) {
          if (*(char *)pppppppcVar6 == '-') {
            *(char *)pppppppcVar6 = '+';
          }
          else if (*(char *)pppppppcVar6 == '_') {
            *(char *)pppppppcVar6 = '/';
          }
        }
        while ((local_40 & 3) != 0) {
          if (local_40 < local_38) {
            pppppppcVar6 = (char *******)local_50;
            if (0xf < local_38) {
              pppppppcVar6 = local_50[0];
            }
            pcVar2 = (char *)((longlong)pppppppcVar6 + local_40);
            local_40 = local_40 + 1;
            pcVar2[0] = '=';
            pcVar2[1] = '\0';
          }
          else {
            FUN_18021abd0(local_50,local_40,local_38,0x3d);
          }
        }
        local_74 = 0;
        pppppppcVar6 = (char *******)local_50;
        if (0xf < local_38) {
          pppppppcVar6 = local_50[0];
        }
        BVar3 = CryptStringToBinaryA
                          ((LPCSTR)pppppppcVar6,(DWORD)local_40,1,(BYTE *)0x0,&local_74,(DWORD *)0x0
                           ,(DWORD *)0x0);
        if ((BVar3 != 0) && (local_74 != 0)) {
          FUN_18020ea80(local_70,local_74,0);
          pppppppBVar8 = (BYTE *******)local_70;
          if (0xf < local_58) {
            pppppppBVar8 = local_70[0];
          }
          pppppppcVar6 = (char *******)local_50;
          if (0xf < local_38) {
            pppppppcVar6 = local_50[0];
          }
          BVar3 = CryptStringToBinaryA
                            ((LPCSTR)pppppppcVar6,(DWORD)local_40,1,(BYTE *)pppppppBVar8,&local_74,
                             (DWORD *)0x0,(DWORD *)0x0);
          if (BVar3 != 0) {
            uVar7 = (ulonglong)local_74;
            if (local_60 < uVar7) {
              _Size = uVar7 - local_60;
              if (local_58 - local_60 < _Size) {
                FUN_18022a720(local_70,_Size,local_58,_Size);
              }
              else {
                pppppppBVar8 = (BYTE *******)local_70;
                if (0xf < local_58) {
                  pppppppBVar8 = local_70[0];
                }
                _Dst = (void *)((longlong)pppppppBVar8 + local_60);
                local_60 = uVar7;
                memset(_Dst,0,_Size);
                *(undefined1 *)((longlong)_Dst + _Size) = 0;
              }
            }
            else {
              pppppppBVar8 = (BYTE *******)local_70;
              if (0xf < local_58) {
                pppppppBVar8 = local_70[0];
              }
              local_60 = uVar7;
              *(undefined1 *)((longlong)pppppppBVar8 + uVar7) = 0;
            }
            pppppppBVar8 = (BYTE *******)local_70;
            if (0xf < local_58) {
              pppppppBVar8 = local_70[0];
            }
            if (((4 < local_60) &&
                (lVar1 = (longlong)pppppppBVar8 + local_60,
                lVar4 = thunk_FUN_1802d6b60(pppppppBVar8,lVar1,"\"sub\"",5), lVar4 != lVar1)) &&
               (uVar7 = lVar4 - (longlong)pppppppBVar8, uVar7 != 0xffffffffffffffff)) {
              pppppppBVar8 = (BYTE *******)local_70;
              if (0xf < local_58) {
                pppppppBVar8 = local_70[0];
              }
              if (((uVar7 < local_60) &&
                  (lVar1 = (longlong)pppppppBVar8 + local_60,
                  lVar4 = thunk_FUN_1802d5c20((longlong)pppppppBVar8 + uVar7,lVar1,0x3a),
                  lVar4 != lVar1)) &&
                 (uVar7 = lVar4 - (longlong)pppppppBVar8, uVar7 != 0xffffffffffffffff)) {
                for (; uVar7 < local_60; uVar7 = uVar7 + 1) {
                  pppppppBVar8 = (BYTE *******)local_70;
                  if (0xf < local_58) {
                    pppppppBVar8 = local_70[0];
                  }
                  if (*(char *)((longlong)pppppppBVar8 + uVar7) != ':') {
                    pppppppBVar8 = (BYTE *******)local_70;
                    if (0xf < local_58) {
                      pppppppBVar8 = local_70[0];
                    }
                    if (*(char *)((longlong)pppppppBVar8 + uVar7) != ' ') {
                      pppppppBVar8 = (BYTE *******)local_70;
                      if (0xf < local_58) {
                        pppppppBVar8 = local_70[0];
                      }
                      if (*(char *)((longlong)pppppppBVar8 + uVar7) != '\"') break;
                    }
                  }
                }
                do {
                  if (local_60 <= uVar7) goto LAB_1801335ef;
                  pppppppBVar8 = (BYTE *******)local_70;
                  if (0xf < local_58) {
                    pppppppBVar8 = local_70[0];
                  }
                  if (*(char *)((longlong)pppppppBVar8 + uVar7) < '0') goto LAB_1801335ef;
                  pppppppBVar8 = (BYTE *******)local_70;
                  if (0xf < local_58) {
                    pppppppBVar8 = local_70[0];
                  }
                  if ('9' < *(char *)((longlong)pppppppBVar8 + uVar7)) goto LAB_1801335ef;
                  pppppppBVar8 = (BYTE *******)local_70;
                  if (0xf < local_58) {
                    pppppppBVar8 = local_70[0];
                  }
                  lVar9 = (longlong)(*(char *)((longlong)pppppppBVar8 + uVar7) + -0x30) + lVar9 * 10
                  ;
                  uVar7 = uVar7 + 1;
                } while( true );
              }
            }
          }
          lVar9 = 0;
LAB_1801335ef:
          FUN_18020e450(local_70);
        }
      }
      FUN_18020e450(local_50);
      return lVar9;
    }
  }
  return 0;
}



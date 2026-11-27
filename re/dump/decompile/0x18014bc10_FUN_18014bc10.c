// 0x18014bc10  FUN_18014bc10
// size=545 thunk=false
// signature: undefined FUN_18014bc10()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_18014bc10(undefined8 *param_1)

{
  longlong lVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  char ****ppppcVar8;
  int iVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_98 [32];
  char ***local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  puVar10 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar10 = (undefined8 *)*param_1;
  }
  if (((param_1[2] == 0) ||
      (lVar1 = param_1[2] + (longlong)puVar10, lVar7 = thunk_FUN_1802d5c20(puVar10,lVar1,0x28),
      lVar7 == lVar1)) || (lVar7 - (longlong)puVar10 == -1)) {
    iVar13 = -1;
  }
  else {
    iVar9 = 1;
    iVar12 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0xf;
    local_78 = (char ***)0x0;
    bVar4 = false;
    uVar11 = (lVar7 - (longlong)puVar10) + 1;
    iVar13 = 0;
    if (uVar11 < (ulonglong)param_1[2]) {
      do {
        iVar12 = iVar13;
        uVar5 = local_68;
        if (iVar9 < 1) break;
        puVar10 = param_1;
        if (0xf < (ulonglong)param_1[3]) {
          puVar10 = (undefined8 *)*param_1;
        }
        bVar3 = *(byte *)((longlong)puVar10 + uVar11);
        if (bVar3 == 0x28) {
          iVar9 = iVar9 + 1;
        }
        else if (bVar3 == 0x29) {
          iVar9 = iVar9 + -1;
          if (iVar9 == 0) break;
        }
        else if (iVar9 < 2) {
          if (bVar3 == 0x2c) {
            ppppcVar8 = &local_78;
            if (0xf < local_60) {
              ppppcVar8 = (char ****)local_78;
            }
            iVar6 = _stricmp((char *)ppppcVar8,"key");
            iVar13 = iVar12;
            if (iVar6 == 0) goto LAB_18014be01;
            iVar12 = iVar12 + 1;
            local_68 = 0;
            ppppcVar8 = &local_78;
            if (0xf < local_60) {
              ppppcVar8 = (char ****)local_78;
            }
            *(char *)ppppcVar8 = '\0';
            bVar4 = false;
          }
          else if ((0x3e < (byte)(bVar3 - 0x22)) ||
                  ((0x4a00000000000021U >> ((ulonglong)(bVar3 - 0x22) & 0x3f) & 1) == 0)) {
            if (((byte)(bVar3 + 0x9f) < 0x1a) ||
               (((byte)(bVar3 - 0x30) < 0x30 &&
                ((0x87fffffe03ffU >> ((longlong)(char)(bVar3 - 0x30) & 0x3fU) & 1) != 0)))) {
              if (!bVar4) {
                if (local_68 < local_60) {
                  ppppcVar8 = &local_78;
                  if (0xf < local_60) {
                    ppppcVar8 = (char ****)local_78;
                  }
                  pbVar2 = (byte *)((longlong)ppppcVar8 + local_68);
                  local_68 = local_68 + 1;
                  *pbVar2 = bVar3;
                  *(char *)((longlong)ppppcVar8 + uVar5 + 1) = '\0';
                }
                else {
                  FUN_18021abd0(&local_78);
                }
              }
            }
            else if (local_68 != 0) {
              bVar4 = true;
            }
          }
        }
        uVar11 = uVar11 + 1;
        iVar13 = iVar12;
      } while (uVar11 < (ulonglong)param_1[2]);
    }
    ppppcVar8 = &local_78;
    if (0xf < local_60) {
      ppppcVar8 = (char ****)local_78;
    }
    iVar9 = _stricmp((char *)ppppcVar8,"key");
    iVar13 = -1;
    if (iVar9 == 0) {
      iVar13 = iVar12;
    }
LAB_18014be01:
    FUN_18020e450(&local_78);
  }
  return iVar13;
}



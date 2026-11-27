// 0x18016d980  FUN_18016d980
// size=1186 thunk=false
// signature: undefined FUN_18016d980()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_18016d980(undefined8 *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar7;
  byte *pbVar8;
  char *******pppppppcVar9;
  byte *pbVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  byte *pbVar14;
  byte bVar15;
  byte *pbVar16;
  undefined1 auStack_188 [32];
  char local_168 [256];
  char *******local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  pbVar8 = (byte *)param_1[2];
  if (pbVar8 == (byte *)0x0) {
    return 0;
  }
  pbVar10 = (byte *)0x0;
LAB_18016d9c8:
  puVar4 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  if (pbVar10 < pbVar8) {
    pbVar3 = (byte *)((longlong)puVar4 + (longlong)pbVar10);
    if (((longlong)pbVar8 - (longlong)pbVar10) + 2U < 0x10) {
      memset(local_168,0,0x100);
      pbVar6 = &DAT_180361680;
      do {
        local_168[*pbVar6] = '\x01';
        pbVar6 = pbVar6 + 1;
      } while (pbVar6 != &DAT_180361682);
      for (; pbVar3 < (byte *)((longlong)puVar4 + (longlong)pbVar8); pbVar3 = pbVar3 + 1) {
        if (local_168[*pbVar3] != '\0') {
          pbVar3 = pbVar3 + -(longlong)puVar4;
          goto LAB_18016da6d;
        }
      }
      goto LAB_18016da73;
    }
    pbVar3 = (byte *)FUN_1802d70c0(pbVar3,(longlong)pbVar8 - (longlong)pbVar10,&DAT_180361680,2);
    if (pbVar3 != (byte *)0xffffffffffffffff) {
      pbVar3 = pbVar3 + (longlong)pbVar10;
    }
LAB_18016da6d:
    if (pbVar3 == (byte *)0xffffffffffffffff) goto LAB_18016da73;
  }
  else {
LAB_18016da73:
    pbVar3 = (byte *)param_1[2];
  }
  if (pbVar10 < pbVar3) {
    uVar12 = param_1[3];
    do {
      puVar4 = param_1;
      if (0xf < uVar12) {
        puVar4 = (undefined8 *)*param_1;
      }
      if (*(byte *)((longlong)puVar4 + (longlong)pbVar10) != 0x20) {
        puVar4 = param_1;
        if (0xf < uVar12) {
          puVar4 = (undefined8 *)*param_1;
        }
        pbVar8 = pbVar3;
        if (*(byte *)((longlong)puVar4 + (longlong)pbVar10) != 9) goto LAB_18016dac0;
      }
      pbVar10 = pbVar10 + 1;
    } while (pbVar10 < pbVar3);
  }
  goto LAB_18016ddd3;
LAB_18016dac0:
  do {
    puVar4 = param_1;
    if (0xf < uVar12) {
      puVar4 = (undefined8 *)*param_1;
    }
    if (pbVar8[(longlong)puVar4 + -1] != 0x20) {
      puVar4 = param_1;
      if (0xf < uVar12) {
        puVar4 = (undefined8 *)*param_1;
      }
      if (pbVar8[(longlong)puVar4 + -1] != 9) {
        if (pbVar10 < pbVar8) {
          puVar4 = param_1;
          if (0xf < uVar12) {
            puVar4 = (undefined8 *)*param_1;
          }
          pbVar10 = pbVar10 + (longlong)puVar4;
          pbVar8 = (byte *)((longlong)puVar4 + (longlong)pbVar8);
          pbVar6 = pbVar10;
          goto joined_r0x00018016db1c;
        }
        break;
      }
    }
    pbVar8 = pbVar8 + -1;
  } while (pbVar10 < pbVar8);
  goto LAB_18016ddd3;
joined_r0x00018016db1c:
  if (pbVar8 <= pbVar6) goto LAB_18016db33;
  if ((*pbVar6 == 0x2a) || (*pbVar6 == 0x3f)) {
    pbVar6 = param_2;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      pbVar6 = *(byte **)param_2;
    }
    if ((pbVar10 == (byte *)0x0) || (pbVar6 == (byte *)0x0)) goto LAB_18016dc27;
    pbVar14 = (byte *)0x0;
    pbVar16 = (byte *)0x0;
    pbVar5 = pbVar10;
    if (*pbVar6 == 0) goto LAB_18016dc11;
    goto LAB_18016dba8;
  }
  pbVar6 = pbVar6 + 1;
  goto joined_r0x00018016db1c;
LAB_18016db33:
  local_68 = (char *******)0x0;
  uStack_60 = 0;
  uVar12 = 0;
  local_58 = 0;
  local_50 = 0;
  if (pbVar10 == pbVar8) {
    local_58 = 0;
    local_50 = 0xf;
    local_68 = (char *******)0x0;
  }
  else {
    FUN_18001d080(&local_68,pbVar10,(longlong)pbVar8 - (longlong)pbVar10);
  }
  if (local_58 != 0) {
    if (local_58 <= *(ulonglong *)(param_2 + 0x10)) {
      uVar13 = *(ulonglong *)(param_2 + 0x10) - local_58;
      uVar11 = uVar12;
      do {
        pppppppcVar9 = (char *******)&local_68;
        if (0xf < local_50) {
          pppppppcVar9 = local_68;
        }
        pbVar8 = param_2;
        if (0xf < *(ulonglong *)(param_2 + 0x18)) {
          pbVar8 = *(byte **)param_2;
        }
        iVar2 = _strnicmp((char *)(pbVar8 + uVar11),(char *)pppppppcVar9,local_58);
        if (iVar2 == 0) goto LAB_18016de11;
        uVar11 = uVar11 + 1;
      } while (uVar11 <= uVar13);
    }
    if ((local_58 != 0) && (local_58 <= *(ulonglong *)(param_3 + 0x10))) {
      uVar11 = *(ulonglong *)(param_3 + 0x10) - local_58;
      do {
        pppppppcVar9 = (char *******)&local_68;
        if (0xf < local_50) {
          pppppppcVar9 = local_68;
        }
        pbVar8 = param_3;
        if (0xf < *(ulonglong *)(param_3 + 0x18)) {
          pbVar8 = *(byte **)param_3;
        }
        iVar2 = _strnicmp((char *)(pbVar8 + uVar12),(char *)pppppppcVar9,local_58);
        if (iVar2 == 0) {
LAB_18016de11:
          FUN_18020e450(&local_68);
          return 1;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 <= uVar11);
    }
  }
  FUN_18020e450(&local_68);
  goto LAB_18016ddd3;
LAB_18016dba8:
  do {
    if (pbVar5 < pbVar8) {
      bVar15 = *pbVar5;
      if (bVar15 == 0x2a) {
        pbVar5 = pbVar5 + 1;
        pbVar14 = pbVar5;
        pbVar16 = pbVar6;
      }
      else {
        if (bVar15 != 0x3f) {
          if ((byte)(bVar15 + 0xbf) < 0x1a) {
            bVar15 = bVar15 + 0x20;
          }
          bVar1 = *pbVar6;
          bVar7 = bVar1 + 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar7 = bVar1;
          }
          if (bVar15 != bVar7) goto LAB_18016dbf9;
        }
        pbVar6 = pbVar6 + 1;
        pbVar5 = pbVar5 + 1;
      }
    }
    else {
LAB_18016dbf9:
      if (pbVar14 == (byte *)0x0) goto LAB_18016dc27;
      pbVar6 = pbVar16 + 1;
      pbVar5 = pbVar14;
      pbVar16 = pbVar6;
    }
  } while (*pbVar6 != 0);
  for (; pbVar5 < pbVar8; pbVar5 = pbVar5 + 1) {
LAB_18016dc11:
    if (*pbVar5 != 0x2a) break;
  }
  if (pbVar5 == pbVar8) {
    return 1;
  }
LAB_18016dc27:
  pbVar6 = param_3;
  if (0xf < *(ulonglong *)(param_3 + 0x18)) {
    pbVar6 = *(byte **)param_3;
  }
  if ((pbVar10 != (byte *)0x0) && (pbVar6 != (byte *)0x0)) {
    pbVar14 = (byte *)0x0;
    pbVar5 = (byte *)0x0;
    if (*pbVar6 == 0) goto LAB_18016dcc0;
    do {
      if (pbVar10 < pbVar8) {
        bVar15 = *pbVar10;
        if (bVar15 == 0x2a) {
          pbVar14 = pbVar10 + 1;
          pbVar10 = pbVar14;
          pbVar16 = pbVar6;
        }
        else {
          if (bVar15 != 0x3f) {
            if ((byte)(bVar15 + 0xbf) < 0x1a) {
              bVar15 = bVar15 + 0x20;
            }
            bVar1 = *pbVar6;
            bVar7 = bVar1 + 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar7 = bVar1;
            }
            if (bVar15 != bVar7) goto LAB_18016dca4;
          }
          pbVar16 = pbVar6 + 1;
          pbVar6 = pbVar5;
          pbVar10 = pbVar10 + 1;
        }
      }
      else {
LAB_18016dca4:
        if (pbVar14 == (byte *)0x0) goto LAB_18016ddd3;
        pbVar6 = pbVar5 + 1;
        pbVar10 = pbVar14;
        pbVar16 = pbVar6;
      }
      pbVar5 = pbVar6;
      pbVar6 = pbVar16;
    } while (*pbVar16 != 0);
    for (; pbVar10 < pbVar8; pbVar10 = pbVar10 + 1) {
LAB_18016dcc0:
      if (*pbVar10 != 0x2a) break;
    }
    if (pbVar10 == pbVar8) {
      return 1;
    }
  }
LAB_18016ddd3:
  pbVar10 = pbVar3 + 1;
  pbVar8 = (byte *)param_1[2];
  if (pbVar8 < pbVar10) {
    return 0;
  }
  goto LAB_18016d9c8;
}



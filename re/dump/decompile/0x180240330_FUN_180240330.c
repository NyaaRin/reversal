// 0x180240330  FUN_180240330
// size=935 thunk=false
// signature: undefined FUN_180240330()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180240330(longlong *param_1,int param_2)

{
  char ******ppppppcVar1;
  longlong lVar2;
  size_t _Size;
  code *pcVar3;
  char ******ppppppcVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 ******_Buf2;
  byte *pbVar12;
  uint uVar13;
  ulonglong uVar14;
  char ******ppppppcVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [32];
  undefined1 local_80;
  undefined1 local_7f [7];
  char *****local_78 [2];
  ulonglong local_68;
  ulonglong local_60;
  undefined8 *****local_58 [2];
  size_t local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  lVar2 = *param_1;
  iVar7 = (int)param_1[0xe];
  if (iVar7 == 0x3a) {
    iVar7 = 0x3a;
  }
  else {
    do {
      if (((iVar7 == 0x3d) || (iVar7 == 0x2e)) || (iVar7 == -1)) break;
      pcVar10 = (char *)*param_1;
      if (pcVar10 != (char *)param_1[1]) {
        if ((((*pcVar10 == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
            (pcVar10 = pcVar10 + 1, pcVar10 != (char *)param_1[1])) &&
           ((((param_1[0xc] & 8U) == 0 && ((byte)(*pcVar10 - 0x28U) < 2)) ||
            (((param_1[0xc] & 0x10U) == 0 && ((*pcVar10 + 0x85U & 0xfd) == 0)))))) {
          *param_1 = (longlong)pcVar10;
        }
        *param_1 = *param_1 + 1;
      }
      FUN_180234da0(param_1);
      iVar7 = (int)param_1[0xe];
    } while (iVar7 != 0x3a);
  }
  if (iVar7 != param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18023d7e0(iVar7,param_2 == 0x3a);
  }
  pcVar10 = (char *)*param_1;
  if (pcVar10 != (char *)param_1[1]) {
    if ((((*pcVar10 == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
        (pcVar11 = pcVar10 + 1, pcVar11 != (char *)param_1[1])) &&
       ((((param_1[0xc] & 8U) == 0 && ((byte)(*pcVar11 - 0x28U) < 2)) ||
        (((param_1[0xc] & 0x10U) == 0 && ((*pcVar11 + 0x85U & 0xfd) == 0)))))) {
      *param_1 = (longlong)pcVar11;
    }
    *param_1 = *param_1 + 1;
  }
  uVar17 = FUN_180234da0(param_1);
  if ((int)param_1[0xe] != 0x5d) {
                    /* WARNING: Subroutine does not return */
    FUN_18023d7e0(uVar17,param_2 == 0x3a);
  }
  pcVar11 = (char *)*param_1;
  if (pcVar11 != (char *)param_1[1]) {
    if ((((*pcVar11 == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
        (pcVar11 = pcVar11 + 1, pcVar11 != (char *)param_1[1])) &&
       ((((param_1[0xc] & 8U) == 0 && ((byte)(*pcVar11 - 0x28U) < 2)) ||
        (((param_1[0xc] & 0x10U) == 0 && ((*pcVar11 + 0x85U & 0xfd) == 0)))))) {
      *param_1 = (longlong)pcVar11;
    }
    *param_1 = *param_1 + 1;
  }
  uVar17 = FUN_180234da0(param_1);
  if (param_2 == 0x3a) {
    sVar6 = FUN_18023b640(param_1[0xb],lVar2,pcVar10,*(uint *)(param_1 + 0xd) >> 8 & 0xffffff01);
    if (sVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18023d7e0(extraout_XMM0_Da,1);
    }
    FUN_18023ff60(param_1 + 7,sVar6,0);
  }
  else {
    uVar17 = FUN_180240950(uVar17,local_78,lVar2,pcVar10);
    if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18023d7e0(uVar17,0);
    }
    if (0xffffffff < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_18023d7e0(0xffffffff,9);
    }
    ppppppcVar15 = local_78;
    if (0xf < local_60) {
      ppppppcVar15 = (char ******)local_78[0];
    }
    if ((local_68 == 1) && (param_2 == 0x2e)) {
      *(char *)((longlong)param_1 + 0x76) = *(char *)ppppppcVar15;
      FUN_18020e450(local_78);
      return 1;
    }
    ppppppcVar1 = (char ******)((longlong)ppppppcVar15 + local_68);
    ppppppcVar4 = ppppppcVar15;
    if ((*(uint *)(param_1 + 0xd) & 0x100) != 0) {
      for (; ppppppcVar4 != ppppppcVar1; ppppppcVar4 = (char ******)((longlong)ppppppcVar4 + 1)) {
        cVar5 = std::ctype<char>::tolower(*(ctype<char> **)(param_1[0xb] + 8),*(char *)ppppppcVar4);
        *(char *)ppppppcVar4 = cVar5;
      }
    }
    if (param_2 == 0x3d) {
      lVar2 = param_1[8];
      FUN_180240b80(param_1[10],local_58,ppppppcVar15,ppppppcVar1);
      if (local_48 == 0) {
        std::_Xregex_error(0);
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return uVar8;
      }
      uVar14 = 0;
      do {
        local_80 = (undefined1)uVar14;
        puVar9 = (undefined8 *)FUN_180240b80(param_1[10],local_a0,&local_80,local_7f);
        _Buf2 = local_58;
        if (0xf < local_40) {
          _Buf2 = (undefined8 ******)local_58[0];
        }
        _Size = puVar9[2];
        if (0xf < (ulonglong)puVar9[3]) {
          puVar9 = (undefined8 *)*puVar9;
        }
        if (_Size == local_48) {
          if (_Size == 0) {
            bVar16 = true;
          }
          else {
            iVar7 = memcmp(puVar9,_Buf2,_Size);
            bVar16 = iVar7 == 0;
          }
        }
        else {
          bVar16 = false;
        }
        FUN_18020e450(local_a0);
        if (bVar16) {
          puVar9 = *(undefined8 **)(lVar2 + 0x28);
          if (puVar9 == (undefined8 *)0x0) {
            puVar9 = (undefined8 *)FUN_1802d8350(0x20);
            *puVar9 = 0;
            puVar9[1] = 0;
            puVar9[2] = 0;
            puVar9[3] = 0;
            *(undefined8 **)(lVar2 + 0x28) = puVar9;
          }
          pbVar12 = (byte *)((uVar14 >> 3) + (longlong)puVar9);
          *pbVar12 = *pbVar12 | (byte)(1 << ((uint)uVar14 & 7));
        }
        uVar13 = (uint)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
      } while (uVar13 < 0x100);
      FUN_18020e450(local_58);
    }
    else {
      FUN_1802409c0(param_1 + 7,ppppppcVar15,ppppppcVar1);
    }
    FUN_18020e450(local_78);
  }
  return 2;
}



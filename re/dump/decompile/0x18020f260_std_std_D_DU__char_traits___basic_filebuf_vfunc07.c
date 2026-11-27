// 0x18020f260  std_std_D_DU?$char_traits_?$basic_filebuf_vfunc07
// size=648 thunk=false
// signature: undefined std_std_D_DU?$char_traits_?$basic_filebuf_vfunc07()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint std_std_D_DU__char_traits___basic_filebuf_vfunc07(longlong param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  char *******pppppppcVar7;
  uint uVar8;
  ulonglong uVar9;
  char *pcVar10;
  undefined1 auStackY_a8 [32];
  char *local_68;
  byte *local_60;
  byte local_58;
  char local_57 [7];
  char ******local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStackY_a8;
  uVar6 = **(ulonglong **)(param_1 + 0x38);
  if (uVar6 != 0) {
    iVar5 = **(int **)(param_1 + 0x50);
    if (uVar6 < uVar6 + (longlong)iVar5) {
      **(int **)(param_1 + 0x50) = iVar5 + -1;
      pbVar1 = (byte *)**(longlong **)(param_1 + 0x38);
      **(longlong **)(param_1 + 0x38) = (longlong)(pbVar1 + 1);
      return (uint)*pbVar1;
    }
  }
  if (*(longlong *)(param_1 + 0x80) == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
      uVar2 = *(undefined8 *)(param_1 + 0x90);
      lVar3 = *(longlong *)(param_1 + 0x88);
      **(longlong **)(param_1 + 0x18) = lVar3;
      **(longlong **)(param_1 + 0x38) = lVar3;
      **(int **)(param_1 + 0x50) = (int)uVar2 - (int)lVar3;
    }
    if (*(longlong *)(param_1 + 0x68) == 0) {
      uVar4 = fgetc(*(FILE **)(param_1 + 0x80));
      uVar8 = 0xffffffff;
      if (uVar4 != 0xffffffff) {
        uVar8 = uVar4 & 0xff;
      }
    }
    else {
      uStack_48 = 0;
      local_40 = 0;
      local_38 = 0xf;
      local_50 = (char ******)0x0;
      uVar8 = fgetc(*(FILE **)(param_1 + 0x80));
      if (uVar8 != 0xffffffff) {
LAB_18020f360:
        uVar6 = local_40;
        if (local_40 < local_38) {
          pppppppcVar7 = &local_50;
          if (0xf < local_38) {
            pppppppcVar7 = (char *******)local_50;
          }
          pcVar10 = (char *)((longlong)pppppppcVar7 + local_40);
          local_40 = local_40 + 1;
          *pcVar10 = (char)uVar8;
          *(char *)((longlong)pppppppcVar7 + uVar6 + 1) = '\0';
        }
        else {
          FUN_18021abd0(&local_50,local_40,uVar8,uVar8 & 0xff);
        }
        pppppppcVar7 = (char *******)local_50;
        if (local_38 < 0x10) {
          pppppppcVar7 = &local_50;
        }
        iVar5 = std::codecvt<char,char,_Mbstatet>::in
                          (*(codecvt<char,char,_Mbstatet> **)(param_1 + 0x68),
                           (_Mbstatet *)(param_1 + 0x74),(char *)pppppppcVar7,
                           (char *)((longlong)pppppppcVar7 + local_40),&local_68,(char *)&local_58,
                           local_57,(char **)&local_60);
        if ((iVar5 == 0) || (iVar5 == 1)) {
          if (local_60 == &local_58) goto code_r0x00018020f40b;
          pppppppcVar7 = &local_50;
          if (0xf < local_38) {
            pppppppcVar7 = (char *******)local_50;
          }
          pcVar10 = (char *)((longlong)pppppppcVar7 + (local_40 - (longlong)local_68));
          while (0 < (longlong)pcVar10) {
            pcVar10 = pcVar10 + -1;
            ungetc((int)pcVar10[(longlong)local_68],*(FILE **)(param_1 + 0x80));
          }
          uVar8 = (uint)local_58;
          goto LAB_18020f463;
        }
        if (iVar5 == 3) {
          pppppppcVar7 = &local_50;
          if (0xf < local_38) {
            pppppppcVar7 = (char *******)local_50;
          }
          uVar8 = (uint)*(char *)pppppppcVar7;
          goto LAB_18020f463;
        }
      }
LAB_18020f45e:
      uVar8 = 0xffffffff;
LAB_18020f463:
      FUN_18020e450(&local_50);
    }
  }
  return uVar8;
code_r0x00018020f40b:
  pppppppcVar7 = (char *******)local_50;
  if (local_38 < 0x10) {
    pppppppcVar7 = &local_50;
  }
  uVar6 = (longlong)local_68 - (longlong)pppppppcVar7;
  if (local_40 < (ulonglong)((longlong)local_68 - (longlong)pppppppcVar7)) {
    uVar6 = local_40;
  }
  uVar9 = local_40 - uVar6;
  memmove(pppppppcVar7,(char *)((longlong)pppppppcVar7 + uVar6),uVar9 + 1);
  local_40 = uVar9;
  uVar8 = fgetc(*(FILE **)(param_1 + 0x80));
  if (uVar8 == 0xffffffff) goto LAB_18020f45e;
  goto LAB_18020f360;
}



// 0x180158ba0  FUN_180158ba0
// size=1151 thunk=false
// signature: undefined FUN_180158ba0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180158ba0(longlong *param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  int *piVar10;
  ulonglong uVar11;
  char *******_Str;
  int *piVar12;
  byte *******pppppppbVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  longlong *local_130;
  int local_128 [4];
  undefined8 *local_118;
  char ******local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong uStack_f8;
  byte ******local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulonglong uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined8 *local_a8;
  undefined1 local_a0 [32];
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_158;
  local_138 = 0;
  local_b0 = &DAT_1803e8780;
  local_130 = param_1;
  iVar3 = _Mtx_lock(&DAT_1803e8780);
  if (iVar3 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (DAT_1803e87cc == 0x7fffffff) {
    DAT_1803e87cc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  puVar6 = DAT_1803e9df8;
  DAT_180409d40 = 1;
  plVar9 = (longlong *)*param_1;
  plVar7 = (longlong *)plVar9[1];
  cVar1 = *(char *)((longlong)plVar7 + 0x19);
  plVar16 = plVar9;
  while (cVar1 == '\0') {
    plVar14 = plVar7;
    if ((ulonglong)plVar7[4] < 0x292ca1344e9af2c5) {
      plVar7 = plVar7 + 2;
      plVar14 = plVar16;
    }
    plVar7 = (longlong *)*plVar7;
    plVar16 = plVar14;
    cVar1 = *(char *)((longlong)plVar7 + 0x19);
  }
  if (((*(char *)((longlong)plVar16 + 0x19) == '\0') && ((ulonglong)plVar16[4] < 0x292ca1344e9af2c6)
      ) && (plVar16 != plVar9)) {
    puVar15 = DAT_1803e9df0;
    if (DAT_1803e9df0 != DAT_1803e9df8) {
      do {
        local_118 = puVar15;
        FUN_18020e450(puVar15);
        local_118 = puVar15 + 5;
        puVar15 = local_118;
      } while (local_118 != puVar6);
      DAT_1803e9df8 = DAT_1803e9df0;
    }
    local_128[2] = 0x40;
    local_128[0] = 0;
    plVar9 = plVar16 + 5;
    if (0xf < (ulonglong)plVar16[8]) {
      plVar9 = (longlong *)*plVar9;
    }
    local_128[1] = atoi((char *)plVar9);
    piVar12 = local_128;
    if (-1 < local_128[1]) {
      piVar12 = local_128 + 1;
    }
    piVar10 = local_128 + 2;
    if (local_128[1] < 0x41) {
      piVar10 = piVar12;
    }
    local_118 = (undefined8 *)CONCAT44(local_118._4_4_,*piVar10);
    iVar3 = 0;
    if (0 < *piVar10) {
      do {
        uVar5 = FUN_180013ba0(local_a0,iVar3);
        puVar6 = (undefined8 *)FUN_18022a630(uVar5);
        pppppppbVar13 = (byte *******)*puVar6;
        local_f0 = (byte ******)pppppppbVar13;
        uStack_e8 = puVar6[1];
        uStack_d8 = puVar6[3];
        local_e0 = puVar6[2];
        *(undefined1 *)puVar6 = 0;
        puVar6[2] = 0;
        puVar6[3] = 0xf;
        uVar11 = 0x14650fb0739d0383;
        if (uStack_d8 < 0x10) {
          pppppppbVar13 = &local_f0;
          goto LAB_180158da0;
        }
        for (; pppppppbVar13 != (byte *******)0x0;
            pppppppbVar13 = (byte *******)((longlong)pppppppbVar13 + 1)) {
LAB_180158da0:
          if (*(byte *)pppppppbVar13 == 0) break;
          uVar11 = (uVar11 ^ *(byte *)pppppppbVar13) * 0x100000001b3;
        }
        plVar9 = (longlong *)*param_1;
        plVar7 = (longlong *)plVar9[1];
        cVar1 = *(char *)((longlong)plVar7 + 0x19);
        plVar16 = plVar9;
        while (cVar1 == '\0') {
          plVar14 = plVar7;
          if ((ulonglong)plVar7[4] < uVar11) {
            plVar7 = plVar7 + 2;
            plVar14 = plVar16;
          }
          plVar7 = (longlong *)*plVar7;
          plVar16 = plVar14;
          cVar1 = *(char *)((longlong)plVar7 + 0x19);
        }
        if ((*(char *)((longlong)plVar16 + 0x19) != '\0') || (uVar11 < (ulonglong)plVar16[4])) {
          plVar16 = plVar9;
        }
        local_138 = 0;
        FUN_18020e450(&local_f0);
        FUN_18020e450(local_a0);
        if (plVar16 != (longlong *)*param_1) {
          plVar9 = plVar16 + 5;
          plVar7 = plVar9;
          if (0xf < (ulonglong)plVar16[8]) {
            plVar7 = (longlong *)*plVar9;
          }
          param_1 = local_130;
          if (((plVar16[7] != 0) &&
              (lVar18 = plVar16[7] + (longlong)plVar7,
              lVar8 = thunk_FUN_1802d5c20(plVar7,lVar18,0x7c), param_1 = local_130, lVar8 != lVar18)
              ) && (uVar11 = lVar8 - (longlong)plVar7, uVar11 != 0xffffffffffffffff)) {
            local_110 = (char ******)0x0;
            uStack_108 = 0;
            local_100 = 0;
            uStack_f8 = 0;
            uVar17 = uVar11;
            if ((ulonglong)plVar16[7] < uVar11) {
              uVar17 = plVar16[7];
            }
            plVar7 = plVar9;
            if (0xf < (ulonglong)plVar16[8]) {
              plVar7 = (longlong *)*plVar9;
            }
            FUN_18001d080(&local_110,plVar7,uVar17);
            local_138 = 2;
            _Str = &local_110;
            if (0xf < uStack_f8) {
              _Str = (char *******)local_110;
            }
            iVar4 = atoi((char *)_Str);
            local_138 = 0;
            FUN_18020e450(&local_110);
            uVar11 = uVar11 + 1;
            local_d0 = 0;
            uStack_c8 = 0;
            local_c0 = 0;
            uStack_b8 = 0;
            if ((ulonglong)plVar16[7] < uVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_18022ec00();
            }
            lVar8 = plVar16[7] - uVar11;
            lVar18 = -1;
            if (lVar8 != -1) {
              lVar18 = lVar8;
            }
            if (0xf < (ulonglong)plVar16[8]) {
              plVar9 = (longlong *)*plVar9;
            }
            FUN_18001d080(&local_d0,(longlong)plVar9 + uVar11,lVar18);
            local_138 = 4;
            FUN_180157fb0(&local_80,&local_d0,iVar4 == 1);
            local_138 = 0;
            uVar5 = FUN_18020e450(&local_d0);
            puVar6 = DAT_1803e9df8;
            if (local_70 != 0) {
              if (DAT_1803e9df8 == DAT_1803e9e00) {
                FUN_180223cb0(uVar5,DAT_1803e9df8,&local_80);
              }
              else {
                local_a8 = DAT_1803e9df8;
                *DAT_1803e9df8 = 0;
                puVar6[1] = 0;
                puVar6[2] = 0;
                puVar6[3] = 0;
                *puVar6 = CONCAT71(uStack_7f,local_80);
                puVar6[1] = local_78;
                puVar6[2] = local_70;
                puVar6[3] = local_68;
                local_70 = 0;
                local_68 = 0xf;
                local_80 = 0;
                *(undefined4 *)(puVar6 + 4) = local_60;
                *(undefined1 *)((longlong)puVar6 + 0x24) = local_5c;
                DAT_1803e9df8 = DAT_1803e9df8 + 5;
              }
            }
            FUN_18020e450(&local_80);
            param_1 = local_130;
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)local_118);
    }
  }
  else {
    FUN_1801582f0();
  }
  _Mtx_unlock(&DAT_1803e8780);
  return;
}



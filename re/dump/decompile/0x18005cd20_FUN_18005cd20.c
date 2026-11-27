// 0x18005cd20  FUN_18005cd20
// size=1079 thunk=false
// signature: undefined FUN_18005cd20()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18005cd20(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  char *pcVar9;
  undefined8 uVar10;
  size_t sVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulonglong _Size;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 ******local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 *local_68;
  uint local_60;
  undefined *local_48;
  
  plVar7 = (longlong *)FUN_180039770();
  if ((plVar7 != (longlong *)0x0) && (plVar7[1] == param_2)) {
    if ((DAT_1803fa668 == (longlong *)0x0) ||
       (lVar8 = (**(code **)(*DAT_1803fa668 + 0x240))(), lVar8 == 0)) {
      (**(code **)(*plVar7 + 0xe0))(plVar7);
      return 1;
    }
    pcVar9 = (char *)(**(code **)(*plVar7 + 0x158))(plVar7,1);
    if (pcVar9 != (char *)0x0) {
      local_78 = pcVar9;
      cVar4 = (**(code **)(*plVar7 + 0x138))(plVar7,2,1);
      if (cVar4 == '\0') {
        cVar4 = '\x01';
      }
      else {
        cVar4 = (**(code **)(*plVar7 + 200))(plVar7,2);
      }
      local_48 = &DAT_1803e7760;
      iVar6 = _Mtx_lock(&DAT_1803e7760);
      if (iVar6 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar2 = (code *)swi(3);
        uVar10 = (*pcVar2)();
        return uVar10;
      }
      if (DAT_1803e77ac == 0x7fffffff) {
        DAT_1803e77ac = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      sVar11 = strlen(pcVar9);
      if (cVar4 == '\0') {
        local_c8 = (undefined8 *******)0x0;
        uStack_c0 = 0;
        local_b8 = 0;
        local_b0 = 0;
        FUN_18001d080(&local_c8,pcVar9,sVar11);
        uVar3 = local_b8;
        puVar12 = (undefined8 *)DAT_1805b8898[1];
        cVar5 = *(char *)((longlong)puVar12 + 0x19);
        puVar15 = puVar12;
        puVar18 = DAT_1805b8898;
        while (cVar5 == '\0') {
          puVar19 = puVar15 + 4;
          pppppppuVar14 = &local_c8;
          if (0xf < local_b0) {
            pppppppuVar14 = (undefined8 *******)local_c8;
          }
          uVar1 = puVar15[6];
          uVar17 = puVar15[7];
          puVar13 = puVar19;
          if (0xf < uVar17) {
            puVar13 = (undefined8 *)*puVar19;
          }
          _Size = uVar1;
          if (uVar3 < uVar1) {
            _Size = uVar3;
          }
          iVar6 = memcmp(puVar13,pppppppuVar14,_Size);
          if (iVar6 == 0) {
            if (uVar1 < uVar3) {
              cVar5 = -1;
              goto LAB_18005cfea;
            }
            if (uVar3 < uVar1) goto LAB_18005cfe8;
LAB_18005cff4:
            if (*(char *)((longlong)puVar18 + 0x19) != '\0') {
              if (0xf < uVar17) {
                puVar19 = (undefined8 *)*puVar19;
              }
              pppppppuVar14 = &local_c8;
              if (0xf < local_b0) {
                pppppppuVar14 = (undefined8 *******)local_c8;
              }
              uVar17 = uVar3;
              if (uVar1 < uVar3) {
                uVar17 = uVar1;
              }
              iVar6 = memcmp(pppppppuVar14,puVar19,uVar17);
              if (iVar6 == 0) {
                if (uVar1 <= uVar3) {
                  if (uVar1 < uVar3) goto LAB_18005d03a;
                  goto LAB_18005d042;
                }
                cVar5 = -1;
              }
              else if (iVar6 < 0) {
                cVar5 = -1;
              }
              else {
LAB_18005d03a:
                cVar5 = '\x01';
              }
              if (cVar5 < '\0') {
                puVar18 = puVar15;
              }
            }
LAB_18005d042:
            puVar15 = (undefined8 *)*puVar15;
          }
          else {
            if (iVar6 < 0) {
              cVar5 = -1;
            }
            else {
LAB_18005cfe8:
              cVar5 = '\x01';
            }
LAB_18005cfea:
            if (-1 < cVar5) goto LAB_18005cff4;
            puVar15 = (undefined8 *)puVar15[2];
          }
          cVar5 = *(char *)((longlong)puVar15 + 0x19);
        }
        if (*(char *)((longlong)puVar18 + 0x19) == '\0') {
          puVar12 = (undefined8 *)*puVar18;
        }
        cVar5 = *(char *)((longlong)puVar12 + 0x19);
        while (cVar5 == '\0') {
          puVar15 = puVar12 + 4;
          uVar1 = puVar12[6];
          if (0xf < (ulonglong)puVar12[7]) {
            puVar15 = (undefined8 *)*puVar15;
          }
          pppppppuVar14 = &local_c8;
          if (0xf < local_b0) {
            pppppppuVar14 = (undefined8 *******)local_c8;
          }
          uVar17 = uVar3;
          if (uVar1 < uVar3) {
            uVar17 = uVar1;
          }
          iVar6 = memcmp(pppppppuVar14,puVar15,uVar17);
          if (iVar6 == 0) {
            if (uVar3 < uVar1) {
              cVar5 = -1;
              goto LAB_18005d0b5;
            }
            if (uVar1 < uVar3) goto LAB_18005d0b3;
LAB_18005d0c1:
            puVar12 = (undefined8 *)puVar12[2];
          }
          else {
            if (iVar6 < 0) {
              cVar5 = -1;
            }
            else {
LAB_18005d0b3:
              cVar5 = '\x01';
            }
LAB_18005d0b5:
            if (-1 < cVar5) goto LAB_18005d0c1;
            puVar12 = (undefined8 *)*puVar12;
          }
          cVar5 = *(char *)((longlong)puVar12 + 0x19);
        }
        FUN_18022dc30();
        pppppppuVar14 = &local_c8;
      }
      else {
        local_a8 = (undefined8 ******)0x0;
        uStack_a0 = 0;
        local_98 = 0;
        uStack_90 = 0;
        FUN_18001d080(&local_a8,pcVar9,sVar11);
        puVar19 = DAT_1805b8898;
        puVar12 = (undefined8 *)DAT_1805b8898[1];
        uVar16 = 0;
        cVar5 = *(char *)((longlong)puVar12 + 0x19);
        puVar15 = puVar12;
        puVar18 = DAT_1805b8898;
        while (puVar13 = puVar12, cVar5 == '\0') {
          cVar5 = FUN_180201cf0(puVar13 + 4,&local_a8);
          if (-1 < cVar5) {
            puVar12 = (undefined8 *)*puVar13;
            puVar18 = puVar13;
          }
          else {
            puVar12 = (undefined8 *)puVar13[2];
          }
          uVar16 = (uint)(-1 < cVar5);
          cVar5 = *(char *)((longlong)puVar12 + 0x19);
          puVar15 = puVar13;
        }
        if ((*(char *)((longlong)puVar18 + 0x19) != '\0') ||
           (cVar5 = FUN_180201cf0(&local_a8,puVar18 + 4), cVar5 < '\0')) {
          if (DAT_1805b88a0 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_180013b80();
          }
          local_88 = &DAT_1805b8898;
          local_80 = 0;
          puVar12 = (undefined8 *)FUN_1802d8350(0x40);
          *(undefined4 *)(puVar12 + 4) = (undefined4)local_a8;
          *(undefined4 *)((longlong)puVar12 + 0x24) = local_a8._4_4_;
          *(undefined4 *)(puVar12 + 5) = (undefined4)uStack_a0;
          *(undefined4 *)((longlong)puVar12 + 0x2c) = uStack_a0._4_4_;
          *(undefined4 *)(puVar12 + 6) = (undefined4)local_98;
          *(undefined4 *)((longlong)puVar12 + 0x34) = local_98._4_4_;
          *(undefined4 *)(puVar12 + 7) = (undefined4)uStack_90;
          *(undefined4 *)((longlong)puVar12 + 0x3c) = uStack_90._4_4_;
          local_98 = 0;
          uStack_90 = 0xf;
          local_a8 = (undefined8 ******)((ulonglong)local_a8 & 0xffffffffffffff00);
          *puVar12 = puVar19;
          puVar12[1] = puVar19;
          puVar12[2] = puVar19;
          *(undefined2 *)(puVar12 + 3) = 0;
          local_80 = 0;
          local_68 = puVar15;
          local_60 = uVar16;
          FUN_18022bb90(&DAT_1805b8898,&local_68,puVar12);
        }
        pppppppuVar14 = (undefined8 *******)&local_a8;
      }
      FUN_18020e450(pppppppuVar14);
      _Mtx_unlock(&DAT_1803e7760);
      _DAT_1803ff928 = _DAT_1803ff928 + 1;
      pcVar9 = "unblocked";
      if (cVar4 != '\0') {
        pcVar9 = "BLOCKED";
      }
      FUN_180014410("[LUANET] script %s outgoing \'%s\'\n",pcVar9,local_78);
    }
  }
  return 0;
}



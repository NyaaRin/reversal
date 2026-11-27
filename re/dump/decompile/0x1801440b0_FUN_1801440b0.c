// 0x1801440b0  FUN_1801440b0
// size=732 thunk=false
// signature: undefined FUN_1801440b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801440b0(longlong *param_1)

{
  char cVar1;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int *piVar10;
  ulonglong uVar11;
  int *piVar12;
  byte *******pppppppbVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  int local_f4 [3];
  byte ******local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  undefined *local_c8;
  undefined1 *local_c0;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [16];
  longlong local_68;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_118;
  local_f8 = 0;
  local_c8 = &DAT_1803e87e0;
  iVar4 = _Mtx_lock(&DAT_1803e87e0);
  if (iVar4 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (DAT_1803e882c == 0x7fffffff) {
    DAT_1803e882c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  lVar3 = DAT_1803e9d10;
  lVar15 = DAT_1803e9d08;
  if (DAT_1803e9d08 != DAT_1803e9d10) {
    do {
      FUN_18020e450(lVar15);
      lVar15 = lVar15 + 0x20;
    } while (lVar15 != lVar3);
    DAT_1803e9d10 = DAT_1803e9d08;
  }
  plVar9 = (longlong *)*param_1;
  plVar7 = (longlong *)plVar9[1];
  cVar1 = *(char *)((longlong)plVar7 + 0x19);
  plVar16 = plVar9;
  while (cVar1 == '\0') {
    plVar8 = plVar7;
    if ((ulonglong)plVar7[4] < 0x6b9862461e517991) {
      plVar7 = plVar7 + 2;
      plVar8 = plVar16;
    }
    plVar7 = (longlong *)*plVar7;
    plVar16 = plVar8;
    cVar1 = *(char *)((longlong)plVar7 + 0x19);
  }
  if (((*(char *)((longlong)plVar16 + 0x19) == '\0') && ((ulonglong)plVar16[4] < 0x6b9862461e517992)
      ) && (plVar16 != plVar9)) {
    local_f4[2] = 0x40;
    local_f4[0] = 0;
    plVar9 = plVar16 + 5;
    if (0xf < (ulonglong)plVar16[8]) {
      plVar9 = (longlong *)*plVar9;
    }
    local_f4[1] = atoi((char *)plVar9);
    piVar12 = local_f4;
    if (-1 < local_f4[1]) {
      piVar12 = local_f4 + 1;
    }
    piVar10 = local_f4 + 2;
    if (local_f4[1] < 0x41) {
      piVar10 = piVar12;
    }
    iVar4 = *piVar10;
    iVar14 = 0;
    if (0 < iVar4) {
      do {
        uVar5 = FUN_180013ba0(local_b8,iVar14);
        puVar6 = (undefined8 *)FUN_18022a630(uVar5);
        pppppppbVar13 = (byte *******)*puVar6;
        local_e8 = (byte ******)pppppppbVar13;
        uStack_e0 = puVar6[1];
        uStack_d0 = puVar6[3];
        local_d8 = puVar6[2];
        *(undefined1 *)puVar6 = 0;
        puVar6[2] = 0;
        puVar6[3] = 0xf;
        uVar11 = 0x14650fb0739d0383;
        if (uStack_d0 < 0x10) {
          pppppppbVar13 = &local_e8;
          goto LAB_1801442a0;
        }
        for (; pppppppbVar13 != (byte *******)0x0;
            pppppppbVar13 = (byte *******)((longlong)pppppppbVar13 + 1)) {
LAB_1801442a0:
          if (*(byte *)pppppppbVar13 == 0) break;
          uVar11 = (uVar11 ^ *(byte *)pppppppbVar13) * 0x100000001b3;
        }
        plVar9 = (longlong *)*param_1;
        plVar7 = (longlong *)plVar9[1];
        cVar1 = *(char *)((longlong)plVar7 + 0x19);
        plVar16 = plVar9;
        while (cVar1 == '\0') {
          plVar8 = plVar7;
          if ((ulonglong)plVar7[4] < uVar11) {
            plVar7 = plVar7 + 2;
            plVar8 = plVar16;
          }
          plVar7 = (longlong *)*plVar7;
          plVar16 = plVar8;
          cVar1 = *(char *)((longlong)plVar7 + 0x19);
        }
        if ((*(char *)((longlong)plVar16 + 0x19) != '\0') || (uVar11 < (ulonglong)plVar16[4])) {
          plVar16 = plVar9;
        }
        local_f8 = 0;
        FUN_18020e450(&local_e8);
        FUN_18020e450(local_b8);
        if (plVar16 != (longlong *)*param_1) {
          local_c0 = local_98;
          uVar5 = FUN_18016d4c0(local_98,plVar16 + 5);
          FUN_180140b70(local_78,uVar5);
          if (local_68 != 0) {
            FUN_180214300(&DAT_1803e9d08,local_78);
          }
          FUN_18020e450(local_78);
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < iVar4);
    }
  }
  _Mtx_unlock(&DAT_1803e87e0);
  return;
}



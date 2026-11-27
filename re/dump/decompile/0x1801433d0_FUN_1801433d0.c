// 0x1801433d0  FUN_1801433d0
// size=747 thunk=false
// signature: undefined FUN_1801433d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801433d0(longlong *param_1)

{
  char cVar1;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  byte ******ppppppbVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  byte *****local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulonglong uStack_c8;
  undefined *local_c0;
  undefined1 *local_b8;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [16];
  longlong local_60;
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  local_e8 = 0;
  local_c0 = &DAT_1803e7c90;
  iVar4 = _Mtx_lock(&DAT_1803e7c90);
  if (iVar4 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (DAT_1803e7cdc == 0x7fffffff) {
    DAT_1803e7cdc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  lVar3 = DAT_1803e9f68;
  lVar13 = DAT_1803e9f60;
  if (DAT_1803e9f60 != DAT_1803e9f68) {
    do {
      FUN_18020e450(lVar13);
      lVar13 = lVar13 + 0x20;
    } while (lVar13 != lVar3);
    DAT_1803e9f68 = DAT_1803e9f60;
  }
  FUN_18021d430(&DAT_18056dea0);
  _DAT_1803e7ce4 = 0xc2c80000;
  DAT_1803e7ce0 = 0xffffffff;
  plVar10 = (longlong *)*param_1;
  plVar8 = (longlong *)plVar10[1];
  cVar1 = *(char *)((longlong)plVar8 + 0x19);
  plVar14 = plVar10;
  while (cVar1 == '\0') {
    plVar9 = plVar8;
    if ((ulonglong)plVar8[4] < 0xba55568a1ebcbe8f) {
      plVar8 = plVar8 + 2;
      plVar9 = plVar14;
    }
    plVar8 = (longlong *)*plVar8;
    plVar14 = plVar9;
    cVar1 = *(char *)((longlong)plVar8 + 0x19);
  }
  if (((*(char *)((longlong)plVar14 + 0x19) == '\0') && ((ulonglong)plVar14[4] < 0xba55568a1ebcbe90)
      ) && (plVar14 != plVar10)) {
    plVar10 = plVar14 + 5;
    if (0xf < (ulonglong)plVar14[8]) {
      plVar10 = (longlong *)*plVar10;
    }
    iVar5 = atoi((char *)plVar10);
    iVar4 = 0;
    if (-1 < iVar5) {
      iVar4 = iVar5;
    }
    if (0x40 < iVar4) {
      iVar4 = 0x40;
    }
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        uVar6 = FUN_180013ba0(local_b0,iVar5);
        puVar7 = (undefined8 *)FUN_18022a630(uVar6);
        ppppppbVar12 = (byte ******)*puVar7;
        local_e0 = (byte *****)ppppppbVar12;
        uStack_d8 = puVar7[1];
        uStack_c8 = puVar7[3];
        local_d0 = puVar7[2];
        *(undefined1 *)puVar7 = 0;
        puVar7[2] = 0;
        puVar7[3] = 0xf;
        uVar11 = 0x14650fb0739d0383;
        if (uStack_c8 < 0x10) {
          ppppppbVar12 = &local_e0;
          goto LAB_1801435c0;
        }
        for (; ppppppbVar12 != (byte ******)0x0;
            ppppppbVar12 = (byte ******)((longlong)ppppppbVar12 + 1)) {
LAB_1801435c0:
          if (*(byte *)ppppppbVar12 == 0) break;
          uVar11 = (uVar11 ^ *(byte *)ppppppbVar12) * 0x100000001b3;
        }
        plVar10 = (longlong *)*param_1;
        plVar8 = (longlong *)plVar10[1];
        cVar1 = *(char *)((longlong)plVar8 + 0x19);
        plVar14 = plVar10;
        while (cVar1 == '\0') {
          plVar9 = plVar8;
          if ((ulonglong)plVar8[4] < uVar11) {
            plVar8 = plVar8 + 2;
            plVar9 = plVar14;
          }
          plVar8 = (longlong *)*plVar8;
          plVar14 = plVar9;
          cVar1 = *(char *)((longlong)plVar8 + 0x19);
        }
        if ((*(char *)((longlong)plVar14 + 0x19) != '\0') || (uVar11 < (ulonglong)plVar14[4])) {
          plVar14 = plVar10;
        }
        local_e8 = 0;
        FUN_18020e450(&local_e0);
        FUN_18020e450(local_b0);
        if (plVar14 != (longlong *)*param_1) {
          local_b8 = local_90;
          uVar6 = FUN_18016d4c0(local_90,plVar14 + 5);
          FUN_180140b70(local_70,uVar6);
          if (local_60 != 0) {
            FUN_180214300(&DAT_1803e9f60,local_70);
          }
          FUN_18020e450(local_70);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
    }
  }
  _Mtx_unlock(&DAT_1803e7c90);
  return;
}



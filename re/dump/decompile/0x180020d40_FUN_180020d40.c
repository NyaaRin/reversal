// 0x180020d40  FUN_180020d40
// size=845 thunk=false
// signature: undefined FUN_180020d40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180020d40(int param_1,int param_2,undefined8 *param_3,undefined1 param_4,
                  undefined4 *param_5,undefined4 param_6)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ULONGLONG UVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined1 auStackY_118 [32];
  undefined8 *local_d8;
  undefined8 *local_d0;
  int local_b8 [4];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined *local_58;
  int *local_50;
  undefined8 *local_48;
  ulonglong local_40;
  
  if ((0 < param_1) && (local_40 = DAT_1803da4c0 ^ (ulonglong)auStackY_118, param_2 - 1U < 4)) {
    local_58 = &DAT_1803e92b0;
    local_b8[0] = param_2;
    iVar7 = _Mtx_lock(&DAT_1803e92b0);
    if (iVar7 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (DAT_1803e92fc == 0x7fffffff) {
      DAT_1803e92fc = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    puVar8 = DAT_1805ba360;
    if (param_3[2] == 0) {
      cVar1 = *(char *)((longlong)DAT_1805ba360[1] + 0x19);
      puVar8 = (undefined8 *)DAT_1805ba360[1];
      puVar10 = DAT_1805ba360;
      while (puVar9 = puVar8, cVar1 == '\0') {
        if (*(int *)(puVar9 + 4) < param_1) {
          puVar8 = (undefined8 *)puVar9[2];
          puVar9 = puVar10;
        }
        else {
          puVar8 = (undefined8 *)*puVar9;
        }
        cVar1 = *(char *)((longlong)puVar8 + 0x19);
        puVar10 = puVar9;
      }
      if ((*(char *)((longlong)puVar10 + 0x19) != '\0') || (param_1 < *(int *)(puVar10 + 4))) {
        puVar10 = DAT_1805ba360;
      }
      if (puVar10 != DAT_1805ba360) {
        uStack_a0 = 0;
        local_98 = 0;
        local_90 = 0xf;
        local_a8 = 0;
        local_88 = 0;
        local_84 = 0x3f800000;
        uStack_80 = 0x3f800000;
        uStack_7c = 0x3f800000;
        uStack_78 = 0x3f800000;
        local_70 = 0;
        local_68 = 0;
        puVar8 = puVar10 + 5;
        FUN_18020e8a0(puVar8 + (longlong)param_2 * 9 + -9,&local_a8);
        *(undefined1 *)(puVar8 + (longlong)param_2 * 9 + -5) = local_88;
        *(undefined4 *)((longlong)puVar8 + (longlong)param_2 * 0x48 + -0x24) = local_84;
        *(undefined4 *)(puVar8 + (longlong)param_2 * 9 + -4) = uStack_80;
        *(undefined4 *)((longlong)puVar8 + (longlong)param_2 * 0x48 + -0x1c) = uStack_7c;
        *(undefined4 *)(puVar8 + (longlong)param_2 * 9 + -3) = uStack_78;
        puVar8[(longlong)param_2 * 9 + -2] = local_70;
        *(undefined4 *)(puVar8 + (longlong)param_2 * 9 + -1) = local_68;
        uVar13 = FUN_18020e450(&local_a8);
        for (; puVar8 != puVar10 + 0x29; puVar8 = puVar8 + 9) {
          if (puVar8[2] != 0) goto LAB_180021054;
        }
        FUN_1801fce40(uVar13,local_b8,puVar10);
      }
    }
    else {
      puVar9 = (undefined8 *)DAT_1805ba360[1];
      uVar12 = 0;
      cVar1 = *(char *)((longlong)puVar9 + 0x19);
      puVar6 = puVar9;
      puVar10 = DAT_1805ba360;
      while (puVar5 = puVar9, cVar1 == '\0') {
        if (param_1 <= *(int *)(puVar5 + 4)) {
          puVar9 = (undefined8 *)*puVar5;
          puVar10 = puVar5;
        }
        else {
          puVar9 = (undefined8 *)puVar5[2];
        }
        uVar12 = (uint)(param_1 <= *(int *)(puVar5 + 4));
        cVar1 = *(char *)((longlong)puVar9 + 0x19);
        puVar6 = puVar5;
      }
      if ((*(char *)((longlong)puVar10 + 0x19) != '\0') || (param_1 < *(int *)(puVar10 + 4))) {
        if (DAT_1805ba368 == 0xc7ce0c7ce0c7ce) {
                    /* WARNING: Subroutine does not return */
          FUN_180013b80();
        }
        local_d8 = &DAT_1805ba360;
        local_d0 = (undefined8 *)0x0;
        puVar9 = (undefined8 *)FUN_1802d8350(0x148);
        local_50 = (int *)(puVar9 + 4);
        *local_50 = param_1;
        puVar10 = puVar9 + 5;
        local_d0 = puVar9;
        memset(puVar10,0,0x120);
        local_48 = puVar10;
        _eh_vector_constructor_iterator_(puVar10,0x48,4,FUN_1800ea1b0,FUN_180021090);
        *puVar9 = puVar8;
        puVar9[1] = puVar8;
        puVar9[2] = puVar8;
        *(undefined2 *)(puVar9 + 3) = 0;
        local_d0 = (undefined8 *)(ulonglong)uVar12;
        local_d8 = puVar6;
        puVar10 = (undefined8 *)FUN_18022bb90(&DAT_1805ba360,&local_d8,puVar9);
      }
      puVar10 = puVar10 + (longlong)local_b8[0] * 9 + -4;
      if (puVar10 != param_3) {
        puVar8 = param_3 + 2;
        if (0xf < (ulonglong)param_3[3]) {
          param_3 = (undefined8 *)*param_3;
        }
        FUN_180212700(puVar10,param_3,*puVar8);
      }
      *(undefined1 *)(puVar10 + 4) = param_4;
      uVar13 = param_5[1];
      uVar3 = param_5[2];
      uVar4 = param_5[3];
      *(undefined4 *)((longlong)puVar10 + 0x24) = *param_5;
      *(undefined4 *)(puVar10 + 5) = uVar13;
      *(undefined4 *)((longlong)puVar10 + 0x2c) = uVar3;
      *(undefined4 *)(puVar10 + 6) = uVar4;
      UVar11 = GetTickCount64();
      puVar10[7] = UVar11;
      *(undefined4 *)(puVar10 + 8) = param_6;
    }
LAB_180021054:
    _Mtx_unlock(&DAT_1803e92b0);
  }
  return;
}



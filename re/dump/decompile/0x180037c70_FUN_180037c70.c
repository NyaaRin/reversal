// 0x180037c70  FUN_180037c70
// size=995 thunk=false
// signature: undefined FUN_180037c70()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180037c70(void)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  int iVar11;
  DWORD DVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  int *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  char local_98;
  longlong local_90;
  int *piStack_88;
  int *local_80;
  int local_78;
  undefined2 local_74;
  longlong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_e8;
  cVar10 = FUN_18002e100();
  if (cVar10 != '\0') {
    if (DAT_1803fa678 == (longlong *)0x0) {
      lVar14 = 0;
      lVar13 = lVar14;
    }
    else {
      lVar13 = (**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
      lVar14 = 0;
      if (lVar13 != 0) {
        lVar14 = *(longlong *)(lVar13 + 8);
      }
      if (DAT_1803fa678 == (longlong *)0x0) {
        lVar13 = 0;
      }
      else {
        lVar13 = (**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
      }
    }
    if ((lVar14 != 0) && (lVar13 != 0)) {
      FUN_18002dc30(&local_b0,lVar14);
      FUN_180032950(lVar14,lVar13);
      FUN_180037890(lVar14,lVar13);
      cVar10 = DAT_180423758;
      LOCK();
      DAT_180423758 = '\0';
      UNLOCK();
      if (cVar10 != '\0') {
        FUN_180036cd0();
      }
      FUN_180036f80(lVar14,lVar13);
      if (DAT_1803fa668 == (longlong *)0x0) {
        iVar11 = -1;
      }
      else {
        iVar11 = (**(code **)(*DAT_1803fa668 + 0x60))();
      }
      DVar12 = GetTickCount();
      if (((DAT_180423754 == 0) || (499 < DVar12 - DAT_180423754)) ||
         (DVar12 - _DAT_1803faf98 < 0xfa)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
        _DAT_1803faf98 = DVar12;
      }
      uVar15 = 0;
      local_90 = 0;
      piStack_88 = (int *)0x0;
      local_80 = (int *)0x0;
      local_b8 = (int *)(((longlong)DAT_1803fcc58 - (longlong)DAT_1803fcc50 >> 3) *
                        -0x79435e50d79435e5);
      piVar4 = DAT_1803fcc50;
      piVar5 = DAT_1803fcc58;
      if (local_b8 != (int *)0x0) {
        if ((int *)0x7ffffffffffffff < local_b8) {
                    /* WARNING: Subroutine does not return */
          FUN_18020cc40();
        }
        uVar15 = FUN_180218c90(&local_90,&local_b8);
        piVar4 = DAT_1803fcc50;
        piVar5 = DAT_1803fcc58;
      }
      for (; piVar7 = DAT_1803fcc58, piVar4 != DAT_1803fcc58; piVar4 = piVar4 + 0x26) {
        local_70 = 0;
        uStack_68 = 0;
        local_60 = 0;
        local_78 = *piVar4;
        if (piVar4[0x22] == 0) {
          cVar10 = piVar4[0x1f] != -1;
        }
        else {
          cVar10 = (char)piVar4[0x23];
        }
        local_74 = CONCAT11((char)piVar4[0x20],cVar10);
        piVar6 = DAT_1803fcc38;
        if (((bVar3) && (cVar10 != '\0')) && (0 < iVar11)) {
          local_c8 = &local_70;
          DAT_1803fcc58 = piVar5;
          FUN_180035650(lVar14,lVar13,piVar4,iVar11);
        }
        else {
          for (; DAT_1803fcc58 = piVar5, piVar6 != DAT_1803fcc40; piVar6 = piVar6 + 8) {
            if (*piVar6 == local_78) {
              if (&local_70 != (longlong *)(piVar6 + 2)) {
                lVar1 = *(longlong *)(piVar6 + 2);
                FUN_180219100(&local_70,lVar1,
                              (*(longlong *)(piVar6 + 4) - lVar1 >> 4) * -0x3333333333333333);
              }
              break;
            }
          }
        }
        uVar9 = local_60;
        uVar8 = uStack_68;
        lVar1 = local_70;
        if (piStack_88 == local_80) {
          FUN_1802290d0(&local_90,piStack_88,&local_78);
        }
        else {
          local_b8 = piStack_88;
          *piStack_88 = local_78;
          *(undefined1 *)(piStack_88 + 1) = (undefined1)local_74;
          *(undefined1 *)((longlong)piStack_88 + 5) = local_74._1_1_;
          local_60 = 0;
          uStack_68 = 0;
          local_70 = 0;
          *(longlong *)(piStack_88 + 2) = lVar1;
          *(undefined8 *)(piStack_88 + 4) = uVar8;
          *(undefined8 *)(piStack_88 + 6) = uVar9;
          piStack_88 = piStack_88 + 8;
        }
        uVar15 = FUN_18020c270(&local_70);
        piVar5 = DAT_1803fcc58;
        DAT_1803fcc58 = piVar7;
      }
      DAT_1803fcc58 = piVar5;
      FUN_180218df0(uVar15,local_90,(longlong)piStack_88 - local_90 >> 5);
      local_b8 = (int *)&DAT_1803e90e0;
      iVar11 = _Mtx_lock(&DAT_1803e90e0);
      if (iVar11 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (DAT_1803e912c == 0x7fffffff) {
        DAT_1803e912c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      piVar5 = DAT_1803ea2b8;
      piVar4 = DAT_1803ea2b0;
      lVar14 = DAT_1803ea2a8;
      DAT_1803ea2a8 = local_90;
      local_90 = lVar14;
      DAT_1803ea2b0 = piStack_88;
      piStack_88 = piVar4;
      DAT_1803ea2b8 = local_80;
      local_80 = piVar5;
      _Mtx_unlock(&DAT_1803e90e0);
      FUN_18021d670(&local_90);
      if ((local_98 != '\0') && (DAT_1803faf78 != (code *)0x0)) {
        (*DAT_1803faf78)(local_b0,local_a8,local_a0,local_9c);
      }
    }
  }
  return;
}



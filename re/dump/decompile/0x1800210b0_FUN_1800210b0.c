// 0x1800210b0  FUN_1800210b0
// size=739 thunk=false
// signature: undefined FUN_1800210b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800210b0(int param_1,int param_2)

{
  undefined8 *puVar1;
  char cVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  longlong local_80;
  undefined4 local_78;
  undefined *local_68;
  undefined1 local_60 [8];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  lVar10 = (longlong)param_2;
  local_68 = &DAT_1803e92b0;
  iVar6 = _Mtx_lock(&DAT_1803e92b0);
  if (iVar6 == 0) {
    if (DAT_1803e92fc == 0x7fffffff) {
      DAT_1803e92fc = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    plVar7 = DAT_1805ba360;
    uVar5 = _UNK_1803814b8;
    uVar4 = _DAT_1803814b0;
    if (param_1 < 1) {
      if (param_2 < 1) {
        FUN_180219580(&DAT_1805ba360,&DAT_1805ba360,DAT_1805ba360[1]);
        plVar7[1] = (longlong)plVar7;
        *plVar7 = (longlong)plVar7;
        plVar7[2] = (longlong)plVar7;
        DAT_1805ba368 = 0;
      }
      else if (param_2 < 5) {
        plVar7 = (longlong *)*DAT_1805ba360;
        cVar2 = *(char *)((longlong)plVar7 + 0x19);
        while (cVar2 == '\0') {
          uStack_b0 = 0;
          local_a8 = uVar4;
          uStack_a0 = uVar5;
          local_b8 = 0;
          local_98 = 0;
          local_94 = 0x3f800000;
          uStack_90 = 0x3f800000;
          uStack_8c = 0x3f800000;
          uStack_88 = 0x3f800000;
          local_80 = 0;
          local_78 = 0;
          FUN_18020e8a0(plVar7 + lVar10 * 9 + -4,&local_b8);
          *(undefined1 *)(plVar7 + lVar10 * 9) = local_98;
          puVar1 = (undefined8 *)((longlong)plVar7 + lVar10 * 0x48 + 4);
          *puVar1 = CONCAT44(uStack_90,local_94);
          puVar1[1] = CONCAT44(uStack_88,uStack_8c);
          plVar7[lVar10 * 9 + 3] = local_80;
          *(undefined4 *)(plVar7 + lVar10 * 9 + 4) = local_78;
          FUN_18020e450(&local_b8);
          plVar9 = (longlong *)plVar7[2];
          if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
            cVar2 = *(char *)(*plVar9 + 0x19);
            plVar7 = plVar9;
            plVar9 = (longlong *)*plVar9;
            while (cVar2 == '\0') {
              cVar2 = *(char *)(*plVar9 + 0x19);
              plVar7 = plVar9;
              plVar9 = (longlong *)*plVar9;
            }
          }
          else {
            cVar2 = *(char *)(plVar7[1] + 0x19);
            plVar8 = (longlong *)plVar7[1];
            plVar9 = plVar7;
            while ((plVar7 = plVar8, cVar2 == '\0' && (plVar9 == (longlong *)plVar7[2]))) {
              cVar2 = *(char *)(plVar7[1] + 0x19);
              plVar8 = (longlong *)plVar7[1];
              plVar9 = plVar7;
            }
          }
          cVar2 = *(char *)((longlong)plVar7 + 0x19);
        }
      }
    }
    else {
      plVar7 = (longlong *)DAT_1805ba360[1];
      cVar2 = *(char *)((longlong)plVar7 + 0x19);
      plVar9 = DAT_1805ba360;
      while (cVar2 == '\0') {
        plVar8 = plVar7;
        if ((int)plVar7[4] < param_1) {
          plVar7 = plVar7 + 2;
          plVar8 = plVar9;
        }
        plVar7 = (longlong *)*plVar7;
        plVar9 = plVar8;
        cVar2 = *(char *)((longlong)plVar7 + 0x19);
      }
      if ((*(char *)((longlong)plVar9 + 0x19) != '\0') || (param_1 < (int)plVar9[4])) {
        plVar9 = DAT_1805ba360;
      }
      if (plVar9 != DAT_1805ba360) {
        if (param_2 < 1) {
          FUN_1801fce40(DAT_1805ba360,local_60,plVar9);
        }
        else if (param_2 < 5) {
          uStack_b0 = 0;
          local_a8 = _DAT_1803814b0;
          uStack_a0 = _UNK_1803814b8;
          local_b8 = 0;
          local_98 = 0;
          local_94 = 0x3f800000;
          uStack_90 = 0x3f800000;
          uStack_8c = 0x3f800000;
          uStack_88 = 0x3f800000;
          local_80 = 0;
          local_78 = 0;
          FUN_18020e8a0(plVar9 + lVar10 * 9 + -4,&local_b8);
          *(undefined1 *)(plVar9 + lVar10 * 9) = local_98;
          *(ulonglong *)((longlong)plVar9 + lVar10 * 0x48 + 4) = CONCAT44(uStack_90,local_94);
          *(ulonglong *)((longlong)plVar9 + lVar10 * 0x48 + 0xc) = CONCAT44(uStack_88,uStack_8c);
          plVar9[lVar10 * 9 + 3] = local_80;
          *(undefined4 *)(plVar9 + lVar10 * 9 + 4) = local_78;
          FUN_18020e450(&local_b8);
        }
      }
    }
    _Mtx_unlock(&DAT_1803e92b0);
    return;
  }
  std::_Throw_Cpp_error(5);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



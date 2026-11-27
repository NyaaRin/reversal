// 0x1802d7400  thunk_FUN_1802d6b60
// size=5 thunk=true
// signature: undefined thunk_FUN_1802d6b60()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 (*) [16]
thunk_FUN_1802d6b60(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16]
                   ,ulonglong param_4)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  int iVar3;
  ulonglong uVar4;
  size_t _Size;
  undefined1 (*pauVar5) [16];
  uint uVar6;
  undefined1 uVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [16];
  ulonglong uStack_48;
  
  uStack_48 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  pauVar2 = param_1;
  if (param_4 != 0) {
    if (param_4 == 1) {
      pauVar2 = (undefined1 (*) [16])FUN_1802d5c20(param_1,param_2,(*param_3)[0]);
    }
    else {
      uVar4 = (longlong)param_2 - (longlong)param_1;
      pauVar2 = param_2;
      if (param_4 <= uVar4) {
        if ((((byte)DAT_1803da514 & 4) == 0) || (uVar4 < 0x10)) {
          pauVar5 = (undefined1 (*) [16])((longlong)param_1 + uVar4 + (1 - param_4));
          if (param_1 != pauVar5) {
            do {
              if ((*param_1)[0] == (*param_3)[0]) {
                uVar4 = 1;
                while ((*param_1)[uVar4] == (*param_3)[uVar4]) {
                  uVar4 = uVar4 + 1;
                  if (uVar4 == param_4) {
                    return param_1;
                  }
                }
              }
              param_1 = (undefined1 (*) [16])(*param_1 + 1);
            } while (param_1 != pauVar5);
          }
        }
        else if (param_4 < 0x11) {
          uVar6 = (uint)param_4;
          uVar7 = 0x10 < uVar6;
          memcpy(auStack_58,param_3,param_4);
          auVar1 = auStack_58;
          do {
            iVar3 = pcmpestri(auStack_58,*param_1,0xc,uVar6,0x10);
            if ((bool)uVar7) {
              param_1 = (undefined1 (*) [16])(*param_1 + iVar3);
              if (iVar3 <= (int)(0x10 - uVar6)) {
                return param_1;
              }
            }
            else {
              param_1 = param_1 + 1;
            }
            uVar7 = param_1 < param_2 + -1;
          } while (param_1 <= param_2 + -1);
          bVar8 = param_2 < param_1;
          _Size = (longlong)param_2 - (longlong)param_1;
          if (_Size != 0) {
            memcpy(auStack_58,param_1,_Size);
            iVar3 = pcmpestri(auVar1,auStack_58,0xc,uVar6,(int)_Size);
            if (bVar8) {
              pauVar2 = (undefined1 (*) [16])(*param_1 + iVar3);
            }
          }
        }
        else {
          auVar1 = *param_3;
          bVar8 = CARRY8((longlong)param_1 - param_4,uVar4);
          pauVar5 = (undefined1 (*) [16])(((longlong)param_1 - param_4) + uVar4);
          do {
            iVar3 = pcmpestri(auVar1,*param_1,0xc,0x10,0x10);
            if (bVar8) {
              if (iVar3 == 0) {
LAB_1802d6cb9:
                iVar3 = memcmp(param_1 + 1,param_3 + 1,param_4 - 0x10);
                if (iVar3 == 0) {
                  return param_1;
                }
              }
              else {
                param_1 = (undefined1 (*) [16])(*param_1 + iVar3);
                if (pauVar5 < param_1) {
                  return param_2;
                }
                auVar9._0_4_ = auVar1._0_4_ ^ *(uint *)*param_1;
                auVar9._4_4_ = auVar1._4_4_ ^ *(uint *)(*param_1 + 4);
                auVar9._8_4_ = auVar1._8_4_ ^ *(uint *)(*param_1 + 8);
                auVar9._12_4_ = auVar1._12_4_ ^ *(uint *)(*param_1 + 0xc);
                if (auVar9 == (undefined1  [16])0x0) goto LAB_1802d6cb9;
              }
              param_1 = (undefined1 (*) [16])(*param_1 + 1);
            }
            else {
              param_1 = param_1 + 1;
            }
            bVar8 = param_1 < pauVar5;
          } while (param_1 <= pauVar5);
        }
      }
    }
  }
  return pauVar2;
}



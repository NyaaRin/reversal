// 0x1802d6790  FUN_1802d6790
// size=465 thunk=false
// signature: undefined FUN_1802d6790()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001802d68b7) */
/* WARNING: Removing unreachable block (ram,0x0001802d68ba) */
/* WARNING: Removing unreachable block (ram,0x0001802d6926) */
/* WARNING: Removing unreachable block (ram,0x0001802d6929) */

undefined1 (*) [16]
FUN_1802d6790(undefined1 (*param_1) [16],ulonglong param_2,undefined1 (*param_3) [16],
             ulonglong param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 (*_Src) [16];
  uint uVar5;
  uint uVar6;
  undefined1 (*pauVar7) [16];
  uint uVar8;
  undefined1 (*pauVar9) [16];
  bool bVar10;
  undefined1 uVar11;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  pauVar9 = (undefined1 (*) [16])(*param_1 + (param_2 & 0xfffffffffffffff0));
  uVar5 = (uint)param_4;
  if (param_4 < 0x11) {
    memcpy(local_68,param_3,param_4);
    auVar1 = local_68;
    for (; param_1 != pauVar9; param_1 = param_1 + 1) {
      iVar2 = pcmpestri(local_68,*param_1,0,uVar5,0x10);
      if (param_1 < pauVar9) goto LAB_1802d683f;
    }
    bVar10 = false;
    uVar8 = (uint)param_2 & 0xf;
    if ((param_2 & 0xf) != 0) {
      memcpy(local_68,param_1,(ulonglong)uVar8);
      iVar2 = pcmpestri(auVar1,local_68,0,uVar5,uVar8);
      if (bVar10) {
LAB_1802d683f:
        param_1 = (undefined1 (*) [16])(*param_1 + iVar2);
      }
      else {
        param_1 = (undefined1 (*) [16])(*param_1 + uVar8);
      }
    }
  }
  else {
    uVar5 = uVar5 & 0xf;
    _Src = (undefined1 (*) [16])(*param_3 + (param_4 & 0xfffffffffffffff0));
    memcpy(local_68,_Src,(ulonglong)uVar5);
    auVar1 = local_68;
    for (; param_1 != pauVar9; param_1 = param_1 + 1) {
      bVar10 = param_1 < pauVar9;
      iVar2 = 0x10;
      pauVar7 = param_3;
      do {
        iVar3 = pcmpestri(*pauVar7,*param_1,0,0x10,0x10);
        if ((bVar10) && (iVar3 < iVar2)) {
          iVar2 = iVar3;
        }
        pauVar7 = pauVar7 + 1;
        bVar10 = pauVar7 < _Src;
      } while (pauVar7 != _Src);
      if ((param_4 & 0xf) != 0) {
        pcmpestri(local_68,*param_1,0,uVar5,0x10);
      }
      if (iVar2 != 0x10) {
        return (undefined1 (*) [16])(*param_1 + iVar2);
      }
    }
    uVar11 = 0;
    uVar8 = (uint)param_2 & 0xf;
    if ((param_2 & 0xf) != 0) {
      memcpy(local_68,param_1,(ulonglong)uVar8);
      uVar6 = uVar8;
      do {
        uVar4 = pcmpestri(*param_3,local_68,0,0x10,uVar8);
        if (((bool)uVar11) && ((int)uVar4 < (int)uVar6)) {
          uVar6 = uVar4;
        }
        param_3 = param_3 + 1;
        uVar11 = param_3 < _Src;
      } while (param_3 != _Src);
      if ((param_4 & 0xf) != 0) {
        pcmpestri(auVar1,local_68,0,uVar5,uVar8);
      }
      param_1 = (undefined1 (*) [16])(*param_1 + (int)uVar6);
    }
  }
  return param_1;
}



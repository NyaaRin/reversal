// 0x1802d6570  FUN_1802d6570
// size=534 thunk=false
// signature: undefined FUN_1802d6570()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 (*) [16]
FUN_1802d6570(undefined1 (*param_1) [16],ulonglong param_2,undefined1 (*param_3) [16],
             ulonglong param_4)

{
  int iVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*_Src) [16];
  uint uVar3;
  uint uVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  bool bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar13;
  undefined1 auVar12 [16];
  uint uVar14;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  pauVar6 = (undefined1 (*) [16])(*param_1 + (param_2 & 0xfffffffffffffff0));
  uVar3 = (uint)param_4;
  if (param_4 < 0x11) {
    memcpy(local_68,param_3,param_4);
    auVar11 = local_68;
    for (; param_1 != pauVar6; param_1 = param_1 + 1) {
      iVar1 = pcmpestri(local_68,*param_1,0x30,uVar3,0x10);
      if (param_1 < pauVar6) goto LAB_1802d661d;
    }
    bVar7 = false;
    uVar4 = (uint)param_2 & 0xf;
    if ((param_2 & 0xf) != 0) {
      memcpy(local_68,param_1,(ulonglong)uVar4);
      iVar1 = pcmpestri(auVar11,local_68,0x30,uVar3,uVar4);
      if (bVar7) {
LAB_1802d661d:
        param_1 = (undefined1 (*) [16])(*param_1 + iVar1);
      }
      else {
        param_1 = (undefined1 (*) [16])(*param_1 + uVar4);
      }
    }
  }
  else {
    _Src = (undefined1 (*) [16])(*param_3 + (param_4 & 0xfffffffffffffff0));
    uVar3 = uVar3 & 0xf;
    memcpy(local_68,_Src,(ulonglong)uVar3);
    auVar11 = local_68;
    pauVar5 = param_3 + 1;
    if (param_1 != pauVar6) {
      do {
        auVar10 = *param_1;
        auVar8 = pcmpestrm(*param_3,auVar10,0x30,0x10,0x10);
        pauVar2 = pauVar5;
        while( true ) {
          uVar4 = auVar8._8_4_;
          uVar13 = auVar8._12_4_;
          if (pauVar2 == _Src) break;
          auVar9 = *pauVar2;
          pauVar2 = pauVar2 + 1;
          auVar9 = pcmpestrm(auVar9,auVar10,0x30,0x10,0x10);
          auVar12._0_4_ = auVar8._0_4_ & auVar9._0_4_;
          auVar12._4_4_ = auVar8._4_4_ & auVar9._4_4_;
          auVar12._8_4_ = uVar4 & auVar9._8_4_;
          auVar12._12_4_ = uVar13 & auVar9._12_4_;
          auVar8 = auVar12;
        }
        if ((param_4 & 0xf) != 0) {
          auVar10 = pcmpestrm(local_68,auVar10,0x30,uVar3,0x10);
          auVar8._0_4_ = auVar8._0_4_ & auVar10._0_4_;
          auVar8._4_4_ = 0;
          auVar8._8_4_ = uVar4 & auVar10._8_4_;
          auVar8._12_4_ = uVar13 & auVar10._12_4_;
        }
        uVar4 = auVar8._0_4_;
        if (uVar4 != 0) {
          iVar1 = 0;
          if (uVar4 != 0) {
            for (; (uVar4 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
            }
          }
          if ((iVar1 < 0x10) && (iVar1 != 0x10)) {
            return (undefined1 (*) [16])(*param_1 + iVar1);
          }
        }
        param_1 = param_1 + 1;
      } while (param_1 != pauVar6);
    }
    uVar4 = (uint)param_2 & 0xf;
    if ((param_2 & 0xf) != 0) {
      memcpy(local_68,param_1,(ulonglong)uVar4);
      auVar10 = pcmpestrm(*param_3,local_68,0x30,0x10,uVar4);
      while( true ) {
        uVar13 = auVar10._8_4_;
        uVar14 = auVar10._12_4_;
        if (pauVar5 == _Src) break;
        auVar8 = *pauVar5;
        pauVar5 = pauVar5 + 1;
        auVar8 = pcmpestrm(auVar8,local_68,0x30,0x10,uVar4);
        auVar9._0_4_ = auVar10._0_4_ & auVar8._0_4_;
        auVar9._4_4_ = auVar10._4_4_ & auVar8._4_4_;
        auVar9._8_4_ = uVar13 & auVar8._8_4_;
        auVar9._12_4_ = uVar14 & auVar8._12_4_;
        auVar10 = auVar9;
      }
      if ((param_4 & 0xf) != 0) {
        auVar11 = pcmpestrm(auVar11,local_68,0x30,uVar3,uVar4);
        auVar10._0_4_ = auVar10._0_4_ & auVar11._0_4_;
        auVar10._4_4_ = 0;
        auVar10._8_4_ = uVar13 & auVar11._8_4_;
        auVar10._12_4_ = uVar14 & auVar11._12_4_;
      }
      uVar3 = auVar10._0_4_;
      if (uVar3 != 0) {
        uVar13 = 0;
        if (uVar3 != 0) {
          for (; (uVar3 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
          }
        }
        if ((int)uVar13 < (int)uVar4) {
          uVar4 = uVar13;
        }
      }
      param_1 = (undefined1 (*) [16])(*param_1 + (int)uVar4);
    }
  }
  return param_1;
}



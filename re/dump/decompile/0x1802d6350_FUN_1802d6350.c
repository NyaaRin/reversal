// 0x1802d6350  FUN_1802d6350
// size=531 thunk=false
// signature: undefined FUN_1802d6350()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001802d64b7) */
/* WARNING: Removing unreachable block (ram,0x0001802d64ba) */
/* WARNING: Removing unreachable block (ram,0x0001802d6533) */
/* WARNING: Removing unreachable block (ram,0x0001802d6535) */

undefined1 *
FUN_1802d6350(undefined1 (*param_1) [16],ulonglong param_2,undefined1 (*param_3) [16],
             ulonglong param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  uint uVar10;
  bool bVar12;
  undefined1 uVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  ulonglong local_68;
  ulonglong uVar11;
  
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  uVar10 = (uint)param_2 & 0xf;
  uVar11 = (ulonglong)uVar10;
  puVar6 = *param_1 + param_2;
  iVar3 = -1;
  uVar7 = (uint)param_4;
  local_88 = param_2;
  if (param_4 < 0x11) {
    memcpy(&local_88,param_3,param_4);
    auVar2._8_8_ = uStack_80;
    auVar2._0_8_ = local_88;
    do {
      if (puVar6 == *param_1 + uVar11) {
        if (uVar11 != 0) {
          uVar13 = param_2 < 0x10;
          if ((bool)uVar13) {
            memcpy(&local_88,param_1,param_2);
            auVar14._8_8_ = uStack_80;
            auVar14._0_8_ = local_88;
          }
          else {
            auVar14 = *param_1;
          }
          iVar3 = pcmpestri(auVar2,auVar14,0x40,uVar7,uVar10);
          if ((bool)uVar13) {
            return (undefined1 *)(longlong)iVar3;
          }
        }
        return (undefined1 *)0xffffffffffffffff;
      }
      pauVar9 = (undefined1 (*) [16])(puVar6 + -0x10);
      bVar12 = (undefined1 *)0xf < puVar6;
      puVar6 = puVar6 + -0x10;
      iVar3 = pcmpestri(auVar2,*pauVar9,0x40,uVar7,0x10);
    } while (bVar12);
    puVar6 = puVar6 + ((longlong)iVar3 - (longlong)param_1);
  }
  else {
    uVar7 = uVar7 & 0xf;
    pauVar9 = (undefined1 (*) [16])(*param_3 + (param_4 & 0xfffffffffffffff0));
    memcpy(local_78,pauVar9,(ulonglong)uVar7);
    auVar2 = local_78;
    do {
      if (puVar6 == *param_1 + uVar11) {
        if (uVar11 == 0) {
          return (undefined1 *)0xffffffffffffffff;
        }
        uVar13 = local_88 < 0x10;
        if ((bool)uVar13) {
          memcpy(local_78,param_1,local_88);
        }
        else {
          local_78 = *param_1;
        }
        do {
          iVar5 = pcmpestri(*param_3,local_78,0x40,0x10,uVar10);
          if (((bool)uVar13) && (iVar3 < iVar5)) {
            iVar3 = iVar5;
          }
          param_3 = param_3 + 1;
          uVar13 = param_3 < pauVar9;
        } while (param_3 != pauVar9);
        if ((param_4 & 0xf) != 0) {
          pcmpestri(auVar2,local_78,0x40,uVar7,uVar10);
        }
        return (undefined1 *)(longlong)iVar3;
      }
      pauVar1 = (undefined1 (*) [16])(puVar6 + -0x10);
      bVar12 = puVar6 < (undefined1 *)0x10;
      puVar6 = puVar6 + -0x10;
      iVar5 = -1;
      pauVar8 = param_3;
      do {
        iVar4 = pcmpestri(*pauVar8,*pauVar1,0x40,0x10,0x10);
        if ((bVar12) && (iVar5 < iVar4)) {
          iVar5 = iVar4;
        }
        pauVar8 = pauVar8 + 1;
        bVar12 = pauVar8 < pauVar9;
      } while (pauVar8 != pauVar9);
      if ((param_4 & 0xf) != 0) {
        pcmpestri(local_78,*pauVar1,0x40,uVar7,0x10);
      }
    } while (iVar5 == -1);
    puVar6 = puVar6 + ((longlong)iVar5 - (longlong)param_1);
  }
  return puVar6;
}



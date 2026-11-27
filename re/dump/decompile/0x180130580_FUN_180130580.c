// 0x180130580  FUN_180130580
// size=849 thunk=false
// signature: undefined FUN_180130580()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180130580(void)

{
  ulonglong uVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  undefined8 *puVar5;
  char cVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  longlong *plVar10;
  char *_Str1;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  float extraout_XMM0_Da;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  uint uStack_a0;
  float fStack_9c;
  float local_98;
  float local_94;
  char local_90 [8];
  float local_88;
  float local_84;
  float local_80;
  ulonglong local_78;
  
  local_78 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  sVar7 = (**(code **)(*DAT_1803fa640 + 0x278))();
  iVar9 = (**(code **)(*DAT_1803fa640 + 0x288))();
  iVar13 = 0;
  if (0 < iVar9) {
    iVar13 = iVar9;
  }
  uVar11 = 0x20000;
  if ((longlong)iVar13 + 0x400U < 0x20000) {
    uVar11 = (longlong)iVar13 + 0x400U;
  }
  sVar8 = (**(code **)(*DAT_1803fa640 + 0x268))();
  fVar4 = DAT_180380fe8;
  fVar3 = DAT_180380bb0;
  uVar1 = 0;
  do {
    sVar2 = sVar8;
    if (sVar2 == sVar7) {
      return;
    }
    uVar12 = uVar1 + 1;
    if (uVar11 <= uVar1) goto LAB_180130867;
    plVar10 = (longlong *)(**(code **)(*DAT_1803fa640 + 0x280))(DAT_1803fa640,sVar2);
    if ((((plVar10 != (longlong *)0x0) &&
         (cVar6 = (**(code **)(*plVar10 + 0x150))(plVar10), cVar6 == '\0')) &&
        (_Str1 = (char *)(**(code **)(*plVar10 + 8))(plVar10), _Str1 != (char *)0x0)) &&
       (iVar9 = strcmp(_Str1,"World textures"), iVar9 == 0)) {
      (**(code **)(*plVar10 + 0x60))(plVar10);
      uStack_a0 = uStack_a0 & 0xffffff00;
      local_98 = fVar3;
      local_94 = fVar3;
      fStack_9c = 1.0;
      local_90[0] = '\0';
      local_a8 = plVar10;
      plVar10 = (longlong *)(**(code **)(*plVar10 + 0x58))(plVar10,"$color",local_90,0);
      fVar17 = extraout_XMM0_Da;
      fVar18 = fVar3;
      fVar19 = fVar3;
      if ((local_90[0] != '\0') && (fVar17 = extraout_XMM0_Da, plVar10 != (longlong *)0x0)) {
        local_88 = 1.0;
        local_84 = 1.0;
        local_80 = 1.0;
        (**(code **)(*plVar10 + 0xe0))(plVar10,&local_88,3);
        bVar14 = ((uint)local_88 & 0x7f800000) != 0x7f800000;
        if ((!bVar14) || ((local_88 < 0.0 || (fVar4 < local_88)))) {
          bVar14 = false;
        }
        bVar15 = ((uint)local_84 & 0x7f800000) != 0x7f800000;
        if (((!bVar15) || (local_84 < 0.0)) || (fVar4 < local_84)) {
          bVar15 = false;
        }
        bVar16 = ((uint)local_80 & 0x7f800000) != 0x7f800000;
        fVar17 = local_88;
        local_98 = fVar3;
        local_94 = fVar3;
        if (((!bVar16) || (local_80 < 0.0)) || (fVar4 < local_80)) {
          uStack_a0 = CONCAT31(uStack_a0._1_3_,1);
        }
        else {
          uStack_a0 = CONCAT31(uStack_a0._1_3_,bVar16);
          if ((bool)(bVar14 & bVar15)) {
            fStack_9c = local_88;
            fVar18 = local_84;
            fVar19 = local_80;
            local_98 = local_84;
            local_94 = local_80;
          }
        }
      }
      puVar5 = DAT_1803ea298;
      if (DAT_1803ea298 == DAT_1803ea2a0) {
        FUN_180225500(fVar17,DAT_1803ea298,&local_a8);
      }
      else {
        *DAT_1803ea298 = local_a8;
        puVar5[1] = CONCAT44(fStack_9c,uStack_a0);
        puVar5[2] = CONCAT44(fVar19,fVar18);
        DAT_1803ea298 = DAT_1803ea298 + 3;
      }
    }
    sVar8 = (**(code **)(*DAT_1803fa640 + 0x270))(DAT_1803fa640,sVar2);
    uVar1 = uVar12;
  } while (sVar8 != sVar2);
  FUN_180014410("[WorldTint] stopped cyclic material list at handle=%u\n",sVar2);
  if (sVar2 != sVar7) {
LAB_180130867:
    if (uVar11 <= uVar12) {
      FUN_180014410("[WorldTint] material walk capped: declared=%d limit=%zu\n",iVar13,uVar11);
    }
  }
  return;
}



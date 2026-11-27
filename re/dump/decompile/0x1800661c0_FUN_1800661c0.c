// 0x1800661c0  FUN_1800661c0
// size=1364 thunk=false
// signature: undefined FUN_1800661c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800661c0(short *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  short *psVar5;
  int iVar6;
  short *psVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  short *psVar10;
  short *psVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  char unaff_R12B;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  undefined4 local_b8;
  short *local_b0;
  longlong local_a8;
  undefined8 **local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *puStack_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  puVar14 = auStack_d8;
  puVar12 = auStack_d8;
  puVar13 = auStack_d8;
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  local_b8 = 0;
  plVar1 = (longlong *)(param_1 + 8);
  if (*plVar1 == 0) {
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 7;
    *(undefined2 *)param_2 = 0;
    goto LAB_1800666e2;
  }
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    param_1 = *(short **)param_1;
  }
  psVar11 = param_1 + *plVar1;
  local_88 = param_2;
  psVar7 = (short *)FUN_180065240(param_1,psVar11);
  local_68 = (short *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  if (param_1 == psVar7) {
    local_58 = 0;
    uStack_50 = 7;
    local_68 = (short *)0x0;
  }
  else {
    FUN_180211510(&local_68,param_1,(longlong)psVar7 - (longlong)param_1 >> 1);
  }
  psVar10 = (short *)&local_68;
  if (7 < uStack_50) {
    psVar10 = local_68;
  }
  psVar10 = psVar10 + local_58;
  psVar5 = (short *)&local_68;
  if (7 < uStack_50) {
    psVar5 = local_68;
  }
  for (; psVar5 != psVar10; psVar5 = psVar5 + 1) {
    if (*psVar5 == 0x2f) {
      *psVar5 = 0x5c;
    }
  }
  local_80 = (undefined8 *)0x0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = (undefined8 *)0x0;
  puVar8 = (undefined8 *)FUN_1802d8350(0x130);
  local_a0 = &local_80;
  local_90 = 0x13;
  local_98 = puVar8;
  memmove(puVar8,local_80,(longlong)puStack_78 - (longlong)local_80);
  local_98 = (undefined8 *)0x0;
  if (local_80 == (undefined8 *)0x0) {
LAB_18006634e:
    local_70 = puVar8 + 0x26;
    unaff_R12B = '\0';
    puVar14 = auStack_d8;
    local_b0 = psVar7;
    local_80 = puVar8;
    puStack_78 = puVar8;
    if (psVar7 != psVar11) {
      if ((*psVar7 != 0x5c) && (*psVar7 != 0x2f)) goto LAB_1800663f3;
      unaff_R12B = '\x01';
      if (uStack_50 <= local_58) goto LAB_1800663b5;
      psVar10 = (short *)&local_68;
      if (7 < uStack_50) {
        psVar10 = local_68;
      }
      psVar10 = psVar10 + local_58;
      local_58 = local_58 + 1;
      psVar10[0] = 0x5c;
      psVar10[1] = 0;
      unaff_R12B = '\x01';
      puVar14 = auStack_d8;
      goto LAB_1800663c1;
    }
  }
  else {
    puVar9 = local_80;
    if ((((longlong)local_70 - (longlong)local_80 & 0xfffffffffffffff0U) < 0x1000) ||
       (puVar9 = (undefined8 *)local_80[-1],
       (ulonglong)((longlong)local_80 + (-8 - (longlong)puVar9)) < 0x20)) {
      free(puVar9);
      goto LAB_18006634e;
    }
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    puVar12 = auStack_d0;
LAB_1800663b5:
    *(undefined8 *)(puVar12 + -8) = 0x1800663bd;
    FUN_18021a440();
    puVar14 = puVar12;
LAB_1800663c1:
    do {
      psVar7 = psVar7 + 1;
      puVar8 = puStack_78;
      local_b0 = psVar7;
      if (psVar7 == psVar11) goto LAB_1800664c3;
    } while ((*psVar7 == 0x5c) || (puVar13 = puVar14, *psVar7 == 0x2f));
    while (puVar14 = puVar13, local_b0 = psVar7, psVar7 != psVar11) {
LAB_1800663f3:
      psVar7 = local_b0;
      if ((*local_b0 == 0x5c) || (*local_b0 == 0x2f)) {
        if ((local_80 == puVar8) || (puVar8[-1] != 0)) {
          if (puVar8 == local_70) {
            *(undefined8 *)(puVar13 + -8) = 0x1800664a8;
            FUN_18021fa00(&local_80,puVar8);
            puVar8 = puStack_78;
          }
          else {
            *puVar8 = 0;
            puVar8[1] = 0;
            puStack_78 = puStack_78 + 2;
            puVar8 = puStack_78;
          }
        }
        psVar7 = psVar7 + 1;
      }
      else {
        do {
          psVar7 = psVar7 + 1;
          if ((psVar7 == psVar11) || (*psVar7 == 0x5c)) break;
        } while (*psVar7 != 0x2f);
        local_a8 = (longlong)psVar7 - (longlong)local_b0 >> 1;
        if (puVar8 == local_70) {
          *(undefined8 *)(puVar13 + -8) = 0x180066469;
          FUN_18021fbd0(&local_80,puVar8,&local_b0,&local_a8);
          puVar8 = puStack_78;
        }
        else {
          *puVar8 = local_b0;
          puVar8[1] = local_a8;
          puStack_78 = puStack_78 + 2;
          puVar8 = puStack_78;
        }
      }
    }
  }
LAB_1800664c3:
  puVar9 = local_80;
  puVar15 = local_80;
  if (local_80 != puVar8) {
    do {
      puVar8 = puVar9 + 2;
      uVar2 = *puVar9;
      lVar3 = puVar9[1];
      if (lVar3 == 1) {
        *(undefined8 *)(puVar14 + -8) = 0x180066503;
        iVar6 = FUN_180012bf0(uVar2,&DAT_180345b1c,1);
        if (iVar6 != 0) goto LAB_180066571;
        puVar16 = puVar15;
        if (puVar8 == puStack_78) break;
      }
      else {
        if (lVar3 == 2) {
          *(undefined8 *)(puVar14 + -8) = 0x18006652a;
          iVar6 = FUN_180012bf0(uVar2,&DAT_180345b20,2);
          if (iVar6 != 0) goto LAB_180066571;
          if (puVar15 != local_80) {
            if (puVar15[-3] == 2) {
              uVar2 = puVar15[-4];
              *(undefined8 *)(puVar14 + -8) = 0x180066549;
              iVar6 = FUN_180012bf0(uVar2,&DAT_180345b20);
              if (iVar6 == 0) goto LAB_18006655c;
            }
            puVar15 = puVar15 + -4;
LAB_180066551:
            puVar16 = puVar15;
            if (puVar8 != puStack_78) goto LAB_18006658c;
            break;
          }
LAB_18006655c:
          if (unaff_R12B != '\0') goto LAB_180066551;
          *puVar15 = &DAT_180345b20;
          puVar15[1] = 2;
        }
        else {
LAB_180066571:
          *puVar15 = uVar2;
          puVar15[1] = lVar3;
        }
        puVar16 = puVar15 + 2;
        if (puVar8 == puStack_78) break;
        puVar15 = puVar15 + 4;
      }
LAB_18006658c:
      puVar9 = puVar9 + 4;
      puVar16 = puVar15;
    } while (puVar9 != puStack_78);
    puVar8 = puStack_78;
    if (puVar16 != puStack_78) {
      puVar8 = puVar16;
      puStack_78 = puVar16;
    }
  }
  puVar9 = local_80;
  if (((1 < (ulonglong)((longlong)puVar8 - (longlong)local_80 >> 4)) && (puVar8[-1] == 0)) &&
     (puVar8[-3] == 2)) {
    uVar2 = puVar8[-4];
    *(undefined8 *)(puVar14 + -8) = 0x1800665e1;
    iVar6 = FUN_180012bf0(uVar2,&DAT_180345b20);
    puVar9 = local_80;
    puVar8 = puStack_78;
    if (iVar6 == 0) {
      puStack_78 = puStack_78 + -2;
      puVar8 = puStack_78;
    }
  }
  for (; puVar9 != puVar8; puVar9 = puVar9 + 2) {
    if (puVar9[1] == 0) {
      if (local_58 < uStack_50) {
        psVar11 = (short *)&local_68;
        if (7 < uStack_50) {
          psVar11 = local_68;
        }
        psVar11 = psVar11 + local_58;
        local_58 = local_58 + 1;
        psVar11[0] = 0x5c;
        psVar11[1] = 0;
      }
      else {
        *(undefined8 *)(puVar14 + -8) = 0x18006663b;
        FUN_18021a440(&local_68,local_58,uStack_50,0x5c);
      }
    }
    else {
      uVar2 = *puVar9;
      *(undefined8 *)(puVar14 + -8) = 0x180066645;
      FUN_180211740(&local_68,uVar2);
    }
  }
  if (local_58 == 0) {
    *(undefined8 *)(puVar14 + -8) = 0x18006666b;
    FUN_18021a7b0(&local_68,&DAT_180345b1c,1);
  }
  *(undefined4 *)param_2 = (undefined4)local_68;
  *(undefined4 *)((longlong)param_2 + 4) = local_68._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_60._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)local_58;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_58._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_50._4_4_;
  local_58 = 0;
  uStack_50 = 7;
  local_68 = (short *)((ulonglong)local_68 & 0xffffffffffff0000);
  local_b8 = 1;
  if (local_80 != (undefined8 *)0x0) {
    puVar8 = local_80;
    if ((0xfff < ((longlong)local_70 - (longlong)local_80 & 0xfffffffffffffff0U)) &&
       (puVar8 = (undefined8 *)local_80[-1],
       0x1f < (ulonglong)((longlong)local_80 + (-8 - (longlong)puVar8)))) {
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      pcVar4 = (code *)swi(3);
      puVar8 = (undefined8 *)(*pcVar4)();
      return puVar8;
    }
    *(undefined8 *)(puVar14 + -8) = 0x1800666cd;
    free(puVar8);
    local_80 = (undefined8 *)0x0;
    puStack_78 = (undefined8 *)0x0;
    local_70 = (undefined8 *)0x0;
  }
  *(undefined8 *)(puVar14 + -8) = 0x1800666e2;
  FUN_18021e290(&local_68);
LAB_1800666e2:
  *(undefined8 *)(puVar14 + -8) = 0x1800666f1;
  return param_2;
}



// 0x180256b20  FUN_180256b20
// size=831 thunk=false
// signature: undefined FUN_180256b20()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180256b20(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  char *pcVar14;
  char cVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  undefined1 *puVar19;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [24];
  char **local_c8;
  char *local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  longlong *plStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  char *local_68;
  char *pcStack_60;
  char *local_58;
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_e8;
  local_a8 = (undefined8 *)0x0;
  plStack_a0 = (longlong *)0x0;
  param_1[3] = param_1[3] + -1;
  uVar3 = param_1[3];
  lVar4 = *param_1;
  if ((ulonglong)(param_1[1] - lVar4 >> 4) <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_180262180();
  }
  lVar5 = *(longlong *)(lVar4 + 8 + uVar3 * 0x10);
  if (lVar5 != 0) {
    LOCK();
    piVar1 = (int *)(lVar5 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar6 = *(undefined8 **)(lVar4 + uVar3 * 0x10);
  plStack_a0 = *(longlong **)(lVar4 + 8 + uVar3 * 0x10);
  pcVar17 = (char *)puVar6[1];
  local_a8 = puVar6;
  while (plVar13 = plStack_a0, pcVar17 != (char *)*puVar6) {
    cVar15 = -1;
    if ((char *)*puVar6 <= pcVar17) {
      cVar15 = '\x01';
    }
    if (cVar15 < '\x01') break;
    pcVar18 = pcVar17 + -0x48;
    if (*pcVar18 == '\0') {
      local_88 = *(undefined4 *)(pcVar17 + -0x30);
      uStack_84 = *(undefined4 *)(pcVar17 + -0x2c);
      uStack_80 = *(undefined4 *)(pcVar17 + -0x28);
      uStack_7c = *(undefined4 *)(pcVar17 + -0x24);
      local_98 = *(undefined4 *)(pcVar17 + -0x40);
      uStack_94 = *(undefined4 *)(pcVar17 + -0x3c);
      uStack_90 = *(undefined4 *)(pcVar17 + -0x38);
      uStack_8c = *(undefined4 *)(pcVar17 + -0x34);
      FUN_180254bd0(param_3,param_2,&local_98,&local_88);
      pcVar17 = pcVar18;
    }
    else {
      if (*(ulonglong *)(pcVar17 + -8) < 0x10) {
        local_b8 = pcVar17 + -0x20;
      }
      else {
        local_b8 = *(char **)(pcVar17 + -0x20);
      }
      local_b0 = *(undefined8 *)(pcVar17 + -0x10);
      local_98 = *(undefined4 *)(pcVar17 + -0x40);
      uStack_94 = *(undefined4 *)(pcVar17 + -0x3c);
      uStack_90 = *(undefined4 *)(pcVar17 + -0x38);
      uStack_8c = *(undefined4 *)(pcVar17 + -0x34);
      local_c8 = &local_b8;
      FUN_180254730(param_3,local_78,param_2,&local_98);
      pcVar17 = pcVar18;
    }
  }
  if (param_4 != puVar6 + 3) {
    lVar4 = puVar6[3];
    FUN_180261900(param_4,lVar4,(puVar6[4] - lVar4 >> 4) * -0x5555555555555555);
  }
  param_4[3] = puVar6[6];
  param_4[4] = puVar6[7];
  param_1[4] = param_1[4] + 1;
  puVar19 = auStack_e8;
  if (param_1[0xc] != 0) {
    local_68 = (char *)0x0;
    pcStack_60 = (char *)0x0;
    local_58 = (char *)0x0;
    pcVar18 = (char *)puVar6[1];
    pcVar14 = pcStack_60;
    for (pcVar17 = (char *)*puVar6; pcStack_60 = pcVar14, pcVar17 != pcVar18;
        pcVar17 = pcVar17 + 0x48) {
      if (pcVar14 == local_58) {
        pcVar14 = (char *)FUN_180263470(&local_68);
      }
      else {
        pcVar14[0] = '\0';
        pcVar14[1] = '\0';
        pcVar14[2] = '\0';
        pcVar14[3] = '\0';
        pcVar14[4] = '\0';
        pcVar14[5] = '\0';
        pcVar14[6] = '\0';
        pcVar14[7] = '\0';
        pcVar14[8] = '\0';
        pcVar14[9] = '\0';
        pcVar14[10] = '\0';
        pcVar14[0xb] = '\0';
        pcVar14[0xc] = '\0';
        pcVar14[0xd] = '\0';
        pcVar14[0xe] = '\0';
        pcVar14[0xf] = '\0';
        pcVar14[0x10] = '\0';
        pcVar14[0x11] = '\0';
        pcVar14[0x12] = '\0';
        pcVar14[0x13] = '\0';
        pcVar14[0x14] = '\0';
        pcVar14[0x15] = '\0';
        pcVar14[0x16] = '\0';
        pcVar14[0x17] = '\0';
        pcVar14[0x18] = '\0';
        pcVar14[0x19] = '\0';
        pcVar14[0x1a] = '\0';
        pcVar14[0x1b] = '\0';
        pcVar14[0x1c] = '\0';
        pcVar14[0x1d] = '\0';
        pcVar14[0x1e] = '\0';
        pcVar14[0x1f] = '\0';
        pcVar14[0x20] = '\0';
        pcVar14[0x21] = '\0';
        pcVar14[0x22] = '\0';
        pcVar14[0x23] = '\0';
        pcVar14[0x24] = '\0';
        pcVar14[0x25] = '\0';
        pcVar14[0x26] = '\0';
        pcVar14[0x27] = '\0';
        pcVar14[0x28] = '\0';
        pcVar14[0x29] = '\0';
        pcVar14[0x2a] = '\0';
        pcVar14[0x2b] = '\0';
        pcVar14[0x2c] = '\0';
        pcVar14[0x2d] = '\0';
        pcVar14[0x2e] = '\0';
        pcVar14[0x2f] = '\0';
        pcVar14[0x30] = '\0';
        pcVar14[0x31] = '\0';
        pcVar14[0x32] = '\0';
        pcVar14[0x33] = '\0';
        pcVar14[0x34] = '\0';
        pcVar14[0x35] = '\0';
        pcVar14[0x36] = '\0';
        pcVar14[0x37] = '\0';
        pcVar14[0x38] = '\0';
        pcVar14[0x39] = '\0';
        pcVar14[0x3a] = '\0';
        pcVar14[0x3b] = '\0';
        pcVar14[0x3c] = '\0';
        pcVar14[0x3d] = '\0';
        pcVar14[0x3e] = '\0';
        pcVar14[0x3f] = '\0';
        pcVar14[0x40] = '\x0f';
        pcVar14[0x41] = '\0';
        pcVar14[0x42] = '\0';
        pcVar14[0x43] = '\0';
        pcVar14[0x44] = '\0';
        pcVar14[0x45] = '\0';
        pcVar14[0x46] = '\0';
        pcVar14[0x47] = '\0';
        pcVar14[0x28] = '\0';
        pcStack_60 = pcVar14 + 0x48;
        local_b8 = pcVar14;
      }
      *pcVar14 = *pcVar17 == '\x01';
      uVar12 = *(undefined8 *)(pcVar17 + 0x10);
      *(undefined8 *)(pcVar14 + 8) = *(undefined8 *)(pcVar17 + 8);
      *(undefined8 *)(pcVar14 + 0x10) = uVar12;
      uVar9 = *(undefined4 *)(pcVar17 + 0x1c);
      uVar10 = *(undefined4 *)(pcVar17 + 0x20);
      uVar11 = *(undefined4 *)(pcVar17 + 0x24);
      *(undefined4 *)(pcVar14 + 0x18) = *(undefined4 *)(pcVar17 + 0x18);
      *(undefined4 *)(pcVar14 + 0x1c) = uVar9;
      *(undefined4 *)(pcVar14 + 0x20) = uVar10;
      *(undefined4 *)(pcVar14 + 0x24) = uVar11;
      pcVar16 = pcVar17 + 0x28;
      if (pcVar14 + 0x28 != pcVar16) {
        if (0xf < *(ulonglong *)(pcVar17 + 0x40)) {
          pcVar16 = *(char **)pcVar16;
        }
        FUN_180212700(pcVar14 + 0x28,pcVar16,*(undefined8 *)(pcVar17 + 0x38));
      }
      pcVar14 = pcStack_60;
    }
    plVar7 = (longlong *)param_1[0xc];
    if (plVar7 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_function_call();
    }
    (**(code **)(*plVar7 + 0x10))(plVar7,&local_68);
    pcVar18 = pcStack_60;
    puVar19 = auStack_e8;
    pcVar17 = local_68;
    if (local_68 != (char *)0x0) {
      for (; local_b8 = pcVar17, pcVar17 != pcVar18; pcVar17 = pcVar17 + 0x48) {
        FUN_18020e450(pcVar17 + 0x28);
      }
      pcVar17 = local_68;
      puVar19 = auStack_e8;
      if (0xfff < (ulonglong)(((longlong)local_58 - (longlong)local_68 >> 3) * 8)) {
        pcVar17 = *(char **)(local_68 + -8);
        pcVar18 = local_68 + (-8 - (longlong)pcVar17);
        puVar19 = auStack_e8;
        if ((char *)0x1f < pcVar18) {
          pcVar8 = (code *)swi(0x29);
          (*pcVar8)(5);
          pcVar17 = pcVar18;
          puVar19 = auStack_e0;
        }
      }
      *(undefined8 *)(puVar19 + -8) = 0x180256dfe;
      free(pcVar17);
      local_68 = (char *)0x0;
      pcStack_60 = (char *)0x0;
      local_58 = (char *)0x0;
    }
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar13 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      pcVar8 = *(code **)*plVar13;
      *(undefined8 *)(puVar19 + -8) = 0x180256e28;
      (*pcVar8)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar8 = *(code **)(*plVar13 + 8);
        *(undefined8 *)(puVar19 + -8) = 0x180256e3b;
        (*pcVar8)(plVar13);
      }
    }
  }
  *(undefined8 *)(puVar19 + -8) = 0x180256e47;
  return;
}



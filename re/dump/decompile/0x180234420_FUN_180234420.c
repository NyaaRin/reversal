// 0x180234420  FUN_180234420
// size=2344 thunk=false
// signature: undefined FUN_180234420()
// status: ok


ulonglong FUN_180234420(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  char *pcVar10;
  longlong *plVar11;
  uint uVar12;
  byte bVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong *plVar21;
  bool bVar22;
  uint local_58;
  undefined1 local_40 [8];
  
  if ((0 < (int)param_1[0x1f]) &&
     (iVar7 = (int)param_1[0x1f] + -1, *(int *)(param_1 + 0x1f) = iVar7, iVar7 < 1)) {
    std::_Xregex_error(0xc);
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return uVar9;
  }
  if ((0 < *(int *)((longlong)param_1 + 0xf4)) &&
     (iVar7 = *(int *)((longlong)param_1 + 0xf4) + -1, *(int *)((longlong)param_1 + 0xf4) = iVar7,
     iVar7 < 1)) {
    std::_Xregex_error(0xb);
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return uVar9;
  }
  local_58 = 0;
  local_58._0_1_ = 0;
joined_r0x0001802344a3:
  if (param_2 == 0) {
LAB_180234cff:
    iVar7 = (int)param_1[0x1f];
    if (0 < iVar7) {
      iVar7 = iVar7 + 1;
      *(int *)(param_1 + 0x1f) = iVar7;
    }
    return (ulonglong)CONCAT31((int3)((uint)iVar7 >> 8),(byte)local_58 == 0);
  }
  plVar21 = param_1 + 5;
  plVar11 = param_1 + 1;
  switch(*(undefined4 *)(param_2 + 8)) {
  default:
    return (ulonglong)(uint7)(int7)(int3)((uint)*(undefined4 *)(param_2 + 8) >> 8) << 8;
  case 1:
  case 8:
  case 9:
  case 0x11:
  case 0x14:
    break;
  case 2:
    if (((*(uint *)((longlong)param_1 + 0xd4) >> 8 & 1) == 0) && (*param_1 == param_1[0x17])) {
      local_58 = *(uint *)((longlong)param_1 + 0xd4) & 0xffffff01;
      goto LAB_180234cc9;
    }
    if (((*(uint *)(param_1 + 0x1a) & 0x1000) == 0) ||
       ((*(char *)(*param_1 + -1) != '\n' && (*(char *)(*param_1 + -1) != '\r'))))
    goto LAB_180234975;
LAB_180234532:
    local_58 = 0;
    goto LAB_180234ce3;
  case 3:
    if ((char *)*param_1 != (char *)param_1[0x18]) {
      if ((*(uint *)(param_1 + 0x1a) & 0x1000) != 0) {
        cVar6 = *(char *)*param_1;
        if (cVar6 == '\n') goto LAB_180234532;
        if (cVar6 == '\r') {
          local_58 = 0;
          goto LAB_180234ce3;
        }
      }
      goto LAB_180234975;
    }
    local_58 = *(uint *)((longlong)param_1 + 0xd4) >> 1 & 1;
    goto LAB_180234cc9;
  case 4:
    uVar8 = *(uint *)((longlong)param_1 + 0xd4);
    if (((uVar8 >> 8 & 1) == 0) && (pbVar1 = (byte *)*param_1, pbVar1 == (byte *)param_1[0x17])) {
      if ((pbVar1 != (byte *)param_1[0x18]) && ((uVar8 & 4) == 0)) {
        bVar13 = *pbVar1;
LAB_1802345d0:
        if ((&DAT_18033d080)[bVar13] != '\0') {
          local_58 = (uint)((*(uint *)(param_2 + 0xc) & 1) == 1);
          goto LAB_180234cc9;
        }
      }
    }
    else {
      pbVar1 = (byte *)*param_1;
      if (pbVar1 != (byte *)param_1[0x18]) {
        local_58 = (uint)((uint)((&DAT_18033d080)[pbVar1[-1]] != (&DAT_18033d080)[*pbVar1]) ==
                         (*(uint *)(param_2 + 0xc) & 1));
        goto LAB_180234cc9;
      }
      if ((uVar8 & 8) == 0) {
        bVar13 = pbVar1[-1];
        goto LAB_1802345d0;
      }
    }
    local_58 = (uint)((*(uint *)(param_2 + 0xc) & 1) == 0);
    goto LAB_180234cc9;
  case 5:
    pcVar16 = (char *)*param_1;
    if (pcVar16 != (char *)param_1[0x18]) {
      cVar6 = *pcVar16;
      if ((*(byte *)(param_1 + 0x1a) & 0x3e) == 0) {
        if (cVar6 == '\n') goto LAB_180234975;
        bVar22 = cVar6 == '\r';
      }
      else {
        bVar22 = cVar6 == '\0';
      }
      if (bVar22) goto LAB_180234975;
      if ((byte)local_58 == 0) {
        *param_1 = (longlong)(pcVar16 + 1);
        goto LAB_180234ce3;
      }
      goto LAB_180234cff;
    }
    goto LAB_180234975;
  case 6:
    pcVar16 = *(char **)(param_2 + 0x28);
    pcVar14 = (char *)*param_1;
    pcVar15 = pcVar16 + *(uint *)(param_2 + 0x24);
    pcVar2 = (char *)param_1[0x18];
    pcVar10 = pcVar14;
    if ((*(uint *)(param_1 + 0x1a) & 0x100) == 0) {
      for (; pcVar10 != pcVar2; pcVar10 = pcVar10 + 1) {
        bVar22 = true;
        if (pcVar16 == pcVar15) goto LAB_18023471e;
        if (*pcVar10 != *pcVar16) goto LAB_180234722;
        pcVar16 = pcVar16 + 1;
      }
      bVar22 = pcVar16 == pcVar15;
LAB_18023471e:
      if (bVar22) {
        pcVar14 = pcVar10;
      }
    }
    else {
      if (pcVar14 != pcVar2) {
        lVar18 = param_1[0x1d];
        do {
          bVar22 = true;
          if (pcVar16 == pcVar15) goto LAB_1802346ed;
          cVar6 = *pcVar16;
          cVar5 = std::ctype<char>::tolower(*(ctype<char> **)(lVar18 + 8),*pcVar10);
          if (cVar5 != cVar6) goto LAB_180234722;
          pcVar10 = pcVar10 + 1;
          pcVar16 = pcVar16 + 1;
        } while (pcVar10 != pcVar2);
      }
      bVar22 = pcVar16 == pcVar15;
LAB_1802346ed:
      if (bVar22) {
        pcVar14 = pcVar10;
      }
    }
LAB_180234722:
    if (pcVar14 == (char *)*param_1) goto LAB_180234975;
    *param_1 = (longlong)pcVar14;
    break;
  case 7:
    if (*param_1 != param_1[0x18]) {
      plVar11 = (longlong *)FUN_1802342e0(param_1,local_40,param_2,*param_1);
      if (*plVar11 != *param_1) {
        *param_1 = *plVar11;
        break;
      }
    }
LAB_180234975:
    local_58._0_1_ = 1;
    goto LAB_180234cff;
  case 10:
    lVar18 = *param_1;
    cVar6 = FUN_180234420(param_1);
    if (cVar6 == '\0') {
      local_58 = 1;
    }
    else {
      *param_1 = lVar18;
      local_58 = 0;
    }
    goto LAB_180234cc9;
  case 0xb:
    lVar18 = FUN_18023d1f0(param_1);
    bVar13 = FUN_180234420(param_1);
    if (bVar13 == 0) {
      *param_1 = *(longlong *)(lVar18 * 0x40 + param_1[0x13]);
      FUN_18023ca00(plVar11);
    }
    param_1[0x16] = lVar18;
    local_58 = (uint)bVar13;
    goto LAB_180234cc9;
  case 0xc:
    goto switchD_1802344d9_caseD_c;
  case 0xd:
    if (*(uint *)(param_2 + 0x20) != 0) {
      *(longlong *)(*plVar21 + (ulonglong)*(uint *)(param_2 + 0x20) * 0x10) = *param_1;
    }
    break;
  case 0xe:
    lVar18 = *(longlong *)(param_2 + 0x20);
    uVar8 = *(uint *)(lVar18 + 0x20);
    if (uVar8 != 0) {
      *(uint *)(*plVar11 + (ulonglong)(uVar8 >> 5) * 4) =
           *(uint *)(*plVar11 + (ulonglong)(uVar8 >> 5) * 4) | 1 << (uVar8 & 0x1f);
      *(longlong *)(*plVar21 + 8 + (ulonglong)*(uint *)(lVar18 + 0x20) * 0x10) = *param_1;
    }
    break;
  case 0xf:
    uVar8 = *(uint *)(param_2 + 0x20);
    if ((*(uint *)(*plVar11 + (ulonglong)(uVar8 >> 5) * 4) >> ((byte)uVar8 & 0x1f) & 1) == 0) {
      if ((*(byte *)(param_1 + 0x1a) & 0x12) != 0) goto LAB_180234975;
    }
    else {
      pcVar16 = (char *)*param_1;
      pcVar14 = *(char **)(*plVar21 + (ulonglong)uVar8 * 0x10);
      pcVar2 = *(char **)(*plVar21 + 8 + (ulonglong)uVar8 * 0x10);
      if (pcVar14 != pcVar2) {
        pcVar10 = (char *)param_1[0x18];
        pcVar15 = pcVar16;
        if ((*(uint *)(param_1 + 0x1a) & 0x100) == 0) {
          for (; pcVar15 != pcVar10; pcVar15 = pcVar15 + 1) {
            bVar22 = true;
            if (pcVar14 == pcVar2) goto LAB_18023494e;
            if (*pcVar15 != *pcVar14) goto LAB_180234952;
            pcVar14 = pcVar14 + 1;
          }
          bVar22 = pcVar14 == pcVar2;
LAB_18023494e:
          if (bVar22) {
            pcVar16 = pcVar15;
          }
        }
        else {
          if (pcVar16 != pcVar10) {
            lVar18 = param_1[0x1d];
            do {
              bVar22 = true;
              if (pcVar14 == pcVar2) goto LAB_18023491b;
              cVar6 = *pcVar14;
              cVar5 = std::ctype<char>::tolower(*(ctype<char> **)(lVar18 + 8),*pcVar15);
              cVar6 = std::ctype<char>::tolower(*(ctype<char> **)(lVar18 + 8),cVar6);
              if (cVar5 != cVar6) goto LAB_180234952;
              pcVar15 = pcVar15 + 1;
              pcVar14 = pcVar14 + 1;
            } while (pcVar15 != pcVar10);
          }
          bVar22 = pcVar14 == pcVar2;
LAB_18023491b:
          if (bVar22) {
            pcVar16 = pcVar15;
          }
        }
LAB_180234952:
        if (pcVar16 == (char *)*param_1) goto LAB_180234975;
      }
      *param_1 = (longlong)pcVar16;
    }
    break;
  case 0x10:
    lVar18 = FUN_18023d1f0(param_1);
    lVar17 = lVar18 * 0x40;
LAB_180234990:
    lVar20 = param_1[0x13];
    *param_1 = *(longlong *)(lVar17 + lVar20);
    FUN_18023ca00(plVar11,lVar20 + 8 + lVar17);
    plVar19 = (longlong *)(lVar20 + 0x28 + lVar17);
    if (plVar21 != plVar19) {
      FUN_18023d0b0(plVar21,*plVar19,plVar19[1] - *plVar19 >> 4);
    }
    cVar6 = FUN_180234420(param_1);
    if (cVar6 == '\0') goto code_r0x0001802349e1;
    if ((char)param_1[0x1c] != '\0') {
      for (lVar20 = *(longlong *)(param_2 + 0x28); lVar20 != 0;
          lVar20 = *(longlong *)(lVar20 + 0x28)) {
        lVar3 = param_1[0x13];
        *param_1 = *(longlong *)(lVar17 + lVar3);
        FUN_18023ca00(plVar11,lVar3 + 8 + lVar17);
        plVar19 = (longlong *)(lVar3 + 0x28 + lVar17);
        if (plVar21 != plVar19) {
          FUN_18023d0b0(plVar21,*plVar19,plVar19[1] - *plVar19 >> 4);
        }
        FUN_180234420(param_1);
      }
    }
    param_1[0x16] = lVar18;
    goto switchD_1802344d9_caseD_c;
  case 0x12:
    bVar13 = (byte)(*(uint *)(param_2 + 0xc) >> 1) & 1;
    if (*(int *)(param_2 + 0x34) == 1) {
      cVar6 = FUN_18023d2a0(param_1,param_2,bVar13);
      if (cVar6 == '\0') {
        local_58._0_1_ = 1;
      }
      local_58 = (uint)(byte)local_58;
    }
    else {
      lVar18 = (ulonglong)*(uint *)(param_2 + 0x30) * 0x10 + param_1[0x10];
      if ((*(int *)(lVar18 + 0xc) == 0) &&
         (((*(byte *)(param_1 + 0x1a) & 0x3e) != 0 ||
          (cVar6 = FUN_18023d650(param_1,*(undefined8 *)(param_2 + 0x10),lVar18), cVar6 == '\0'))))
      {
        *(int *)(lVar18 + 0xc) = (int)param_1[4];
      }
      cVar6 = FUN_18023b780(param_1,param_2,bVar13,0);
      if (cVar6 == '\0') {
        local_58._0_1_ = 1;
      }
      local_58 = (uint)(byte)local_58;
    }
    goto switchD_1802344d9_caseD_c;
  case 0x13:
    lVar18 = *(longlong *)(param_2 + 0x20);
    if (*(int *)(lVar18 + 0x34) == 0) {
      cVar6 = FUN_18023b780(param_1,lVar18,
                            CONCAT31((uint3)(*(uint *)(lVar18 + 0xc) >> 9),
                                     (char)(*(uint *)(lVar18 + 0xc) >> 1)) & 0xffffff01,
                            *(undefined4 *)
                             (param_1[0x10] + 8 + (ulonglong)*(uint *)(lVar18 + 0x30) * 0x10));
      if (cVar6 == '\0') {
        local_58._0_1_ = 1;
      }
      local_58 = (uint)(byte)local_58;
    }
    goto switchD_1802344d9_caseD_c;
  case 0x15:
    if ((((*(uint *)((longlong)param_1 + 0xd4) & 0x2020) == 0) || (param_1[0x17] != *param_1)) &&
       (((char)param_1[0x1e] == '\0' || (*param_1 == param_1[0x18])))) {
      if ((char)param_1[0x1c] != '\0') {
        if ((char)param_1[0x1b] == '\0') {
LAB_180234c84:
          param_1[8] = *param_1;
          FUN_18023ca00(param_1 + 9);
          if (param_1 + 0xd != param_1 + 5) {
            lVar18 = param_1[5];
            FUN_18023d0b0(param_1 + 0xd,lVar18,param_1[6] - lVar18 >> 4);
          }
          *(undefined1 *)(param_1 + 0x1b) = 1;
        }
        else if (param_1[8] == *param_1) {
          if (1 < *(uint *)((longlong)param_1 + 0xdc)) {
            uVar9 = 1;
            do {
              lVar18 = (uVar9 >> 5) * 4;
              uVar8 = 1 << ((byte)uVar9 & 0x1f);
              uVar12 = uVar8 & *(uint *)(lVar18 + param_1[9]);
              bVar22 = (*(uint *)(lVar18 + *plVar11) & uVar8) != 0;
              if ((uVar12 != 0) != bVar22) goto LAB_180234c80;
              if (uVar12 != 0) {
                lVar18 = param_1[0xd];
                lVar20 = uVar9 * 0x10;
                lVar17 = *(longlong *)(*plVar21 + lVar20);
                if (*(longlong *)(lVar18 + lVar20) != lVar17) {
                  bVar22 = lVar17 - param_1[0x17] < *(longlong *)(lVar18 + lVar20) - param_1[0x17];
                  goto LAB_180234c80;
                }
                lVar3 = *(longlong *)(*plVar21 + 8 + lVar20);
                if (*(longlong *)(lVar18 + 8 + lVar20) != lVar3) {
                  bVar22 = *(longlong *)(lVar18 + 8 + lVar20) - *(longlong *)(lVar18 + lVar20) <
                           lVar3 - lVar17;
                  goto LAB_180234c80;
                }
              }
              uVar8 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar8;
            } while (uVar8 < *(uint *)((longlong)param_1 + 0xdc));
          }
        }
        else {
          bVar22 = param_1[8] - param_1[0x17] < *param_1 - param_1[0x17];
LAB_180234c80:
          if (bVar22) goto LAB_180234c84;
        }
      }
    }
    else {
      local_58 = 1;
    }
    goto switchD_1802344d9_caseD_c;
  }
switchD_1802344d9_caseD_1:
LAB_180234cc9:
  if ((byte)local_58 != 0) goto LAB_180234cff;
LAB_180234ce3:
  if (param_2 == 0) goto LAB_180234cff;
  param_2 = *(longlong *)(param_2 + 0x10);
  goto joined_r0x0001802344a3;
code_r0x0001802349e1:
  param_2 = *(longlong *)(param_2 + 0x28);
  if (param_2 == 0) goto code_r0x0001802349ea;
  goto LAB_180234990;
code_r0x0001802349ea:
  local_58 = 1;
  param_1[0x16] = lVar18;
switchD_1802344d9_caseD_c:
  param_2 = 0;
  goto switchD_1802344d9_caseD_1;
}



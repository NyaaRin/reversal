// 0x180242250  FUN_180242250
// size=1704 thunk=false
// signature: undefined FUN_180242250()
// status: ok


byte FUN_180242250(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  longlong lVar10;
  byte *pbVar11;
  uint uVar12;
  ushort uVar13;
  undefined *puVar14;
  char cVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  byte *pbVar19;
  byte *pbVar20;
  ulonglong uVar21;
  byte bVar22;
  byte bVar23;
  bool local_res18;
  
  bVar6 = 0;
  local_res18 = false;
  pbVar19 = param_2;
  for (lVar10 = 0x25; lVar10 != 0; lVar10 = lVar10 + -1) {
    *pbVar19 = 0;
    pbVar19 = pbVar19 + 1;
  }
  cVar15 = '\x10';
  pbVar19 = param_1;
  do {
    pbVar20 = pbVar19;
    bVar1 = *pbVar20;
    uVar21 = (ulonglong)bVar1;
    pbVar19 = pbVar20 + 1;
    switch(bVar1) {
    case 0x26:
    case 0x2e:
    case 0x36:
    case 0x3e:
    case 100:
    case 0x65:
      param_2[3] = bVar1;
      bVar6 = bVar6 | 0x40;
      break;
    default:
      goto switchD_1802422c8_caseD_27;
    case 0x66:
      param_2[4] = bVar1;
      bVar6 = bVar6 | 8;
      break;
    case 0x67:
      param_2[5] = bVar1;
      bVar6 = bVar6 | 0x10;
      break;
    case 0xf0:
      param_2[2] = bVar1;
      bVar6 = bVar6 | 0x20;
      break;
    case 0xf2:
      param_2[1] = bVar1;
      bVar6 = bVar6 | 2;
      break;
    case 0xf3:
      param_2[1] = bVar1;
      bVar6 = bVar6 | 4;
    }
    cVar15 = cVar15 + -1;
  } while (cVar15 != '\0');
switchD_1802422c8_caseD_27:
  uVar17 = (uint)bVar6 << 0x17;
  bVar22 = 1;
  if (bVar6 != 0) {
    bVar22 = bVar6;
  }
  *(uint *)(param_2 + 0x21) = uVar17;
  if ((bVar1 & 0xf0) == 0x40) {
    uVar17 = uVar17 | 0x40000000;
    bVar6 = bVar1 >> 3 & 1;
    *(uint *)(param_2 + 0x21) = uVar17;
    param_2[7] = bVar6;
    if (bVar6 != 0) {
      local_res18 = (*pbVar19 & 0xf8) == 0xb8;
    }
    param_2[8] = bVar1 >> 2 & 1;
    param_2[10] = bVar1 & 1;
    param_2[9] = bVar1 >> 1 & 1;
    bVar6 = *pbVar19;
    uVar21 = (ulonglong)bVar6;
    pbVar19 = pbVar20 + 2;
    if ((bVar6 & 0xf0) != 0x40) goto LAB_180242396;
LAB_180242400:
    uVar17 = uVar17 | 0x3000;
    *(uint *)(param_2 + 0x21) = uVar17;
    if (((byte)uVar21 & 0xfd) == 0x24) {
      uVar13 = 1;
    }
    else {
      uVar13 = 0;
    }
LAB_18024243b:
    cVar15 = '\0';
  }
  else {
LAB_180242396:
    bVar6 = (byte)uVar21;
    param_2[0xb] = bVar6;
    if (bVar6 == 0xf) {
      puVar14 = &DAT_1803da7ca;
      uVar21 = (ulonglong)*pbVar19;
      param_2[0xc] = *pbVar19;
      pbVar19 = pbVar19 + 1;
    }
    else {
      puVar14 = &DAT_1803da780;
      if ((0x9f < bVar6) && (bVar6 < 0xa4)) {
        local_res18 = (bool)(local_res18 + '\x01');
        if ((bVar22 & 0x10) == 0) {
          bVar22 = bVar22 & 0xf7;
        }
        else {
          bVar22 = bVar22 | 8;
        }
      }
    }
    bVar6 = (byte)uVar21;
    bVar1 = puVar14[(ulonglong)((uint)uVar21 & 3) + (ulonglong)(byte)puVar14[uVar21 >> 2]];
    uVar13 = (ushort)bVar1;
    if (bVar1 == 0xff) goto LAB_180242400;
    if (-1 < (char)bVar1) goto LAB_18024243b;
    uVar13 = *(ushort *)(puVar14 + (bVar1 & 0x7f));
    cVar15 = (char)(uVar13 >> 8);
  }
  bVar1 = param_2[0xc];
  uVar12 = (uint)uVar21;
  if ((bVar1 != 0) &&
     ((s_____AI____LB________ODS___DWC____1803da8bc
       [(ulonglong)(byte)s_____AI____LB________ODS___DWC____1803da8bc[uVar21 >> 2] +
        (ulonglong)(uVar12 & 3)] & bVar22) != 0)) {
    uVar17 = uVar17 | 0x3000;
    *(uint *)(param_2 + 0x21) = uVar17;
  }
  if ((uVar13 & 1) == 0) {
    if ((bVar22 & 0x20) != 0) {
      *(uint *)(param_2 + 0x21) = uVar17 | 0x9000;
    }
  }
  else {
    uVar18 = uVar17 | 1;
    lVar10 = 0;
    *(uint *)(param_2 + 0x21) = uVar18;
    bVar2 = *pbVar19;
    param_2[0xd] = bVar2;
    bVar7 = bVar2 & 7;
    param_2[0x10] = bVar7;
    bVar8 = bVar2 >> 3 & 7;
    bVar23 = bVar2 >> 6;
    param_2[0xf] = bVar8;
    param_2[0xe] = bVar23;
    if ((cVar15 != '\0') && ((char)(cVar15 << bVar8) < '\0')) {
      uVar18 = uVar17 | 0x3001;
      *(uint *)(param_2 + 0x21) = uVar18;
    }
    if (((bVar1 == 0) && (0xd8 < bVar6)) && (bVar6 < 0xe0)) {
      if (bVar23 == 3) {
        cVar15 = (&DAT_1803da884)[(ulonglong)bVar8 + (ulonglong)(byte)(bVar6 + 0x27) * 8];
        bVar16 = bVar7;
      }
      else {
        cVar15 = (&DAT_1803da87d)[(byte)(bVar6 + 0x27)];
        bVar16 = bVar8;
      }
      if ((char)(cVar15 << bVar16) < '\0') {
        uVar18 = uVar18 | 0x3000;
        *(uint *)(param_2 + 0x21) = uVar18;
      }
    }
    if ((bVar22 & 0x20) != 0) {
      if (bVar23 == 3) {
        *(uint *)(param_2 + 0x21) = uVar18 | 0x9000;
      }
      else {
        if (bVar1 == 0) {
          pbVar20 = &DAT_1803da92e;
          bVar16 = bVar6 & 0xfe;
          pbVar11 = &DAT_1803da946;
        }
        else {
          pbVar20 = &DAT_1803da946;
          pbVar11 = &DAT_1803da958;
          bVar16 = bVar6;
        }
        do {
          if (*pbVar20 == bVar16) {
            if (-1 < (char)(pbVar20[1] << bVar8)) goto LAB_180242599;
            break;
          }
          pbVar20 = pbVar20 + 2;
        } while (pbVar20 != pbVar11);
        *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x9000;
      }
    }
LAB_180242599:
    if (bVar1 == 0) {
      if (uVar12 == 0x8c) {
LAB_18024269c:
        if (0x28 < (bVar2 & 0x38)) goto LAB_1802426a6;
      }
      else {
        if (uVar12 == 0x8e) {
          if ((bVar2 & 0x38) != 8) goto LAB_18024269c;
          goto LAB_1802426a6;
        }
LAB_180242615:
        if (bVar23 == 3) {
          pbVar11 = &DAT_1803da967;
          pbVar20 = &DAT_1803da991;
          if (bVar1 == 0) {
            pbVar20 = &DAT_1803da967;
            pbVar11 = &DAT_1803da958;
          }
          for (; pbVar11 != pbVar20; pbVar11 = pbVar11 + 3) {
            if (*pbVar11 == bVar6) {
              if (((pbVar11[1] & bVar22) != 0) && (-1 < (char)(pbVar11[2] << bVar8)))
              goto LAB_1802426a6;
              break;
            }
          }
        }
        else if (bVar1 != 0) {
          if (uVar12 == 0x50) {
LAB_180242682:
            bVar1 = bVar22 & 9;
          }
          else {
            if (uVar12 == 0xc5) goto LAB_1802426a6;
            if (uVar12 != 0xd6) {
              if ((uVar12 != 0xd7) && (uVar12 != 0xf7)) goto LAB_1802426ae;
              goto LAB_180242682;
            }
            bVar1 = bVar22 & 6;
          }
          if (bVar1 != 0) goto LAB_1802426a6;
        }
      }
    }
    else if (uVar12 == 0x20) {
LAB_1802425dc:
      bVar23 = 3;
      if ((0x20 < (bVar2 & 0x38)) || ((bVar2 & 0x38) == 8)) goto LAB_1802426a6;
    }
    else {
      if (uVar12 != 0x21) {
        if (uVar12 == 0x22) goto LAB_1802425dc;
        if (uVar12 != 0x23) goto LAB_180242615;
      }
      bVar23 = 3;
      if (((bVar2 & 0x38) == 0x20) || ((bVar2 & 0x38) == 0x28)) {
LAB_1802426a6:
        *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x11000;
      }
    }
LAB_1802426ae:
    bVar1 = pbVar19[1];
    pbVar20 = pbVar19 + 2;
    if ((bVar2 & 0x38) < 9) {
      if (bVar6 == 0xf6) {
        uVar13 = (ushort)(byte)((byte)uVar13 | 2);
      }
      else if (bVar6 == 0xf7) {
        uVar13 = (ushort)(byte)((byte)uVar13 | 0x10);
      }
    }
    if (bVar23 == 0) {
      if ((bVar22 & 0x10) == 0) {
        if (bVar7 == 5) {
          lVar10 = 4;
        }
      }
      else {
        lVar10 = 2;
        if (bVar7 != 6) {
          lVar10 = 0;
        }
      }
    }
    else if (bVar23 == 1) {
      lVar10 = 1;
    }
    else if ((bVar23 == 2) && (lVar10 = 2, (bVar22 & 0x10) == 0)) {
      lVar10 = 4;
    }
    if ((bVar23 != 3) && (bVar7 == 4)) {
      *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 2;
      pbVar20 = pbVar19 + 3;
      param_2[0x12] = bVar1 >> 6;
      param_2[0x11] = bVar1;
      param_2[0x13] = bVar1 >> 3 & 7;
      param_2[0x14] = bVar1 & 7;
      if (((bVar1 & 7) == 5) && ((bVar23 & 1) == 0)) {
        lVar10 = 4;
      }
    }
    iVar9 = (int)lVar10;
    if (iVar9 == 1) {
      *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x40;
      param_2[0x1d] = pbVar20[-1];
LAB_1802427d1:
      pbVar19 = pbVar20 + lVar10 + -1;
    }
    else if (iVar9 == 2) {
      *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x80;
      pbVar19 = pbVar20 + lVar10 + -1;
      *(undefined2 *)(param_2 + 0x1d) = *(undefined2 *)(pbVar20 + -1);
    }
    else {
      if (iVar9 != 4) goto LAB_1802427d1;
      *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x100;
      pbVar19 = pbVar20 + lVar10 + -1;
      *(undefined4 *)(param_2 + 0x1d) = *(undefined4 *)(pbVar20 + -1);
    }
  }
  if ((uVar13 & 0x10) == 0) goto LAB_180242866;
  if ((uVar13 & 0x40) == 0) {
    if (local_res18 == false) {
      if ((bVar22 & 8) == 0) {
        *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x10;
        uVar4 = *(undefined4 *)pbVar19;
        pbVar19 = pbVar19 + 4;
        *(undefined4 *)(param_2 + 0x15) = uVar4;
        goto LAB_180242866;
      }
LAB_18024286b:
      *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 8;
      uVar3 = *(undefined2 *)pbVar19;
      pbVar19 = pbVar19 + 2;
      *(undefined2 *)(param_2 + 0x15) = uVar3;
    }
    else {
      *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x20;
      uVar5 = *(undefined8 *)pbVar19;
      pbVar19 = pbVar19 + 8;
      *(undefined8 *)(param_2 + 0x15) = uVar5;
LAB_180242866:
      if ((uVar13 & 4) != 0) goto LAB_18024286b;
    }
    if ((uVar13 & 2) != 0) {
      *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 4;
      bVar6 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      param_2[0x15] = bVar6;
    }
    if ((uVar13 & 0x40) == 0) {
      if ((uVar13 & 0x20) != 0) {
        *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x204;
        bVar6 = *pbVar19;
        pbVar19 = pbVar19 + 1;
        param_2[0x15] = bVar6;
      }
      goto LAB_1802428c4;
    }
  }
  else if ((bVar22 & 8) != 0) {
    *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x208;
    uVar3 = *(undefined2 *)pbVar19;
    pbVar19 = pbVar19 + 2;
    *(undefined2 *)(param_2 + 0x15) = uVar3;
    goto LAB_1802428c4;
  }
  *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x210;
  uVar4 = *(undefined4 *)pbVar19;
  pbVar19 = pbVar19 + 4;
  *(undefined4 *)(param_2 + 0x15) = uVar4;
LAB_1802428c4:
  bVar6 = (char)pbVar19 - (char)param_1;
  *param_2 = bVar6;
  if (0xf < bVar6) {
    *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x5000;
    *param_2 = 0xf;
    return 0xf;
  }
  return bVar6;
}



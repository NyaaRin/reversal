// 0x180171c50  FUN_180171c50
// size=1947 thunk=false
// signature: undefined FUN_180171c50()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_180171c50(undefined8 *param_1,longlong *param_2,undefined8 param_3,float *param_4,uint param_5)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  undefined8 *puVar7;
  float fVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_158 [32];
  float local_138;
  undefined8 *local_128;
  undefined8 local_120;
  float local_118;
  float fStack_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  
  local_f8 = DAT_1803da4c0 ^ (ulonglong)auStack_158;
  local_128 = param_1;
  local_120 = param_3;
  local_110 = param_3;
  if (((param_2 != (longlong *)0x0) && (iVar10 = (**(code **)(*param_2 + 8))(param_2), iVar10 == 7))
     && (param_2[0x16] != 0)) {
    local_108 = *(undefined8 *)param_4;
    uStack_100 = *(undefined8 *)(param_4 + 2);
    local_138 = (float)param_5;
    FUN_180171c50(param_1,param_2[0x16],param_3,&local_108);
    return param_1;
  }
  if (param_5 == 0xd) {
    param_5 = *(uint *)(param_2 + 1);
  }
  fVar16 = (float)FUN_180171160(param_2,param_5);
  local_108 = *(undefined8 *)param_4;
  uStack_100 = *(undefined8 *)(param_4 + 2);
  local_138 = fVar16;
  (**(code **)(*param_2 + 0x40))(param_2,&local_118,param_3,&local_108);
  iVar10 = (**(code **)(*param_2 + 8))(param_2);
  fVar26 = 0.0;
  if (((iVar10 == 4) || (iVar10 == 7)) && (fVar17 = (float)FUN_18016b060(param_2), fVar17 != 0.0)) {
    switch(param_5) {
    case 2:
    case 3:
    case 9:
    case 0xb:
      fStack_114 = fStack_114 + fVar17;
      break;
    case 4:
    case 6:
      local_118 = local_118 + fVar17;
      break;
    case 5:
    case 7:
      local_118 = local_118 - fVar17;
      break;
    case 10:
    case 0xc:
      fStack_114 = fStack_114 - fVar17;
    }
  }
  fVar6 = DAT_180380bb0;
  fVar5 = DAT_180380b3c;
  fVar17 = DAT_180380a38;
  fVar8 = local_120._4_4_;
  if (((param_5 - 2 < 2) || (param_5 - 9 < 4)) &&
     ((iVar10 = (**(code **)(*param_2 + 8))(param_2), iVar10 != 4 && (iVar10 != 7)))) {
    fVar24 = *(float *)(param_2 + 2);
    if ((DAT_1803fcb80 == '\0') && ((int)param_2[1] == 8)) {
      fVar24 = fVar24 * DAT_1803fcb6c;
    }
    if (((param_5 - 3 & 0xfffffff6) == 0) && (param_5 != 4)) {
      uVar14 = 3;
      uVar13 = 0xb;
      uVar15 = 0xc;
    }
    else {
      uVar14 = 2;
      uVar13 = 9;
      uVar15 = 10;
    }
    fVar17 = (float)FUN_1801717e0(uVar13);
    fVar18 = (float)FUN_1801717e0(uVar14);
    fVar19 = (float)FUN_1801717e0(uVar15);
    fVar20 = param_4[1];
    fVar22 = param_4[3];
    fVar23 = fVar6;
    if (((DAT_1803fcb80 == '\0') &&
        (fVar25 = DAT_1803fcb6c * DAT_180380a38 + fVar5, fVar23 = fVar5, fVar5 <= fVar25)) &&
       (fVar23 = fVar6, fVar25 <= fVar6)) {
      fVar23 = fVar25;
    }
    fVar23 = fVar23 + fVar23;
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    else {
      fVar17 = fVar23 + fVar17;
    }
    if (fVar19 <= 0.0) {
      fVar25 = 0.0;
    }
    else {
      fVar25 = fVar23 + fVar19;
    }
    fVar21 = (fVar22 - fVar25) - fVar18;
    fVar25 = (fVar22 + fVar20) * DAT_180380ac0 - fVar18 * DAT_180380ac0;
    if (fVar21 <= fVar25) {
      fVar25 = fVar21;
    }
    fVar21 = fVar20 + fVar17;
    if (fVar20 + fVar17 <= fVar25) {
      fVar21 = fVar25;
    }
    fVar17 = DAT_180380a38;
    param_3 = local_110;
    if (param_5 - 2 < 2) {
      fStack_114 = fVar8 + fVar21 + fVar16 + fVar24;
    }
    else if ((param_5 - 9 & 0xfffffffd) == 0) {
      fStack_114 = fVar20 + fVar8 + fVar16 + fVar24;
    }
    else if ((param_5 - 10 & 0xfffffffd) == 0) {
      fVar19 = fVar21 + fVar18 + fVar23 + fVar19;
      if (fVar22 <= fVar19) {
        fVar22 = fVar19;
      }
      lVar12 = (**(code **)(*param_2 + 0x10))(param_2,&local_108);
      fStack_114 = (((fVar22 + fVar8) - *(float *)(lVar12 + 4)) - fVar16) + fVar24;
      fVar17 = DAT_180380a38;
      param_3 = local_110;
    }
  }
  iVar10 = (**(code **)(*param_2 + 8))(param_2);
  if (((iVar10 == 4) || (iVar10 == 7)) || (DAT_1803fcb80 != '\0')) goto LAB_180172322;
  if ((param_5 & 0xfffffffa) == 0) {
    if (param_5 == 1) goto LAB_180172073;
    iVar10 = 0;
  }
  else {
    if ((param_5 != 1) && (1 < param_5 - 6)) goto LAB_180172322;
LAB_180172073:
    iVar10 = 1;
  }
  fVar16 = (float)FUN_180171b80(iVar10 * 2 + 4);
  fVar24 = (float)FUN_180171b80(iVar10);
  fVar20 = (float)FUN_180171b80(iVar10 * 2 + 5);
  uVar11 = (uint)(0.0 < fVar16) + (uint)(0.0 < fVar20) + (uint)(0.0 < fVar24);
  if (1 < uVar11) {
    fVar22 = fVar6;
    if (((DAT_1803fcb80 == '\0') &&
        (fVar23 = DAT_1803fcb6c * fVar17 + fVar5, fVar22 = fVar5, fVar5 <= fVar23)) &&
       (fVar22 = fVar6, fVar23 <= fVar6)) {
      fVar22 = fVar23;
    }
    if (param_4[2] - *param_4 <
        (float)(int)(uVar11 - 1) * fVar22 * DAT_180380e9c + fVar24 + fVar16 + fVar20) {
      (**(code **)(*param_2 + 0x10))(param_2,&local_110);
      fVar16 = (float)(**(code **)(*param_2 + 0x30))(param_2);
      puVar7 = DAT_1803fb108;
      puVar4 = DAT_1803fb100;
      param_1 = local_128;
      if (((param_5 & 0xfffffffa) == 0) && (param_5 != 1)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      for (; (local_128 = param_1, puVar4 != puVar7 &&
             (plVar1 = (longlong *)*puVar4, plVar1 != param_2)); puVar4 = puVar4 + 1) {
        if (((((plVar1 == (longlong *)0x0) ||
              ((iVar10 = (**(code **)(*plVar1 + 8))(plVar1), iVar10 != 4 && (iVar10 != 7)))) &&
             (*(char *)((longlong)plVar1 + 0x14) != '\0')) &&
            ((DAT_1803fcb80 != '\0' ||
             (((DAT_1803fcb81 == '\0' || (*(char *)((longlong)plVar1 + 0x16) != '\0')) &&
              ((*(char *)((longlong)plVar1 + 0x15) == '\0' ||
               (DAT_1803fcb68 <= *(float *)(plVar1 + 3))))))))) &&
           (cVar9 = (**(code **)(*plVar1 + 0x38))(plVar1), cVar9 != '\0')) {
          uVar11 = *(uint *)(plVar1 + 1);
          if (bVar2) {
            if (((uVar11 & 0xfffffffa) == 0) && (uVar11 != 1)) {
LAB_18017222b:
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
          }
          else {
            if ((uVar11 == 1) || (uVar11 - 6 < 2)) goto LAB_18017222b;
            bVar3 = true;
          }
          if (!bVar3) {
            (**(code **)(*plVar1 + 0x10))(plVar1,&local_108);
            fVar24 = fVar6;
            if (((DAT_1803fcb80 == '\0') &&
                (fVar20 = DAT_1803fcb6c * fVar17 + fVar5, fVar24 = fVar5, fVar5 <= fVar20)) &&
               (fVar24 = fVar6, fVar20 <= fVar6)) {
              fVar24 = fVar20;
            }
            fVar26 = fVar26 + fVar24 + fVar24 + local_108._4_4_;
          }
        }
        param_1 = local_128;
      }
      local_118 = *(float *)((longlong)param_2 + 0xc);
      fVar17 = *(float *)(param_2 + 2);
      if ((DAT_1803fcb80 == '\0') && ((int)param_2[1] == 8)) {
        local_118 = local_118 * DAT_1803fcb6c;
        fVar17 = fVar17 * DAT_1803fcb6c;
      }
      local_118 = ((float)param_3 - (float)local_110 * DAT_180380ac0) + local_118;
      if (((param_5 & 0xfffffffa) == 0) && (param_5 != 1)) {
        local_110._4_4_ = (float)((ulonglong)local_110 >> 0x20);
        fStack_114 = (((fVar8 + param_4[1]) - fVar16) - fVar26) - local_110._4_4_;
      }
      else {
        fStack_114 = fVar8 + param_4[3] + fVar16 + fVar26;
      }
      fStack_114 = fStack_114 + fVar17;
    }
  }
LAB_180172322:
  fVar26 = (float)FUN_1801719c0(param_2,param_5);
  if ((param_5 == 2) || (param_5 - 9 < 2)) {
    local_118 = local_118 - fVar26;
  }
  else if (((param_5 - 3 & 0xfffffff6) == 0) && (param_5 != 4)) {
    local_118 = local_118 + fVar26;
  }
  *param_1 = CONCAT44(fStack_114,local_118);
  return param_1;
}



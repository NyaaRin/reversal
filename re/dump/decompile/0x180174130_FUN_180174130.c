// 0x180174130  FUN_180174130
// size=1288 thunk=false
// signature: undefined FUN_180174130()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180174130(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  longlong *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  float local_118;
  float fStack_114;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined8 local_e8;
  float local_e0;
  float local_dc;
  undefined8 local_d8;
  longlong lStack_d0;
  undefined8 local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  
  puVar10 = DAT_1803fb108;
  local_98 = DAT_1803da4c0 ^ (ulonglong)auStack_148;
  uVar8 = 0;
  plVar11 = (longlong *)0x0;
  puVar9 = DAT_1803fb100;
  if (DAT_1803fb100 != DAT_1803fb108) {
    do {
      iVar4 = (**(code **)(*(longlong *)*puVar9 + 8))();
      if (iVar4 == 4) {
        if (uVar8 == 0) {
          uVar8 = *puVar9;
        }
      }
      else if ((iVar4 == 7) && (plVar11 == (longlong *)0x0)) {
        plVar11 = (longlong *)*puVar9;
      }
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar10);
    if (uVar8 != 0) {
      *(undefined8 *)(uVar8 + 0xb0) = 0;
    }
    if (plVar11 != (longlong *)0x0) {
      plVar11[0x16] = 0;
    }
    if ((((((((uVar8 != 0) && (plVar11 != (longlong *)0x0)) &&
            (cVar3 = (**(code **)(*plVar11 + 0x50))(plVar11), cVar3 != '\0')) &&
           (*(char *)(uVar8 + 0x14) != '\0')) &&
          ((DAT_1803fcb80 != '\0' ||
           (((DAT_1803fcb81 == '\0' || (*(char *)(uVar8 + 0x16) != '\0')) &&
            ((*(char *)(uVar8 + 0x15) == '\0' || (DAT_1803fcb68 <= *(float *)(uVar8 + 0x18)))))))))
         && (*(char *)((longlong)plVar11 + 0x14) != '\0')) &&
        ((DAT_1803fcb80 != '\0' ||
         (((DAT_1803fcb81 == '\0' || (*(char *)((longlong)plVar11 + 0x16) != '\0')) &&
          ((*(char *)((longlong)plVar11 + 0x15) == '\0' ||
           (DAT_1803fcb68 <= *(float *)(plVar11 + 3))))))))) && (*(int *)(uVar8 + 8) != 8)) {
      *(int *)(plVar11 + 1) = *(int *)(uVar8 + 8);
      *(undefined1 *)(plVar11 + 0xe) = *(undefined1 *)(uVar8 + 0x70);
      *(longlong **)(uVar8 + 0xb0) = plVar11;
      plVar11[0x16] = uVar8;
    }
  }
  DAT_1803fcb84 = FUN_180173db0();
  puVar9 = DAT_1803fb108;
  fVar12 = 0.0;
  fVar2 = DAT_180380ac0;
  for (puVar10 = DAT_1803fb100; DAT_180380ac0 = fVar2, puVar10 != puVar9; puVar10 = puVar10 + 1) {
    if (((((longlong *)*puVar10 != (longlong *)0x0) &&
         (iVar4 = (**(code **)(*(longlong *)*puVar10 + 8))(), iVar4 == 3)) &&
        (uVar8 = *puVar10, *(char *)(uVar8 + 0x14) != '\0')) &&
       ((*(int *)(uVar8 + 0x7c) == 0 && (fVar12 <= *(float *)(uVar8 + 0x70))))) {
      fVar12 = *(float *)(uVar8 + 0x70);
    }
    fVar2 = DAT_180380ac0;
  }
  fVar14 = (DAT_1803fcb5c - _DAT_1803fcb54) * fVar2;
  fVar13 = (DAT_1803fcb58 - _DAT_1803fcb50) * fVar2;
  _DAT_1803fcb88 = fVar12;
  fVar12 = (float)FUN_180173db0();
  fVar15 = fVar12 + fVar13;
  fVar16 = fVar12 + fVar14;
  fVar13 = (float)((uint)fVar13 ^ DAT_1803817f0) - fVar12;
  fVar12 = (float)((uint)fVar14 ^ DAT_1803817f0) - fVar12;
  local_d8 = 0;
  lStack_d0 = 0;
  local_c8 = 0;
  lStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_108 = fVar13;
  local_104 = fVar12;
  local_100 = fVar15;
  local_fc = fVar16;
  FUN_180172420(&local_d8,param_2,&local_108);
  puVar9 = DAT_1803fb108;
  puVar10 = DAT_1803fb100;
  do {
    if (puVar10 == puVar9) {
      FUN_180209700(&lStack_c0);
      FUN_180209930(&lStack_d0);
      return;
    }
    plVar11 = (longlong *)*puVar10;
    if ((*(char *)((longlong)plVar11 + 0x14) != '\0') &&
       ((DAT_1803fcb80 != '\0' ||
        (((DAT_1803fcb81 == '\0' || (*(char *)((longlong)plVar11 + 0x16) != '\0')) &&
         ((*(char *)((longlong)plVar11 + 0x15) == '\0' || (DAT_1803fcb68 <= *(float *)(plVar11 + 3))
          ))))))) {
      iVar4 = (**(code **)(*plVar11 + 8))();
      plVar11 = (longlong *)*puVar10;
      if (iVar4 == 3) {
        (**(code **)(*plVar11 + 0x18))(plVar11,param_1,param_2);
      }
      else {
        uVar8 = ((((((((ulonglong)plVar11 >> 8 & 0xff ^
                      ((ulonglong)plVar11 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) *
                      0x100000001b3 ^ (ulonglong)plVar11 >> 0x10 & 0xff) * 0x100000001b3 ^
                    (ulonglong)plVar11 >> 0x18 & 0xff) * 0x100000001b3 ^
                   (ulonglong)plVar11 >> 0x20 & 0xff) * 0x100000001b3 ^
                  (ulonglong)plVar11 >> 0x28 & 0xff) * 0x100000001b3 ^
                 (ulonglong)plVar11 >> 0x30 & 0xff) * 0x100000001b3 ^ (ulonglong)plVar11 >> 0x38) *
                0x100000001b3 & local_a8;
        lVar5 = *(longlong *)(lStack_c0 + 8 + uVar8 * 0x10);
        if (lVar5 == lStack_d0) {
LAB_1801744e1:
          lVar5 = 0;
        }
        else {
          plVar1 = *(longlong **)(lVar5 + 0x10);
          while (plVar11 != plVar1) {
            if (lVar5 == *(longlong *)(lStack_c0 + uVar8 * 0x10)) goto LAB_1801744e1;
            lVar5 = *(longlong *)(lVar5 + 8);
            plVar1 = *(longlong **)(lVar5 + 0x10);
          }
        }
        lVar7 = lStack_d0;
        if (lVar5 != 0) {
          lVar7 = lVar5;
        }
        if (lVar7 == lStack_d0) {
          local_128 = 0xd;
          local_f8 = fVar13;
          local_f4 = fVar12;
          local_f0 = fVar15;
          local_ec = fVar16;
          puVar6 = (undefined8 *)FUN_180171c50(&local_108,plVar11,param_2,&local_f8);
        }
        else {
          local_e8 = *(undefined8 *)(lVar7 + 0x18);
          puVar6 = &local_e8;
        }
        FUN_180173e80(&local_118,*puVar10,*puVar6);
        if ((iVar4 == 4) || (iVar4 == 7)) {
          FUN_18016b260(*puVar10,param_1,CONCAT44(fStack_114,local_118));
        }
        else {
          plVar11 = (longlong *)*puVar10;
          lVar5 = *plVar11;
          if (iVar4 == 6) {
            (**(code **)(lVar5 + 0x58))(plVar11,param_1,CONCAT44(fStack_114,local_118));
          }
          else if (iVar4 == 5) {
            (**(code **)(lVar5 + 0x58))(plVar11,param_1,CONCAT44(fStack_114,local_118));
          }
          else {
            (**(code **)(lVar5 + 0x10))(plVar11,&local_e0);
            (**(code **)(*(longlong *)*puVar10 + 0x18))
                      ((longlong *)*puVar10,param_1,
                       CONCAT44(local_dc * fVar2 + fStack_114,local_e0 * fVar2 + local_118));
          }
        }
      }
    }
    puVar10 = puVar10 + 1;
  } while( true );
}



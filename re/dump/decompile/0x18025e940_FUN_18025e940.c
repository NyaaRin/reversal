// 0x18025e940  FUN_18025e940
// size=2198 thunk=false
// signature: undefined FUN_18025e940()
// status: ok


ulonglong FUN_18025e940(undefined4 param_1,longlong *param_2,longlong *param_3,char *param_4,
                       undefined8 param_5,float param_6,undefined8 param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  unkuint9 Var11;
  char cVar12;
  ulonglong in_RAX;
  ulonglong uVar13;
  longlong in_RCX;
  ulonglong *puVar14;
  ulonglong uVar15;
  float *pfVar16;
  longlong *plVar17;
  ulonglong uVar18;
  byte bVar19;
  bool bVar20;
  bool bVar21;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 uVar22;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined8 local_98;
  undefined8 uStack_90;
  char *local_88;
  size_t local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  local_88 = param_4;
  if (*(char *)(in_RCX + 2) != '\0') {
    in_RAX = _Xtime_get_ticks();
    param_1 = extraout_XMM0_Da;
    if ((in_RAX != *(ulonglong *)(in_RCX + 0x28)) &&
       ((longlong)*(ulonglong *)(in_RCX + 0x28) <= (longlong)in_RAX)) {
      uVar15 = *(ulonglong *)(in_RCX + 8);
      uVar18 = *(ulonglong *)(in_RCX + 0x10);
      *(undefined1 *)(in_RCX + 2) = 0;
      lVar7 = *param_2;
      uVar13 = (param_2[1] - lVar7 >> 5) * -0x5555555555555555;
      if (uVar13 < uVar15 || uVar13 - uVar15 == 0) goto LAB_18025f1d2;
      if ((uVar18 != 0) &&
         (lVar8 = *(longlong *)(uVar15 * 0x60 + lVar7),
         *(longlong *)(uVar15 * 0x60 + 8 + lVar7) != lVar8)) {
        uVar5 = *(ushort *)(lVar8 + -0x10 + uVar18 * 0x10);
        if (uVar5 < 0x7f) {
          uVar22 = extraout_XMM0_Da;
          if (((uVar5 | 0x20) - 0x61 < 0x1a) || ((uVar5 - 0x30 < 10 || (uVar5 == 0x5f)))) {
LAB_18025ea20:
            do {
              uVar5 = *(ushort *)(lVar8 + -0x10 + uVar18 * 0x10);
              if (uVar5 < 0x7f) {
                if ((0x19 < (uVar5 | 0x20) - 0x61) && ((9 < uVar5 - 0x30 && (uVar5 != 0x5f))))
                break;
              }
              else {
                cVar12 = FUN_180260600(uVar22,uVar5);
                uVar22 = extraout_XMM0_Da_02;
                if ((cVar12 == '\0') &&
                   (cVar12 = FUN_180260690(extraout_XMM0_Da_02,uVar5), uVar22 = extraout_XMM0_Da_03,
                   cVar12 == '\0')) break;
              }
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
        }
        else {
          cVar12 = FUN_180260600(lVar7,uVar5);
          uVar22 = extraout_XMM0_Da_00;
          if ((cVar12 != '\0') ||
             (cVar12 = FUN_180260690(extraout_XMM0_Da_00,uVar5), uVar22 = extraout_XMM0_Da_01,
             cVar12 != '\0')) goto LAB_18025ea20;
        }
      }
      local_98._0_4_ = (undefined4)uVar15;
      local_98._4_4_ = (undefined4)(uVar15 >> 0x20);
      uStack_90._0_4_ = (undefined4)uVar18;
      uStack_90._4_4_ = (undefined4)(uVar18 >> 0x20);
      *(undefined4 *)(in_RCX + 0x18) = (undefined4)local_98;
      *(undefined4 *)(in_RCX + 0x1c) = local_98._4_4_;
      *(undefined4 *)(in_RCX + 0x20) = (undefined4)uStack_90;
      *(undefined4 *)(in_RCX + 0x24) = uStack_90._4_4_;
      local_98 = uVar15;
      uStack_90 = uVar18;
      in_RAX = FUN_18025f270(in_RCX,param_2,param_5);
      if (((*(char *)(in_RCX + 0xfa) != '\0') && (*(char *)(in_RCX + 0x32) == '\0')) ||
         ((*(char *)(in_RCX + 0xfb) != '\0' && (*(char *)(in_RCX + 0x33) == '\0'))))
      goto LAB_18025ead1;
      FUN_18025f400(in_RCX);
      in_RAX = FUN_180280fd0("AutoCompleteContextMenu");
      *(undefined1 *)(in_RCX + 1) = 1;
      param_1 = extraout_XMM0_Da_04;
    }
  }
  if (*(char *)(in_RCX + 1) == '\0') {
LAB_18025ead1:
    return in_RAX & 0xffffffffffffff00;
  }
  uVar15 = param_3[3];
  uVar18 = (param_3[1] - *param_3 >> 4) * -0x5555555555555555;
  if (uVar18 < uVar15 || uVar18 - uVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180262180();
  }
  puVar14 = (ulonglong *)(uVar15 * 0x30 + *param_3);
  uVar15 = puVar14[2];
  uVar18 = *puVar14;
  bVar20 = uVar18 < uVar15;
  bVar21 = false;
  if (uVar18 == uVar15) {
    bVar20 = puVar14[1] < puVar14[3];
    bVar21 = puVar14[1] == puVar14[3];
  }
  if (bVar20 || bVar21) {
    puVar14 = puVar14 + 2;
    uVar18 = uVar15;
  }
  uVar15 = puVar14[1];
  if (uVar18 == *(ulonglong *)(in_RCX + 8)) {
    if (uVar15 != *(ulonglong *)(in_RCX + 0x10)) {
      if (uVar18 == *(ulonglong *)(in_RCX + 8)) {
        lVar7 = *param_2;
        uVar13 = (param_2[1] - lVar7 >> 5) * -0x5555555555555555;
        if (uVar13 < uVar18 || uVar13 - uVar18 == 0) {
LAB_18025f1d2:
                    /* WARNING: Subroutine does not return */
          FUN_180262180();
        }
        uVar13 = uVar15;
        if ((uVar15 != 0) &&
           (lVar8 = *(longlong *)(uVar18 * 0x60 + lVar7),
           *(longlong *)(uVar18 * 0x60 + 8 + lVar7) != lVar8)) {
          uVar5 = *(ushort *)(lVar8 + -0x10 + uVar15 * 0x10);
          if (uVar5 < 0x7f) {
            if (((uVar5 | 0x20) - 0x61 < 0x1a) || ((uVar5 - 0x30 < 10 || (uVar5 == 0x5f)))) {
LAB_18025ebd0:
              do {
                uVar5 = *(ushort *)(lVar8 + -0x10 + uVar13 * 0x10);
                if (uVar5 < 0x7f) {
                  if ((0x19 < (uVar5 | 0x20) - 0x61) && ((9 < uVar5 - 0x30 && (uVar5 != 0x5f))))
                  break;
                }
                else {
                  cVar12 = FUN_180260600(param_1,uVar5);
                  param_1 = extraout_XMM0_Da_07;
                  if ((cVar12 == '\0') &&
                     (cVar12 = FUN_180260690(extraout_XMM0_Da_07,uVar5),
                     param_1 = extraout_XMM0_Da_08, cVar12 == '\0')) break;
                }
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
          }
          else {
            cVar12 = FUN_180260600(lVar7,uVar5);
            param_1 = extraout_XMM0_Da_05;
            if ((cVar12 != '\0') ||
               (cVar12 = FUN_180260690(extraout_XMM0_Da_05,uVar5), param_1 = extraout_XMM0_Da_06,
               cVar12 != '\0')) goto LAB_18025ebd0;
          }
        }
        if ((uVar18 == *(ulonglong *)(in_RCX + 0x18)) && (uVar13 == *(ulonglong *)(in_RCX + 0x20)))
        {
          *(ulonglong *)(in_RCX + 8) = uVar18;
          *(ulonglong *)(in_RCX + 0x10) = uVar15;
          if (uVar15 != *(ulonglong *)(in_RCX + 0x20)) {
            FUN_18025f270(in_RCX,param_2,param_5);
            FUN_18025f400(in_RCX);
            goto LAB_18025ec56;
          }
        }
      }
      goto LAB_18025ec52;
    }
  }
  else {
LAB_18025ec52:
    *(undefined1 *)(in_RCX + 3) = 1;
  }
LAB_18025ec56:
  local_78 = *(undefined4 *)(in_RCX + 8);
  uStack_74 = *(undefined4 *)(in_RCX + 0xc);
  uStack_70 = *(undefined4 *)(in_RCX + 0x10);
  uStack_6c = *(undefined4 *)(in_RCX + 0x14);
  bVar19 = 0;
  FUN_18025dda0(local_88,&local_98,param_2,&local_78);
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar7 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar15 = local_98 + 1;
  fVar1 = *(float *)(*(longlong *)(*(longlong *)(lVar7 + 0xec0) + 0x1520) + 0x11c);
  if (*(char *)(lVar7 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar2 = *(float *)(*(longlong *)(*(longlong *)(lVar7 + 0xec0) + 0x1520) + 0x118);
  Var11 = (unkuint9)uStack_90;
  cVar12 = *(char *)(lVar7 + 0x10);
  if (cVar12 == '\0') {
    __dyn_tls_on_demand_init();
    cVar12 = *(char *)(lVar7 + 0x10);
  }
  lVar8 = *(longlong *)(lVar7 + 0xec0);
  uVar18 = 0;
  *(uint *)(lVar8 + 0x1f48) = *(uint *)(lVar8 + 0x1f48) | 1;
  *(float *)(lVar8 + 0x1f58) = param_6 + fVar2 + (float)(unkint9)Var11 * (float)param_7;
  *(float *)(lVar8 + 0x1f5c) = (float)uVar15 * param_7._4_4_ + fVar1;
  *(undefined8 *)(lVar8 + 0x1f60) = 0;
  *(undefined4 *)(lVar8 + 0x1f4c) = 1;
  uVar15 = *(longlong *)(in_RCX + 0x118) - *(longlong *)(in_RCX + 0x110) >> 5;
  if (uVar15 == 0) {
    if ((*(char *)(in_RCX + 0x128) == '\0') && (*(char *)(in_RCX + 0x130) == '\0')) {
      *(undefined1 *)(in_RCX + 3) = 1;
    }
    uVar13 = 1;
  }
  else {
    uVar13 = 10;
    if (uVar15 < 10) {
      uVar13 = uVar15;
    }
  }
  if (cVar12 == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar8 = *(longlong *)(lVar7 + 0xec0);
  if (*(char *)(lVar7 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar9 = *(longlong *)(lVar7 + 0xec0);
  uVar10 = *(ulonglong *)(in_RCX + 0x68);
  fVar1 = *(float *)(lVar9 + 0xcc8);
  fVar2 = *(float *)(lVar8 + 0xc90);
  fVar3 = *(float *)(lVar9 + 0x1238);
  fVar4 = *(float *)(lVar9 + 0xcd8);
  if (*(char *)(lVar7 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar8 = *(longlong *)(lVar7 + 0xec0);
  *(uint *)(lVar8 + 0x1f48) = *(uint *)(lVar8 + 0x1f48) | 2;
  *(float *)(lVar8 + 0x1f68) = (float)uVar10 * (float)param_7;
  *(float *)(lVar8 + 0x1f6c) = (fVar1 + fVar1 + fVar3 + fVar4) * (float)uVar13 + fVar2 + fVar2;
  *(undefined4 *)(lVar8 + 0x1f50) = 1;
  cVar12 = FUN_180281720("AutoCompleteContextMenu",0x31000);
  if (cVar12 == '\0') {
    *(undefined1 *)(in_RCX + 3) = 0;
    *(undefined1 *)(in_RCX + 1) = 0;
  }
  else {
    if (*(char *)(lVar7 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (*(char *)(*(longlong *)(*(longlong *)(lVar7 + 0xec0) + 0x1520) + 0xd3) != '\0') {
      if (*(char *)(lVar7 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar8 = *(longlong *)(lVar7 + 0xec0);
      *(undefined1 *)(*(longlong *)(lVar8 + 0x1520) + 0xce) = 1;
      FUN_180282660(*(undefined8 *)(lVar8 + 0x1520));
    }
    if (*(char *)(in_RCX + 3) == '\0') {
      if (uVar15 == 0) {
        plVar17 = (longlong *)(in_RCX + 0x48);
        if (0xf < *(ulonglong *)(in_RCX + 0x60)) {
          plVar17 = (longlong *)*plVar17;
        }
        FUN_1802aa3c0(plVar17,0,1);
      }
      else {
        uVar15 = *(longlong *)(in_RCX + 0x118) - *(longlong *)(in_RCX + 0x110) >> 5;
        cVar12 = FUN_18027bb30(0x203,1,0);
        if (cVar12 == '\0') {
          cVar12 = FUN_18027bb30(0x204,1,0);
          if (cVar12 == '\0') {
            bVar21 = false;
            cVar12 = FUN_18027bb30(0x200,1,0);
            if ((((cVar12 != '\0') || (cVar12 = FUN_18027bb30(0x20d,1,0), cVar12 != '\0')) ||
                (cVar12 = FUN_18027bb30(0x273,1,0), cVar12 != '\0')) ||
               (((*(char *)(in_RCX + 0x38) != '\0' && (*(char *)(in_RCX + 0x130) != '\0')) &&
                (*(longlong *)(in_RCX + 0x118) - *(longlong *)(in_RCX + 0x110) == 0x20)))) {
              bVar19 = 1;
              *(undefined1 *)(in_RCX + 3) = 1;
            }
          }
          else {
            bVar21 = true;
            uVar13 = uVar18;
            if (*(longlong *)(in_RCX + 0x138) != uVar15 - 1) {
              uVar13 = *(longlong *)(in_RCX + 0x138) + 1;
            }
            *(ulonglong *)(in_RCX + 0x138) = uVar13;
          }
        }
        else {
          bVar21 = true;
          uVar13 = uVar15;
          if (*(ulonglong *)(in_RCX + 0x138) != 0) {
            uVar13 = *(ulonglong *)(in_RCX + 0x138);
          }
          *(ulonglong *)(in_RCX + 0x138) = uVar13 - 1;
        }
        uVar22 = DAT_180380ac0;
        if (uVar15 != 0) {
          do {
            FUN_18027ae00(uVar18 & 0xffffffff);
            uVar13 = *(ulonglong *)(in_RCX + 0x138);
            if ((bVar21) && (uVar18 == uVar13)) {
              FUN_1802809c0(uVar22);
            }
            if (*(char *)(lVar7 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0xec0) + 0x1520);
            if ((*(longlong *)(lVar8 + 0x1c8) != 0) ||
               (pfVar16 = (float *)(lVar8 + 0x280),
               *(longlong *)(*(longlong *)(lVar7 + 0xec0) + 0x2368) != 0)) {
              pfVar16 = (float *)(lVar8 + 0x250);
            }
            fVar1 = *pfVar16;
            fVar2 = *(float *)(lVar8 + 0x118);
            if (*(ulonglong *)(in_RCX + 0xd0) < 0x10) {
              local_98 = in_RCX + 0xb8;
            }
            else {
              local_98 = *(ulonglong *)(in_RCX + 0xb8);
            }
            uStack_90 = *(ulonglong *)(in_RCX + 200);
            local_88 = (char *)(uVar18 * 0x20 + *(longlong *)(in_RCX + 0x110));
            if (0xf < *(ulonglong *)(local_88 + 0x18)) {
              local_88 = *(char **)local_88;
            }
            local_80 = strlen(local_88);
            cVar12 = FUN_18025e340(&local_88,&local_98,fVar1 - fVar2,uVar18 == uVar13);
            if (cVar12 != '\0') {
              *(ulonglong *)(in_RCX + 0x138) = uVar18;
              bVar19 = 1;
              *(undefined1 *)(in_RCX + 3) = 1;
            }
            if (*(char *)(lVar7 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0xec0) + 0x1520);
            iVar6 = *(int *)(lVar8 + 0x108);
            if (iVar6 < 2) {
              FUN_18027e9c0("Calling PopID() too many times!");
            }
            else {
              *(int *)(lVar8 + 0x108) = iVar6 + -1;
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 < uVar15);
          FUN_180281800();
          goto LAB_18025f1ad;
        }
      }
      FUN_180281800();
    }
    else {
      FUN_180281560();
      *(undefined1 *)(in_RCX + 3) = 0;
      *(undefined1 *)(in_RCX + 1) = 0;
      FUN_180281800();
    }
  }
LAB_18025f1ad:
  return (ulonglong)bVar19;
}



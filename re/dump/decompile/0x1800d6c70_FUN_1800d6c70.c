// 0x1800d6c70  FUN_1800d6c70
// size=977 thunk=false
// signature: undefined FUN_1800d6c70()
// status: ok


undefined8
FUN_1800d6c70(undefined8 param_1,uint *param_2,longlong param_3,longlong param_4,longlong *param_5,
             char param_6,char param_7,char param_8)

{
  longlong lVar1;
  double dVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined7 uVar9;
  ulonglong uVar7;
  char *pcVar8;
  int iVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  uVar7 = DAT_1803fa608;
  dVar2 = 0.0;
  dVar11 = DAT_180380bd0;
  if (DAT_1803fa608 == 0) {
    uVar12 = 0;
    uVar13 = 0;
  }
  else {
    uVar12 = (undefined4)*(undefined8 *)(DAT_1803fa608 + 0x10);
    uVar13 = (undefined4)((ulonglong)*(undefined8 *)(DAT_1803fa608 + 0x10) >> 0x20);
    if (0.0 < *(double *)(DAT_1803fa608 + 0x28)) {
      dVar11 = *(double *)(DAT_1803fa608 + 0x28);
    }
  }
  if ((param_4 != DAT_1803fe9d8) ||
     ((double)CONCAT44(uVar13,uVar12) <= DAT_1803e9738 &&
      DAT_1803e9738 != (double)CONCAT44(uVar13,uVar12))) {
    DAT_1803fd354 = '\0';
    DAT_1803fe3c0 = 0.0;
    DAT_1803e9998 = 0xffffffff;
    DAT_1803fcf58 = (double)CONCAT44(uVar13,uVar12) + DAT_180380ca0;
    DAT_1803fe9d8 = param_4;
  }
  DAT_1803e9738 = (double)CONCAT44(uVar13,uVar12);
  if ((param_3 == 0) || ((*(byte *)(param_3 + 0x20) & 1) == 0)) {
    bVar3 = false;
LAB_1800d6d73:
    if (((double)CONCAT44(uVar13,uVar12) <= DAT_1803fcf58 &&
         DAT_1803fcf58 != (double)CONCAT44(uVar13,uVar12)) || (param_6 == '\0')) {
      if ((param_7 == '\0') && (!bVar3)) {
        param_2[8] = param_2[8] & 0xfffffffe;
      }
      goto LAB_1800d6d90;
    }
    if (1 < (int)*param_2) {
      uVar6 = FUN_18001e5b0(param_4);
      if ((int)uVar6 == 0) {
        if ((param_7 == '\0') && (!bVar3)) {
          param_2[8] = param_2[8] & 0xfffffffe;
        }
        DAT_1803fd354 = '\0';
        DAT_1803db438 = 0;
        uVar9 = (undefined7)((ulonglong)uVar6 >> 8);
        goto LAB_1800d7062;
      }
      uVar7 = (**(code **)(*param_5 + 0x48))(param_5,param_4);
      if ((char)uVar7 == '\0') {
        if (DAT_1803fd354 == '\0') {
          uVar6 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
          uVar6 = FUN_180241610(uVar6,0x9653fa4f0c4e1755);
          pcVar8 = (char *)FUN_1801fcfc0(uVar6);
          if (*pcVar8 == '\0') {
LAB_1800d6edc:
            uVar7 = (ulonglong)pcVar8 & 0xffffffffffffff00;
          }
          else {
            uVar6 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
            uVar6 = FUN_180241610(uVar6,0xfbdfb712f0666000);
            pcVar8 = (char *)FUN_1801fcfc0(uVar6);
            if (*pcVar8 == '\0') goto LAB_1800d6edc;
            uVar7 = CONCAT71((int7)((ulonglong)pcVar8 >> 8),1);
          }
          if ((char)uVar7 == '\0') {
            uVar14 = (undefined4)DAT_180380c18;
            uVar15 = (undefined4)((ulonglong)DAT_180380c18 >> 0x20);
          }
          else {
            uVar14 = (undefined4)DAT_180380c40;
            uVar15 = (undefined4)((ulonglong)DAT_180380c40 >> 0x20);
          }
          if ((DAT_1803fe3c0 <= 0.0) ||
             (dVar11 = (double)(int)DAT_1803fedc0 * dVar11 +
                       (double)CONCAT44(uVar15,uVar14) + DAT_1803fe3c0,
             dVar11 < (double)CONCAT44(uVar13,uVar12) || dVar11 == (double)CONCAT44(uVar13,uVar12)))
          {
            uVar7 = (**(code **)(*param_5 + 0x40))(param_5,param_4);
            if ((char)uVar7 == '\0') {
              param_2[8] = param_2[8] & 0xfffffffe;
              uVar4 = DAT_1803fedc0;
            }
            else {
              param_2[8] = param_2[8] | 1;
              if (param_8 != '\0') {
                DAT_1803db5ee = 1;
              }
              DAT_1803fd354 = '\x01';
              DAT_1803e9998 = *param_2;
              if (0.0 < DAT_1803feb50) {
                DAT_1803f9218 = DAT_1803f9218 + 1;
                uVar4 = DAT_1803f9218 & 0x80000007;
                if ((int)uVar4 < 0) {
                  uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
                }
                if (uVar4 == 0) {
                  dVar11 = (double)CONCAT44(uVar13,uVar12) - DAT_1803feb50;
                  if (0.0 < dVar11) {
                    dVar2 = DAT_180380d08 / dVar11;
                  }
                  FUN_180014410("[ZC-FIRE] dt=%.3f cps=%.1f off=%dtick floor=%.3f\n",dVar11,dVar2,
                                DAT_1803fedc0,CONCAT44(uVar15,uVar14));
                }
              }
              DAT_1803feb50 = (double)CONCAT44(uVar13,uVar12);
              DAT_1803fe3c0 = (double)CONCAT44(uVar13,uVar12);
              iVar10 = 0;
              uVar4 = DAT_1803fedc0;
              do {
                uVar7 = (ulonglong)DAT_1803fedc0;
                if (uVar4 != DAT_1803fedc0) break;
                iVar5 = rand();
                lVar1 = (longlong)iVar5;
                uVar7 = lVar1 * 0x55555556 & 0xffffffff;
                uVar4 = iVar5 + (iVar5 / 3 + (iVar5 >> 0x1f) +
                                (int)((lVar1 / 3 + (lVar1 >> 0x3f) & 0xffffffffU) >> 0x1f)) * -3;
                iVar10 = iVar10 + 1;
              } while (iVar10 < 8);
            }
          }
          else {
            param_2[8] = param_2[8] & 0xfffffffe;
            uVar4 = DAT_1803fedc0;
          }
        }
        else {
          uVar7 = (ulonglong)*param_2;
          if (DAT_1803e9998 == *param_2) {
            param_2[8] = param_2[8] | 1;
            goto LAB_1800d6e41;
          }
          param_2[8] = param_2[8] & 0xfffffffe;
          DAT_1803fd354 = '\0';
          uVar4 = DAT_1803fedc0;
        }
      }
      else {
        param_2[8] = param_2[8] | 1;
LAB_1800d6e41:
        uVar4 = DAT_1803fedc0;
        if (param_8 != '\0') {
          DAT_1803db5ee = 1;
        }
      }
      goto LAB_1800d7059;
    }
  }
  else {
    bVar3 = true;
    if (param_7 != '\0') goto LAB_1800d6d73;
LAB_1800d6d90:
    DAT_1803fd354 = '\0';
    uVar4 = DAT_1803fedc0;
LAB_1800d7059:
    DAT_1803fedc0 = uVar4;
    DAT_1803db438 = 0;
  }
  uVar9 = (undefined7)(uVar7 >> 8);
LAB_1800d7062:
  return CONCAT71(uVar9,1);
}



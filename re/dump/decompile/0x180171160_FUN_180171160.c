// 0x180171160  FUN_180171160
// size=719 thunk=false
// signature: undefined FUN_180171160()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float FUN_180171160(longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  float local_64;
  ulonglong local_60;
  
  local_60 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  if (param_2 == 0xd) {
    param_2 = *(uint *)(param_1 + 1);
  }
  if (((param_2 == 8) || (param_2 == 0xd)) ||
     ((((param_2 - 2 < 2 || (param_2 - 9 < 4)) && (param_1 != (longlong *)0x0)) &&
      ((iVar8 = (**(code **)(*param_1 + 8))(), iVar8 == 4 || (iVar8 == 7)))))) {
    fVar13 = 0.0;
  }
  else {
    plVar6 = DAT_1803fb108;
    fVar5 = DAT_180380bb0;
    fVar4 = DAT_180380b3c;
    fVar3 = DAT_180380a38;
    fVar13 = 0.0;
    for (plVar9 = DAT_1803fb100; (plVar9 != plVar6 && ((longlong *)*plVar9 != param_1));
        plVar9 = plVar9 + 1) {
      bVar10 = *(uint *)((longlong *)*plVar9 + 1) == param_2;
      if ((param_1 == (longlong *)0x0) ||
         (((iVar8 = (**(code **)(*param_1 + 8))(param_1), iVar8 != 4 && (iVar8 != 7)) ||
          (1 < param_2)))) {
        if (((longlong *)*plVar9 != (longlong *)0x0) &&
           ((iVar8 = (**(code **)(*(longlong *)*plVar9 + 8))(), iVar8 == 4 || (iVar8 == 7)))) {
          uVar1 = param_2;
          if (*(int *)(*plVar9 + 8) == 0) goto joined_r0x0001801712b4;
          if (*(int *)(*plVar9 + 8) == 1) {
            if ((param_2 != 1) && (1 < param_2 - 6)) goto LAB_1801712bf;
            goto LAB_1801712aa;
          }
        }
      }
      else {
        uVar1 = *(uint *)(*plVar9 + 8);
        if (param_2 == 0) {
joined_r0x0001801712b4:
          if (((uVar1 & 0xfffffffa) == 0) && (uVar1 != 1)) {
            bVar10 = true;
          }
          else {
LAB_1801712bf:
            bVar10 = false;
          }
        }
        else if (uVar1 == 1) {
LAB_1801712aa:
          bVar10 = true;
        }
        else {
          if (1 < uVar1 - 6) goto LAB_1801712bf;
          bVar10 = true;
        }
      }
      if (((((bVar10) && (plVar2 = (longlong *)*plVar9, *(char *)((longlong)plVar2 + 0x14) != '\0'))
           && ((DAT_1803fcb80 != '\0' ||
               (((DAT_1803fcb81 == '\0' || (*(char *)((longlong)plVar2 + 0x16) != '\0')) &&
                ((*(char *)((longlong)plVar2 + 0x15) == '\0' ||
                 (DAT_1803fcb68 <= *(float *)(plVar2 + 3))))))))) &&
          ((cVar7 = (**(code **)(*plVar2 + 0x38))(), cVar7 != '\0' &&
           (((plVar2 = (longlong *)*plVar9, plVar2 == (longlong *)0x0 ||
             (iVar8 = (**(code **)(*plVar2 + 8))(plVar2), iVar8 != 7)) || (plVar2[0x16] == 0))))))
         && (((1 < param_2 - 2 && (3 < param_2 - 9)) ||
             ((((longlong *)*plVar9 == (longlong *)0x0 ||
               ((iVar8 = (**(code **)(*(longlong *)*plVar9 + 8))(), iVar8 != 4 && (iVar8 != 7)))) &&
              (((1 < param_2 - 2 && (3 < param_2 - 9)) ||
               ((param_1 == (longlong *)0x0 ||
                ((iVar8 = (**(code **)(*param_1 + 8))(param_1), iVar8 != 4 && (iVar8 != 7)))))))))))
         ) {
        (**(code **)(*(longlong *)*plVar9 + 0x10))((longlong *)*plVar9,local_68);
        fVar11 = fVar5;
        if ((DAT_1803fcb80 == '\0') &&
           ((fVar12 = DAT_1803fcb6c * fVar3 + fVar4, fVar11 = fVar4, fVar4 <= fVar12 &&
            (fVar11 = fVar5, fVar12 <= fVar5)))) {
          fVar11 = fVar12;
        }
        fVar13 = fVar13 + fVar11 + fVar11 + local_64;
      }
    }
  }
  return fVar13;
}



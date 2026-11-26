// 0x180034ac0  FUN_180034ac0
// size=1384 thunk=false
// signature: undefined FUN_180034ac0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180034ac0(undefined8 param_1,longlong *param_2,longlong param_3,undefined4 param_4,
                       char param_5,undefined8 *param_6,undefined8 *param_7,undefined1 *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 ******ppppppuVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined1 local_b0 [32];
  undefined8 local_90;
  undefined8 *****local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  local_b8 = param_8;
  iVar1 = 0;
  param_6[2] = 0;
  puVar8 = param_6;
  if (0xf < (ulonglong)param_6[3]) {
    puVar8 = (undefined8 *)*param_6;
  }
  *(undefined1 *)puVar8 = 0;
  *param_7 = 0;
  *param_8 = 0;
  if (param_2 != (longlong *)0x0) {
    if ((DAT_1803fb088 == (code *)0x0) || (param_2[1] == 0)) {
      iVar1 = (**(code **)*param_2)(param_2);
    }
    else {
      iVar1 = (*DAT_1803fb088)();
    }
  }
  plVar7 = (longlong *)(param_3 + 0x20);
  if (0xf < *(ulonglong *)(param_3 + 0x38)) {
    plVar7 = (longlong *)*plVar7;
  }
  (*DAT_1803fafa0)(param_1,plVar7);
  (*DAT_1803faef0)(param_1,param_4);
  iVar2 = (*DAT_1803faff8)(param_1,0xffffffff);
  if (((1 < iVar2 - 3U) && (*(char *)(param_3 + 0x80) != '\0')) && (param_5 != '\0')) {
    if (param_2 != (longlong *)0x0) {
      if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (param_2[1] == 0)) {
        (**(code **)(*param_2 + 0x10))(param_2,1);
      }
      else {
        iVar3 = (*DAT_1803fb088)();
        iVar2 = 0;
        if (-1 < iVar3 + -1) {
          iVar2 = iVar3 + -1;
        }
        (*DAT_1803faf10)(param_2[1],iVar2);
      }
    }
    if (*(char *)(param_3 + 0x81) == '\0') {
      plVar7 = (longlong *)(param_3 + 0x58);
      if (0xf < *(ulonglong *)(param_3 + 0x70)) {
        plVar7 = (longlong *)*plVar7;
      }
      (*DAT_1803fafa0)(param_1,plVar7);
    }
    else {
      (*DAT_1803faed8)(param_1);
    }
    iVar2 = (*DAT_1803faff8)(param_1,0xffffffff);
  }
  if (*(longlong *)(param_3 + 0x40) != *(longlong *)(param_3 + 0x48)) {
    if (1 < iVar2 - 3U) {
      do {
        if (param_2 != (longlong *)0x0) {
          if ((DAT_1803fb088 != (code *)0x0) && (param_2[1] != 0)) {
            uVar5 = (*DAT_1803fb088)();
            goto LAB_180034c92;
          }
          uVar5 = (**(code **)*param_2)(param_2);
          goto LAB_180034c92;
        }
        do {
          uVar5 = 0;
LAB_180034c92:
          if ((int)uVar5 <= iVar1) {
            return uVar5 & 0xffffffffffffff00;
          }
        } while (param_2 == (longlong *)0x0);
        if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (param_2[1] == 0))
        {
          (**(code **)(*param_2 + 0x10))(param_2,1);
        }
        else {
          iVar3 = (*DAT_1803fb088)();
          iVar2 = 0;
          if (-1 < iVar3 + -1) {
            iVar2 = iVar3 + -1;
          }
          (*DAT_1803faf10)(param_2[1],iVar2);
        }
      } while( true );
    }
    uStack_80 = 0;
    local_78 = _DAT_1803814b0;
    uStack_70 = _UNK_1803814b8;
    local_88 = (undefined8 ******)0x0;
    if (iVar2 == 3) {
      uVar10 = (*DAT_1803fafc0)();
    }
    else {
      uVar10 = 0;
      local_90 = 0;
      lVar6 = (*DAT_1803fb008)(param_1,0xffffffff,&local_90);
      if (lVar6 != 0) {
        FUN_180212700(&local_88,lVar6,local_90);
      }
    }
    if (param_2 != (longlong *)0x0) {
      if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (param_2[1] == 0)) {
        (**(code **)(*param_2 + 0x10))(param_2,1);
      }
      else {
        iVar4 = (*DAT_1803fb088)();
        iVar3 = 0;
        if (-1 < iVar4 + -1) {
          iVar3 = iVar4 + -1;
        }
        (*DAT_1803faf10)(param_2[1],iVar3);
      }
    }
    plVar7 = *(longlong **)(param_3 + 0x40);
    if (0xf < (ulonglong)plVar7[3]) {
      plVar7 = (longlong *)*plVar7;
    }
    (*DAT_1803fafa0)(param_1,plVar7);
    (*DAT_1803faef0)(param_1,0xffffd8ee);
    iVar3 = (*DAT_1803faff8)(param_1,0xffffffff);
    uVar5 = 1;
    while (iVar3 == 5) {
      if ((ulonglong)(*(longlong *)(param_3 + 0x48) - *(longlong *)(param_3 + 0x40) >> 5) <=
          uVar5 + 1) break;
      puVar8 = (undefined8 *)(*(longlong *)(param_3 + 0x40) + uVar5 * 0x20);
      if (0xf < (ulonglong)puVar8[3]) {
        puVar8 = (undefined8 *)*puVar8;
      }
      (*DAT_1803fafa0)(param_1,puVar8);
      (*DAT_1803faef0)(param_1,0xfffffffe);
      iVar3 = (*DAT_1803faff8)(param_1,0xffffffff);
      uVar5 = uVar5 + 1;
    }
    iVar4 = 0;
    if (iVar3 == 5) {
      if (iVar2 == 3) {
        (*DAT_1803faed8)(param_1,uVar10);
      }
      else {
        ppppppuVar9 = &local_88;
        if (0xf < uStack_70) {
          ppppppuVar9 = (undefined8 ******)local_88;
        }
        (*DAT_1803fafa0)(param_1,ppppppuVar9);
      }
      (*DAT_1803faef0)(param_1,0xfffffffe);
      iVar2 = (*DAT_1803faff8)(param_1,0xffffffff);
      if (iVar2 == 5) {
        puVar8 = (undefined8 *)(*(longlong *)(param_3 + 0x48) + -0x20);
        if (0xf < *(ulonglong *)(*(longlong *)(param_3 + 0x48) + -8)) {
          puVar8 = (undefined8 *)*puVar8;
        }
        (*DAT_1803fafa0)(param_1,puVar8);
        (*DAT_1803faef0)(param_1,0xfffffffe);
        iVar4 = (*DAT_1803faff8)(param_1,0xffffffff);
      }
    }
    iVar2 = iVar4;
    FUN_18020e450(&local_88);
    param_8 = local_b8;
  }
  if (iVar2 == 3) {
    uVar11 = (*DAT_1803fafc0)(param_1,0xffffffff);
    *param_7 = uVar11;
    *param_8 = 1;
    uVar11 = FUN_180027490(local_b0,(int)*param_7);
    FUN_18020e8a0(param_6,uVar11);
    FUN_18020e450(local_b0);
  }
  else {
    uVar5 = 0;
    if (iVar2 != 4) goto LAB_180034f82;
    local_90 = 0;
    lVar6 = (*DAT_1803fb008)(param_1,0xffffffff,&local_90);
    if (lVar6 == 0) goto LAB_180034f82;
    FUN_180212700(param_6,lVar6,local_90);
  }
  uVar5 = 1;
LAB_180034f82:
  do {
    if (param_2 != (longlong *)0x0) {
      if ((DAT_1803fb088 != (code *)0x0) && (param_2[1] != 0)) {
        iVar2 = (*DAT_1803fb088)();
        goto LAB_180034fac;
      }
      iVar2 = (**(code **)*param_2)(param_2);
      goto LAB_180034fac;
    }
    do {
      iVar2 = 0;
LAB_180034fac:
      if (iVar2 <= iVar1) {
        return uVar5;
      }
    } while (param_2 == (longlong *)0x0);
    if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (param_2[1] == 0)) {
      (**(code **)(*param_2 + 0x10))(param_2,1);
    }
    else {
      iVar3 = (*DAT_1803fb088)();
      iVar2 = 0;
      if (-1 < iVar3 + -1) {
        iVar2 = iVar3 + -1;
      }
      (*DAT_1803faf10)(param_2[1],iVar2);
    }
  } while( true );
}



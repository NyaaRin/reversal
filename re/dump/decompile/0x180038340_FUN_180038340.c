// 0x180038340  FUN_180038340
// size=1052 thunk=false
// signature: undefined FUN_180038340()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180038340(int param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  longlong local_68 [4];
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  param_4[2] = 0;
  puVar7 = param_4;
  if (0xf < (ulonglong)param_4[3]) {
    puVar7 = (undefined8 *)*param_4;
  }
  *(undefined1 *)puVar7 = 0;
  if ((((((0 < param_1) && (DAT_1803faf80 != (code *)0x0)) && (DAT_1803faef0 != (code *)0x0)) &&
       ((DAT_1803fafa0 != (code *)0x0 && (DAT_1803faed8 != (code *)0x0)))) &&
      ((DAT_1803faff8 != (code *)0x0 &&
       ((DAT_1803fb008 != (code *)0x0 && (DAT_1803fb088 != (code *)0x0)))))) &&
     ((DAT_1803faf10 != (code *)0x0 &&
      ((((DAT_1803fa678 != (longlong *)0x0 &&
         (puVar7 = (undefined8 *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0),
         puVar7 != (undefined8 *)0x0)) && (lVar1 = puVar7[1], lVar1 != 0)) &&
       (DAT_1803fa678 != (longlong *)0x0)))))) {
    lVar8 = (**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
    puVar7 = (undefined8 *)0x0;
    if (lVar8 != 0) {
      local_80 = (undefined8 *)0x0;
      puStack_78 = (undefined8 *)0x0;
      local_70 = 0;
      local_68[2] = 0;
      local_68[3] = _DAT_1803814b0;
      uStack_48 = _UNK_1803814b8;
      local_68[1] = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      FUN_18001d080(&local_a0,"sam.player.get_nwvar",0x14);
      iVar10 = 1;
      local_a8 = 1;
      cVar3 = FUN_180026bc0(&local_a0,&local_80,local_68 + 1);
      if ((cVar3 == '\0') || (local_80 == puStack_78)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      local_a8 = 0;
      FUN_18020e450(&local_a0);
      if ((bVar2) ||
         ((local_a4 = (*DAT_1803fb088)(lVar1), DAT_1803fb038 != (code *)0x0 &&
          (iVar4 = (*DAT_1803fb038)(lVar1,(int)((longlong)puStack_78 - (longlong)local_80 >> 5) + 6)
          , iVar4 == 0)))) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        puVar7 = local_80;
        if (0xf < (ulonglong)local_80[3]) {
          puVar7 = (undefined8 *)*local_80;
        }
        (*DAT_1803fafa0)(lVar1,puVar7);
        (*DAT_1803faef0)(lVar1,0xffffd8ee);
        uVar9 = 1;
        if (1 < (ulonglong)((longlong)puStack_78 - (longlong)local_80 >> 5)) {
          do {
            iVar4 = (*DAT_1803faff8)(lVar1,0xffffffff);
            if (iVar4 != 5) break;
            puVar7 = local_80 + uVar9 * 4;
            if (0xf < (ulonglong)puVar7[3]) {
              puVar7 = (undefined8 *)*puVar7;
            }
            (*DAT_1803fafa0)(lVar1,puVar7);
            (*DAT_1803faef0)(lVar1,0xfffffffe);
            uVar9 = uVar9 + 1;
          } while (uVar9 < (ulonglong)((longlong)puStack_78 - (longlong)local_80 >> 5));
        }
        iVar4 = (*DAT_1803faff8)(lVar1,0xffffffff);
        if (iVar4 == 6) {
          uVar5 = (*DAT_1803fb088)(lVar1);
          do {
            lVar8 = (*DAT_1803faf80)(lVar1,uVar5,iVar10);
            if (lVar8 == 0) goto LAB_180038709;
            iVar4 = (*DAT_1803faff8)(lVar1,0xffffffff);
            if (iVar4 == 5) {
              uVar6 = (*DAT_1803fb088)(lVar1);
              (*DAT_1803faed8)(lVar1,(double)param_1);
              (*DAT_1803faef0)(lVar1,uVar6);
              iVar4 = (*DAT_1803faff8)(lVar1,0xffffffff);
              if (iVar4 == 5) {
                uVar6 = (*DAT_1803fb088)(lVar1);
                (*DAT_1803fafa0)(lVar1,&DAT_180341d64);
                (*DAT_1803faef0)(lVar1,uVar6);
                iVar4 = (*DAT_1803faff8)(lVar1,0xffffffff);
                if (iVar4 == 4) {
                  local_68[0] = 0;
                  lVar8 = (*DAT_1803fb008)(lVar1,0xffffffff,local_68);
                  if ((lVar8 != 0) && (local_68[0] - 1U < 0x40)) {
                    FUN_180212700(param_4,lVar8);
                    uVar11 = 1;
                    goto LAB_180038709;
                  }
                }
              }
            }
            (*DAT_1803faf10)(lVar1,uVar5);
            iVar10 = iVar10 + 1;
          } while (iVar10 < 9);
          (*DAT_1803faf10)(lVar1,local_a4);
        }
        else {
LAB_180038709:
          (*DAT_1803faf10)(lVar1,local_a4);
        }
      }
      FUN_18020e450(local_68 + 1);
      FUN_18020d5c0(&local_80);
      return uVar11;
    }
  }
  return (ulonglong)puVar7 & 0xffffffffffffff00;
}



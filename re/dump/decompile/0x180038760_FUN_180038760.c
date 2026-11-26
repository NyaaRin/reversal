// 0x180038760  FUN_180038760
// size=666 thunk=false
// signature: undefined FUN_180038760()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180038760(void)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  uVar6 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  local_98 = 0;
  if ((((((DAT_1803faef0 != (code *)0x0) && (DAT_1803fafa0 != (code *)0x0)) &&
        (DAT_1803faff8 != (code *)0x0)) &&
       ((DAT_1803fb088 != (code *)0x0 && (DAT_1803faf10 != (code *)0x0)))) &&
      ((DAT_1803fa678 != (longlong *)0x0 &&
       ((local_38 = uVar6, uVar6 = (**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0), uVar6 != 0
        && (lVar1 = *(longlong *)(uVar6 + 8), lVar1 != 0)))))) && (DAT_1803fa678 != (longlong *)0x0)
     ) {
    lVar7 = (**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
    uVar6 = 0;
    if (lVar7 != 0) {
      local_70 = (undefined8 *)0x0;
      puStack_68 = (undefined8 *)0x0;
      local_60 = 0;
      uStack_50 = 0;
      local_48 = _DAT_1803814b0;
      uStack_40 = _UNK_1803814b8;
      local_58 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      FUN_18001d080(&local_90,"ray.HasAccess",0xd);
      uVar6 = 1;
      local_98 = 1;
      cVar3 = FUN_180026bc0(&local_90,&local_70,&local_58);
      if ((cVar3 == '\0') || (local_70 == puStack_68)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      local_98 = 0;
      FUN_18020e450(&local_90);
      if ((bVar2) ||
         ((uVar4 = (*DAT_1803fb088)(lVar1), DAT_1803fb038 != (code *)0x0 &&
          (iVar5 = (*DAT_1803fb038)(lVar1,(int)((longlong)puStack_68 - (longlong)local_70 >> 5) + 4)
          , iVar5 == 0)))) {
        uVar6 = 0;
      }
      else {
        puVar8 = local_70;
        if (0xf < (ulonglong)local_70[3]) {
          puVar8 = (undefined8 *)*local_70;
        }
        (*DAT_1803fafa0)(lVar1,puVar8);
        (*DAT_1803faef0)(lVar1,0xffffd8ee);
        if (1 < (ulonglong)((longlong)puStack_68 - (longlong)local_70 >> 5)) {
          do {
            iVar5 = (*DAT_1803faff8)(lVar1,0xffffffff);
            if (iVar5 != 5) goto LAB_1800389b1;
            puVar8 = local_70 + uVar6 * 4;
            if (0xf < (ulonglong)puVar8[3]) {
              puVar8 = (undefined8 *)*puVar8;
            }
            (*DAT_1803fafa0)(lVar1,puVar8);
            (*DAT_1803faef0)(lVar1,0xfffffffe);
            uVar6 = uVar6 + 1;
          } while (uVar6 < (ulonglong)((longlong)puStack_68 - (longlong)local_70 >> 5));
        }
        iVar5 = (*DAT_1803faff8)(lVar1,0xffffffff);
        if (iVar5 == 6) {
          uVar6 = 1;
          (*DAT_1803faf10)(lVar1,uVar4);
        }
        else {
LAB_1800389b1:
          uVar6 = 0;
          (*DAT_1803faf10)(lVar1,uVar4);
        }
      }
      FUN_18020e450(&local_58);
      FUN_18020d5c0(&local_70);
      return uVar6;
    }
  }
  return uVar6 & 0xffffffffffffff00;
}



// 0x180067d80  FUN_180067d80
// size=588 thunk=false
// signature: undefined FUN_180067d80()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180067d80(uint *param_1,uint *param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 ****ppppuVar7;
  ulonglong uVar8;
  uint *puVar9;
  bool bVar10;
  undefined1 auStack_98 [36];
  uint local_74;
  undefined8 ***local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_1 + 4);
  *(undefined ***)(param_2 + 2) = &PTR_vftable_std__System_error_category_1803e9500;
  if (lVar2 == 0) {
    *param_2 = 3;
    param_2[1] = local_74;
    uVar4 = (ulonglong)(uint3)(local_74 >> 8) << 8;
  }
  else {
    uVar8 = 0;
    *param_2 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 7;
    local_68 = (undefined8 ****)0x0;
    uVar4 = *(ulonglong *)(param_1 + 4);
    if (7 < uVar4) {
      FUN_18021a2e0(&local_68,uVar4);
      uVar4 = *(ulonglong *)(param_1 + 4);
    }
    local_58 = 0;
    if (7 < *(ulonglong *)(param_1 + 6)) {
      param_1 = *(uint **)param_1;
    }
    puVar1 = (uint *)((longlong)param_1 + uVar4 * 2);
    for (puVar3 = (uint *)FUN_180065240(param_1,puVar1);
        (puVar3 != puVar1 && (((short)*puVar3 == 0x5c || ((short)*puVar3 == 0x2f))));
        puVar3 = (uint *)((longlong)puVar3 + 2)) {
    }
    if ((((puVar3 != param_1) &&
         (5 < (longlong)((longlong)puVar1 - (longlong)puVar3 & 0xfffffffffffffffeU))) &&
        ((*puVar3 & 0xffffffdf) - 0x3a0041 < 0x1a)) &&
       (((short)puVar3[1] == 0x5c || ((short)puVar3[1] == 0x2f)))) {
      puVar3 = puVar3 + 1;
    }
    FUN_180211740(&local_68,param_1,(longlong)puVar3 - (longlong)param_1 >> 1);
    puVar9 = puVar3;
    if (puVar3 == puVar1) {
      uVar4 = 0;
      uVar6 = 0;
    }
    else {
LAB_180067ed3:
      do {
        if (((short)*puVar3 == 0x5c) || ((short)*puVar3 == 0x2f)) {
          puVar3 = (uint *)((longlong)puVar3 + 2);
          if (puVar3 != puVar1) goto LAB_180067ed3;
        }
        for (; ((puVar3 != puVar1 && ((short)*puVar3 != 0x5c)) && ((short)*puVar3 != 0x2f));
            puVar3 = (uint *)((longlong)puVar3 + 2)) {
        }
        FUN_180211740(&local_68,puVar9,(longlong)puVar3 - (longlong)puVar9 >> 1);
        ppppuVar7 = &local_68;
        if (7 < local_50) {
          ppppuVar7 = (undefined8 ****)local_68;
        }
        uVar4 = FUN_1802d786c(ppppuVar7);
        uVar5 = (uint)(uVar4 >> 0x20);
        if (uVar5 != 0) {
          if (uVar5 < 0x41) {
            if (((uVar5 != 0x40) && (uVar5 != 2)) && (uVar5 != 3)) {
              bVar10 = uVar5 == 0x35;
LAB_180067f69:
              if (!bVar10) {
                uVar8 = uVar4 >> 0x20;
              }
            }
          }
          else if ((uVar5 != 0x7b) && (uVar5 != 0xa1)) {
            bVar10 = uVar5 == 0x10b;
            goto LAB_180067f69;
          }
        }
        puVar9 = puVar3;
      } while (puVar3 != puVar1);
      uVar6 = uVar5;
      if ((uVar5 != 0) && (uVar6 = (uint)uVar8, (uint)uVar8 == 0)) {
        uVar6 = uVar5;
      }
    }
    *param_2 = uVar6;
    param_2[1] = local_74;
    *(undefined ***)(param_2 + 2) = &PTR_vftable_std__System_error_category_1803e9500;
    FUN_18021e290(&local_68);
    uVar4 = uVar4 & 0xff;
  }
  return uVar4;
}



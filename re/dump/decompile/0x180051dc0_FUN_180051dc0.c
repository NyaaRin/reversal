// 0x180051dc0  FUN_180051dc0
// size=1091 thunk=false
// signature: undefined FUN_180051dc0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180051dc0(void)

{
  code *pcVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  size_t sVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined4 *puVar13;
  undefined1 auStack_168 [32];
  undefined *local_148;
  undefined1 local_138;
  int local_134;
  undefined **local_130;
  undefined8 *local_128;
  undefined8 uStack_120;
  undefined4 *local_118;
  undefined4 local_110;
  undefined **local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined1 *local_b0;
  undefined8 *local_a8;
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  int local_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_168;
  if (DAT_1803eb490 != '\0') {
    FUN_180051d40();
  }
  if ((DAT_1803ff960 != 0) && (cVar5 = FUN_180051c50(), cVar5 != '\0')) {
    pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar6 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar8 = (*pcVar1)(DAT_1803fa360,uVar6);
    if (lVar8 != 0) {
      puVar13 = (undefined4 *)0x0;
      DAT_1803eb4a0 = 0;
      if (DAT_1803eb7a0 != DAT_1803eb7a8) {
        DAT_1803eb7a8 = DAT_1803eb7a0;
      }
      ppuVar12 = &PTR_s_DT_BaseEntity_180330f40;
      local_108 = (undefined **)&DAT_1803310a8;
      DAT_1803eb498 = lVar8;
      while (local_130 = ppuVar12, ppuVar12 != local_108) {
        local_134 = 0;
        local_c0 = &local_100;
        pcVar2 = *ppuVar12;
        local_100 = 0;
        uStack_f8 = 0;
        local_f0 = 0;
        local_e8 = 0;
        sVar9 = strlen(pcVar2);
        FUN_18001d080(&local_100,pcVar2,sVar9);
        local_b8 = &local_100;
        local_b0 = local_a0;
        uVar10 = FUN_18016d4c0(local_a0,&local_100);
        uVar10 = FUN_180018ef0(&DAT_1803fac80,uVar10);
        FUN_18020e450(&local_100);
        local_a8 = &local_e0;
        pcVar2 = ppuVar12[1];
        local_e0 = 0;
        uStack_d8 = 0;
        local_d0 = 0;
        local_c8 = 0;
        sVar9 = strlen(pcVar2);
        FUN_18001d080(&local_e0,pcVar2,sVar9);
        local_128 = &local_e0;
        local_118 = (undefined4 *)local_80;
        uVar11 = FUN_18016d4c0(local_80,&local_e0);
        iVar7 = FUN_180018c10(uVar10,uVar11);
        FUN_18020e450(&local_e0);
        local_134 = iVar7;
        if (iVar7 < 1) {
          ppuVar12 = ppuVar12 + 3;
        }
        else {
          uStack_58 = 0;
          uStack_50 = 0;
          uStack_5c = *(undefined4 *)(ppuVar12 + 2);
          local_60 = iVar7;
          memcpy(&uStack_58,(void *)(iVar7 + DAT_1803eb498),(longlong)*(int *)(ppuVar12 + 2));
          puVar3 = DAT_1803eb7a8;
          if (DAT_1803eb7a8 == DAT_1803eb7b0) {
            FUN_180224820(&DAT_1803eb7a0,DAT_1803eb7a8,&local_60);
          }
          else {
            *DAT_1803eb7a8 = CONCAT44(uStack_5c,local_60);
            puVar3[1] = uStack_58;
            puVar3[2] = uStack_50;
            DAT_1803eb7a8 = DAT_1803eb7a8 + 3;
          }
          ppuVar12 = ppuVar12 + 3;
        }
      }
      DAT_1803eb790 = *(undefined8 *)(DAT_1803fa608 + 0x10);
      DAT_1803eb798 = *(undefined4 *)(DAT_1803fa608 + 0x18);
      DAT_1803eb79c = 1;
      _DAT_1803eb788 = (double)DAT_1803de068 * *(double *)(DAT_1803fa608 + 0x28);
      FUN_180052250(&DAT_1803eb648);
      memset(&DAT_1803eb4a4,0,0x1a4);
      local_128 = (undefined8 *)0x0;
      uStack_120 = 0;
      FUN_180024b50(&local_128);
      lVar8 = DAT_1803eb498;
      cVar5 = (char)uStack_120;
      if (cVar5 != '\0') {
        local_118 = (undefined4 *)0x0;
        uVar6 = 0;
        local_110 = 0;
        FUN_180024cd0();
        if ((lVar8 != 0) && (-1 < DAT_1803e6ed0)) {
          puVar13 = (undefined4 *)(lVar8 + DAT_1803e6ed0);
          uVar6 = *puVar13;
          *puVar13 = 0x4e6e6b28;
          local_118 = puVar13;
          local_110 = uVar6;
        }
        uVar4 = DAT_1803fe4ac;
        local_138 = DAT_1803fe4ac;
        DAT_1803fe4ac = 1;
        local_148 = &DAT_1803eb4a4;
        (**(code **)(*DAT_1803f9290 + 0x90))
                  (DAT_1803f9290,DAT_1803eb498,&DAT_1803eb648,DAT_1803fa5a0);
        DAT_1803fe4ac = uVar4;
        if (puVar13 != (undefined4 *)0x0) {
          *puVar13 = uVar6;
        }
        if ((cVar5 != '\0') && ((longlong)DAT_1803fa368 - 1U < 0xfffffffffffffffe)) {
          *DAT_1803fa368 = local_128;
        }
        DAT_1803eb490 = 1;
        return 1;
      }
      FUN_180051cc0();
      lVar8 = DAT_1803fa608;
      DAT_1803eb79c = cVar5;
      if (DAT_1803fa608 != 0) {
        *(undefined8 *)(DAT_1803fa608 + 0x10) = DAT_1803eb790;
        *(undefined4 *)(lVar8 + 0x18) = DAT_1803eb798;
      }
      DAT_1803eb498 = 0;
      if (DAT_1803eb7a0 != DAT_1803eb7a8) {
        DAT_1803eb7a8 = DAT_1803eb7a0;
      }
    }
  }
  return 0;
}



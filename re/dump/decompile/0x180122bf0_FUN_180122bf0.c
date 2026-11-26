// 0x180122bf0  FUN_180122bf0
// size=1462 thunk=false
// signature: undefined FUN_180122bf0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180122bf0(void)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  bool bVar4;
  BOOL BVar5;
  int iVar6;
  longlong *plVar7;
  int *piVar8;
  char *_Str;
  size_t sVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  byte ****ppppbVar14;
  longlong lVar15;
  bool bVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar17;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  int local_174;
  int local_170;
  ulonglong local_168;
  ulonglong local_160;
  undefined8 *local_158;
  undefined8 *local_150;
  longlong *local_148;
  ulonglong local_140;
  ulonglong local_138;
  byte ***local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  int local_118;
  undefined1 local_110 [32];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  int local_80 [2];
  undefined8 *local_78;
  byte ***local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_198;
  bVar4 = false;
  local_178 = 0;
  if ((DAT_1803fa360 == (longlong *)0x0) || (DAT_1803fa608 == 0)) {
    FUN_18020aea0(&DAT_180458210);
    FUN_18020da70(&DAT_1805c7b10);
    lVar3 = DAT_1803edd50;
    lVar15 = DAT_1803edd48;
    if (DAT_1803edd48 != DAT_1803edd50) {
      do {
        FUN_18020e450(lVar15);
        lVar15 = lVar15 + 0x20;
      } while (lVar15 != lVar3);
      DAT_1803edd50 = DAT_1803edd48;
    }
  }
  else {
    local_170 = (**(code **)(*DAT_1803fa360 + 0x30))();
    local_80[0] = *(int *)(DAT_1803fa608 + 0x1c) + 1;
    while (local_80[0] <= local_170) {
      plVar7 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,local_80[0]);
      local_148 = plVar7;
      if (plVar7 == (longlong *)0x0) {
        FUN_18020af80(extraout_XMM0_Da,local_80);
LAB_180122ca7:
        local_80[0] = local_80[0] + 1;
      }
      else {
        BVar5 = IsBadReadPtr(plVar7,8);
        if ((BVar5 != 0) || (BVar5 = IsBadReadPtr((void *)*plVar7,8), BVar5 != 0))
        goto LAB_180122ca7;
        local_174 = 0xffffffff;
        piVar8 = (int *)(**(code **)(*plVar7 + 0x10))(plVar7);
        lVar3 = DAT_180458228;
        puVar13 = DAT_180458218;
        iVar1 = *piVar8;
        local_78 = (undefined8 *)0x0;
        local_168 = 0xcbf29ce484222325;
        for (local_140 = 0; local_140 < 4; local_140 = local_140 + 1) {
          local_168 = (local_168 ^ *(byte *)((longlong)local_80 + local_140)) * 0x100000001b3;
        }
        puVar10 = *(undefined8 **)(DAT_180458228 + 8 + (local_168 & DAT_180458240) * 0x10);
        if (puVar10 == DAT_180458218) {
          local_158 = DAT_180458218;
LAB_180122dcc:
          local_150 = (undefined8 *)0x0;
          puVar10 = DAT_180458218;
        }
        else {
          for (; local_80[0] != *(int *)(puVar10 + 2); puVar10 = (undefined8 *)puVar10[1]) {
            local_158 = puVar10;
            if (puVar10 == *(undefined8 **)(DAT_180458228 + (local_168 & DAT_180458240) * 0x10))
            goto LAB_180122dcc;
          }
          local_158 = (undefined8 *)*puVar10;
          local_150 = puVar10;
        }
        local_78 = DAT_180458218;
        local_174 = iVar1;
        if ((puVar10 != DAT_180458218) && (*(int *)(puVar10 + 3) == iVar1)) {
          FUN_180219e20(&DAT_1805c7b10,local_f0,puVar10 + 4);
          goto LAB_180122ca7;
        }
        if (puVar10 != DAT_180458218) {
          local_160 = 0xcbf29ce484222325;
          for (local_138 = 0; local_138 < 4; local_138 = local_138 + 1) {
            local_160 = (local_160 ^ *(byte *)(local_138 + 0x10 + (longlong)puVar10)) *
                        0x100000001b3;
          }
          uVar12 = local_160 & DAT_180458240;
          puVar2 = *(undefined8 **)(DAT_180458228 + uVar12 * 0x10);
          if (*(undefined8 **)(DAT_180458228 + 8 + uVar12 * 0x10) == puVar10) {
            if (puVar2 == puVar10) {
              *(undefined8 **)(DAT_180458228 + uVar12 * 0x10) = DAT_180458218;
              *(undefined8 **)(lVar3 + 8 + uVar12 * 0x10) = puVar13;
            }
            else {
              *(undefined8 *)(DAT_180458228 + 8 + uVar12 * 0x10) = puVar10[1];
            }
          }
          else if (puVar2 == puVar10) {
            *(undefined8 *)(DAT_180458228 + uVar12 * 0x10) = *puVar10;
          }
          puVar13 = (undefined8 *)*puVar10;
          DAT_180458220 = DAT_180458220 + -1;
          *(undefined8 **)puVar10[1] = puVar13;
          puVar13[1] = puVar10[1];
          local_128 = puVar10 + 2;
          local_120 = puVar10 + 3;
          FUN_18020e450(puVar10 + 4);
          local_50 = 0x40;
          free(puVar10);
          local_78 = puVar13;
        }
        _Str = (char *)FUN_18001e410(plVar7);
        if (((_Str != (char *)0x0) && (*_Str != '\0')) && ((char *)0x10000 < _Str)) {
          local_70 = (byte ***)0x0;
          uStack_68 = 0;
          local_60 = 0;
          local_58 = 0;
          sVar9 = strlen(_Str);
          FUN_18001d080(&local_70,_Str,sVar9);
          if (local_60 < 7) {
LAB_180122fac:
            bVar16 = false;
          }
          else {
            puVar10 = (undefined8 *)FUN_18020e670(&local_70,local_c0,0,6);
            bVar4 = true;
            local_178 = 1;
            puVar13 = puVar10;
            if (0xf < (ulonglong)puVar10[3]) {
              puVar13 = (undefined8 *)*puVar10;
            }
            if (puVar10[2] == 6) {
              iVar6 = memcmp(puVar13,"class ",6);
              bVar16 = iVar6 == 0;
            }
            else {
              bVar16 = false;
            }
            if (!bVar16) goto LAB_180122fac;
            bVar16 = true;
          }
          if (bVar4) {
            bVar4 = false;
            local_178 = 0;
            FUN_18020e450(local_c0);
          }
          if (bVar16) {
            uVar11 = FUN_18020e670(&local_70,local_a0,6,0xffffffffffffffff);
            FUN_18020e8a0(&local_70,uVar11);
            FUN_18020e450(local_a0);
          }
          local_130 = (byte ***)&local_70;
          if (0xf < local_58) {
            local_130 = local_70;
          }
          ppppbVar14 = (byte ****)((longlong)local_130 + local_60);
          for (; (byte ****)local_130 != ppppbVar14; local_130 = (byte ***)((longlong)local_130 + 1)
              ) {
            if ((0x20 < *(byte *)local_130) && (*(byte *)local_130 != 0x7f)) {
              ppppbVar14 = &local_70;
              if (0xf < local_58) {
                ppppbVar14 = (byte ****)local_70;
              }
              if (local_60 == 0xb) {
                iVar6 = memcmp(ppppbVar14,"CBaseEntity",0xb);
                bVar16 = iVar6 == 0;
              }
              else {
                bVar16 = false;
              }
              if (!bVar16) {
                local_118 = iVar1;
                uVar17 = FUN_18016d4c0(local_110,&local_70);
                plVar7 = (longlong *)FUN_180216b00(uVar17,local_e0,local_80);
                lVar3 = *plVar7;
                *(int *)(lVar3 + 0x18) = local_118;
                FUN_18020e8a0(lVar3 + 0x20,local_110);
                FUN_18020e450(local_110);
                FUN_180219e20(&DAT_1805c7b10,local_d0,&local_70);
              }
              break;
            }
          }
          FUN_18020e450(&local_70);
        }
        local_80[0] = local_80[0] + 1;
      }
    }
    FUN_180122a50();
  }
  return;
}



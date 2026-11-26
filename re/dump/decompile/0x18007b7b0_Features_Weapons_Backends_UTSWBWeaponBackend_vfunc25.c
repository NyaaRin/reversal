// 0x18007b7b0  Features_Weapons_Backends_UTSWBWeaponBackend_vfunc25
// size=2114 thunk=false
// signature: undefined Features_Weapons_Backends_UTSWBWeaponBackend_vfunc25()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_Weapons_Backends_UTSWBWeaponBackend_vfunc25(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  code *pcVar4;
  double dVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  char **ppcVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  undefined1 auStack_128 [32];
  uint local_108;
  uint local_100;
  char *local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong local_c0;
  undefined4 local_b7;
  undefined2 local_b3;
  undefined1 local_b1;
  undefined8 local_b0;
  undefined4 local_a8;
  int local_a4;
  uint local_a0;
  uint local_98;
  uint local_90;
  char **local_88;
  longlong local_80;
  char *local_78;
  char *local_70;
  char **local_68;
  char **local_60;
  char *local_58;
  char *local_50;
  char *local_48 [4];
  
  local_48[0] = (char *)(DAT_1803da4c0 ^ (ulonglong)auStack_128);
  vfunc_shared_180078c00();
  pcVar1 = (char *)(param_1 + 0x30);
  *pcVar1 = '\0';
  pcVar2 = (char *)(param_1 + 0x31);
  *pcVar2 = '\0';
  if ((DAT_1803fa678 != 0) && (param_2 != 0)) {
    local_d8 = (longlong *)0x0;
    uStack_d0 = 0;
    local_c8 = 0;
    local_80 = param_1;
    local_78 = pcVar2;
    local_70 = pcVar1;
    FUN_18001bcd0(0,&local_d8);
    if (local_d8 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x74) = 1;
      *(undefined2 *)(param_1 + 0x7c) = 0;
      *(undefined8 *)(param_1 + 0x80) = 0;
      iVar7 = (**(code **)*local_d8)();
      local_a4 = iVar7;
      cVar6 = FUN_18001e2b0(param_2,local_d8);
      if (cVar6 != '\0') {
        FUN_18002d9c0(local_d8[1],0xffffffff,"IsM9KRework");
        cVar6 = (**(code **)(*local_d8 + 0x138))(local_d8,0xffffffff,1);
        if (cVar6 != '\0') {
          *pcVar1 = '\x01';
          cVar6 = (**(code **)(*local_d8 + 200))(local_d8,0xffffffff);
          *pcVar2 = cVar6;
        }
        (**(code **)(*local_d8 + 0x10))(local_d8,1);
        local_b0 = (char *)((ulonglong)local_b0._4_4_ << 0x20);
        iVar8 = FUN_18007ae30(local_d8,"_curSpreadCone","CurCone",&local_b0);
        if (iVar8 != 0) {
          *(undefined4 *)(param_1 + 8) = (undefined4)local_b0;
          *(bool *)(param_1 + 0x32) = iVar8 == 1;
          if (iVar8 == 1) {
            *pcVar1 = '\x01';
          }
        }
        *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
        FUN_18002d9c0(local_d8[1],0xffffffff,"BaseSpreadMultiplier");
        cVar6 = (**(code **)(*local_d8 + 0x138))(local_d8,0xffffffff,3);
        if (cVar6 != '\0') {
          dVar5 = (double)(**(code **)(*local_d8 + 0xc0))(local_d8,0xffffffff);
          if (0.0 < (float)dVar5) {
            *(float *)(param_1 + 0x34) = (float)dVar5;
          }
        }
        (**(code **)(*local_d8 + 0x10))(local_d8,1);
        FUN_18002d9c0(local_d8[1],0xffffffff,"Shots");
        cVar6 = (**(code **)(*local_d8 + 0x138))(local_d8,0xffffffff,3);
        if (cVar6 != '\0') {
          dVar5 = (double)(**(code **)(*local_d8 + 0xc0))(local_d8,0xffffffff);
          *(int *)(param_1 + 0x74) = (int)dVar5;
        }
        (**(code **)(*local_d8 + 0x10))(local_d8,1);
        FUN_18002d9c0(local_d8[1],0xffffffff,"ClumpSpread");
        cVar6 = (**(code **)(*local_d8 + 0x138))(local_d8,0xffffffff,3);
        if (cVar6 != '\0') {
          dVar5 = (double)(**(code **)(*local_d8 + 0xc0))(local_d8,0xffffffff);
          *(float *)(param_1 + 0x78) = (float)dVar5;
        }
        (**(code **)(*local_d8 + 0x10))(local_d8,1);
        FUN_18002d9c0(local_d8[1],0xffffffff,"VerticalClumpSpread");
        cVar6 = (**(code **)(*local_d8 + 0x138))(local_d8,0xffffffff,3);
        if (cVar6 != '\0') {
          *(undefined1 *)(param_1 + 0x7c) = 1;
          dVar5 = (double)(**(code **)(*local_d8 + 0xc0))(local_d8,0xffffffff);
          *(float *)(param_1 + 0x80) = (float)dVar5;
        }
        (**(code **)(*local_d8 + 0x10))(local_d8,1);
        FUN_18002d9c0(local_d8[1],0xffffffff,"HorizontalClumpSpread");
        cVar6 = (**(code **)(*local_d8 + 0x138))(local_d8,0xffffffff,3);
        if (cVar6 != '\0') {
          *(undefined1 *)(param_1 + 0x7d) = 1;
          dVar5 = (double)(**(code **)(*local_d8 + 0xc0))(local_d8,0xffffffff);
          *(float *)(param_1 + 0x84) = (float)dVar5;
        }
        (**(code **)(*local_d8 + 0x10))(local_d8,1);
        FUN_18002d9c0(local_d8[1],0xffffffff,"MaxSpreadInc");
        cVar6 = (**(code **)(*local_d8 + 0x138))(local_d8,0xffffffff,3);
        if (cVar6 != '\0') {
          dVar5 = (double)(**(code **)(*local_d8 + 0xc0))(local_d8,0xffffffff);
          *(float *)(param_1 + 0x50) = (float)dVar5;
        }
        (**(code **)(*local_d8 + 0x10))(local_d8,1);
      }
      pcVar3 = (char *)(param_1 + 0x40);
      *pcVar3 = '\0';
      local_b0 = (char *)(param_1 + 0x38);
      *local_b0 = '\0';
      *(undefined4 *)(param_1 + 0x3c) = 0;
      pcVar4 = *(code **)(*DAT_1803fa360 + 0x18);
      (**(code **)(*DAT_1803fa668 + 0x60))();
      lVar10 = (*pcVar4)(DAT_1803fa360);
      if ((lVar10 != 0) && (cVar6 = FUN_18001e2b0(lVar10), cVar6 != '\0')) {
        local_a8 = 0;
        iVar8 = FUN_18007ae30(local_d8,"swb_ViewAff","ViewAff",&local_a8);
        if (iVar8 != 0) {
          *local_b0 = '\x01';
          *(undefined4 *)(param_1 + 0x3c) = local_a8;
        }
        local_58 = "swb_LastView";
        local_50 = "LastView";
        local_68 = &local_58;
        local_60 = local_48;
        for (ppcVar16 = &local_58; local_88 = ppcVar16, ppcVar16 != local_48;
            ppcVar16 = ppcVar16 + 1) {
          FUN_18002d9c0(local_d8[1],0xffffffff,*ppcVar16);
          cVar6 = (**(code **)(*local_d8 + 0x138))(local_d8,0xffffffff,10);
          if (cVar6 != '\0') {
            puVar11 = (uint *)(**(code **)(*local_d8 + 0x178))(local_d8,0xffffffff);
            local_a0 = *puVar11;
            if ((((local_a0 & 0x7f800000) != 0x7f800000) &&
                (local_98 = puVar11[1], (local_98 & 0x7f800000) != 0x7f800000)) &&
               (local_90 = puVar11[2], (local_90 & 0x7f800000) != 0x7f800000)) {
              *pcVar3 = '\x01';
              *(uint *)(param_1 + 0x44) = local_a0;
              *(uint *)(param_1 + 0x48) = local_98;
              *(uint *)(param_1 + 0x4c) = local_90;
              (**(code **)(*local_d8 + 0x10))();
              break;
            }
          }
          (**(code **)(*local_d8 + 0x10))();
        }
      }
      iVar8 = (**(code **)*local_d8)();
      while (iVar7 < iVar8) {
        (**(code **)(*local_d8 + 0x10))();
        iVar8 = (**(code **)*local_d8)();
      }
      bVar20 = false;
      if (*pcVar1 == '\0') {
        plVar12 = (longlong *)&DAT_1803e9f78;
        if (0xf < DAT_1803e9f90) {
          plVar12 = DAT_1803e9f78;
        }
        if ((DAT_1803e9f88 == 8) && (*plVar12 == 0x657361625f627773)) {
          puVar17 = &DAT_1803eb458;
          if (0xf < DAT_1803eb470) {
            puVar17 = DAT_1803eb458;
          }
          if (((3 < DAT_1803eb468) &&
              (puVar13 = (undefined8 *)
                         thunk_FUN_1802d5870(puVar17,(undefined8 *)((longlong)puVar17 + 4),
                                             &DAT_180346fb8,4),
              puVar13 != (undefined8 *)((longlong)puVar17 + 4))) && (puVar13 == puVar17)) {
            *pcVar1 = '\x01';
            *pcVar2 = '\x01';
          }
        }
        bVar20 = *pcVar1 == '\0';
      }
      uVar14 = -(uint)(*pcVar2 != '\0') & 2;
      if (DAT_1803fe3e8 == 0) {
        DAT_1803fe3e8 = FUN_180016fb0("sv_ut_swb_bullet_debug");
      }
      uVar18 = -(uint)(*pcVar3 != '\0') & 0x10;
      uVar15 = -(uint)(*local_b0 != '\0') & 8;
      uVar9 = -(uint)(DAT_1803fe3e8 != 0) & 4;
      uVar19 = uVar18 | -(uint)(*(char *)(param_1 + 0x32) != '\0') & 0x20 | uVar15 | uVar9 |
               !bVar20 | uVar14;
      if (uVar19 != DAT_1803da5b8) {
        local_e0 = (double)*(float *)(param_1 + 0x34);
        local_e8 = (double)*(float *)(param_1 + 0x50);
        local_f0 = (double)*(float *)(param_1 + 8);
        local_f8 = "legacy";
        if (*(char *)(param_1 + 0x32) != '\0') {
          local_f8 = "2026";
        }
        local_100 = uVar18 >> 4;
        local_108 = uVar15 >> 3;
        DAT_1803da5b8 = uVar19;
        FUN_180014410("[UTSWB] cache: convar=%d confirmed=%d m9k=%d viewaff=%d lastview=%d layout=%s cone=%.4f maxinc=%.3f basemul=%.3f\n"
                      ,uVar9 >> 2,(uint)!bVar20,uVar14 >> 1);
      }
    }
    if (local_d8 != (longlong *)0x0) {
      (**(code **)*local_d8)();
      DAT_1803fa338 = local_c8 != 0;
      DAT_1803fa330 = local_c0;
      if ((bool)DAT_1803fa338) {
        DAT_1803fa330 = local_c8;
      }
      DAT_1803fa339 = local_b7;
      DAT_1803fa33d = local_b3;
      DAT_1803fa33f = local_b1;
    }
  }
  return;
}



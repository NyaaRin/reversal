// 0x18016ff90  Features_Visual_ESP_Editor_Elements_DynamicTextElement_vfunc11
// size=1608 thunk=false
// signature: undefined Features_Visual_ESP_Editor_Elements_DynamicTextElement_vfunc11()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_Visual_ESP_Editor_Elements_DynamicTextElement_vfunc11
               (longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  float fVar2;
  char *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_198 [32];
  undefined4 *local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  undefined4 local_148;
  char local_138;
  undefined8 local_130;
  float local_128;
  float fStack_124;
  undefined4 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  float local_108 [2];
  undefined8 local_100 [2];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  ulonglong local_e0;
  
  local_e0 = DAT_1803da4c0 ^ (ulonglong)auStack_198;
  if ((*(char *)((longlong)param_1 + 0x14) != '\0') && (param_1[0xe] != 0)) {
    for (pcVar3 = (char *)param_1[0x2d]; pcVar3 != (char *)param_1[0x2e]; pcVar3 = pcVar3 + 1) {
      if (*pcVar3 != '\0') {
        if ((char)param_1[0x2a] == '\0') {
          local_138 = '\x01';
          goto LAB_18017000f;
        }
        break;
      }
    }
    local_138 = '\0';
LAB_18017000f:
    uVar9 = 0;
    local_130 = param_3;
    local_100[0] = param_2;
    if ((int)param_1[0x19] == 0xd) {
      iVar8 = 0;
      if ((int)param_1[0x21] == 0) {
        switch((int)param_1[1]) {
        default:
          iVar8 = 1;
          break;
        case 2:
        case 5:
        case 7:
        case 9:
        case 10:
          iVar8 = 2;
          break;
        case 3:
        case 4:
        case 6:
        case 0xb:
        case 0xc:
        }
      }
      else {
        iVar8 = (int)param_1[0x21] + -1;
      }
      if ((iVar8 != 0) || (local_138 != '\0')) {
        lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar5 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar1 = *(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1228);
        if (*(char *)(lVar5 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        fVar21 = DAT_180380bb0;
        fVar19 = DAT_180380bb0;
        if (((DAT_1803fcb80 == '\0') &&
            (fVar20 = DAT_1803fcb6c * DAT_180380a38 + DAT_180380b3c, fVar19 = DAT_180380b3c,
            DAT_180380b3c <= fVar20)) && (fVar19 = DAT_180380bb0, fVar20 <= DAT_180380bb0)) {
          fVar19 = fVar20;
        }
        fVar19 = *(float *)(*(longlong *)(lVar5 + 0xec0) + 0x1238) * fVar19;
        fVar20 = local_130._4_4_;
        if (DAT_1803fcb80 == '\0') {
          fVar20 = local_130._4_4_ - fVar19 * DAT_180380a2c;
        }
        local_120 = FUN_1801691d0(param_1);
        (**(code **)(*param_1 + 0x50))(param_1,&local_f0);
        fVar18 = DAT_180380ac0;
        if ((iVar8 != 1) && (fVar18 = fVar21, iVar8 != 2)) {
          fVar18 = 0.0;
        }
        plVar11 = param_1 + 0xc;
        if (lVar1 == 0) {
          fVar21 = 0.0;
        }
        else {
          local_170 = (longlong)plVar11;
          if (0xf < (ulonglong)param_1[0xf]) {
            local_170 = *plVar11;
          }
          local_148 = 0;
          local_158 = 0;
          local_160 = 0;
          local_168 = 0;
          local_178 = (undefined4 *)((ulonglong)local_178 & 0xffffffff00000000);
          FUN_18029e350(&local_128,lVar1,fVar19,DAT_180381308);
          fVar21 = local_128;
        }
        uVar4 = param_1[0xe];
        fVar2 = (float)local_130;
        uVar12 = uVar9;
        do {
          plVar7 = plVar11;
          if (0xf < (ulonglong)param_1[0xf]) {
            plVar7 = (longlong *)*plVar11;
          }
          if ((uVar12 < uVar4) &&
             (lVar5 = thunk_FUN_1802d5c20((longlong)plVar7 + uVar12,uVar4 + (longlong)plVar7,10),
             lVar5 != uVar4 + (longlong)plVar7)) {
            lVar5 = lVar5 - (longlong)plVar7;
            lVar10 = lVar5;
            if (lVar5 == -1) goto LAB_180170293;
          }
          else {
            lVar10 = -1;
LAB_180170293:
            lVar5 = param_1[0xe];
          }
          uVar13 = local_e4;
          plVar7 = plVar11;
          if (0xf < (ulonglong)param_1[0xf]) {
            plVar7 = (longlong *)*plVar11;
          }
          lVar5 = (longlong)plVar7 + lVar5;
          uVar15 = local_f0;
          uVar16 = local_ec;
          uVar17 = local_e8;
          if (((local_138 != '\0') && (uVar9 < (ulonglong)(param_1[0x2e] - param_1[0x2d]))) &&
             (*(char *)(param_1[0x2d] + uVar9) != '\0')) {
            uVar15 = *(undefined4 *)((longlong)param_1 + 0x154);
            uVar16 = (undefined4)param_1[0x2b];
            uVar17 = *(undefined4 *)((longlong)param_1 + 0x15c);
          }
          fVar14 = 0.0;
          if ((0.0 < fVar18) && (lVar1 != 0)) {
            local_148 = 0;
            local_158 = 0;
            local_178 = (undefined4 *)((ulonglong)local_178 & 0xffffffff00000000);
            local_170 = uVar12 + (longlong)plVar7;
            local_168 = lVar5;
            local_160 = lVar5;
            FUN_18029e350(local_108,lVar1,fVar19,DAT_180381308);
            fVar14 = (fVar21 - local_108[0]) * fVar18;
          }
          local_128 = fVar2 + fVar14;
          local_178 = &local_118;
          fStack_124 = (float)uVar9 * fVar19 + fVar20;
          uStack_10c = uVar13;
          local_168 = CONCAT44(local_168._4_4_,local_120);
          local_170 = CONCAT44(local_170._4_4_,fVar19);
          local_160 = lVar5;
          local_118 = uVar15;
          uStack_114 = uVar16;
          uStack_110 = uVar17;
          FUN_18016ce50(param_1,local_100[0],CONCAT44(fStack_124,local_128),
                        uVar12 + (longlong)plVar7);
          if (lVar10 == -1) {
            return;
          }
          uVar4 = param_1[0xe];
          uVar12 = lVar10 + 1;
          uVar9 = uVar9 + 1;
          if (uVar4 < uVar12) {
            return;
          }
        } while( true );
      }
    }
    local_130._4_4_ = (float)((ulonglong)param_3 >> 0x20);
    fVar21 = local_130._4_4_;
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar5 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar19 = DAT_180380bb0;
    if (((DAT_1803fcb80 == '\0') &&
        (fVar20 = DAT_1803fcb6c * DAT_180380a38 + DAT_180380b3c, fVar19 = DAT_180380b3c,
        DAT_180380b3c <= fVar20)) && (fVar19 = DAT_180380bb0, fVar20 <= DAT_180380bb0)) {
      fVar19 = fVar20;
    }
    fVar19 = *(float *)(*(longlong *)(lVar5 + 0xec0) + 0x1238) * fVar19;
    if (DAT_1803fcb80 == '\0') {
      fVar21 = fVar21 - fVar19 * DAT_180380a2c;
    }
    uVar13 = FUN_1801691d0(param_1);
    puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x50))(param_1,local_100);
    plVar11 = param_1 + 0xc;
    if (0xf < (ulonglong)param_1[0xf]) {
      plVar11 = (longlong *)*plVar11;
    }
    local_118 = *puVar6;
    uStack_114 = puVar6[1];
    uStack_110 = puVar6[2];
    uStack_10c = puVar6[3];
    local_160 = 0;
    local_178 = &local_118;
    local_168 = CONCAT44(local_168._4_4_,uVar13);
    local_170 = CONCAT44(local_170._4_4_,fVar19);
    FUN_18016ce50(param_1,param_2,CONCAT44(fVar21,(int)param_3),plVar11);
  }
  return;
}



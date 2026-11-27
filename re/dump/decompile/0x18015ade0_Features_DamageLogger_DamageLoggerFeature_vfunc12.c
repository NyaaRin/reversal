// 0x18015ade0  Features_DamageLogger_DamageLoggerFeature_vfunc12
// size=1327 thunk=false
// signature: undefined Features_DamageLogger_DamageLoggerFeature_vfunc12()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_DamageLogger_DamageLoggerFeature_vfunc12
               (longlong param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  char cVar2;
  BOOL BVar3;
  longlong *plVar4;
  longlong lVar5;
  char *_Str;
  size_t sVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  char ****_Src;
  ulonglong uVar9;
  float fVar10;
  undefined1 auStack_228 [32];
  undefined8 *local_208;
  undefined8 local_1f8;
  float local_1f0;
  undefined8 local_1e8;
  float local_1e0;
  longlong local_1d8;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  undefined8 local_1b8;
  float local_1b0;
  undefined1 local_1a8 [32];
  undefined **local_188;
  longlong *plStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  longlong *plStack_120;
  undefined8 local_118;
  char ***local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulonglong local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [64];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_228;
  local_1d8 = param_1;
  if ((((DAT_18042586c != '\0') || (DAT_18042586b != '\0')) ||
      (cVar2 = FUN_1801596b0(), cVar2 != '\0')) &&
     (((param_2 != (longlong *)0x0 && (BVar3 = IsBadReadPtr(param_2,8), BVar3 == 0)) &&
      (BVar3 = IsBadReadPtr((void *)*param_2,8), BVar3 == 0)))) {
    uStack_e4 = 0xffffffff;
    uStack_e0 = 0xffffffff;
    uStack_dc = 0;
    local_e8 = 0;
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    if (DAT_1803fa608 != (undefined4 *)0x0) {
      local_e8 = *DAT_1803fa608;
    }
    BVar3 = IsBadReadPtr(param_2,8);
    if (((BVar3 == 0) && (BVar3 = IsBadReadPtr((void *)*param_2,8), BVar3 == 0)) &&
       (plVar4 = (longlong *)(**(code **)(*param_2 + 0x20))(param_2), plVar4 != (longlong *)0x0)) {
      uStack_e4 = (**(code **)(*plVar4 + 0x48))(plVar4);
    }
    else {
      uStack_e4 = 0xffffffff;
    }
    if (DAT_1803fa610 != (longlong *)0x0) {
      uVar7 = *(undefined8 *)(param_3 + 4);
      local_1e0 = *(float *)(param_3 + 0xc);
      local_1c8 = *(float *)(param_3 + 0x28);
      if (*(float *)(param_3 + 0x28) <= 0.0) {
        local_1c8 = DAT_1803812a4;
      }
      local_58 = 0;
      local_1d0 = *(float *)(param_3 + 0x10) * local_1c8;
      local_1cc = *(float *)(param_3 + 0x14) * local_1c8;
      local_1c8 = *(float *)(param_3 + 0x18) * local_1c8;
      fVar10 = local_1d0 + (float)uVar7;
      local_1e8._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
      local_1f0 = local_1c8 + local_1e0;
      local_1f8 = CONCAT44(local_1cc + local_1e8._4_4_,fVar10);
      local_1b8 = CONCAT44(local_1cc + local_1e8._4_4_,fVar10);
      local_1e8 = uVar7;
      local_1b0 = local_1f0;
      FUN_18001fde0(local_98,&local_1e8,&local_1b8);
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_128 = 0;
      plStack_120 = (longlong *)0x0;
      local_118 = 0;
      local_188 = vftable_CTraceFilter;
      local_208 = &local_178;
      plStack_180 = param_2;
      (**(code **)(*DAT_1803fa610 + 0x20))(DAT_1803fa610,local_98,0x46004003,&local_188);
      plVar4 = plStack_120;
      if (((((plStack_120 != (longlong *)0x0) && (uStack_150._4_4_ < DAT_180380bb0)) &&
           (BVar3 = IsBadReadPtr(plStack_120,8), BVar3 == 0)) &&
          ((BVar3 = IsBadReadPtr((void *)*plVar4,8), BVar3 == 0 &&
           (cVar2 = (**(code **)(*plVar4 + 0x420))(plVar4), cVar2 != '\0')))) && (plVar4 != param_2)
         ) {
        BVar3 = IsBadReadPtr(plVar4,8);
        if (((BVar3 == 0) && (BVar3 = IsBadReadPtr((void *)*plVar4,8), BVar3 == 0)) &&
           (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4), plVar4 != (longlong *)0x0))
        {
          uStack_e0 = (**(code **)(*plVar4 + 0x48))(plVar4);
        }
        else {
          uStack_e0 = 0xffffffff;
        }
        uStack_dc = (undefined4)local_128;
      }
    }
    lVar5 = FUN_18001dbf0(param_2);
    if (((lVar5 != 0) && (_Str = (char *)FUN_18001e4e0(lVar5), (char *)0x10000 < _Str)) &&
       (*_Str != '\0')) {
      local_108 = (char ***)0x0;
      uStack_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      sVar6 = strlen(_Str);
      FUN_18001d080(&local_108,_Str,sVar6);
      lVar5 = FUN_1800e0870(&local_108,"weapon_");
      if (lVar5 == 0) {
        uVar7 = FUN_18020e670(&local_108,local_1a8,7,0xffffffffffffffff);
        FUN_18020e8a0(&local_108,uVar7);
        FUN_18020e450(local_1a8);
      }
      _Src = &local_108;
      if (0xf < local_f0) {
        _Src = (char ****)local_108;
      }
      strncpy_s((char *)&local_d8,0x40,(char *)_Src,0xffffffffffffffff);
      FUN_18020e450(&local_108);
    }
    if (*(ulonglong *)(param_1 + 0x18) <= *(longlong *)(param_1 + 0x28) + 1U) {
      FUN_18022c460(param_1 + 8);
    }
    uVar8 = *(longlong *)(param_1 + 0x18) - 1;
    *(ulonglong *)(param_1 + 0x20) = *(ulonglong *)(param_1 + 0x20) & uVar8;
    uVar9 = *(longlong *)(param_1 + 0x20) + *(longlong *)(param_1 + 0x28);
    uVar8 = uVar9 & uVar8;
    if (*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar8 * 8) == 0) {
      uVar7 = FUN_1802d8350(0x50);
      *(undefined8 *)(*(longlong *)(param_1 + 0x10) + uVar8 * 8) = uVar7;
    }
    puVar1 = *(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + (*(longlong *)(param_1 + 0x18) - 1U & uVar9) * 8);
    *puVar1 = CONCAT44(uStack_e4,local_e8);
    puVar1[1] = CONCAT44(uStack_dc,uStack_e0);
    puVar1[2] = CONCAT44(uStack_d4,local_d8);
    puVar1[3] = CONCAT44(uStack_cc,uStack_d0);
    puVar1[4] = CONCAT44(uStack_c4,local_c8);
    puVar1[5] = CONCAT44(uStack_bc,uStack_c0);
    puVar1[6] = CONCAT44(uStack_b4,local_b8);
    puVar1[7] = CONCAT44(uStack_ac,uStack_b0);
    puVar1[8] = CONCAT44(uStack_a4,local_a8);
    puVar1[9] = CONCAT44(uStack_9c,uStack_a0);
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 1;
    lVar5 = *(longlong *)(param_1 + 0x28);
    while (0x60 < *(ulonglong *)(param_1 + 0x28)) {
      lVar5 = lVar5 + -1;
      *(longlong *)(param_1 + 0x28) = lVar5;
      if (lVar5 == 0) {
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
      else {
        *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
      }
    }
  }
  return;
}



// 0x180163690  FUN_180163690
// size=473 thunk=false
// signature: undefined FUN_180163690()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_180163690(undefined8 *param_1,uint param_2,undefined8 param_3)

{
  char *_Str;
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  size_t sVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  undefined **ppuVar9;
  undefined1 auStack_c8 [32];
  uint local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [32];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  local_a0 = param_3;
  local_78 = param_1;
  if (param_2 != 0xc) {
    uVar6 = (ulonglong)param_2;
    if (0xc < param_2) {
      uVar6 = 0;
    }
    for (ppuVar9 = &PTR_s_models_debug_debugwhite_18033c198 + uVar6 * 5;
        (ppuVar9 != &PTR_s_Wireframe_18033c1b8 + uVar6 * 5 && (_Str = *ppuVar9, _Str != (char *)0x0)
        ); ppuVar9 = ppuVar9 + 1) {
      cVar1 = FUN_180163870(&local_a0,_Str);
      if (cVar1 != '\0') {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        sVar4 = strlen(_Str);
        FUN_18001d080(param_1,_Str,sVar4);
        return param_1;
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    return param_1;
  }
  local_40 = 0x93fd561a96ab0c67;
  local_38 = 0xf50e5e909d50b4e9;
  plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_70,&local_40);
  plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,&local_98,&local_38);
  puVar3 = (undefined8 *)FUN_1802028c0(*plVar2 + 0x28);
  if (puVar3[2] != 0) {
    puVar5 = puVar3;
    if (0xf < (ulonglong)puVar3[3]) {
      puVar5 = (undefined8 *)*puVar3;
    }
    cVar1 = FUN_180163870(&local_a0,puVar5);
    if (cVar1 != '\0') {
      puVar3 = (undefined8 *)FUN_18016d4c0(local_60,puVar3);
      uVar7 = 1;
      goto LAB_180163783;
    }
  }
  uStack_90 = 0;
  local_88 = _DAT_1803814b0;
  uStack_80 = _UNK_1803814b8;
  local_98 = 0;
  puVar3 = &local_98;
  uVar7 = 2;
LAB_180163783:
  local_a8 = uVar7;
  FUN_18016d4c0(param_1,puVar3);
  uVar8 = uVar7 | 4;
  if ((uVar7 & 2) != 0) {
    uVar8 = uVar7 & 0xfffffffd | 4;
    local_a8 = uVar8;
    FUN_18020e450(&local_98);
  }
  if ((uVar8 & 1) != 0) {
    local_a8 = uVar8 & 0xfffffffe;
    FUN_18020e450(local_60);
  }
  return param_1;
}



// 0x1802abf60  FUN_1802abf60
// size=970 thunk=false
// signature: undefined FUN_1802abf60()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1802abf60(char *param_1,undefined8 *param_2,uint param_3)

{
  char *pcVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  char cVar10;
  char *pcVar11;
  float fVar12;
  undefined1 auStack_f8 [32];
  float *local_d8;
  char *local_d0;
  float *local_c8;
  char *local_c0;
  undefined8 local_b8;
  undefined4 local_a8;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined8 local_88;
  char local_80;
  char local_7f [7];
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  ulonglong local_68;
  
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_88 = param_2;
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar3 + 0xec0);
  uVar9 = *(ulonglong *)(lVar4 + 0x1520);
  *(undefined1 *)(uVar9 + 0xce) = 1;
  plVar5 = *(longlong **)(lVar4 + 0x1520);
  if (*(char *)((longlong)plVar5 + 0xd1) == '\0') {
    if (*(char *)(lVar3 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = *(longlong *)(lVar3 + 0xec0);
    iVar7 = FUN_180268980(param_1,0,
                          *(undefined4 *)(plVar5[0x22] + -4 + (longlong)(int)plVar5[0x21] * 4));
    if (*(int *)(*plVar5 + 0x1578) == iVar7) {
      FUN_1802899e0(iVar7,0xb,param_1);
    }
    pcVar11 = param_1;
    if (param_1 != (char *)0xffffffffffffffff) {
      while (*pcVar11 != '\0') {
        pcVar1 = pcVar11 + 1;
        if (((*pcVar11 == '#') && (*pcVar1 == '#')) ||
           (pcVar11 = pcVar1, pcVar1 == (char *)0xffffffffffffffff)) break;
      }
    }
    if (*(char *)(lVar3 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    local_8c = *(float *)(*(longlong *)(lVar3 + 0xec0) + 0x1238);
    if (param_1 == pcVar11) {
      local_90 = 0.0;
    }
    else {
      local_a8 = 0;
      local_b8 = 0;
      local_d8 = (float *)CONCAT44(local_d8._4_4_,DAT_180381384);
      local_d0 = param_1;
      local_c8 = (float *)pcVar11;
      local_c0 = pcVar11;
      FUN_18029e350(&local_98,*(undefined8 *)(*(longlong *)(lVar3 + 0xec0) + 0x1228),local_8c,
                    DAT_180381308);
      local_90 = (float)(int)(local_98 + DAT_180380ba8);
      local_8c = local_94;
    }
    fVar2 = *(float *)(plVar5 + 0x23);
    fVar12 = *(float *)((longlong)plVar5 + 0x11c);
    if ((param_3 >> 0xf & 1) != 0) {
      if (*(float *)(lVar4 + 0xcc8) < *(float *)(plVar5 + 0x2a)) {
        fVar12 = (*(float *)(plVar5 + 0x2a) - *(float *)(lVar4 + 0xcc8)) + fVar12;
      }
    }
    FUN_18027faa0(&local_98,*local_88,
                  *(float *)(lVar4 + 0xcc4) + *(float *)(lVar4 + 0xcc4) + local_90,
                  *(float *)(lVar4 + 0xcc8) + *(float *)(lVar4 + 0xcc8) + local_8c);
    local_70 = fVar2 + local_98;
    fStack_6c = fVar12 + local_94;
    local_78 = fVar2;
    fStack_74 = fVar12;
    FUN_18027f400(&local_98,*(undefined4 *)(lVar4 + 0xcc8));
    uVar9 = FUN_18027f160(&local_78,iVar7,0,0);
    if ((char)uVar9 != '\0') {
      local_d8._0_4_ = param_3;
      bVar6 = FUN_1802ab600(&local_78,iVar7,&local_80,local_7f);
      if ((local_7f[0] == '\0') || (local_80 == '\0')) {
        cVar10 = (local_80 != '\0') + '\x16';
      }
      else {
        cVar10 = '\x18';
      }
      uVar8 = FUN_18026a6a0(cVar10,DAT_180380bb0);
      FUN_18026c370(&local_78,iVar7,0);
      local_d8 = (float *)CONCAT44(local_d8._4_4_,*(undefined4 *)(lVar4 + 0xccc));
      FUN_18026c020(CONCAT44(fStack_74,local_78),CONCAT44(fStack_6c,local_70),uVar8,1);
      if (*(char *)(lVar4 + 0x2858) != '\0') {
        if (*(char *)(lVar3 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar3 = *(longlong *)(lVar3 + 0xec0);
        *(undefined **)(lVar3 + 0x2880) = &DAT_18037ffc4;
        *(undefined **)(lVar3 + 0x2888) = &DAT_18035e784;
      }
      local_c8 = &local_78;
      local_d0 = (char *)(lVar4 + 0xd68);
      local_98 = local_70 - *(float *)(lVar4 + 0xcc4);
      local_94 = fStack_6c - *(float *)(lVar4 + 0xcc8);
      local_d8 = &local_90;
      local_88 = (undefined8 *)
                 CONCAT44(*(float *)(lVar4 + 0xcc8) + fStack_74,*(float *)(lVar4 + 0xcc4) + local_78
                         );
      FUN_18026ba40(&local_88,&local_98,param_1,pcVar11);
      return (ulonglong)bVar6;
    }
  }
  return uVar9 & 0xffffffffffffff00;
}



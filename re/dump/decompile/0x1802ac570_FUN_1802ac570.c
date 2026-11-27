// 0x1802ac570  FUN_1802ac570
// size=700 thunk=false
// signature: undefined FUN_1802ac570()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1802ac570(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  char cVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_98;
  char local_90;
  char local_8f [7];
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  ulonglong local_78;
  
  local_78 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_98 = param_3;
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xec0);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar1 + 0xec0);
  uVar9 = *(ulonglong *)(lVar3 + 0x1520);
  *(undefined1 *)(uVar9 + 0xce) = 1;
  plVar4 = *(longlong **)(lVar3 + 0x1520);
  if (*(char *)((longlong)plVar4 + 0xd1) == '\0') {
    iVar6 = FUN_180268980(param_1,0,
                          *(undefined4 *)(plVar4[0x22] + -4 + (longlong)(int)plVar4[0x21] * 4));
    if (*(int *)(*plVar4 + 0x1578) == iVar6) {
      FUN_1802899e0(iVar6,0xb,param_1);
    }
    local_88 = *(float *)(plVar4 + 0x23);
    fVar12 = local_98._4_4_;
    fStack_7c = local_98._4_4_ + *(float *)((longlong)plVar4 + 0x11c);
    local_80 = local_88 + (float)param_3;
    fStack_84 = *(float *)((longlong)plVar4 + 0x11c);
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar13 = *(float *)(*(longlong *)(lVar1 + 0xec0) + 0xcc8);
    uVar11 = DAT_180381384;
    if (fVar13 + fVar13 + *(float *)(*(longlong *)(lVar1 + 0xec0) + 0x1238) <= fVar12) {
      uVar11 = *(undefined4 *)(lVar2 + 0xcc8);
    }
    FUN_18027f400(&local_98,uVar11);
    uVar9 = FUN_18027f160(&local_88,iVar6,0,0);
    if ((char)uVar9 != '\0') {
      local_a8 = 0x10;
      bVar5 = FUN_1802ab600(&local_88,iVar6,&local_90,local_8f);
      uVar11 = DAT_180380bb0;
      if ((local_8f[0] == '\0') || (local_90 == '\0')) {
        cVar10 = (local_90 != '\0') + '\x16';
      }
      else {
        cVar10 = '\x18';
      }
      uVar7 = FUN_18026a6a0(cVar10,DAT_180380bb0);
      uVar8 = FUN_18026a6a0(0,uVar11);
      FUN_18026c370(&local_88,iVar6,0);
      local_a8 = *(undefined4 *)(lVar2 + 0xccc);
      FUN_18026c020(CONCAT44(fStack_84,local_88),CONCAT44(fStack_7c,local_80),uVar7,1);
      local_a8 = uVar11;
      fVar14 = ((float)param_3 - *(float *)(lVar2 + 0x1238)) * DAT_180380ac0;
      fVar13 = (fVar12 - *(float *)(lVar2 + 0x1238)) * DAT_180380ac0;
      fVar12 = 0.0;
      if (0.0 <= fVar14) {
        fVar12 = fVar14;
      }
      fVar14 = 0.0;
      if (0.0 <= fVar13) {
        fVar14 = fVar13;
      }
      FUN_18029f160(plVar4[0x59],CONCAT44(fVar14 + fStack_84,fVar12 + local_88),uVar8,param_2);
      return (ulonglong)bVar5;
    }
  }
  return uVar9 & 0xffffffffffffff00;
}



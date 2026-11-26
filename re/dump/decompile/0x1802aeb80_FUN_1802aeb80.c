// 0x1802aeb80  FUN_1802aeb80
// size=1407 thunk=false
// signature: undefined FUN_1802aeb80()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1802aeb80(void)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  char *pcVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_128 [32];
  float *local_108;
  float *local_100;
  char *local_f8;
  char *local_f0;
  undefined8 local_e8;
  undefined4 local_d8;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  char local_98;
  char local_97 [7];
  float local_90;
  float fStack_8c;
  float local_88;
  float local_84;
  ulonglong local_80;
  
  local_80 = DAT_1803da4c0 ^ (ulonglong)auStack_128;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar2 + 0xec0);
  uVar9 = *(ulonglong *)(lVar3 + 0x1520);
  *(undefined1 *)(uVar9 + 0xce) = 1;
  plVar4 = *(longlong **)(lVar3 + 0x1520);
  if (*(char *)((longlong)plVar4 + 0xd1) == '\0') {
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(lVar2 + 0xec0);
    iVar7 = FUN_180268980("read FAQ \"About ID Stack System\"",0,
                          *(undefined4 *)(plVar4[0x22] + -4 + (longlong)(int)plVar4[0x21] * 4));
    if (*(int *)(*plVar4 + 0x1578) == iVar7) {
      FUN_1802899e0(iVar7,0xb,"read FAQ \"About ID Stack System\"");
    }
    pcVar10 = "read FAQ \"About ID Stack System\"";
    while (*pcVar10 != '\0') {
      pcVar1 = pcVar10 + 1;
      if (((*pcVar10 == '#') && (*pcVar1 == '#')) ||
         (pcVar10 = pcVar1, pcVar1 == (char *)0xffffffffffffffff)) break;
    }
    fVar13 = *(float *)(plVar4 + 0x2a) + *(float *)((longlong)plVar4 + 0x11c);
    fVar12 = *(float *)(plVar4 + 0x23);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar11 = DAT_180381384;
    fVar15 = *(float *)(*(longlong *)(lVar2 + 0xec0) + 0x1238);
    if (pcVar10 == "read FAQ \"About ID Stack System\"") {
      local_b8 = 0.0;
      local_c4 = fVar15;
    }
    else {
      local_d8 = 0;
      local_e8 = 0;
      local_100 = (float *)0x18037ef30;
      local_108 = (float *)CONCAT44(local_108._4_4_,DAT_180381384);
      local_f8 = pcVar10;
      local_f0 = pcVar10;
      FUN_18029e350(&local_c8,*(undefined8 *)(*(longlong *)(lVar2 + 0xec0) + 0x1228),fVar15,
                    DAT_180381308);
      local_b8 = (float)(int)(local_c8 + DAT_180380ba8);
    }
    local_84 = local_c4 + fVar13;
    local_88 = fVar12 + local_b8;
    fStack_b4 = local_c4;
    local_90 = fVar12;
    fStack_8c = fVar13;
    FUN_18027f400(&local_b8);
    uVar9 = FUN_18027f160(&local_90,iVar7,0,0);
    if ((char)uVar9 != '\0') {
      local_108 = (float *)((ulonglong)local_108 & 0xffffffff00000000);
      bVar6 = FUN_1802ab600(&local_90,iVar7,&local_98,local_97);
      FUN_18026c370(&local_90,iVar7,0);
      if (local_98 != '\0') {
        if (*(char *)(lVar2 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        *(undefined4 *)(*(longlong *)(lVar2 + 0xec0) + 0x2508) = 7;
      }
      local_c8 = *(float *)(lVar3 + 0x10e0);
      local_c4 = *(float *)(lVar3 + 0x10e4);
      local_c0 = *(float *)(lVar3 + 0x10e8);
      local_bc = *(float *)(lVar3 + 0x10ec);
      fVar12 = local_c4;
      fVar13 = local_c0;
      if (local_c0 <= local_c4) {
        fVar11 = 0.0;
        fVar12 = local_c0;
        fVar13 = local_c4;
      }
      fVar15 = fVar13;
      fVar14 = local_c8;
      if (local_c8 < fVar13) {
        fVar11 = DAT_180381358 - fVar11;
        fVar15 = local_c8;
        fVar14 = fVar13;
      }
      fVar13 = fVar15;
      if (fVar12 <= fVar15) {
        fVar13 = fVar12;
      }
      local_b8 = local_c8;
      fStack_b4 = local_c4;
      fStack_b0 = local_c0;
      fStack_ac = local_bc;
      if ((local_97[0] != '\0') || (local_98 != '\0')) {
        fmodf((float)((uint)((fVar15 - fVar12) / ((fVar14 - fVar13) * DAT_180380f40 + DAT_180380924)
                            + fVar11) & _DAT_1803817c0) + DAT_1803809a0,DAT_180380bb0);
      }
      local_100 = &fStack_b0;
      local_108 = &fStack_b4;
      FUN_180269040();
      local_100 = &local_c0;
      local_108 = &local_c4;
      FUN_180269040();
      lVar5 = plVar4[0x59];
      fVar12 = *(float *)(lVar3 + 0x1210);
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      local_a4 = local_c4;
      local_a8 = local_c8;
      local_9c = local_bc * *(float *)(*(longlong *)(lVar2 + 0xec0) + 0xc84);
      local_a0 = local_c0;
      uVar8 = FUN_180268ed0(&local_a8);
      local_100 = (float *)CONCAT44(local_100._4_4_,(float)(int)fVar12);
      local_108 = (float *)CONCAT44(local_108._4_4_,uVar8);
      FUN_180294d60(lVar5);
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      local_a4 = fStack_b4;
      local_a8 = local_b8;
      local_9c = fStack_ac * *(float *)(*(longlong *)(lVar2 + 0xec0) + 0xc84);
      local_a0 = fStack_b0;
      uVar8 = FUN_180268ed0(&local_a8);
      FUN_18026a730(0,uVar8);
      FUN_18026b160(CONCAT44(fStack_8c,local_90),"read FAQ \"About ID Stack System\"",pcVar10,0);
      FUN_18026a890(1);
      return (ulonglong)bVar6;
    }
  }
  return uVar9 & 0xffffffffffffff00;
}



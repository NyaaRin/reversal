// 1802b74e0  FUN_1802b74e0
// signature: undefined FUN_1802b74e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_1802b74e0(code *******param_1,code *******param_2,code *******param_3,int param_4,
                       undefined8 *param_5,uint param_6,code *param_7,code *******param_8)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 *puVar5;
  int *piVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  ulonglong uVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  char cVar15;
  byte bVar16;
  char cVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  ulonglong uVar23;
  size_t sVar24;
  char *pcVar25;
  void *_Dst;
  void *pvVar26;
  code *******pppppppcVar27;
  float *pfVar28;
  undefined8 uVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  int *piVar33;
  code *******pppppppcVar34;
  code *******pppppppcVar35;
  uint uVar36;
  bool bVar37;
  code *******pppppppcVar38;
  longlong lVar39;
  char *pcVar40;
  code *******pppppppcVar41;
  longlong lVar42;
  code *******pppppppcVar43;
  longlong lVar44;
  code *******pppppppcVar45;
  undefined4 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auStack_2f8 [32];
  code *******local_2d8;
  code *******local_2d0;
  code *******local_2c8;
  code *******local_2c0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2a8;
  char local_298;
  byte local_297;
  char local_296;
  char local_295;
  int local_294;
  char local_290;
  byte local_28f;
  byte local_28e;
  char local_28d;
  char local_28c;
  char local_28b;
  char local_28a;
  char local_289;
  uint local_288;
  float local_284;
  uint local_280;
  uint local_27c;
  float local_278;
  char local_274;
  char local_273;
  char local_272;
  char local_271;
  char local_270;
  float local_26c;
  longlong *local_268;
  undefined8 local_260;
  code *******local_258;
  char local_250;
  uint local_24c;
  float local_248;
  code *******local_240;
  float local_238;
  int *local_230;
  undefined8 local_228;
  code *local_220;
  uint local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  longlong *local_200;
  code *******local_1f8;
  float local_1f0;
  undefined4 local_1ec;
  float local_1e8;
  code *******local_1e0;
  undefined8 local_1d8;
  void *local_1d0;
  code *******local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  code *******local_198;
  code *******local_190;
  float local_188;
  float fStack_184;
  float local_180;
  float fStack_17c;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined2 local_158;
  undefined1 uStack_156;
  uint uStack_155;
  undefined4 uStack_151;
  undefined5 uStack_14d;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  int local_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  code ******local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 local_fc;
  code *******local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_1803da4c0 ^ (ulonglong)auStack_2f8;
  local_220 = param_7;
  local_240 = param_8;
  piVar33 = (int *)0x10;
  local_230 = (int *)0x10;
  lVar39 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_26c = (float)param_4;
  local_258 = param_3;
  local_1f8 = param_1;
  local_1e0 = param_2;
  if (*(char *)(lVar39 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pppppppcVar34 = (code *******)0xec0;
  local_f8 = (code *******)0xec0;
  lVar42 = *(longlong *)(lVar39 + 0xec0);
  uVar23 = *(ulonglong *)(lVar42 + 0x1520);
  *(undefined1 *)(uVar23 + 0xce) = 1;
  plVar2 = *(longlong **)(lVar42 + 0x1520);
  if (*(char *)((longlong)plVar2 + 0xd1) != '\0') goto LAB_1802b7a01;
  local_200 = plVar2;
  if (*(char *)(lVar39 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar42 = *(longlong *)(lVar39 + 0xec0);
  uVar36 = param_6 & 0x4000000;
  local_288 = uVar36;
  local_1b0 = lVar42;
  if (uVar36 != 0) {
    FUN_18027fc30();
  }
  iVar18 = FUN_180268980(local_1f8,0,
                         *(undefined4 *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4));
  local_294 = iVar18;
  if (*(int *)(*local_200 + 0x1578) == iVar18) {
    FUN_1802899e0(iVar18,0xb,local_1f8);
  }
  local_1c8 = local_1f8;
  if (local_1f8 != (code *******)0xffffffffffffffff) {
    while (*(char *)local_1c8 != '\0') {
      pppppppcVar45 = (code *******)((longlong)local_1c8 + 1);
      if (((*(char *)local_1c8 == '#') && (*(char *)pppppppcVar45 == '#')) ||
         (local_1c8 = pppppppcVar45, pppppppcVar45 == (code *******)0xffffffffffffffff)) break;
    }
  }
  if (*(char *)(lVar39 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar53 = *(float *)(*(longlong *)(lVar39 + 0xec0) + 0x1238);
  if (local_1f8 == local_1c8) {
    fVar50 = 0.0;
    local_260._4_4_ = fVar53;
  }
  else {
    local_2a8 = 0;
    local_2b8 = 0;
    local_2c0 = local_1c8;
    local_2c8 = local_1c8;
    local_2d0 = local_1f8;
    local_2d8 = (code *******)CONCAT44(local_2d8._4_4_,0xbf800000);
    FUN_18029e350(&local_260,*(undefined8 *)(*(longlong *)(lVar39 + 0xec0) + 0x1228),fVar53,
                  0x7f7fffff);
    fVar50 = (float)(int)((float)local_260 + 0.99999);
  }
  fVar53 = local_260._4_4_;
  if (uVar36 != 0) {
    fVar53 = *(float *)(lVar42 + 0x1238) * 8.0;
  }
  fVar22 = *(float *)(lVar42 + 0xcc8);
  local_1e8 = fVar50;
  uVar46 = FUN_18027f9c0();
  FUN_18027faa0(&local_210,*param_5,uVar46,fVar22 + fVar22 + fVar53);
  fVar22 = local_20c;
  fVar53 = local_210;
  if (fVar50 <= 0.0) {
    fVar50 = 0.0;
  }
  else {
    fVar50 = fVar50 + *(float *)(lVar42 + 0xcdc);
  }
  fVar49 = *(float *)(local_200 + 0x23);
  fVar52 = *(float *)((longlong)local_200 + 0x11c);
  local_180 = fVar49 + local_210;
  fStack_17c = fVar52 + local_20c;
  local_114 = fVar52 + local_20c;
  local_118 = fVar50 + local_210 + fVar49;
  local_248 = local_210;
  local_178 = ZEXT416(0);
  local_158 = 0;
  uStack_156 = 0;
  uStack_155 = 0;
  uStack_151._0_1_ = 0;
  uStack_151._1_3_ = 0;
  uStack_14d = 0;
  iStack_148 = 0;
  iStack_144 = 0;
  iStack_140 = 0;
  iStack_13c = 0;
  local_138 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  local_260 = (int *)CONCAT44(local_114 - fVar52,local_118 - fVar49);
  local_11c = fVar52;
  local_188 = fVar49;
  fStack_184 = fVar52;
  local_168 = local_178;
  local_120 = fVar49;
  if (uVar36 != 0) {
    FUN_18027f400(&local_260);
    if (((*(int *)(lVar42 + 0x25b0) == iVar18) || (*(int *)(lVar42 + 0x1594) == iVar18)) ||
       (iVar18 == *(int *)(lVar42 + 0x2084))) {
      bVar37 = true;
    }
    else {
      bVar37 = false;
    }
    cVar15 = FUN_18027f160(&local_120,iVar18,&local_188,0x100000);
    if ((cVar15 != '\0') || (bVar37)) {
      auVar1 = *(undefined1 (*) [16])(lVar42 + 0x1ef8);
      uVar36 = auVar1._8_4_;
      local_168 = *(undefined1 (*) [16])(lVar42 + 0x1f08);
      uVar29 = *(undefined8 *)(lVar42 + 0x1f18);
      local_158 = (undefined2)uVar29;
      uStack_156 = (undefined1)((ulonglong)uVar29 >> 0x10);
      uStack_155 = (uint)((ulonglong)uVar29 >> 0x18);
      uStack_151._0_1_ = (undefined1)((ulonglong)uVar29 >> 0x38);
      uStack_151._1_3_ = (undefined3)*(undefined8 *)(lVar42 + 0x1f20);
      uStack_14d = (undefined5)((ulonglong)*(undefined8 *)(lVar42 + 0x1f20) >> 0x18);
      iStack_148 = (int)*(undefined8 *)(lVar42 + 0x1f28);
      iStack_144 = (int)((ulonglong)*(undefined8 *)(lVar42 + 0x1f28) >> 0x20);
      iStack_140 = (int)*(undefined8 *)(lVar42 + 0x1f30);
      iStack_13c = (int)((ulonglong)*(undefined8 *)(lVar42 + 0x1f30) >> 0x20);
      uStack_130 = *(undefined8 *)(lVar42 + 8000);
      local_138 = (int)*(undefined8 *)(lVar42 + 0x1f38);
      uStack_134 = (undefined4)((ulonglong)*(undefined8 *)(lVar42 + 0x1f38) >> 0x20);
      *(float *)(local_200 + 0x23) = fVar49;
      *(float *)((longlong)local_200 + 0x11c) = fVar52;
      iVar19 = *(int *)(lVar42 + 0x2084);
      if ((iVar19 == iVar18) &&
         ((((byte)*(undefined4 *)(lVar42 + 0x2090) & 0x28) == 8 && ((param_6 & 0x20) != 0)))) {
        *(undefined4 *)(lVar42 + 0x2084) = 0;
        iVar19 = 0;
      }
      if (*(int *)(lVar42 + 0x1594) == iVar18) {
        *(undefined4 *)(lVar42 + 0x2084) = 0;
      }
      FUN_18026a810(3,lVar42 + 0xe20);
      FUN_18026a940(7);
      FUN_18026a940(8);
      local_260 = (int *)0x0;
      FUN_18026aad0(2,&local_260);
      local_260 = (int *)CONCAT44(fStack_17c - fStack_184,local_180 - local_188);
      local_2d8 = (code *******)CONCAT44(local_2d8._4_4_,4);
      cVar15 = FUN_180273060(local_1f8,iVar18,&local_260,1);
      *(int *)(lVar42 + 0x2084) = iVar19;
      FUN_18026abb0(3);
      FUN_18026a890(1);
      if ((cVar15 != '\0') || (bVar37)) {
        local_268 = *(longlong **)(lVar42 + 0x1520);
        *(ushort *)((longlong)local_268 + 0x176) =
             *(ushort *)((longlong)local_268 + 0x176) |
             (ushort)(1 << (*(uint *)(local_268 + 0x2e) & 0x1f));
        *(float *)(local_268 + 0x23) = *(float *)(lVar42 + 0xcc4) + *(float *)(local_268 + 0x23);
        *(float *)((longlong)local_268 + 0x11c) =
             *(float *)(lVar42 + 0xcc8) + *(float *)((longlong)local_268 + 0x11c);
        local_248 = fVar53 - *(float *)(local_268 + 0x18);
        *(int *)(lVar42 + 0x1ef8) = iVar18;
        local_1ec = auVar1._4_4_;
        *(undefined4 *)(lVar42 + 0x1efc) = local_1ec;
        *(uint *)(lVar42 + 0x1f00) = uVar36;
        piVar33 = local_230;
        pppppppcVar34 = local_f8;
        fVar50 = local_248;
        local_218 = uVar36;
        goto LAB_1802b7b4c;
      }
      FUN_180273410();
    }
    uVar23 = FUN_18027fda0();
LAB_1802b7a01:
    return uVar23 & 0xffffffffffffff00;
  }
  local_268 = local_200;
  FUN_18027f400(&local_260);
  if (((param_6 >> 0x1b & 1) == 0) &&
     (uVar23 = FUN_18027f160(&local_120,iVar18,&local_188,0x100000), (char)uVar23 == '\0'))
  goto LAB_1802b7a01;
  local_218 = local_178._8_4_;
  local_1ec = local_178._4_4_;
  fVar50 = fVar53;
LAB_1802b7b4c:
  bVar16 = FUN_18026f180(&local_188,iVar18);
  local_284 = (float)(uint)bVar16;
  if (bVar16 != 0) {
    if (*(char *)(lVar39 + (longlong)piVar33) == '\0') {
      __dyn_tls_on_demand_init();
    }
    *(undefined4 *)(*(longlong *)((longlong)pppppppcVar34 + lVar39) + 0x2508) = 1;
    local_284 = (float)(uint)bVar16;
    if (*(char *)(lVar42 + 0x2069) != '\0') {
      local_284 = 0.0;
    }
  }
  fVar49 = local_284;
  if (*(char *)(lVar39 + (longlong)piVar33) == '\0') {
    __dyn_tls_on_demand_init();
  }
  plVar2 = local_268;
  if ((iVar18 == 0) ||
     (local_1c0 = *(longlong *)((longlong)pppppppcVar34 + lVar39) + 0x2518,
     *(int *)(*(longlong *)((longlong)pppppppcVar34 + lVar39) + 0x252c) != local_294)) {
    local_1c0 = 0;
  }
  lVar44 = local_1c0;
  local_27c = param_6 | 0x200;
  if ((*(uint *)(lVar42 + 0x1efc) & 0x800) == 0) {
    local_27c = param_6;
  }
  local_280 = local_27c & 0x200;
  local_24c = local_27c & 0x400;
  local_238 = (float)(local_27c & 0x1000000);
  if (local_238 == 0.0) {
    fVar52 = 0.0;
  }
  else {
    if (*(char *)((longlong)local_268 + 0xc9) == '\0') {
      fVar47 = -*(float *)(lVar42 + 0xcfc);
    }
    else {
      fVar47 = 0.0;
    }
    if (*(char *)(lVar39 + (longlong)piVar33) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(*(longlong *)((longlong)pppppppcVar34 + lVar39) + 0x1520);
    if ((*(longlong *)(lVar3 + 0x1c8) != 0) ||
       (pfVar28 = (float *)(lVar3 + 0x280),
       *(longlong *)(*(longlong *)((longlong)pppppppcVar34 + lVar39) + 0x2368) != 0)) {
      pfVar28 = (float *)(lVar3 + 0x250);
    }
    fVar47 = (*pfVar28 - *(float *)(lVar3 + 0x118)) + fVar47;
    fVar52 = 1.0;
    if (1.0 <= fVar47) {
      fVar52 = fVar47;
    }
  }
  if ((SUB41(fVar49,0) == '\0') || (*(char *)(lVar42 + 0xb30) == '\0')) {
    local_28f = '\0';
  }
  else {
    local_28f = '\x01';
  }
  if ((*(int *)(lVar42 + 0x1594) == local_294) ||
     (local_295 = '\x01', *(int *)(lVar42 + 0x2084) != local_294)) {
    local_295 = '\0';
  }
  local_214 = *(float *)(lVar42 + 0x2634);
  if ((local_28f == '\0') && ((*(int *)(lVar42 + 0x1594) != 0 || ((local_27c >> 0x1b & 1) == 0)))) {
    bVar37 = false;
  }
  else {
    bVar37 = true;
  }
  local_1f0 = fVar52;
  if ((local_288 == 0) || (lVar44 == 0)) {
    iVar18 = 0;
    if ((local_288 != 0) && (iVar19 = 0, lVar44 != 0)) goto LAB_1802b7d64;
LAB_1802b7d83:
    bVar7 = false;
    local_28c = '\0';
    if ((local_288 != 0) && (local_28c = '\0', lVar44 != 0)) {
      iVar19 = *(int *)(lVar42 + 0x1594);
      goto LAB_1802b7da1;
    }
LAB_1802b7dbf:
    local_278 = (float)((uint)local_278 & 0xffffff00);
    local_28d = '\0';
    if (local_288 == 0) {
      fVar49 = 3.4028235e+38;
      local_28d = '\0';
    }
    else {
      fVar49 = *(float *)((longlong)plVar2 + 0x9c);
    }
  }
  else {
    iVar19 = FUN_180268980("#SCROLLY");
    if (*(int *)(*plVar2 + 0x1578) == iVar19) {
      FUN_1802899e0(iVar19);
    }
LAB_1802b7d64:
    iVar18 = iVar19;
    if ((*(int *)(lVar42 + 0x1594) != 0) || (*(int *)(lVar42 + 0x15c0) != iVar18))
    goto LAB_1802b7d83;
    local_28c = '\x01';
    iVar19 = 0;
    bVar7 = true;
LAB_1802b7da1:
    if (iVar19 != iVar18) goto LAB_1802b7dbf;
    local_28d = '\x01';
    local_278 = (float)((uint)local_278 & 0xffffff00);
    fVar49 = *(float *)((longlong)plVar2 + 0x9c);
  }
  pppppppcVar34 = local_258;
  local_296 = '\0';
  if ((lVar44 == 0) || (*(char *)(lVar44 + 0x75) == '\0')) {
    bVar8 = false;
    if (lVar44 != 0) goto LAB_1802b7dfc;
LAB_1802b7e15:
    bVar9 = false;
    if (lVar44 != 0) goto LAB_1802b7e1d;
LAB_1802b7e30:
    bVar10 = false;
  }
  else {
    bVar8 = true;
LAB_1802b7dfc:
    if ((bool)*(char *)(*(longlong *)(lVar44 + 8) + 0x17) == (local_288 == 0)) goto LAB_1802b7e15;
    bVar9 = true;
LAB_1802b7e1d:
    if (((local_27c ^ *(uint *)(lVar44 + 0x10)) >> 9 & 1) == 0) goto LAB_1802b7e30;
    bVar10 = true;
  }
  if ((((bVar37) || (local_295 != '\0')) || (local_214 == (float)local_294)) ||
     (local_290 = '\0', bVar7)) {
    local_290 = '\x01';
  }
  if (bVar8) {
    sVar24 = strlen((char *)local_258);
    *(undefined1 *)(lVar44 + 0x75) = 0;
    iVar18 = (int)sVar24;
    local_2d8 = (code *******)CONCAT44(local_2d8._4_4_,iVar18);
    FUN_1802b6ee0(lVar44,*(undefined8 *)(lVar44 + 0x30),*(undefined4 *)(lVar44 + 0x18));
    FUN_18028a8d0(lVar44 + 0x28,(int)local_26c + 1);
    *(int *)(lVar44 + 0x18) = iVar18;
    memcpy(*(void **)(lVar44 + 0x30),pppppppcVar34,(longlong)(iVar18 + 1));
    *(undefined4 *)(*(longlong *)(lVar44 + 8) + 4) = *(undefined4 *)(lVar44 + 0x78);
    *(undefined4 *)(*(longlong *)(lVar44 + 8) + 8) = *(undefined4 *)(lVar44 + 0x7c);
    **(undefined4 **)(lVar44 + 8) = (*(undefined4 **)(lVar44 + 8))[2];
    piVar33 = local_230;
  }
  else if (((local_290 != '\0') && (*(int *)(lVar42 + 0x1594) != local_294)) ||
          ((bVar9 || (piVar33 = local_230, bVar10)))) {
    lVar44 = lVar42 + 0x2518;
    *(undefined4 *)(lVar42 + 0x2584) = 0xbe99999a;
    local_1c0 = lVar44;
    FUN_1802b7000(*(undefined4 *)(lVar42 + 0x252c));
    sVar24 = strlen((char *)local_258);
    iVar18 = (int)sVar24;
    if (local_28c == '\0') {
      FUN_18028a8d0(lVar42 + 0x2550,iVar18 + 1);
      memcpy(*(void **)(lVar42 + 0x2558),local_258,(longlong)(iVar18 + 1));
    }
    if (((*(int *)(lVar42 + 0x252c) != local_294) || (bVar9)) ||
       ((bVar37 = true, !bVar10 &&
        (((*(int *)(lVar42 + 0x2530) != iVar18 || (*(char **)(lVar42 + 0x2548) == (char *)0x0)) ||
         (iVar19 = strncmp(*(char **)(lVar42 + 0x2548),(char *)local_258,sVar24 & 0xffffffff),
         iVar19 != 0)))))) {
      bVar37 = false;
    }
    *(int *)(lVar42 + 0x252c) = local_294;
    *(int *)(lVar42 + 0x2530) = iVar18;
    *(undefined1 *)(lVar42 + 0x258b) = 0;
    pppppppcVar34 = local_258;
    if (local_280 == 0) {
      FUN_18028a8d0(lVar42 + 0x2540,(int)local_26c + 1);
      pppppppcVar34 = local_258;
      memcpy(*(void **)(lVar42 + 0x2548),local_258,(longlong)(*(int *)(lVar42 + 0x2530) + 1));
    }
    piVar33 = local_230;
    *(undefined8 *)(lVar42 + 0x2574) = 0;
    if ((local_27c >> 0x11 & 1) != 0) {
      if (*(char *)(lVar39 + (longlong)local_230) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (pppppppcVar34 == (code *******)0x0) {
        fVar47 = 0.0;
      }
      else {
        local_2a8 = 0;
        local_2b8 = 0;
        local_2c0 = (code *******)0x0;
        local_2c8 = (code *******)0x0;
        local_2d8 = (code *******)CONCAT44(local_2d8._4_4_,0xbf800000);
        local_2d0 = pppppppcVar34;
        FUN_18029e350(&local_228,
                      *(undefined8 *)(*(longlong *)((longlong)local_f8 + lVar39) + 0x1228),
                      *(undefined4 *)(*(longlong *)((longlong)local_f8 + lVar39) + 0x1238));
        fVar47 = (float)(int)((float)local_228 + 0.99999);
      }
      fVar47 = *(float *)(lVar42 + 0xcc4) + *(float *)(lVar42 + 0xcc4) + (fVar47 - fVar53);
      fVar53 = 0.0;
      if (0.0 <= fVar47) {
        fVar53 = fVar47;
      }
      *(float *)(lVar42 + 0x2574) = fVar53 + *(float *)(lVar42 + 0x2574);
    }
    if (!bVar37) {
      puVar5 = *(undefined4 **)(lVar42 + 0x2520);
      *(undefined8 *)(puVar5 + 0x28e) = 0x630000;
      puVar5[0x290] = 999;
      *(undefined8 *)(puVar5 + 1) = 0;
      *puVar5 = 0;
      *(undefined2 *)((longlong)puVar5 + 0x15) = 1;
      puVar5[7] = 0;
      *(undefined1 *)(puVar5 + 5) = 0;
      *(bool *)((longlong)puVar5 + 0x17) = local_288 == 0;
      *(undefined1 *)(puVar5 + 3) = 0;
      puVar5[4] = 0;
    }
    if (local_288 == 0) {
      local_278 = (float)((uint)local_278 & 0xff);
      if ((local_27c >> 0xc & 1) != 0) {
        local_278 = 1.4013e-45;
      }
      if ((local_295 != '\0') && ((!bVar37 || ((*(byte *)(lVar42 + 0x2090) & 4) == 0)))) {
        local_278 = 1.4013e-45;
      }
      if (local_28f != '\0') {
        bVar16 = SUB41(local_278,0);
        if (*(char *)(lVar42 + 0x11c) != '\0') {
          bVar16 = 1;
        }
        local_278 = (float)(uint)bVar16;
      }
    }
    if ((local_27c >> 0xb & 1) != 0) {
      *(undefined1 *)(*(longlong *)(lVar42 + 0x2520) + 0xc) = 1;
    }
  }
  bVar16 = local_28f;
  cVar15 = local_290;
  iVar18 = local_294;
  local_28a = *(char *)(lVar42 + 0x79);
  if (local_290 == '\0') {
LAB_1802b7f1d:
    if (*(int *)(lVar42 + 0x1594) == iVar18) goto LAB_1802b7f2a;
    cVar17 = local_28a;
    if (lVar44 == 0) goto LAB_1802b83ad;
LAB_1802b839a:
    pppppppcVar34 = local_258;
    if (local_280 == 0) {
      pppppppcVar34 = *(code ********)(lVar44 + 0x30);
    }
    *(code ********)(lVar44 + 0x20) = pppppppcVar34;
  }
  else {
    if (*(int *)(lVar42 + 0x1594) != local_294) {
      FUN_18026ea90(local_294,local_200);
      FUN_180282e10(iVar18,local_200);
      FUN_1802827b0(local_200,0);
      if (local_295 != '\0') {
        FUN_180282bb0();
      }
      goto LAB_1802b7f1d;
    }
LAB_1802b7f2a:
    iVar18 = local_294;
    local_110 = (code ******)0x20200000201;
    uStack_108 = 0x20b0000020a;
    local_100 = 0x207;
    local_fc = 0x208;
    pppppppcVar34 = &local_110;
    do {
      FUN_18027dff0(*(undefined4 *)pppppppcVar34,iVar18);
      cVar15 = local_290;
      pppppppcVar34 = (code *******)((longlong)pppppppcVar34 + 4);
    } while ((code ********)pppppppcVar34 != &local_f8);
    if (bVar16 != '\0') {
      if (*(char *)(lVar39 + (longlong)piVar33) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar3 = *(longlong *)((longlong)local_f8 + lVar39);
      *(int *)(lVar3 + 0x1cd0) = local_294;
      *(int *)(lVar3 + 0x1ccc) = local_294;
      *(undefined2 *)(lVar3 + 0x1cd4) = 0;
    }
    pppppppcVar34 = local_f8;
    iVar18 = local_294;
    *(uint *)(lVar42 + 0x1ea8) = *(uint *)(lVar42 + 0x1ea8) | 3;
    if ((local_288 != 0) || ((local_27c & 0x80000) != 0)) {
      *(uint *)(lVar42 + 0x1ea8) = *(uint *)(lVar42 + 0x1ea8) | 0xc;
      if (*(char *)(lVar39 + (longlong)piVar33) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar3 = *(longlong *)((longlong)pppppppcVar34 + lVar39);
      *(int *)(lVar3 + 0x1634) = iVar18;
      *(int *)(lVar3 + 0x1630) = iVar18;
      *(undefined2 *)(lVar3 + 0x1638) = 0;
      if (*(char *)(lVar39 + (longlong)piVar33) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar3 = *(longlong *)((longlong)pppppppcVar34 + lVar39);
      *(int *)(lVar3 + 0x1640) = iVar18;
      *(int *)(lVar3 + 0x163c) = iVar18;
      *(undefined2 *)(lVar3 + 0x1644) = 0;
      if (local_288 != 0) {
        if (*(char *)(lVar39 + (longlong)piVar33) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar3 = *(longlong *)((longlong)pppppppcVar34 + lVar39);
        *(int *)(lVar3 + 0x164c) = iVar18;
        *(int *)(lVar3 + 0x1648) = iVar18;
        *(undefined2 *)(lVar3 + 0x1650) = 0;
        if (*(char *)(lVar39 + (longlong)piVar33) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar3 = *(longlong *)((longlong)pppppppcVar34 + lVar39);
        *(int *)(lVar3 + 0x1658) = iVar18;
        *(int *)(lVar3 + 0x1654) = iVar18;
        *(undefined2 *)(lVar3 + 0x165c) = 0;
      }
    }
    cVar17 = local_28a;
    if (local_28a != '\0') {
      if (*(char *)(lVar39 + (longlong)piVar33) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar39 = *(longlong *)((longlong)pppppppcVar34 + lVar39);
      *(int *)(lVar39 + 0x1d3c) = local_294;
      *(int *)(lVar39 + 0x1d38) = local_294;
      *(undefined2 *)(lVar39 + 0x1d40) = 0;
    }
    if ((local_288 != 0) && (lVar44 != 0)) {
      *(undefined4 *)(lVar44 + 0x60) = *(undefined4 *)((longlong)local_268 + 0x9c);
    }
    if (local_280 == 0) {
      if (lVar44 != 0) goto LAB_1802b8357;
    }
    else if (lVar44 != 0) {
      sVar24 = strlen((char *)local_258);
      *(int *)(lVar44 + 0x18) = (int)sVar24;
LAB_1802b8357:
      piVar33 = *(int **)(lVar44 + 8);
      iVar18 = *(int *)(lVar44 + 0x18);
      if (*piVar33 < *(int *)(lVar44 + 0x18)) {
        iVar18 = *piVar33;
      }
      *piVar33 = iVar18;
      lVar39 = *(longlong *)(lVar44 + 8);
      iVar18 = *(int *)(lVar44 + 0x18);
      if (*(int *)(lVar39 + 4) < *(int *)(lVar44 + 0x18)) {
        iVar18 = *(int *)(lVar39 + 4);
      }
      *(int *)(lVar39 + 4) = iVar18;
      lVar39 = *(longlong *)(lVar44 + 8);
      iVar18 = *(int *)(lVar44 + 0x18);
      if (*(int *)(lVar39 + 8) < *(int *)(lVar44 + 0x18)) {
        iVar18 = *(int *)(lVar39 + 8);
      }
      *(int *)(lVar39 + 8) = iVar18;
      goto LAB_1802b839a;
    }
  }
LAB_1802b83ad:
  iVar18 = local_294;
  if ((*(int *)(lVar42 + 0x1594) == local_294) && (lVar44 == 0)) {
    FUN_18026ea90(0,0);
  }
  uVar36 = local_24c;
  if (*(int *)(lVar42 + 0x1594) == iVar18) {
    if ((*(char *)(lVar42 + 0xb30) == '\0') || (cVar15 != '\0')) {
LAB_1802b83fa:
      local_298 = '\x01';
    }
    else {
      local_296 = '\x01';
      local_298 = '\x01';
    }
  }
  else {
    if ((lVar44 != 0) && (local_28d != '\0')) goto LAB_1802b83fa;
    local_298 = '\0';
  }
  cVar15 = SUB41(local_278,0);
  if ((lVar44 == 0) ||
     (((*(int *)(*(longlong *)(lVar44 + 8) + 4) == *(int *)(*(longlong *)(lVar44 + 8) + 8) &&
       (cVar15 == '\0')) || (local_298 == '\0')))) {
    local_297 = 0;
    if ((local_298 != '\0') || (local_297 = 0, *(int *)(lVar42 + 0x1594) == iVar18))
    goto LAB_1802b8453;
LAB_1802b8463:
    local_289 = '\0';
  }
  else {
    local_297 = 1;
LAB_1802b8453:
    if ((local_280 != 0) || (lVar44 == 0)) goto LAB_1802b8463;
    local_289 = '\x01';
  }
  local_28e = 0;
  local_28f = 0;
  if (local_1e0 == (code *******)0x0) {
LAB_1802b8487:
    local_290 = '\0';
  }
  else {
    pppppppcVar34 = local_258;
    if (local_289 != '\0') {
      pppppppcVar34 = *(code ********)(lVar44 + 0x30);
    }
    if (*(char *)pppppppcVar34 != '\0') goto LAB_1802b8487;
    local_290 = '\x01';
  }
  if ((local_24c != 0) && (local_290 == '\0')) {
    FUN_1802b6990();
  }
  fVar53 = local_188;
  uVar32 = local_288;
  if ((((lVar44 != 0) && (*(int *)(lVar44 + 0x14) == iVar18)) &&
      (*(uint *)(lVar44 + 0x10) = local_27c, local_238 != 0.0)) &&
     (*(float *)(lVar44 + 0x68) != fVar52)) {
    *(undefined1 *)(lVar44 + 0x71) = 1;
    *(float *)(lVar44 + 0x68) = fVar52;
    local_298 = '\x01';
  }
  local_208 = local_188;
  if (*(int *)(lVar42 + 0x1594) == iVar18) {
    *(undefined1 *)(lVar44 + 0x74) = 0;
    *(float *)(lVar44 + 0x58) = local_26c;
    *(float *)(lVar44 + 0x68) = fVar52;
    *(bool *)(lVar42 + 0x15a1) = *(char *)(lVar42 + 0x108) == '\0';
    if (cVar15 != '\0') {
      *(undefined4 *)(*(longlong *)(lVar44 + 8) + 4) = 0;
      *(undefined4 *)(*(longlong *)(lVar44 + 8) + 8) = *(undefined4 *)(lVar44 + 0x18);
      **(undefined4 **)(lVar44 + 8) = (*(undefined4 **)(lVar44 + 8))[2];
      *(undefined1 *)(*(longlong *)(lVar44 + 8) + 0x16) = 0;
      *(undefined1 *)(lVar44 + 0x72) = 1;
      goto LAB_1802b8768;
    }
    fVar47 = ((*(float *)(lVar42 + 0x100) - local_188) - *(float *)(lVar42 + 0xcc4)) +
             *(float *)(lVar44 + 0x5c);
    if (((SUB41(local_284,0) == '\0') || (*(ushort *)(lVar42 + 0xb3a) < 2)) ||
       (*(char *)(lVar42 + 0x11d) != '\0')) {
      if ((*(char *)(lVar42 + 0xb30) == '\0') || (*(char *)(lVar44 + 0x72) != '\0')) {
        if (((*(char *)(lVar42 + 0x108) != '\0') && (*(char *)(lVar44 + 0x72) == '\0')) &&
           ((*(float *)(lVar42 + 0xec) != 0.0 || (*(float *)(lVar42 + 0xf0) != 0.0)))) {
          FUN_1802b4e30(lVar44,*(undefined8 *)(lVar44 + 8),fVar47);
          *(undefined1 *)(lVar44 + 0x70) = 1;
          goto LAB_1802b8760;
        }
      }
      else if (SUB41(local_284,0) != '\0') {
        if (*(char *)(lVar42 + 0x11d) == '\0') {
          FUN_1802b4dc0(lVar44);
        }
        else {
          FUN_1802b4e30(lVar44,*(undefined8 *)(lVar44 + 8),fVar47);
        }
        goto LAB_1802b8760;
      }
    }
    else {
      FUN_1802b4dc0(lVar44,*(undefined8 *)(lVar44 + 8));
      piVar33 = *(int **)(lVar44 + 8);
      iVar19 = *piVar33;
      if ((*(byte *)(lVar42 + 0xb3a) & 1) == 0) {
        if ((iVar19 == 0) ||
           (*(char *)(*(longlong *)(lVar44 + 0x20) + -1 + (longlong)iVar19) == '\n')) {
          bVar37 = true;
        }
        else {
          bVar37 = false;
        }
        if ((piVar33[1] != piVar33[2]) || (!bVar37)) {
          FUN_1802b67e0(lVar44,0x20000c);
        }
        puVar5 = *(undefined4 **)(lVar44 + 8);
        if (puVar5[1] == puVar5[2]) {
          puVar5[2] = *puVar5;
          puVar5[1] = *puVar5;
        }
        uVar46 = FUN_1802b44d0(lVar44,**(undefined4 **)(lVar44 + 8));
        **(undefined4 **)(lVar44 + 8) = uVar46;
        (*(undefined4 **)(lVar44 + 8))[2] = **(undefined4 **)(lVar44 + 8);
        piVar33 = *(int **)(lVar44 + 8);
        iVar19 = *(int *)(lVar44 + 0x18);
        iVar31 = piVar33[2];
        iVar30 = piVar33[1];
        if (iVar30 != iVar31) {
          if (iVar19 < iVar30) {
            piVar33[1] = iVar19;
            iVar30 = iVar19;
          }
          if (iVar19 < iVar31) {
            piVar33[2] = iVar19;
            iVar31 = iVar19;
          }
          if (iVar30 == iVar31) {
            *piVar33 = iVar30;
          }
        }
        if (iVar19 < *piVar33) {
          *piVar33 = iVar19;
        }
      }
      else {
        cVar15 = *(char *)((longlong)iVar19 + *(longlong *)(lVar44 + 0x20));
        *(undefined4 *)(lVar44 + 0x68) = 0;
        FUN_1802b67e0(lVar44,0x200004);
        FUN_1802b67e0(lVar44,0x600005);
        FUN_1802b67e0(lVar44);
        *(float *)(lVar44 + 0x68) = fVar52;
        if ((cVar15 != '\n') && (uVar32 != 0)) {
          lVar39 = *(longlong *)(lVar44 + 8);
          uVar46 = *(undefined4 *)(lVar39 + 4);
          *(undefined4 *)(lVar39 + 4) = *(undefined4 *)(lVar39 + 8);
          *(undefined4 *)(lVar39 + 8) = uVar46;
          **(undefined4 **)(lVar44 + 8) = (*(undefined4 **)(lVar44 + 8))[2];
        }
        *(undefined1 *)(lVar44 + 0x70) = 0;
      }
LAB_1802b8760:
      *(undefined4 *)(lVar44 + 0x6c) = 0xbe99999a;
    }
LAB_1802b8768:
    if ((*(char *)(lVar44 + 0x72) != '\0') && (*(char *)(lVar42 + 0x108) == '\0')) {
      *(undefined1 *)(lVar44 + 0x72) = 0;
    }
    pppppppcVar34 = local_240;
    if ((((local_27c & 0x20) != 0) && (local_280 == 0)) &&
       (cVar15 = FUN_18027e2e0(0x200), pppppppcVar34 = local_240, cVar15 != '\0')) {
      local_284 = 1.26117e-44;
      local_2d0 = (code *******)((ulonglong)local_2d0 & 0xffffffffffffff00);
      local_2d8 = local_240;
      cVar15 = FUN_1802b6be0(lVar42);
      if (cVar15 != '\0') {
        FUN_1802b6860(lVar44);
      }
    }
    if (((*(char *)(lVar42 + 0x11c) == '\0') || (*(char *)(lVar42 + 0x11e) != '\0')) &&
       ((cVar17 == '\0' || (*(char *)(lVar42 + 0x11c) == '\0')))) {
      bVar37 = false;
    }
    else {
      bVar37 = true;
    }
    uVar36 = local_24c;
    if (0 < *(int *)(lVar42 + 0xbd0)) {
      if (((!bVar37) && (local_280 == 0)) && (local_295 == '\0')) {
        iVar19 = 0;
        do {
          local_284 = (float)(uint)*(ushort *)(*(longlong *)(lVar42 + 0xbd8) + (longlong)iVar19 * 2)
          ;
          if (local_284 != 1.26117e-44) {
            local_2d0 = (code *******)((ulonglong)local_2d0 & 0xffffffffffffff00);
            local_2d8 = pppppppcVar34;
            cVar15 = FUN_1802b6be0(lVar42);
            if (cVar15 != '\0') {
              FUN_1802b6860(lVar44);
            }
          }
          iVar19 = iVar19 + 1;
          iVar18 = local_294;
        } while (iVar19 < *(int *)(lVar42 + 0xbd0));
      }
      FUN_180260a20(lVar42 + 0xbd0);
      uVar36 = local_24c;
    }
  }
  bVar37 = false;
  cVar15 = local_296;
  if (((*(int *)(lVar42 + 0x1594) == iVar18) && (*(char *)(lVar42 + 0x15a0) == '\0')) &&
     (local_296 == '\0')) {
    uVar32 = local_27c & 0x10000;
    fVar47 = (float)(int)((fVar22 - *(float *)(lVar42 + 0xcc8)) / *(float *)(lVar42 + 0x1238));
    local_284 = 1.4013e-45;
    if (0 < (int)fVar47) {
      local_284 = fVar47;
    }
    *(float *)(*(longlong *)(lVar44 + 8) + 0x10) = local_284;
    if (local_28a == '\0') {
      local_295 = *(char *)(lVar42 + 0x11c);
LAB_1802b896b:
      local_28d = '\0';
    }
    else {
      local_28f = 0;
      local_28e = 0;
      local_295 = *(char *)(lVar42 + 0x11e);
      if (((*(char *)(lVar42 + 0x11c) == '\0') || (*(char *)(lVar42 + 0x11f) != '\0')) ||
         (local_295 != '\0')) {
        local_28e = 0;
        local_28f = 0;
        goto LAB_1802b896b;
      }
      local_28d = '\x01';
    }
    cVar15 = FUN_18027e2e0(0x1239,1,iVar18);
    if (((cVar15 == '\0') && (cVar15 = FUN_18027e2e0(0x220a,1,iVar18), cVar15 == '\0')) ||
       (((local_280 != 0 || (uVar36 != 0)) ||
        ((local_288 != 0 &&
         (*(int *)(*(longlong *)(lVar44 + 8) + 4) == *(int *)(*(longlong *)(lVar44 + 8) + 8))))))) {
      local_28c = '\0';
    }
    else {
      local_28c = '\x01';
    }
    uVar13 = local_280;
    uVar36 = local_288;
    cVar15 = FUN_18027e2e0(0x1224,0,iVar18);
    if ((((cVar15 == '\0') && (cVar15 = FUN_18027e2e0(0x1209,0,iVar18), cVar15 == '\0')) ||
        (local_24c != 0)) ||
       ((uVar36 != 0 &&
        (*(int *)(*(longlong *)(lVar44 + 8) + 4) == *(int *)(*(longlong *)(lVar44 + 8) + 8))))) {
      local_271 = '\0';
    }
    else {
      local_271 = '\x01';
    }
    bVar37 = true;
    cVar15 = FUN_18027e2e0(0x1237,1,iVar18);
    if (((cVar15 == '\0') && (cVar15 = FUN_18027e2e0(0x2209,1,iVar18), cVar15 == '\0')) ||
       (local_270 = '\x01', uVar13 != 0)) {
      local_270 = '\0';
    }
    cVar15 = FUN_18027e2e0(0x123b,1,iVar18);
    if (((cVar15 == '\0') || (uVar13 != 0)) || (local_273 = '\x01', uVar32 != 0)) {
      local_273 = '\0';
    }
    cVar15 = FUN_18027e2e0(0x123a,1,iVar18);
    if (((cVar15 == '\0') && (cVar15 = FUN_18027e2e0(0x323b,1,iVar18), cVar15 == '\0')) ||
       ((uVar13 != 0 || (local_272 = '\x01', uVar32 != 0)))) {
      local_272 = '\0';
    }
    local_250 = FUN_18027e2e0(0x1222,0,iVar18);
    if (((*(byte *)(lVar42 + 0x28) & 2) == 0) || ((*(byte *)(lVar42 + 0x2c) & 1) == 0)) {
      bVar37 = false;
    }
    cVar15 = FUN_18027e2e0(0x20d,1,iVar18);
    if (cVar15 == '\0') {
      cVar15 = FUN_18027e2e0(0x273,1,iVar18);
      local_274 = '\0';
      if (cVar15 != '\0') goto LAB_1802b8afd;
    }
    else {
LAB_1802b8afd:
      local_274 = '\x01';
    }
    cVar15 = FUN_18027e2e0(0x120d,1,iVar18);
    if (cVar15 == '\0') {
      cVar15 = FUN_18027e2e0(0x1273,1,iVar18);
      local_28b = '\0';
      if (cVar15 != '\0') goto LAB_1802b8b2b;
    }
    else {
LAB_1802b8b2b:
      local_28b = '\x01';
    }
    cVar15 = FUN_18027e2e0(0x220d,1,iVar18);
    if ((cVar15 == '\0') && (cVar15 = FUN_18027e2e0(0x2273,1,iVar18), cVar15 == '\0')) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar37) {
      uVar29 = 0x27d;
      if (*(char *)(lVar42 + 0x71) != '\0') {
        uVar29 = 0x27b;
      }
      cVar15 = FUN_18027bb30(uVar29,0,0);
      if (cVar15 == '\0') goto LAB_1802b8b88;
      bVar8 = true;
    }
    else {
LAB_1802b8b88:
      bVar8 = false;
    }
    cVar15 = FUN_18027e2e0(0x20e,1,local_294);
    if (cVar15 == '\0') {
      if (bVar37) {
        uVar29 = 0x27b;
        if (*(char *)(lVar42 + 0x71) != '\0') {
          uVar29 = 0x27d;
        }
        cVar15 = FUN_18027e2e0(uVar29,1,local_294);
        if (cVar15 != '\0') goto LAB_1802b8bd4;
      }
      bVar37 = false;
    }
    else {
LAB_1802b8bd4:
      bVar37 = true;
    }
    cVar15 = FUN_18027bb30(0x201,1,0);
    if ((cVar15 != '\0') || (cVar15 = FUN_18027bb30(0x202,1,0), cVar15 != '\0')) goto LAB_1802b8c0d;
    cVar15 = FUN_18027bb30(0x203,1,0);
    uVar36 = local_288;
    if ((cVar15 == '\0') || (local_288 == 0)) {
      cVar15 = FUN_18027bb30(0x204,1,0);
      if ((cVar15 != '\0') && (uVar36 != 0)) {
        if (*(char *)(lVar42 + 0x11c) == '\0') goto LAB_1802b8c0d;
        lVar39 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar39 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        fVar55 = *(float *)(lVar42 + 0x1238) + *(float *)((longlong)local_268 + 0x9c);
        fVar47 = *(float *)(*(longlong *)(*(longlong *)(lVar39 + 0xec0) + 0x1520) + 0xa4);
        if (fVar47 <= fVar55) {
          fVar55 = fVar47;
        }
        *(float *)((longlong)local_268 + 0xac) = fVar55;
        *(undefined4 *)((longlong)local_268 + 0xb4) = 0;
        *(undefined4 *)((longlong)local_268 + 0xbc) = 0;
        goto LAB_1802b8c15;
      }
      cVar15 = FUN_18027bb30(0x205,1,0);
      if ((cVar15 != '\0') && (uVar36 != 0)) {
        FUN_1802b67e0(lVar44);
        fVar49 = fVar49 - (float)(int)local_284 * *(float *)(lVar42 + 0x1238);
        goto LAB_1802b8c15;
      }
      cVar15 = FUN_18027bb30(0x206,1,0);
      if ((cVar15 != '\0') && (uVar36 != 0)) {
        FUN_1802b67e0(lVar44);
        fVar49 = fVar49 + (float)(int)local_284 * *(float *)(lVar42 + 0x1238);
        goto LAB_1802b8c15;
      }
      cVar15 = FUN_18027bb30(0x207,1,0);
      if ((cVar15 != '\0') || (cVar15 = FUN_18027bb30(0x208,1,0), cVar15 != '\0')) {
LAB_1802b8c0d:
        FUN_1802b67e0(lVar44);
        goto LAB_1802b8c15;
      }
      cVar15 = FUN_18027bb30(0x20a,1,0);
      if ((cVar15 != '\0') && ((local_280 == 0 && (local_28c == '\0')))) {
        if ((*(int *)(*(longlong *)(lVar44 + 8) + 4) == *(int *)(*(longlong *)(lVar44 + 8) + 8)) &&
           (local_295 != '\0')) {
          FUN_1802b67e0(lVar44,0x60000d);
        }
        goto LAB_1802b8c0d;
      }
      cVar15 = FUN_18027bb30(0x20b,1,0);
      if ((cVar15 != '\0') && (local_280 == 0)) {
        if (*(int *)(*(longlong *)(lVar44 + 8) + 4) == *(int *)(*(longlong *)(lVar44 + 8) + 8)) {
          if (local_295 == '\0') {
            if ((((local_28a != '\0') && (*(char *)(lVar42 + 0x11c) != '\0')) &&
                (*(char *)(lVar42 + 0x11e) == '\0')) && (*(char *)(lVar42 + 0x11f) == '\0')) {
              FUN_1802b67e0(lVar44,0x600004);
            }
          }
          else {
            FUN_1802b67e0(lVar44,0x60000c);
          }
        }
        goto LAB_1802b8c0d;
      }
      if (((local_274 != '\0') || (local_28b != '\0')) || ((bVar7 || (bVar8)))) {
        if (((uVar36 != 0) && (!bVar8)) &&
           ((bVar7 || (((local_274 != '\0' && ((local_27c & 0x100) == 0)) ||
                       ((local_28b != '\0' && ((local_27c & 0x100) != 0)))))))) {
          if (local_280 == 0) {
            local_284 = 1.4013e-44;
            local_2d0 = (code *******)((ulonglong)local_2d0 & 0xffffffffffffff00);
            local_2d8 = local_240;
            cVar15 = FUN_1802b6be0(lVar42,lVar44,&local_284,local_220);
            if (cVar15 != '\0') {
              FUN_1802b6860(lVar44);
            }
          }
          goto LAB_1802b8c15;
        }
        cVar15 = '\x01';
        local_28f = 1;
        bVar37 = false;
        if ((*(char *)(lVar42 + 0x7c) != '\0') && (uVar36 == 0)) {
          *(undefined4 *)(*(longlong *)(lVar44 + 8) + 4) = 0;
          *(undefined4 *)(*(longlong *)(lVar44 + 8) + 8) = *(undefined4 *)(lVar44 + 0x18);
          **(undefined4 **)(lVar44 + 8) = (*(undefined4 **)(lVar44 + 8))[2];
          *(undefined1 *)(*(longlong *)(lVar44 + 8) + 0x16) = 0;
          *(int *)(lVar42 + 0x2634) = local_294;
        }
      }
      else {
        if (!bVar37) {
          if ((local_273 == '\0') && (local_272 == '\0')) {
            if (local_250 == '\0') {
              if ((local_28c == '\0') && (local_271 == '\0')) {
                if (local_270 != '\0') {
                  lVar39 = *(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                  if (*(char *)(lVar39 + 0x10) == '\0') {
                    __dyn_tls_on_demand_init();
                  }
                  pcVar4 = *(code **)(*(longlong *)(lVar39 + 0xec0) + 0xc00);
                  if ((pcVar4 != (code *)0x0) &&
                     (pcVar25 = (char *)(*pcVar4)(), pcVar25 != (char *)0x0)) {
                    sVar24 = strlen(pcVar25);
                    pcVar40 = pcVar25 + (int)sVar24;
                    local_1d8 = 0;
                    uVar23 = 0;
                    local_1d0 = (void *)0x0;
                    iVar18 = (int)sVar24 + 1;
                    if (0 < iVar18) {
                      local_1d0 = (void *)FUN_18026f580((longlong)iVar18);
                      local_1d8 = CONCAT44(iVar18,(int)local_1d8);
                    }
                    _Dst = local_1d0;
                    pvVar26 = local_1d0;
                    if (*pcVar25 != '\0') {
                      do {
                        iVar18 = FUN_180268c20(&local_284,pcVar25,pcVar40);
                        pcVar25 = pcVar25 + iVar18;
                        local_2d0 = (code *******)CONCAT71(local_2d0._1_7_,1);
                        local_2d8 = local_240;
                        cVar15 = FUN_1802b6be0(lVar42,lVar44,&local_284,local_220);
                        if (cVar15 != '\0') {
                          iVar18 = FUN_180268db0(&local_f8);
                          *(undefined1 *)((longlong)&local_f8 + (longlong)iVar18) = 0;
                          sVar24 = strlen((char *)&local_f8);
                          iVar18 = (int)sVar24;
                          FUN_18028a8d0(&local_1d8,(int)uVar23 + iVar18);
                          pvVar26 = local_1d0;
                          uVar23 = (ulonglong)(int)local_1d8;
                          memcpy((void *)((uVar23 - (longlong)iVar18) + (longlong)local_1d0),
                                 &local_f8,(longlong)iVar18);
                        }
                      } while (*pcVar25 != '\0');
                      iVar18 = (int)uVar23;
                      _Dst = pvVar26;
                      if (0 < iVar18) {
                        if (iVar18 == local_1d8._4_4_) {
                          if (local_1d8._4_4_ == 0) {
                            uVar36 = 8;
                          }
                          else {
                            uVar36 = local_1d8._4_4_ / 2 + local_1d8._4_4_;
                          }
                          uVar32 = iVar18 + 1U;
                          if ((int)(iVar18 + 1U) < (int)uVar36) {
                            uVar32 = uVar36;
                          }
                          if (local_1d8._4_4_ < (int)uVar32) {
                            _Dst = (void *)FUN_18026f580((longlong)(int)uVar32);
                            if (pvVar26 != (void *)0x0) {
                              memcpy(_Dst,pvVar26,(longlong)iVar18);
                              FUN_18026f680(pvVar26);
                            }
                            local_1d8 = (ulonglong)uVar32 << 0x20;
                            local_1d0 = _Dst;
                          }
                        }
                        *(undefined1 *)((longlong)iVar18 + (longlong)_Dst) = 0;
                        local_1d8 = CONCAT44(local_1d8._4_4_,iVar18 + 1);
                        piVar33 = *(int **)(lVar44 + 8);
                        iVar18 = *(int *)(lVar44 + 0x18);
                        iVar19 = piVar33[2];
                        iVar31 = piVar33[1];
                        if (iVar31 != iVar19) {
                          if (iVar18 < iVar31) {
                            piVar33[1] = iVar18;
                            iVar31 = iVar18;
                          }
                          if (iVar18 < iVar19) {
                            piVar33[2] = iVar18;
                            iVar19 = iVar18;
                          }
                          if (iVar31 == iVar19) {
                            *piVar33 = iVar31;
                          }
                        }
                        if (iVar18 < *piVar33) {
                          *piVar33 = iVar18;
                        }
                        FUN_1802b51c0(lVar44,piVar33);
                        iVar18 = FUN_1802b49e0(lVar44,*piVar33,_Dst,uVar23 & 0xffffffff);
                        if (iVar18 != 0) {
                          FUN_1802b60c0(piVar33 + 8,*piVar33,0,iVar18);
                          *piVar33 = *piVar33 + iVar18;
                          *(undefined1 *)((longlong)piVar33 + 0x16) = 0;
                        }
                        *(undefined1 *)(lVar44 + 0x70) = 1;
                      }
                    }
                    if (_Dst != (void *)0x0) {
                      FUN_18026f680(_Dst);
                    }
                  }
                }
              }
              else {
                cVar15 = local_28c;
                if (*(longlong *)(lVar42 + 0xc08) != 0) {
                  iVar18 = *(int *)(*(longlong *)(lVar44 + 8) + 8);
                  iVar19 = *(int *)(*(longlong *)(lVar44 + 8) + 4);
                  if (iVar19 == iVar18) {
                    iVar31 = *(int *)(lVar44 + 0x18);
                    iVar18 = 0;
                  }
                  else {
                    iVar31 = iVar19;
                    if (iVar19 < iVar18) {
                      iVar31 = iVar18;
                      iVar18 = iVar19;
                    }
                  }
                  iVar31 = iVar31 - iVar18;
                  iVar19 = iVar31 + 1;
                  if (*(int *)(lVar42 + 0x2aec) < iVar19) {
                    pvVar26 = (void *)FUN_18026f580((longlong)iVar19);
                    if (*(void **)(lVar42 + 0x2af0) != (void *)0x0) {
                      memcpy(pvVar26,*(void **)(lVar42 + 0x2af0),(longlong)*(int *)(lVar42 + 0x2ae8)
                            );
                      FUN_18026f680(*(undefined8 *)(lVar42 + 0x2af0));
                    }
                    *(void **)(lVar42 + 0x2af0) = pvVar26;
                    *(int *)(lVar42 + 0x2aec) = iVar19;
                  }
                  cVar15 = local_28c;
                  memcpy(*(void **)(lVar42 + 0x2af0),
                         (void *)((longlong)iVar18 + *(longlong *)(lVar44 + 0x20)),(longlong)iVar31)
                  ;
                  *(undefined1 *)((longlong)iVar31 + *(longlong *)(lVar42 + 0x2af0)) = 0;
                  lVar39 = *(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                  if (*(char *)(lVar39 + 0x10) == '\0') {
                    __dyn_tls_on_demand_init();
                  }
                  pcVar4 = *(code **)(*(longlong *)(lVar39 + 0xec0) + 0xc08);
                  if (pcVar4 != (code *)0x0) {
                    (*pcVar4)();
                  }
                }
                if (cVar15 != '\0') {
                  lVar39 = *(longlong *)(lVar44 + 8);
                  if (*(int *)(lVar39 + 4) == *(int *)(lVar39 + 8)) {
                    *(undefined4 *)(lVar39 + 4) = 0;
                    *(undefined4 *)(*(longlong *)(lVar44 + 8) + 8) = *(undefined4 *)(lVar44 + 0x18);
                    **(undefined4 **)(lVar44 + 8) = (*(undefined4 **)(lVar44 + 8))[2];
                    *(undefined1 *)(*(longlong *)(lVar44 + 8) + 0x16) = 0;
                  }
                  *(undefined1 *)(lVar44 + 0x70) = 1;
                  lVar39 = *(longlong *)(lVar44 + 8);
                  if (*(int *)(lVar39 + 4) != *(int *)(lVar39 + 8)) {
                    FUN_1802b51c0(lVar44);
                    *(undefined1 *)(lVar39 + 0x16) = 0;
                  }
                }
              }
            }
            else {
              *(undefined4 *)(*(longlong *)(lVar44 + 8) + 4) = 0;
              *(undefined4 *)(*(longlong *)(lVar44 + 8) + 8) = *(undefined4 *)(lVar44 + 0x18);
              **(undefined4 **)(lVar44 + 8) = (*(undefined4 **)(lVar44 + 8))[2];
              *(undefined1 *)(*(longlong *)(lVar44 + 8) + 0x16) = 0;
              *(undefined1 *)(lVar44 + 0x70) = 1;
            }
          }
          else {
            FUN_1802b67e0(lVar44);
            (*(undefined4 **)(lVar44 + 8))[2] = **(undefined4 **)(lVar44 + 8);
            *(undefined4 *)(*(longlong *)(lVar44 + 8) + 4) =
                 *(undefined4 *)(*(longlong *)(lVar44 + 8) + 8);
          }
          goto LAB_1802b8c15;
        }
        if ((local_27c & 0x80) == 0) {
          bVar37 = true;
          local_297 = 0;
          local_298 = '\0';
          cVar15 = '\x01';
        }
        else if (**(char **)(lVar44 + 0x30) == '\0') {
          local_297 = 0;
          local_298 = '\0';
          bVar37 = false;
          cVar15 = '\x01';
        }
        else {
          bVar37 = true;
          cVar15 = local_296;
        }
      }
    }
    else {
      if (*(char *)(lVar42 + 0x11c) == '\0') goto LAB_1802b8c0d;
      fVar47 = *(float *)((longlong)local_268 + 0x9c) - *(float *)(lVar42 + 0x1238);
      if (fVar47 <= 0.0) {
        fVar47 = 0.0;
      }
      *(float *)((longlong)local_268 + 0xac) = fVar47;
      *(undefined4 *)((longlong)local_268 + 0xb4) = 0;
      *(undefined4 *)((longlong)local_268 + 0xbc) = 0;
LAB_1802b8c15:
      bVar37 = false;
      cVar15 = local_296;
    }
    if ((*(int *)(*(longlong *)(lVar44 + 8) + 4) == *(int *)(*(longlong *)(lVar44 + 8) + 8)) ||
       (local_298 == '\0')) {
      bVar16 = 0;
    }
    else {
      bVar16 = 1;
    }
    local_297 = local_297 | bVar16;
    iVar18 = local_294;
  }
  pcVar25 = (char *)0x0;
  iVar31 = 0;
  iVar19 = 0;
  pppppppcVar34 = local_258;
  if (*(int *)(lVar42 + 0x1594) == iVar18) {
    iVar19 = iVar31;
    if ((bVar37) && (local_280 == 0)) {
      if ((local_27c & 0x80) == 0) {
        pcVar40 = *(char **)(lVar44 + 0x40);
        iVar31 = strcmp(*(char **)(lVar44 + 0x30),pcVar40);
        iVar19 = 0;
        if (iVar31 != 0) {
          iVar19 = *(int *)(lVar44 + 0x38) + -1;
          local_28e = 1;
          FUN_1802b6710(lVar44,*(undefined8 *)(lVar44 + 8),pcVar40,iVar19);
          pcVar25 = pcVar40;
        }
      }
      else {
        local_28e = 1;
        puVar5 = *(undefined4 **)(lVar44 + 8);
        local_2d8 = (code *******)((ulonglong)local_2d8 & 0xffffffff00000000);
        FUN_1802b6640(lVar44,puVar5,0,*(undefined4 *)(lVar44 + 0x18));
        iVar31 = *(int *)(lVar44 + 0x18);
        **(undefined1 **)(lVar44 + 0x30) = (*(undefined1 **)(lVar44 + 0x30))[iVar31];
        *(undefined2 *)(lVar44 + 0x73) = 0x101;
        *(int *)(lVar44 + 0x18) = *(int *)(lVar44 + 0x18) - iVar31;
        *(undefined8 *)(puVar5 + 1) = 0;
        *puVar5 = 0;
        pcVar25 = "";
      }
    }
    if ((local_27c & 0x9c0000) != 0) {
      uVar46 = 0x40000;
      if ((local_27c & 0x40000) == 0) {
LAB_1802b9592:
        if ((local_27c >> 0x13 & 1) == 0) {
LAB_1802b95e1:
          uVar20 = 0;
          uVar46 = 0x800000;
          if (((local_27c & 0x800000) == 0) || (*(char *)(lVar44 + 0x74) == '\0')) {
            if ((local_27c >> 0x14 & 1) == 0) goto LAB_1802b97cc;
            uVar46 = 0x100000;
          }
        }
        else {
          cVar17 = FUN_18027bb30(0x203,1,0);
          if (cVar17 == '\0') {
            cVar17 = FUN_18027bb30(0x204,1,0);
            if (cVar17 == '\0') goto LAB_1802b95e1;
            uVar46 = 0x80000;
            uVar20 = 0x204;
          }
          else {
            uVar46 = 0x80000;
            uVar20 = 0x203;
          }
        }
      }
      else {
        uVar20 = 0x200;
        cVar17 = FUN_18027e2e0(0x200,0,iVar18);
        if (cVar17 == '\0') goto LAB_1802b9592;
      }
      local_158 = 0;
      uStack_155 = 0;
      uStack_151 = 0;
      uStack_14d = 0;
      iStack_148 = 0;
      iStack_144 = 0;
      iStack_140 = 0;
      iStack_13c = 0;
      local_138 = 0;
      uStack_134 = 0;
      local_178._8_4_ = uVar46;
      local_178._0_8_ = lVar42;
      local_178._12_4_ = local_27c;
      if ((*(int *)(lVar42 + 0x1594) != *(int *)(lVar44 + 0x14)) ||
         (uStack_156 = 1, *(char *)(lVar42 + 0x15a0) == '\0')) {
        uStack_156 = 0;
      }
      local_168._8_4_ = local_294;
      local_168._0_8_ = local_240;
      local_168._12_4_ = 0;
      pppppppcVar34 = local_258;
      if (local_280 == 0) {
        pppppppcVar34 = *(code ********)(lVar44 + 0x30);
      }
      FUN_18028a8d0(lVar44 + 0x48,*(int *)(lVar44 + 0x18) + 1);
      memcpy(*(void **)(lVar44 + 0x50),pppppppcVar34,(longlong)(*(int *)(lVar44 + 0x18) + 1));
      local_168._12_4_ = uVar20;
      uStack_151._1_3_ = SUB83(pppppppcVar34,0);
      uStack_14d = (undefined5)((ulonglong)pppppppcVar34 >> 0x18);
      iStack_148 = *(int *)(lVar44 + 0x18);
      iStack_144 = *(int *)(lVar44 + 0x58);
      uStack_155 = uStack_155 & 0xffffff00;
      piVar33 = *(int **)(lVar44 + 8);
      iStack_140 = *piVar33;
      iStack_13c = piVar33[1];
      local_138 = piVar33[2];
      (*local_220)(local_178);
      if (((char)uStack_155 != '\0') || (iStack_140 != **(int **)(lVar44 + 8))) {
        *(undefined1 *)(lVar44 + 0x70) = 1;
      }
      if (iStack_140 < 0) {
        iVar18 = 0;
      }
      else {
        iVar18 = iStack_140;
        if (iStack_148 < iStack_140) {
          iVar18 = iStack_148;
        }
      }
      **(int **)(lVar44 + 8) = iVar18;
      if (iStack_13c < 0) {
        iVar18 = 0;
      }
      else {
        iVar18 = iStack_13c;
        if (iStack_148 < iStack_13c) {
          iVar18 = iStack_148;
        }
      }
      *(int *)(*(longlong *)(lVar44 + 8) + 4) = iVar18;
      if (local_138 < 0) {
        iVar18 = 0;
      }
      else {
        iVar18 = local_138;
        if (iStack_148 < local_138) {
          iVar18 = iStack_148;
        }
      }
      *(int *)(*(longlong *)(lVar44 + 8) + 8) = iVar18;
      if ((char)uStack_155 != '\0') {
        local_2d8 = (code *******)CONCAT44(local_2d8._4_4_,iStack_148);
        FUN_1802b6ee0(lVar44,*(undefined8 *)(lVar44 + 0x50),*(int *)(lVar44 + 0x48) + -1,
                      CONCAT53(uStack_14d,uStack_151._1_3_));
        *(int *)(lVar44 + 0x18) = iStack_148;
        *(undefined4 *)(lVar44 + 0x6c) = 0xbe99999a;
      }
    }
LAB_1802b97cc:
    pppppppcVar34 = local_258;
    if (local_280 == 0) {
      pcVar40 = *(char **)(lVar44 + 0x20);
      iVar18 = strcmp(pcVar40,(char *)local_258);
      if (iVar18 != 0) {
        iVar19 = *(int *)(lVar44 + 0x18);
        local_28e = 1;
        pcVar25 = pcVar40;
      }
    }
  }
  if (*(int *)(lVar42 + 0x25b0) == local_294) {
    if (*(int *)(lVar42 + 0x1594) != local_294) {
      lVar39 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar39 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar39 = *(longlong *)(lVar39 + 0xec0);
      cVar17 = FUN_180272ea0();
      if (((cVar17 != '\0') && (*(char *)(lVar39 + 0x15cc) != '\0')) && (local_280 == 0)) {
        pcVar40 = *(char **)(lVar42 + 0x25c0);
        iVar18 = strcmp(pcVar40,(char *)pppppppcVar34);
        if (iVar18 != 0) {
          iVar19 = *(int *)(lVar42 + 0x25b8) + -1;
          local_28e = 1;
          pcVar25 = pcVar40;
        }
      }
    }
    *(undefined4 *)(lVar42 + 0x25b0) = 0;
  }
  if (pcVar25 != (char *)0x0) {
    fVar47 = local_26c;
    if ((local_27c >> 0x16 & 1) != 0) {
      local_158 = 0;
      uStack_155 = 0;
      iStack_140 = 0;
      iStack_13c = 0;
      local_138 = 0;
      uStack_134 = 0;
      local_178._8_4_ = 0x400000;
      local_178._0_8_ = lVar42;
      local_178._12_4_ = local_27c;
      if (((lVar44 == 0) || (*(int *)(lVar42 + 0x1594) != *(int *)(lVar44 + 0x14))) ||
         (uStack_156 = 1, *(char *)(lVar42 + 0x15a0) == '\0')) {
        uStack_156 = 0;
      }
      uStack_151._1_3_ = SUB83(pppppppcVar34,0);
      uStack_151._0_1_ = 0;
      uStack_14d = (undefined5)((ulonglong)pppppppcVar34 >> 0x18);
      iStack_144 = iVar19 + 1;
      if (iVar19 + 1 <= (int)local_26c) {
        iStack_144 = (int)local_26c;
      }
      local_168._8_4_ = local_294;
      local_168._0_8_ = local_240;
      local_168._12_4_ = 0;
      iStack_148 = iVar19;
      (*local_220)(local_178);
      pppppppcVar34 = (code *******)CONCAT53(uStack_14d,uStack_151._1_3_);
      fVar47 = (float)iStack_144;
      iVar19 = iStack_144 + -1;
      local_258 = pppppppcVar34;
      if (iStack_148 < iStack_144 + -1) {
        iVar19 = iStack_148;
      }
    }
    if (iVar19 + 1 < (int)fVar47) {
      fVar47 = (float)(iVar19 + 1);
    }
    uVar23 = (ulonglong)(int)fVar47;
    if (uVar23 != 0) {
      if (1 < uVar23) {
        strncpy((char *)pppppppcVar34,pcVar25,(ulonglong)((int)fVar47 - 1));
      }
      *(undefined1 *)((longlong)pppppppcVar34 + (uVar23 - 1)) = 0;
    }
  }
  iVar18 = local_294;
  if ((*(int *)(lVar42 + 0x1594) == local_294) && (cVar15 != '\0')) {
    FUN_18026ea90(0,0);
  }
  uVar36 = local_288;
  if (local_288 == 0) {
    FUN_18026c370(&local_188,iVar18,0);
    uVar46 = *(undefined4 *)(lVar42 + 0xccc);
    uVar20 = FUN_18026a6a0(7);
    local_2d8 = (code *******)CONCAT44(local_2d8._4_4_,uVar46);
    FUN_18026c020(CONCAT44(fStack_184,local_188),CONCAT44(fStack_17c,local_180),uVar20,1);
    local_124 = fStack_184 + *(float *)(lVar42 + 0xcc8);
    local_128 = fVar53 + *(float *)(lVar42 + 0xcc4);
    local_11c = fStack_184;
    fVar50 = fVar50 + fVar53;
    fVar47 = fStack_184 + fVar22;
  }
  else {
    local_124 = *(float *)((longlong)local_268 + 0x11c);
    local_128 = *(float *)(local_268 + 0x23);
    fVar50 = fVar50 + fVar53;
    if (fVar53 <= *(float *)(local_268 + 0x4d)) {
      fVar53 = *(float *)(local_268 + 0x4d);
    }
    local_11c = fStack_184;
    if (fStack_184 <= *(float *)((longlong)local_268 + 0x26c)) {
      local_11c = *(float *)((longlong)local_268 + 0x26c);
    }
    if (*(float *)(local_268 + 0x4e) <= fVar50) {
      fVar50 = *(float *)(local_268 + 0x4e);
    }
    fVar47 = fStack_184 + fVar22;
    local_208 = fVar53;
    if (*(float *)((longlong)local_268 + 0x274) <= fStack_184 + fVar22) {
      fVar47 = *(float *)((longlong)local_268 + 0x274);
    }
  }
  fVar22 = local_11c;
  pppppppcVar45 = local_1e0;
  if (local_289 != '\0') {
    pppppppcVar34 = *(code ********)(lVar44 + 0x30);
  }
  if (local_1e0 == (code *******)0x0) {
LAB_1802b9b1e:
    cVar15 = '\0';
  }
  else {
    pppppppcVar27 = local_258;
    if (local_289 != '\0') {
      pppppppcVar27 = *(code ********)(lVar44 + 0x30);
    }
    if (*(char *)pppppppcVar27 != '\0') goto LAB_1802b9b1e;
    cVar15 = '\x01';
  }
  local_284 = local_11c;
  local_214 = fVar50;
  local_120 = fVar53;
  local_118 = fVar50;
  local_114 = fVar47;
  if (cVar15 == local_290) {
LAB_1802b9b97:
    fVar53 = local_124;
    local_28b = local_290;
    if (local_290 == '\0') goto LAB_1802b9b6a;
    sVar24 = strlen((char *)pppppppcVar45);
    pppppppcVar34 = (code *******)((longlong)pppppppcVar45 + sVar24);
LAB_1802b9bc4:
    local_26c = 0.0;
    fVar55 = 1.4013e-45;
    local_f8 = pppppppcVar34;
    if (uVar36 != 0) goto LAB_1802b9be0;
    piVar33 = (int *)(lVar42 + 0x2598);
    FUN_18028a6d0(piVar33);
    fVar53 = 1.4013e-45;
    local_260 = piVar33;
    local_230 = piVar33;
  }
  else {
    if ((local_24c == 0) || (local_290 != '\0')) {
      local_290 = cVar15;
      if (local_24c == 0) goto LAB_1802b9b97;
    }
    else {
      FUN_1802b6ae0();
    }
    local_290 = cVar15;
    if (cVar15 != '\0') goto LAB_1802b9b97;
    local_28b = cVar15;
    FUN_1802b6990();
LAB_1802b9b6a:
    fVar53 = local_124;
    pppppppcVar45 = pppppppcVar34;
    if (((local_298 != '\0') || (local_297 != 0)) || (*(int *)(lVar42 + 0x1594) == iVar18)) {
      pppppppcVar34 = (code *******)((longlong)pppppppcVar34 + (longlong)*(int *)(lVar44 + 0x18));
      goto LAB_1802b9bc4;
    }
    if ((uVar36 == 0) || (local_238 != 0.0)) {
      sVar24 = strlen((char *)pppppppcVar34);
      pppppppcVar34 = (code *******)((longlong)pppppppcVar34 + sVar24);
      goto LAB_1802b9bc4;
    }
    local_f8 = (code *******)0x0;
LAB_1802b9be0:
    pppppppcVar34 = local_f8;
    fVar21 = (float)(int)((fVar22 - fVar53) / *(float *)(lVar42 + 0x1238));
    fVar55 = 0.0;
    if (-1 < (int)fVar21) {
      fVar55 = fVar21;
    }
    local_26c = fVar55;
    fVar53 = ceilf((fVar47 - fVar53) / *(float *)(lVar42 + 0x1238));
    if ((int)fVar55 <= (int)fVar53) {
      fVar55 = (float)(int)fVar53;
    }
    piVar33 = (int *)(lVar42 + 0x2598);
    local_260 = piVar33;
    local_230 = piVar33;
    FUN_18028a6d0(piVar33);
    local_240 = (code *******)CONCAT44(local_240._4_4_,1);
    pppppppcVar27 = local_240;
    if (local_288 == 0) {
      local_240._0_4_ = 1.4013e-45;
      fVar53 = local_240._0_4_;
      local_240 = pppppppcVar27;
    }
    else {
      if ((lVar44 == 0) ||
         (((*(char *)(lVar44 + 0x70) == '\0' || (local_298 == '\0')) &&
          ((*(char *)(lVar44 + 0x71) == '\0' || ((local_298 == '\0' && (local_297 == 0)))))))) {
        iVar18 = (int)fVar55 + 1;
      }
      else {
        iVar18 = 0x7fffffff;
      }
      local_2c8 = (code *******)&local_f8;
      if (pppppppcVar34 != (code *******)0x0) {
        local_2c8 = (code *******)0x0;
      }
      local_2d0 = (code *******)CONCAT44(local_2d0._4_4_,iVar18);
      local_2d8 = (code *******)CONCAT44(local_2d8._4_4_,fVar52);
      fVar53 = (float)FUN_1802b70b0(local_27c,piVar33,pppppppcVar45,pppppppcVar34);
      pppppppcVar34 = local_f8;
    }
  }
  *(int *)(lVar42 + 0x25a8) = (int)pppppppcVar34 - (int)pppppppcVar45;
  local_278 = fVar53;
  if ((int)fVar55 < (int)fVar53) {
    local_278 = fVar55;
  }
  fVar55 = (float)(int)fVar53 * *(float *)(lVar42 + 0x1238);
  local_f8 = (code *******)CONCAT44(local_f8._4_4_,fVar55);
  fVar52 = fVar49;
  if ((local_298 == '\0') || (lVar44 == 0)) {
    fVar21 = 0.0;
    local_238 = 0.0;
    fVar54 = 0.0;
    local_220 = (code *)((ulonglong)local_220 & 0xffffffff00000000);
    uVar46 = FUN_18026a6a0(local_290 != '\0');
    local_240 = (code *******)CONCAT44(local_240._4_4_,uVar46);
    if (local_298 != '\0') {
      local_220 = (code *)((ulonglong)local_220 & 0xffffffff00000000);
      local_238 = 0.0;
LAB_1802b9eeb:
      *(float *)(lVar44 + 100) = fVar53;
      if (local_298 != '\0') goto LAB_1802b9efb;
      goto LAB_1802b9fcf;
    }
    fVar48 = 0.0;
    if (local_297 != 0) goto LAB_1802b9eeb;
  }
  else {
    iVar18 = **(int **)(lVar44 + 8);
    local_2c8 = (code *******)((longlong)pppppppcVar45 + (longlong)iVar18);
    piVar6 = *(int **)(lVar42 + 0x25a0);
    piVar33 = piVar6;
    uVar23 = (longlong)*(int *)(lVar42 + 0x2598);
    while (uVar11 = uVar23, uVar11 != 0) {
      uVar23 = uVar11 >> 1;
      if (piVar33[uVar23] < iVar18) {
        piVar33 = piVar33 + uVar23 + 1;
        uVar23 = uVar11 + (-1 - uVar23);
      }
    }
    if (piVar6 < piVar33) {
      if (((piVar33 == piVar6 + *(int *)(lVar42 + 0x2598)) || (*piVar33 != iVar18)) ||
         ((0.0 < *(float *)(lVar44 + 0x68) &&
          (((*(char *)(lVar44 + 0x76) == '\x01' && (*(char *)((longlong)local_2c8 - 1) != '\n')) &&
           (*(char *)((longlong)local_2c8 - 1) != '\0')))))) {
        piVar33 = piVar33 + -1;
        goto LAB_1802b9da7;
      }
LAB_1802b9db1:
      iVar18 = (int)((longlong)piVar33 - *(longlong *)(local_230 + 2) >> 2);
    }
    else {
LAB_1802b9da7:
      if (piVar33 != piVar6) goto LAB_1802b9db1;
      iVar18 = 0;
    }
    if (*local_260 == 0) {
      iVar19 = 0;
    }
    else {
      iVar19 = *(int *)(*(longlong *)(local_230 + 2) + (longlong)iVar18 * 4);
    }
    local_2d0 = (code *******)((longlong)pppppppcVar45 + (longlong)iVar19);
    local_2a8 = 2;
    local_2b8 = 0;
    local_2d8 = (code *******)CONCAT44(local_2d8._4_4_,*(undefined4 *)(lVar42 + 0x2580));
    local_2c0 = pppppppcVar34;
    FUN_18029e350(&local_228,*(undefined8 *)(lVar42 + 0x1228),*(undefined4 *)(lVar42 + 0x1238));
    fVar21 = (float)local_228;
    local_238 = (float)local_228;
    fVar54 = (float)(iVar18 + 1) * *(float *)(lVar42 + 0x1238);
    local_220 = (code *)CONCAT44(local_220._4_4_,fVar54);
    uVar46 = FUN_18026a6a0(local_28b != '\0');
    local_240 = (code *******)CONCAT44(local_240._4_4_,uVar46);
    *(float *)(lVar44 + 100) = fVar53;
LAB_1802b9efb:
    if (*(char *)(lVar44 + 0x70) != '\0') {
      if ((local_27c & 0x8000) == 0) {
        if (*(float *)(lVar44 + 0x5c) <= fVar21) {
          fVar48 = fVar21 - (local_248 - *(float *)(lVar42 + 0xcc4));
          if (fVar48 < *(float *)(lVar44 + 0x5c)) goto LAB_1802b9f6a;
          fVar48 = local_248 * 0.25 + fVar48;
        }
        else {
          fVar51 = fVar21 - local_248 * 0.25;
          fVar48 = 0.0;
          if (0.0 <= fVar51) {
            fVar48 = fVar51;
          }
        }
        *(float *)(lVar44 + 0x5c) = (float)(int)fVar48;
      }
      else {
        *(undefined4 *)(lVar44 + 0x5c) = 0;
      }
LAB_1802b9f6a:
      if (local_288 != 0) {
        fVar48 = fVar54 - *(float *)(lVar42 + 0x1238);
        if (fVar48 < fVar49) {
          fVar52 = 0.0;
          if (0.0 <= fVar48) {
            fVar52 = fVar48;
          }
          *(undefined1 *)(lVar44 + 0x70) = 0;
          goto LAB_1802b9fcf;
        }
        fVar48 = *(float *)(lVar42 + 0xcc8) + *(float *)(lVar42 + 0xcc8);
        if (fVar49 <= fVar54 - (local_20c - fVar48)) {
          fVar52 = (fVar54 - local_20c) + fVar48;
        }
      }
      *(undefined1 *)(lVar44 + 0x70) = 0;
    }
LAB_1802b9fcf:
    if (*(char *)(lVar44 + 0x71) != '\0') {
      if (local_288 != 0) {
        fVar52 = (fVar54 - *(float *)(lVar42 + 0x1238)) -
                 (local_20c * 0.5 - *(float *)(lVar42 + 0xcc8));
      }
      *(undefined1 *)(lVar44 + 0x71) = 0;
      local_298 = '\0';
    }
    fVar51 = local_26c;
    if (fVar52 != fVar49) {
      if (0.0 <= fVar52) {
        local_20c = (*(float *)(lVar42 + 0xcc8) + *(float *)(lVar42 + 0xcc8) + fVar55) - local_20c;
        if (local_20c <= 0.0) {
          local_20c = 0.0;
        }
        if (fVar52 <= local_20c) {
          local_20c = fVar52;
        }
      }
      else {
        local_20c = 0.0;
      }
      local_124 = local_124 + (*(float *)((longlong)local_268 + 0x9c) - local_20c);
      *(float *)((longlong)local_268 + 0x9c) = local_20c;
      fVar22 = (float)(int)((fVar22 - local_124) / *(float *)(lVar42 + 0x1238));
      fVar51 = 0.0;
      if (-1 < (int)fVar22) {
        fVar51 = fVar22;
      }
      local_26c = fVar51;
      fVar49 = ceilf((fVar47 - local_124) / *(float *)(lVar42 + 0x1238));
      fVar22 = fVar51;
      if ((int)fVar51 <= (int)fVar49) {
        fVar22 = (float)(int)fVar49;
      }
      local_278 = fVar53;
      if ((int)fVar22 < (int)fVar53) {
        local_278 = fVar22;
      }
    }
    fVar53 = local_278;
    fVar48 = *(float *)(lVar44 + 0x5c);
    if (local_297 != 0) {
      uVar46 = FUN_18026a6a0(0x34);
      local_258 = (code *******)CONCAT44(local_258._4_4_,uVar46);
      if (local_288 == 0) {
        fVar22 = -1.0;
        fVar49 = 2.0;
      }
      else {
        fVar22 = 0.0;
        fVar49 = 0.0;
      }
      piVar33 = *(int **)(lVar42 + 0x1230);
      if ((*piVar33 < 0x21) ||
         (fVar52 = *(float *)(*(longlong *)(piVar33 + 2) + 0x80), fVar52 < 0.0)) {
        fVar52 = (float)FUN_18029cb50(piVar33,0x20);
      }
      fVar14 = local_208;
      fVar12 = local_284;
      iVar18 = *(int *)(*(longlong *)(lVar44 + 8) + 8);
      iVar19 = *(int *)(*(longlong *)(lVar44 + 8) + 4);
      iVar31 = iVar18;
      if (iVar18 <= iVar19) {
        iVar31 = iVar19;
        iVar19 = iVar18;
      }
      if ((int)fVar51 < (int)fVar53) {
        local_1b8 = (longlong)iVar19;
        pppppppcVar27 = (code *******)((longlong)pppppppcVar45 + local_1b8);
        pppppppcVar43 = (code *******)((longlong)pppppppcVar45 + (longlong)iVar31);
        local_248 = local_26c;
        local_228 = pppppppcVar27;
        do {
          if (*local_230 == 0) {
            iVar18 = 0;
          }
          else {
            iVar18 = *(int *)(*(longlong *)(local_230 + 2) + (longlong)(int)local_248 * 4);
          }
          local_190 = (code *******)((longlong)pppppppcVar45 + (longlong)iVar18);
          if ((int)local_248 + 1 < *local_230) {
            iVar19 = *(int *)(*(longlong *)(local_230 + 2) + 4 + (longlong)(int)local_248 * 4) + -1;
          }
          else {
            iVar19 = local_230[4];
          }
          pppppppcVar35 = (code *******)((longlong)pppppppcVar45 + (longlong)iVar19);
          if ((pppppppcVar35 < pppppppcVar34) && (*(char *)pppppppcVar35 != '\n')) {
            local_289 = '\x01';
            pppppppcVar35 = (code *******)((longlong)pppppppcVar35 + 1);
          }
          else {
            local_289 = '\0';
          }
          lVar39 = (longlong)iVar18;
          if (local_190 < pppppppcVar27) {
            lVar39 = local_1b8;
          }
          pppppppcVar38 = (code *******)((longlong)pppppppcVar45 + lVar39);
          pppppppcVar41 = pppppppcVar35;
          if (pppppppcVar43 < pppppppcVar35) {
            pppppppcVar41 = pppppppcVar43;
          }
          fVar53 = 0.0;
          local_198 = pppppppcVar38;
          if (pppppppcVar38 < pppppppcVar41) {
            lVar39 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            if (*(char *)(lVar39 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            pppppppcVar38 = local_198;
            lVar39 = *(longlong *)(lVar39 + 0xec0);
            local_2a8 = 0;
            local_2b8 = 0;
            local_2d0 = local_198;
            local_2d8 = (code *******)CONCAT44(local_2d8._4_4_,0xbf800000);
            local_2c8 = pppppppcVar41;
            local_2c0 = pppppppcVar41;
            FUN_18029e350(&local_1e0,*(undefined8 *)(lVar39 + 0x1228),
                          *(undefined4 *)(lVar39 + 0x1238),0x7f7fffff);
            fVar53 = local_1e0._0_4_ + 0.99999;
            local_1e0 = (code *******)CONCAT44(local_1e0._4_4_,(float)(int)fVar53);
            fVar53 = (float)(int)fVar53 + 0.0;
            pppppppcVar27 = local_228;
            lVar42 = local_1b0;
          }
          if (((pppppppcVar27 <= pppppppcVar35) && (pppppppcVar35 < pppppppcVar43)) &&
             (local_289 == '\0')) {
            fVar53 = fVar53 + (float)(int)(fVar52 * 0.5);
          }
          if (fVar53 != 0.0) {
            lVar39 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            if (*(char *)(lVar39 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            if (local_190 == pppppppcVar38) {
              fVar55 = 0.0;
            }
            else {
              lVar39 = *(longlong *)(lVar39 + 0xec0);
              local_2a8 = 0;
              local_2b8 = 0;
              local_2d0 = local_190;
              local_2d8 = (code *******)CONCAT44(local_2d8._4_4_,0xbf800000);
              local_2c8 = pppppppcVar38;
              local_2c0 = pppppppcVar38;
              FUN_18029e350(&local_210,*(undefined8 *)(lVar39 + 0x1228),
                            *(undefined4 *)(lVar39 + 0x1238),0x7f7fffff);
              fVar55 = (float)(int)(local_210 + 0.99999);
              local_210 = fVar55;
            }
            fVar55 = (local_128 - fVar48) + fVar55;
            fVar21 = (float)(int)local_248 * *(float *)(lVar42 + 0x1238) + (local_124 - 0.0);
            local_1a8 = fVar55;
            if (fVar55 <= fVar14) {
              local_1a8 = fVar14;
            }
            local_1a4 = fVar21 + fVar22;
            if (local_1a4 <= fVar12) {
              local_1a4 = fVar12;
            }
            local_1a0 = fVar55 + fVar53;
            if (fVar50 <= fVar55 + fVar53) {
              local_1a0 = fVar50;
            }
            local_19c = fVar21 + fVar49 + *(float *)(lVar42 + 0x1238);
            if (fVar47 <= local_19c) {
              local_19c = fVar47;
            }
            local_2d0 = (code *******)((ulonglong)local_2d0 & 0xffffffff00000000);
            local_2d8 = (code *******)((ulonglong)local_2d8 & 0xffffffff00000000);
            FUN_180295000(local_268[0x59],&local_1a8,&local_1a0,(ulonglong)local_258 & 0xffffffff);
            pppppppcVar27 = local_228;
          }
          local_248 = (float)((int)local_248 + 1);
        } while ((int)local_248 < (int)local_278);
        lVar44 = local_1c0;
        fVar21 = local_238;
        fVar54 = local_220._0_4_;
        fVar55 = local_f8._0_4_;
      }
    }
  }
  fVar50 = local_180;
  fVar53 = local_278;
  iVar18 = local_294;
  if (((*(int *)(lVar42 + 0x1594) != local_294) && ((local_27c & 0x20000) != 0)) &&
     ((local_298 == '\0' && (local_297 == 0)))) {
    lVar39 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar39 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (pppppppcVar45 == (code *******)0x0) {
      fVar22 = 0.0;
    }
    else {
      lVar39 = *(longlong *)(lVar39 + 0xec0);
      local_2a8 = 0;
      local_2b8 = 0;
      local_2c0 = (code *******)0x0;
      local_2c8 = (code *******)0x0;
      local_2d8 = (code *******)CONCAT44(local_2d8._4_4_,0xbf800000);
      local_2d0 = pppppppcVar45;
      FUN_18029e350(&local_1b8,*(undefined8 *)(lVar39 + 0x1228),*(undefined4 *)(lVar39 + 0x1238),
                    0x7f7fffff);
      fVar22 = (float)(int)((float)local_1b8 + 0.99999);
    }
    fVar22 = (fVar50 - fVar22) - *(float *)(lVar42 + 0xcc4);
    if (fVar22 <= local_128) {
      local_128 = fVar22;
    }
  }
  plVar2 = local_268;
  if (((local_288 != 0) || ((longlong)pppppppcVar34 - (longlong)pppppppcVar45 < 0x200000)) &&
     ((((ulonglong)local_240 & 0xff000000) != 0 && ((int)local_26c < (int)fVar53)))) {
    iVar19 = *local_260;
    if ((int)fVar53 < iVar19) {
      iVar31 = *(int *)(*(longlong *)(local_230 + 2) + (longlong)(int)fVar53 * 4) + -1;
    }
    else {
      iVar31 = local_230[4];
    }
    local_2c0 = (code *******)((longlong)pppppppcVar45 + (longlong)iVar31);
    if (iVar19 == 0) {
      iVar31 = 0;
    }
    else {
      iVar31 = *(int *)(*(longlong *)(local_230 + 2) + (longlong)(int)local_26c * 4);
    }
    local_228 = (code *******)
                CONCAT44((float)(int)local_26c * *(float *)(lVar42 + 0x1238) + (local_124 - 0.0),
                         (local_128 - fVar48) + 0.0);
    local_2c8 = (code *******)((longlong)pppppppcVar45 + (longlong)iVar31);
    local_2b0 = 3;
    local_2b8 = CONCAT44(local_2b8._4_4_,local_1f0);
    local_2d0 = (code *******)&local_120;
    local_2d8 = (code *******)CONCAT44(local_2d8._4_4_,local_240._0_4_);
    FUN_18029e990(*(undefined8 *)(lVar42 + 0x1228),local_268[0x59],iVar19,&local_228);
  }
  if (local_298 != '\0') {
    fVar53 = *(float *)(lVar42 + 0x40) + *(float *)(lVar44 + 0x6c);
    *(float *)(lVar44 + 0x6c) = fVar53;
    if (((*(char *)(lVar42 + 0x7b) == '\0') || (fVar53 <= 0.0)) ||
       (fVar53 = fmodf(fVar53,1.2), fVar53 <= 0.8)) {
      bVar37 = true;
    }
    else {
      bVar37 = false;
    }
    fVar53 = (float)(int)((fVar21 + local_128) - fVar48);
    fVar22 = (float)(int)((fVar54 + local_124) - 0.0);
    if (((bVar37) && (local_284 < fVar22 - 1.5)) &&
       (((fVar22 - *(float *)(lVar42 + 0x1238)) + 0.5 < fVar47 &&
        ((local_208 < fVar53 + 1.0 && (fVar53 < local_214)))))) {
      lVar39 = plVar2[0x59];
      fVar49 = *(float *)(lVar42 + 0x1210);
      uVar46 = FUN_18026a6a0(0x22);
      local_2d0 = (code *******)CONCAT44(local_2d0._4_4_,(float)(int)fVar49);
      local_2d8 = (code *******)CONCAT44(local_2d8._4_4_,uVar46);
      FUN_180294e30(lVar39);
    }
    if ((local_280 == 0) && (*(int *)(lVar42 + 0x1594) == iVar18)) {
      *(undefined2 *)(lVar42 + 0x2768) = 0x101;
      *(float *)(lVar42 + 0x276c) = fVar53 - 1.0;
      *(float *)(lVar42 + 0x2770) = fVar22 - *(float *)(lVar42 + 0x1238);
      *(undefined4 *)(lVar42 + 0x2774) = *(undefined4 *)(lVar42 + 0x1238);
      *(undefined4 *)(lVar42 + 0x2778) = *(undefined4 *)local_200[4];
    }
  }
  cVar15 = local_290;
  if ((local_24c != 0) && (local_290 == '\0')) {
    FUN_1802b6ae0();
  }
  if (local_288 != 0) {
    local_228 = (code *******)((ulonglong)(uint)(fVar55 + *(float *)(lVar42 + 0xcc8)) << 0x20);
    FUN_1802af260(&local_228);
    *(uint *)(lVar42 + 0x1ec4) = *(uint *)(lVar42 + 0x1ec4) | 0x100001;
    FUN_180273410();
    local_218 = local_218 | *(uint *)(lVar42 + 0x1f00) & 0x80;
    FUN_18027fda0();
    if (*(int *)(lVar42 + 0x1ef8) != 0) {
      iVar19 = FUN_180268980("#SCROLLY",0,
                             *(undefined4 *)
                              (local_268[0x22] + -4 + (longlong)(int)local_268[0x21] * 4));
      if (*(int *)(*local_268 + 0x1578) == iVar19) {
        FUN_1802899e0(iVar19,0xb,"#SCROLLY");
      }
      if (*(int *)(lVar42 + 0x1ef8) == iVar19) goto LAB_1802ba8df;
    }
    *(int *)(lVar42 + 0x1ef8) = iVar18;
    *(undefined4 *)(lVar42 + 0x1efc) = local_1ec;
    *(uint *)(lVar42 + 0x1f00) = local_218;
  }
LAB_1802ba8df:
  if ((lVar44 != 0) && (local_280 != 0)) {
    *(undefined8 *)(lVar44 + 0x20) = 0;
  }
  if ((*(char *)(lVar42 + 0x2858) != '\0') && ((local_24c == 0 || (cVar15 != '\0')))) {
    lVar39 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar39 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar42 = *(longlong *)(lVar39 + 0xec0);
    *(undefined **)(lVar42 + 0x2880) = &DAT_18038002c;
    *(undefined **)(lVar42 + 0x2888) = &DAT_180380030;
    if (*(char *)(lVar39 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar39 = *(longlong *)(lVar39 + 0xec0);
    lVar42 = *(longlong *)(lVar39 + 0x1520);
    pcVar25 = *(char **)(lVar39 + 0x2880);
    pcVar40 = *(char **)(lVar39 + 0x2888);
    *(undefined8 *)(lVar39 + 0x2888) = 0;
    *(undefined8 *)(lVar39 + 0x2880) = 0;
    if ((pppppppcVar34 == (code *******)0x0) &&
       (pppppppcVar34 = pppppppcVar45, pppppppcVar45 != (code *******)0xffffffffffffffff)) {
      while (*(char *)pppppppcVar34 != '\0') {
        pppppppcVar27 = (code *******)((longlong)pppppppcVar34 + 1);
        if (((*(char *)pppppppcVar34 == '#') && (*(char *)pppppppcVar27 == '#')) ||
           (pppppppcVar34 = pppppppcVar27, pppppppcVar27 == (code *******)0xffffffffffffffff))
        break;
      }
    }
    fVar53 = *(float *)(lVar39 + 0xcc8);
    if (*(float *)(lVar39 + 0xcc8) <= *(float *)(lVar39 + 0xcd8)) {
      fVar53 = *(float *)(lVar39 + 0xcd8);
    }
    fVar22 = *(float *)(lVar39 + 0x2890);
    *(float *)(lVar39 + 0x2890) = local_124;
    if (fVar53 + fVar22 + 1.0 < local_124) {
      FUN_180287bb0(&DAT_18033f5ac);
      *(undefined1 *)(lVar39 + 0x2859) = 1;
    }
    if (pcVar25 != (char *)0x0) {
      sVar24 = strlen(pcVar25);
      FUN_180287c20(&local_128,pcVar25,pcVar25 + sVar24);
    }
    iVar18 = *(int *)(lVar42 + 0x1a0);
    iVar19 = *(int *)(lVar39 + 0x2894);
    if (iVar18 < iVar19) {
      *(int *)(lVar39 + 0x2894) = iVar18;
      iVar19 = iVar18;
    }
    iVar18 = *(int *)(lVar42 + 0x1a0);
    while( true ) {
      pppppppcVar43 = memchr(pppppppcVar45,10,(longlong)pppppppcVar34 - (longlong)pppppppcVar45);
      pppppppcVar27 = pppppppcVar34;
      if (pppppppcVar43 != (code *******)0x0) {
        pppppppcVar27 = pppppppcVar43;
      }
      if ((pppppppcVar45 == pppppppcVar27) && (pppppppcVar27 == pppppppcVar34)) break;
      iVar31 = (iVar18 - iVar19) * 4;
      if (*(char *)(lVar39 + 0x2859) == '\0') {
        iVar31 = 1;
      }
      local_2d8 = pppppppcVar45;
      FUN_180287bb0("%*s%.*s",iVar31,&DAT_18033e5ea,(int)pppppppcVar27 - (int)pppppppcVar45);
      *(undefined1 *)(lVar39 + 0x2859) = 0;
      if (*(char *)pppppppcVar27 == '\n') {
        FUN_180287bb0(&DAT_18033f5ac);
        *(undefined1 *)(lVar39 + 0x2859) = 1;
      }
      if (pppppppcVar27 == pppppppcVar34) break;
      pppppppcVar45 = (code *******)((longlong)pppppppcVar27 + 1);
    }
    lVar42 = local_1b0;
    iVar18 = local_294;
    if (pcVar40 != (char *)0x0) {
      sVar24 = strlen(pcVar40);
      FUN_180287c20(&local_128,pcVar40,pcVar40 + sVar24);
      iVar18 = local_294;
    }
  }
  if (0.0 < local_1e8) {
    FUN_18026b160(CONCAT44(fStack_184 + *(float *)(lVar42 + 0xcc8),
                           fVar50 + *(float *)(lVar42 + 0xcdc)),local_1f8,local_1c8,0);
  }
  bVar16 = local_28e;
  if (local_28e != 0) {
    FUN_18026ed00(iVar18);
  }
  if ((local_27c & 0x40) != 0) {
    bVar16 = local_28f;
  }
  return (ulonglong)bVar16;
}



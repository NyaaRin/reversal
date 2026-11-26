// 0x180144f60  FUN_180144f60
// size=846 thunk=false
// signature: undefined FUN_180144f60()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180144f60(undefined8 *param_1,char *param_2)

{
  undefined1 *lp;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  BOOL BVar6;
  void *pvVar7;
  size_t sVar8;
  undefined4 *puVar9;
  void *pvVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  float fVar17;
  undefined1 auStack_258 [32];
  undefined1 *local_238;
  double local_230;
  undefined4 local_228;
  uint local_220;
  char *local_218;
  char *local_210;
  char *local_208;
  char *local_200;
  char *local_1f8;
  char *local_1f0;
  undefined1 *local_1e8;
  undefined4 local_1d8;
  uint local_1d4;
  void *local_1d0;
  undefined1 *local_1c8;
  char *local_1c0;
  undefined8 *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 *local_190;
  char local_188 [320];
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_258;
  local_1d8 = 0;
  local_1c0 = param_2;
  local_1b8 = param_1;
  local_190 = param_1;
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    FUN_18001d080(0,&DAT_18033e5ea,0);
    return param_1;
  }
  pvVar7 = (void *)FUN_180016fb0(param_2);
  local_1d0 = pvVar7;
  if (pvVar7 == (void *)0x0) {
    local_1b0 = 0;
    uStack_1a8 = 0;
    local_1a0 = 0;
    uStack_198 = 0;
    sVar8 = strlen(param_2);
    FUN_18001d080(&local_1b0,param_2,sVar8);
    puVar9 = (undefined4 *)FUN_18021aef0(&local_1b0," : not found",0xc);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    uVar1 = puVar9[1];
    uVar2 = puVar9[2];
    uVar3 = puVar9[3];
    *(undefined4 *)param_1 = *puVar9;
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
    *(undefined4 *)(param_1 + 1) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
    uVar1 = puVar9[5];
    uVar2 = puVar9[6];
    uVar3 = puVar9[7];
    *(undefined4 *)(param_1 + 2) = puVar9[4];
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
    *(undefined4 *)(param_1 + 3) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    *(undefined1 *)puVar9 = 0;
    *(undefined8 *)(puVar9 + 4) = 0;
    *(undefined8 *)(puVar9 + 6) = 0xf;
    local_1d8 = 1;
    FUN_18020e450(&local_1b0);
    return param_1;
  }
  pvVar10 = *(void **)((longlong)pvVar7 + 0x38);
  if (((pvVar10 == (void *)0x0) || (pvVar10 == pvVar7)) ||
     (BVar6 = IsBadReadPtr(pvVar10,0x60), BVar6 != 0)) {
    pvVar10 = pvVar7;
  }
  lp = *(undefined1 **)((longlong)pvVar10 + 0x48);
  if (lp != (undefined1 *)0x0) {
    BVar6 = IsBadReadPtr(lp,2);
    bVar4 = true;
    if (BVar6 == 0) goto LAB_1801450cd;
  }
  bVar4 = false;
LAB_1801450cd:
  pcVar11 = "";
  local_1c8 = &DAT_18033e5ea;
  if (bVar4) {
    local_1c8 = lp;
  }
  local_1d4 = FUN_1800170a0(pvVar7);
  pvVar10 = (void *)FUN_180017070(pvVar7);
  if ((pvVar10 == (void *)0x0) || (bVar4 = true, pvVar10 == pvVar7)) {
    bVar4 = false;
  }
  local_228 = FUN_1800197a0(pvVar7);
  local_1e8 = &DAT_18033e5ea;
  if (bVar4) {
    local_1e8 = &DAT_18035d490;
  }
  pcVar16 = "";
  if ((local_1d4 >> 9 & 1) != 0) {
    pcVar16 = " USERINFO";
  }
  pcVar15 = "";
  if ((local_1d4 >> 0x16 & 1) != 0) {
    pcVar15 = " NOT_CONNECTED";
  }
  pcVar12 = "";
  if ((local_1d4 >> 0xd & 1) != 0) {
    pcVar12 = " REPLICATED";
  }
  pcVar13 = "";
  if ((local_1d4 & 0x10) != 0) {
    pcVar13 = " HIDDEN";
  }
  pcVar14 = "";
  if ((local_1d4 & 2) != 0) {
    pcVar14 = " DEVONLY";
  }
  if ((local_1d4 >> 0xe & 1) != 0) {
    pcVar11 = " CHEAT";
  }
  fVar17 = (float)FUN_180019700(local_1d0);
  local_230 = (double)fVar17;
  local_238 = &DAT_18033e5ea;
  if (local_1c8 != (undefined1 *)0x0) {
    local_238 = local_1c8;
  }
  local_220 = local_1d4;
  local_218 = pcVar11;
  local_210 = pcVar14;
  local_208 = pcVar13;
  local_200 = pcVar12;
  local_1f8 = pcVar15;
  local_1f0 = pcVar16;
  FUN_180012ac0(local_188,0x140,"%s = \"%s\" (float %.4f, int %d) flags=0x%X%s%s%s%s%s%s%s",
                local_1c0);
  puVar5 = local_1b8;
  *local_1b8 = 0;
  local_1b8[1] = 0;
  local_1b8[2] = 0;
  local_1b8[3] = 0;
  sVar8 = strlen(local_188);
  FUN_18001d080(puVar5,local_188,sVar8);
  return puVar5;
}



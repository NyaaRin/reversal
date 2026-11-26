// 0x180145600  FUN_180145600
// size=466 thunk=false
// signature: undefined FUN_180145600()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180145600(void *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined1 *lp;
  bool bVar1;
  char cVar2;
  uint uVar3;
  BOOL BVar4;
  size_t sVar5;
  void *lp_00;
  undefined8 *puVar6;
  undefined1 *puVar7;
  float fVar8;
  undefined1 auStack_208 [32];
  undefined1 *local_1e8;
  char *local_1e0;
  undefined1 *local_1d8;
  double local_1d0;
  undefined1 *local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 *local_198;
  char local_188 [288];
  ulonglong local_68;
  
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_208;
  puVar6 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar6 = (undefined8 *)*param_3;
  }
  if (puVar6 == (undefined8 *)0x0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = FUN_1801fcdc0();
  }
  uVar3 = FUN_1800170a0(param_1);
  puVar7 = &DAT_18033e5ea;
  if ((uVar3 >> 0xd & 1) != 0) {
    puVar7 = &DAT_18035d620;
  }
  fVar8 = (float)FUN_180019700(param_1);
  lp_00 = *(void **)((longlong)param_1 + 0x38);
  if ((lp_00 == (void *)0x0) || (lp_00 == param_1)) {
LAB_1801456a7:
    lp_00 = param_1;
  }
  else {
    BVar4 = IsBadReadPtr(lp_00,0x60);
    if (BVar4 != 0) goto LAB_1801456a7;
  }
  lp = *(undefined1 **)((longlong)lp_00 + 0x48);
  if (lp != (undefined1 *)0x0) {
    BVar4 = IsBadReadPtr(lp,2);
    bVar1 = true;
    if (BVar4 == 0) goto LAB_1801456ce;
  }
  bVar1 = false;
LAB_1801456ce:
  local_1d8 = &DAT_18033e5ea;
  if (bVar1) {
    local_1d8 = lp;
  }
  puVar6 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar6 = (undefined8 *)*param_2;
  }
  local_1e0 = "IConVar SetValue failed";
  if (cVar2 != '\0') {
    local_1e0 = "written directly (flags untouched)";
  }
  local_1e8 = &DAT_18033e5ea;
  if (param_4 != (undefined1 *)0x0) {
    local_1e8 = param_4;
  }
  local_1d0 = (double)fVar8;
  local_1c8 = puVar7;
  FUN_180012ac0(local_188,0x120,"%s : %s%s, now \"%s\" (float %.4f)%s",puVar6);
  local_198 = &local_1b8;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  sVar5 = strlen(local_188);
  FUN_18001d080(&local_1b8,local_188,sVar5);
  FUN_180144c60(&local_1b8);
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_180014410("[CVAR] force \'%s\' = \'%s\' -> ok=%d\n",param_2,param_3,cVar2);
  return;
}



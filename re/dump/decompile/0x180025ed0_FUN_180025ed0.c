// 0x180025ed0  FUN_180025ed0
// size=493 thunk=false
// signature: undefined FUN_180025ed0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180025ed0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  size_t sVar7;
  undefined1 auStack_138 [32];
  undefined *local_118;
  undefined8 *local_110;
  undefined4 local_108;
  undefined8 *local_100;
  undefined1 local_f8 [32];
  char local_d8 [160];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_138;
  local_108 = 0;
  local_100 = param_1;
  if ((DAT_18042f170 & 1) == 0) {
    DAT_18042f170 = DAT_18042f170 | 1;
    FUN_1800224b0();
  }
  uVar4 = FUN_18021dbf0(&DAT_180426270);
  uVar6 = (ulonglong)uVar4 * 0xf;
  iVar5 = (int)uVar6;
  while (iVar5 == 0) {
    uVar4 = FUN_18021dbf0(&DAT_180426270);
    uVar6 = (ulonglong)uVar4 * 0xf;
    iVar5 = (int)uVar6;
  }
  puVar1 = (&PTR_s_wiremod_18033b0c0)[(uVar6 >> 0x20) - 0x80000000 ^ 0xffffffff80000000];
  if ((DAT_18042f170 & 1) == 0) {
    DAT_18042f170 = DAT_18042f170 | 1;
    FUN_1800224b0();
  }
  uVar4 = FUN_18021dbf0(&DAT_180426270);
  uVar6 = (ulonglong)uVar4 * 0xc;
  uVar4 = (uint)uVar6;
  while (uVar4 < 4) {
    uVar4 = FUN_18021dbf0(&DAT_180426270);
    uVar6 = (ulonglong)uVar4 * 0xc;
    uVar4 = (uint)uVar6;
  }
  puVar2 = (&PTR_DAT_18033b8d0)[(uVar6 >> 0x20) - 0x80000000 ^ 0xffffffff80000000];
  if ((DAT_18042f170 & 1) == 0) {
    DAT_18042f170 = DAT_18042f170 | 1;
    FUN_1800224b0();
  }
  uVar4 = FUN_18021dbf0(&DAT_180426270);
  lVar3 = (ulonglong)uVar4 * 5;
  iVar5 = (int)lVar3;
  while (iVar5 == 0) {
    uVar4 = FUN_18021dbf0(&DAT_180426270);
    lVar3 = (ulonglong)uVar4 * 5;
    iVar5 = (int)lVar3;
  }
  local_110 = (undefined8 *)
              FUN_180022740(local_f8,(int)((ulonglong)lVar3 >> 0x20) + 0x80000003U ^ 0x80000000);
  if (0xf < (ulonglong)local_110[3]) {
    local_110 = (undefined8 *)*local_110;
  }
  local_118 = puVar2;
  FUN_180012ac0(local_d8,0xa0,"@addons/%s/lua/autorun/client/%s_%s.lua",puVar1);
  FUN_18020e450(local_f8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  sVar7 = strlen(local_d8);
  FUN_18001d080(param_1,local_d8,sVar7);
  return param_1;
}



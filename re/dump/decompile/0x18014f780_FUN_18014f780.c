// 0x18014f780  FUN_18014f780
// size=765 thunk=false
// signature: undefined FUN_18014f780()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18014f780(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  size_t sVar7;
  uint uVar8;
  wchar_t ****_Str1;
  undefined8 *puVar9;
  undefined8 ****ppppuVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 local_188;
  wchar_t ***local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  ulonglong local_168;
  undefined8 ***local_160;
  wchar_t ***local_158;
  undefined1 local_150 [32];
  undefined8 ***local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  ulonglong uStack_118;
  undefined8 *local_110;
  undefined8 *puStack_108;
  undefined8 local_100;
  undefined1 local_f8 [32];
  char local_d8 [160];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_1b8;
  uVar11 = 0;
  local_188 = 0;
  local_160 = &local_130;
  local_130 = (undefined8 ****)0x0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  FUN_180211510(&local_130,&DAT_18035eab0,3);
  local_188 = 0;
  local_158 = (wchar_t ***)&local_180;
  local_180 = (wchar_t ***)0x0;
  uStack_178 = 0;
  local_170 = 0;
  local_168 = 0;
  FUN_180211510(&local_180,&DAT_18035eab8,3);
  local_188 = 0;
  uVar6 = FUN_180066720(local_150,param_1,&local_180);
  FUN_180066720(local_f8,uVar6,&local_130);
  FUN_18021e290(local_150);
  FUN_18021e290(&local_180);
  FUN_18021e290(&local_130);
  local_110 = (undefined8 *)0x0;
  puStack_108 = (undefined8 *)0x0;
  local_100 = 0;
  cVar4 = FUN_18014e6f0(local_f8,&local_110,1);
  puVar2 = puStack_108;
  uVar3 = 0;
  uVar12 = uVar11;
  puVar1 = local_110;
  if (cVar4 == '\0') {
    local_130 = (undefined8 ***)0x0;
    uStack_128 = 0;
    local_120 = 0;
    uStack_118 = 0;
    FUN_18001d080(&local_130,"lua/bin: not present",0x14);
    FUN_18014de20(&local_130);
  }
  else {
    for (; local_198 = uVar3, puVar1 != puVar2; puVar1 = puVar1 + 4) {
      uVar6 = FUN_180066000(puVar1,local_150);
      FUN_18020e540(&local_180,uVar6);
      local_188 = 1;
      _Str1 = &local_180;
      if (7 < local_168) {
        _Str1 = (wchar_t ****)local_180;
      }
      iVar5 = _wcsicmp((wchar_t *)_Str1,L".dll");
      local_188 = 0;
      FUN_18021e290(&local_180);
      FUN_18021e290(local_150);
      if (iVar5 == 0) {
        FUN_18020e540(&local_130,puVar1);
        FUN_180211740(&local_130,L".disabled",9);
        ppppuVar10 = &local_130;
        if (7 < uStack_118) {
          ppppuVar10 = (undefined8 ****)local_130;
        }
        puVar9 = puVar1;
        if (7 < (ulonglong)puVar1[3]) {
          puVar9 = (undefined8 *)*puVar1;
        }
        iVar5 = FUN_1802d7fcc(puVar9,ppppuVar10);
        FUN_18021e290(&local_130);
        uVar8 = (uint)uVar12 + 1;
        if (iVar5 == 0) {
          uVar8 = (uint)uVar12;
        }
        uVar12 = (ulonglong)uVar8;
        if (iVar5 == 0) {
          uVar11 = uVar11 + 1;
        }
      }
      uVar3 = (int)uVar12;
    }
    FUN_180012ac0(local_d8,0xa0,"lua/bin: %lld dll(s) renamed to .disabled, %d in use",uVar11);
    local_130 = (undefined8 ***)0x0;
    uStack_128 = 0;
    local_120 = 0;
    uStack_118 = 0;
    sVar7 = strlen(local_d8);
    FUN_18001d080(&local_130,local_d8,sVar7);
    FUN_18014de20(&local_130);
  }
  FUN_18020e450(&local_130);
  FUN_18021c690(&local_110);
  FUN_18021e290(local_f8);
  return;
}



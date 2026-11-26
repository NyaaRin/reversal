// 0x180150310  FUN_180150310
// size=445 thunk=false
// signature: undefined FUN_180150310()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180150310(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  size_t sVar4;
  undefined **ppuVar5;
  undefined8 ***pppuVar6;
  undefined1 auStack_248 [32];
  undefined8 **local_228;
  undefined4 local_220;
  undefined4 local_218;
  undefined4 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined1 local_1c0 [40];
  char local_198 [4];
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 **local_188 [3];
  ulonglong local_170;
  undefined8 **local_168 [3];
  ulonglong local_150;
  char local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_248;
  local_208 = 0;
  ppuVar5 = &PTR_s_client_dll_1803e79e0;
  do {
    puVar1 = *ppuVar5;
    uVar2 = FUN_180022740(local_1c0,10);
    puVar3 = (undefined8 *)FUN_18022a630(uVar2);
    local_200 = *puVar3;
    uStack_1f8 = puVar3[1];
    local_1f0 = puVar3[2];
    uStack_1e8 = puVar3[3];
    *(undefined1 *)puVar3 = 0;
    puVar3[2] = 0;
    puVar3[3] = 0xf;
    local_208 = 1;
    FUN_18020e450(local_1c0);
    FUN_18014d5a0(local_198,puVar1,&local_200);
    local_208 = 0;
    FUN_18020e450(&local_200);
    if (local_198[0] == '\0') {
      local_228 = local_168;
      if (0xf < local_150) {
        local_228 = local_168[0];
      }
      FUN_180012ac0(local_148,0x100,"sql wipe (%s): %s",puVar1);
    }
    else {
      pppuVar6 = local_188;
      if (0xf < local_170) {
        pppuVar6 = (undefined8 ***)local_188[0];
      }
      local_218 = local_18c;
      local_220 = local_190;
      local_228 = (undefined8 **)CONCAT44(local_228._4_4_,local_194);
      FUN_180012ac0(local_148,0x100,
                    "%s: %d table(s) dropped, %d cookie(s) cleared, %d freed page(s) overwritten",
                    pppuVar6);
    }
    local_1e0 = 0;
    uStack_1d8 = 0;
    local_1d0 = 0;
    uStack_1c8 = 0;
    sVar4 = strlen(local_148);
    FUN_18001d080(&local_1e0,local_148,sVar4);
    FUN_18014de20(&local_1e0);
    FUN_18020e450(&local_1e0);
    FUN_18020e450(local_168);
    FUN_18020e450(local_188);
    ppuVar5 = ppuVar5 + 1;
  } while (ppuVar5 != (undefined **)&DAT_1803e79f0);
  return;
}



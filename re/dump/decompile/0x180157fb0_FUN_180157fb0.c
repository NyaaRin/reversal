// 0x180157fb0  FUN_180157fb0
// size=826 thunk=false
// signature: undefined FUN_180157fb0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint * FUN_180157fb0(uint *param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  void *pvVar2;
  code *pcVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  void *_Memory;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  ulonglong _Size;
  byte *pbVar16;
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [24];
  undefined4 local_178;
  uint *local_170;
  char local_168 [256];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  puVar13 = auStack_198;
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_198;
  local_178 = 0;
  local_170 = param_1;
  FUN_180154dc0(&local_68);
  puVar12 = &local_68;
  if (0xf < uStack_50) {
    puVar12 = (uint *)CONCAT44(uStack_64,local_68);
  }
  if ((2 < local_58) &&
     (lVar9 = local_58 + (longlong)puVar12,
     lVar7 = thunk_FUN_1802d6b60(puVar12,lVar9,&DAT_180360174,3), lVar7 != lVar9)) {
    uVar11 = lVar7 - (longlong)puVar12;
    uVar15 = local_58;
    uVar5 = uStack_50;
    while (local_58 = uVar15, uStack_50 = uVar5, uVar11 != 0xffffffffffffffff) {
      uVar1 = uVar11 + 3;
      if (uVar15 < uVar1) {
LAB_1801582e5:
                    /* WARNING: Subroutine does not return */
        FUN_18022ec00();
      }
      uVar10 = (ulonglong)(uVar15 != uVar1);
      puVar12 = (uint *)CONCAT44(uStack_64,local_68);
      puVar8 = &local_68;
      if (0xf < uVar5) {
        puVar8 = puVar12;
      }
      _Size = uVar10;
      if (1 < uVar10) {
        _Size = 1;
      }
      uVar6 = memcmp((void *)(uVar1 + (longlong)puVar8),&DAT_18033e5e4,_Size);
      if (uVar6 == 0) {
        if (uVar10 == 0) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)(1 < uVar10);
        }
      }
      uVar1 = uVar11 + 2;
      if (uVar15 < uVar1) goto LAB_1801582e5;
      uVar10 = 2 - (ulonglong)(uVar6 != 0);
      if (uVar15 - uVar1 < uVar10) {
        uVar10 = uVar15 - uVar1;
      }
      puVar8 = &local_68;
      if (0xf < uVar5) {
        puVar8 = puVar12;
      }
      uVar15 = uVar15 - uVar10;
      memmove((void *)((longlong)puVar8 + uVar1),
              (void *)(uVar10 + (longlong)((longlong)puVar8 + uVar1)),(uVar15 - uVar1) + 1);
      puVar12 = &local_68;
      if (0xf < uStack_50) {
        puVar12 = (uint *)CONCAT44(uStack_64,local_68);
      }
      local_58 = uVar15;
      if (((uVar15 < 3) || (uVar15 - 3 < uVar11)) ||
         (lVar9 = thunk_FUN_1802d6b60((longlong)puVar12 + uVar11,uVar15 + (longlong)puVar12,
                                      &DAT_180360174,3), lVar9 == uVar15 + (longlong)puVar12))
      break;
      uVar15 = local_58;
      uVar5 = uStack_50;
      uVar11 = lVar9 - (longlong)puVar12;
    }
  }
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xf;
  param_1[7] = 0;
  *(undefined1 *)param_1 = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  local_178 = 1;
  puVar12 = &local_68;
  if (0xf < uStack_50) {
    puVar12 = (uint *)CONCAT44(uStack_64,local_68);
  }
  if (local_58 != 0) {
    if (0xf < local_58 + 2) {
      lVar9 = FUN_1802d70c0(puVar12,local_58,&DAT_180360178,2);
      goto LAB_180158229;
    }
    puVar8 = (uint *)((longlong)puVar12 + local_58);
    memset(local_168,0,0x100);
    pbVar16 = &DAT_180360178;
    do {
      local_168[*pbVar16] = '\x01';
      pbVar16 = pbVar16 + 1;
      puVar4 = puVar12;
    } while (pbVar16 != &DAT_18036017a);
    for (; puVar4 < puVar8; puVar4 = (uint *)((longlong)puVar4 + 1)) {
      if (local_168[(byte)*puVar4] != '\0') {
        lVar9 = (longlong)puVar4 - (longlong)puVar12;
        goto LAB_180158229;
      }
    }
  }
  lVar9 = -1;
LAB_180158229:
  *(bool *)(param_1 + 9) = lVar9 != -1;
  param_1[8] = param_3;
  puVar14 = auStack_198;
  if (param_1 != &local_68) {
    if (0xf < *(ulonglong *)(param_1 + 6)) {
      pvVar2 = *(void **)param_1;
      _Memory = pvVar2;
      puVar13 = auStack_198;
      if ((0xfff < *(ulonglong *)(param_1 + 6) + 1) &&
         (_Memory = *(void **)((longlong)pvVar2 + -8), puVar13 = auStack_198,
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
        pcVar3 = (code *)swi(0x29);
        _Memory = (void *)(*pcVar3)(5);
        puVar13 = auStack_190;
      }
      *(undefined8 *)(puVar13 + -8) = 0x180158285;
      free(_Memory);
    }
    param_1[6] = 0xf;
    param_1[7] = 0;
    *(undefined1 *)param_1 = 0;
    *param_1 = local_68;
    param_1[1] = uStack_64;
    param_1[2] = uStack_60;
    param_1[3] = uStack_5c;
    *(ulonglong *)(param_1 + 4) = local_58;
    *(ulonglong *)(param_1 + 6) = uStack_50;
    local_58 = 0;
    uStack_50 = 0xf;
    local_68 = local_68 & 0xffffff00;
    puVar14 = puVar13;
  }
  *(undefined8 *)(puVar14 + -8) = 0x1801582bb;
  FUN_18020e450(&local_68);
  *(undefined8 *)(puVar14 + -8) = 0x1801582ca;
  return param_1;
}



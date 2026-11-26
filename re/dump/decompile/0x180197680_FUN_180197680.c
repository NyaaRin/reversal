// 0x180197680  FUN_180197680
// size=1533 thunk=false
// signature: undefined FUN_180197680()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180197680(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  byte *pbVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined8 ****ppppuVar9;
  longlong lVar10;
  size_t sVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  undefined8 ****_Memory;
  longlong lVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [24];
  undefined4 local_168;
  undefined8 ***local_160;
  undefined8 uStack_158;
  ulonglong local_150;
  ulonglong uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 *local_100;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined8 ***local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  undefined8 ***local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  ulonglong local_80;
  char local_78 [24];
  ulonglong local_60;
  
  puVar16 = auStack_188;
  local_60 = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  uVar17 = 0;
  uVar19 = 0;
  local_168 = 0;
  uVar14 = param_2[2];
  local_100 = param_1;
  if (uVar14 == 0) {
    FUN_1801975c0(param_1,param_3);
    puVar16 = auStack_188;
    goto LAB_180197c49;
  }
  if (uVar14 != 0) {
    do {
      puVar12 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar12 = (undefined8 *)*param_2;
      }
      if (*(char *)((longlong)puVar12 + uVar17) != '@') {
        puVar12 = param_2;
        if (0xf < (ulonglong)param_2[3]) {
          puVar12 = (undefined8 *)*param_2;
        }
        if (*(char *)((longlong)puVar12 + uVar17) != '=') {
          puVar12 = param_2;
          if (0xf < (ulonglong)param_2[3]) {
            puVar12 = (undefined8 *)*param_2;
          }
          if (*(char *)((longlong)puVar12 + uVar17) != '/') {
            puVar12 = param_2;
            if (0xf < (ulonglong)param_2[3]) {
              puVar12 = (undefined8 *)*param_2;
            }
            if (*(char *)((longlong)puVar12 + uVar17) != '\\') break;
          }
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < uVar14);
  }
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0xf;
  local_b8 = (undefined8 ****)0x0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0xf;
  local_98 = (undefined8 ****)0x0;
  if (0xf < param_2[2] + 4) {
    FUN_18021aa80(&local_b8,param_2[2] + 4);
  }
  uVar14 = local_88;
  local_a8 = 0;
  if (local_80 < 0x40) {
    FUN_18021aa80(&local_98,0x40 - local_88);
  }
  local_88 = uVar14;
  if (uVar17 < (ulonglong)param_2[2]) {
    do {
      uVar14 = local_88;
      puVar12 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar12 = (undefined8 *)*param_2;
      }
      bVar18 = *(byte *)((longlong)puVar12 + uVar17);
      if ((bVar18 == 0x2f) || (bVar18 == 0x5c)) {
        FUN_180197460(&local_b8,&local_98);
        if (0xb3 < local_a8) break;
      }
      else if (local_88 < 0x60) {
        if (((byte)(bVar18 - 0x20) < 0x5f) &&
           (((0x3f < bVar18 || ((0xd400040400000000U >> ((ulonglong)bVar18 & 0x3f) & 1) == 0)) &&
            (bVar18 != 0x7c)))) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          bVar18 = 0x5f;
        }
        if (local_88 < local_80) {
          ppppuVar9 = &local_98;
          if (0xf < local_80) {
            ppppuVar9 = (undefined8 ****)local_98;
          }
          pbVar1 = (byte *)((longlong)ppppuVar9 + local_88);
          local_88 = local_88 + 1;
          *pbVar1 = bVar18;
          *(undefined1 *)((longlong)ppppuVar9 + uVar14 + 1) = 0;
        }
        else {
          FUN_18021abd0(&local_98);
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < (ulonglong)param_2[2]);
  }
  FUN_180197460(&local_b8,&local_98);
  if (local_a8 == 0) {
    FUN_1801975c0(param_1,param_3);
    local_168 = 1;
  }
  else {
    ppppuVar9 = &local_b8;
    if (0xf < uStack_a0) {
      ppppuVar9 = (undefined8 ****)local_b8;
    }
    if (local_a8 == 0) {
      uVar14 = 0xffffffffffffffff;
    }
    else {
      lVar10 = -1;
      if (local_a8 - 1 != -1) {
        lVar10 = local_a8 - 1;
      }
      lVar15 = lVar10 + 1 + (longlong)ppppuVar9;
      lVar10 = thunk_FUN_1802d5fe0(ppppuVar9,lVar15,0x2f);
      uVar14 = 0xffffffffffffffff;
      if (lVar10 != lVar15) {
        uVar14 = lVar10 - (longlong)ppppuVar9;
      }
    }
    ppppuVar9 = &local_b8;
    if (0xf < uStack_a0) {
      ppppuVar9 = (undefined8 ****)local_b8;
    }
    if (local_a8 == 0) {
LAB_180197971:
      FUN_18021aef0(&local_b8,&DAT_180340d34,4);
    }
    else {
      lVar10 = -1;
      if (local_a8 - 1 != -1) {
        lVar10 = local_a8 - 1;
      }
      lVar15 = lVar10 + 1 + (longlong)ppppuVar9;
      lVar10 = thunk_FUN_1802d5fe0(ppppuVar9,lVar15,0x2e);
      if (((lVar10 == lVar15) || (lVar10 - (longlong)ppppuVar9 == 0xffffffffffffffff)) ||
         ((uVar14 != 0xffffffffffffffff && ((ulonglong)(lVar10 - (longlong)ppppuVar9) < uVar14))))
      goto LAB_180197971;
    }
    uVar14 = local_a8;
    puVar16 = auStack_188;
    if (0xb4 < local_a8) {
      ppppuVar9 = &local_b8;
      if (0xf < uStack_a0) {
        ppppuVar9 = (undefined8 ****)local_b8;
      }
      uVar14 = 0;
      uVar17 = 0xcbf29ce484222325;
      if (local_a8 != 0) {
        do {
          uVar17 = (uVar17 ^ *(byte *)((longlong)ppppuVar9 + uVar14)) * 0x100000001b3;
          uVar14 = uVar14 + 1;
        } while (uVar14 < local_a8);
      }
      local_78[0] = '\0';
      local_78[1] = '\0';
      local_78[2] = '\0';
      local_78[3] = '\0';
      local_78[4] = '\0';
      local_78[5] = '\0';
      local_78[6] = '\0';
      local_78[7] = '\0';
      local_78[8] = '\0';
      local_78[9] = '\0';
      local_78[10] = '\0';
      local_78[0xb] = '\0';
      local_78[0xc] = '\0';
      local_78[0xd] = '\0';
      local_78[0xe] = '\0';
      local_78[0xf] = '\0';
      local_78[0x10] = 0;
      FUN_180208b00(local_78,"%016llx",
                    (uVar17 >> 2) + 0x9e3779b97f4a7c15 + uVar17 * 0x40 + param_3 ^ uVar17);
      local_120 = 0;
      uStack_118 = 0;
      local_110 = 0;
      local_108 = 0;
      sVar11 = strlen(local_78);
      FUN_18001d080(&local_120,local_78,sVar11);
      local_168 = 8;
      puVar12 = (undefined8 *)FUN_18022a630(&local_120);
      local_140 = *puVar12;
      uStack_138 = puVar12[1];
      local_130 = puVar12[2];
      uStack_128 = puVar12[3];
      puVar12[2] = 0;
      puVar12[3] = 0xf;
      *(undefined1 *)puVar12 = 0;
      local_168 = 0x18;
      puVar12 = (undefined8 *)FUN_18021aef0(&local_140,&DAT_180340d34,4);
      ppppuVar9 = (undefined8 ****)*puVar12;
      uVar6 = puVar12[1];
      uVar17 = puVar12[2];
      uVar7 = puVar12[3];
      puVar12[2] = 0;
      puVar12[3] = 0xf;
      *(undefined1 *)puVar12 = 0;
      uVar19 = 0x38;
      local_168 = 0x38;
      local_160 = ppppuVar9;
      uStack_158 = uVar6;
      if (0xf < uStack_a0) {
        uVar14 = uStack_a0 + 1;
        _Memory = (undefined8 ****)local_b8;
        local_150 = uVar17;
        uStack_148 = uVar7;
        if ((0xfff < uVar14) &&
           (_Memory = (undefined8 ****)local_b8[-1],
           0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)_Memory)))) {
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)(5);
          puVar16 = auStack_180;
          goto LAB_180197b9e;
        }
        free(_Memory);
      }
      local_150 = 0;
      uStack_148 = 0xf;
      local_160 = (undefined8 ***)((ulonglong)local_160 & 0xffffffffffffff00);
      local_168 = 0x18;
      local_b8 = ppppuVar9;
      uStack_b0 = uVar6;
      local_a8 = uVar17;
      uStack_a0 = uVar7;
      FUN_18020e450(&local_160);
      local_168 = 8;
      FUN_18020e450(&local_140);
      uVar19 = 0;
      local_168 = 0;
      FUN_18020e450(&local_120);
      uVar14 = local_a8;
      puVar16 = auStack_188;
    }
LAB_180197b9e:
    if (uVar14 == 0) {
      *(undefined8 *)(puVar16 + -8) = 0x180197baf;
      puVar13 = (undefined4 *)FUN_1801975c0(local_d8,param_3);
      uVar19 = uVar19 | 2;
    }
    else {
      *(undefined8 *)(puVar16 + -8) = 0x180197bc3;
      puVar13 = (undefined4 *)FUN_18016d4c0(local_f8,&local_b8);
      uVar19 = uVar19 | 4;
    }
    *(uint *)(puVar16 + 0x20) = uVar19;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    uVar3 = puVar13[1];
    uVar4 = puVar13[2];
    uVar5 = puVar13[3];
    *(undefined4 *)param_1 = *puVar13;
    *(undefined4 *)((longlong)param_1 + 4) = uVar3;
    *(undefined4 *)(param_1 + 1) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
    uVar3 = puVar13[5];
    uVar4 = puVar13[6];
    uVar5 = puVar13[7];
    *(undefined4 *)(param_1 + 2) = puVar13[4];
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
    *(undefined4 *)(param_1 + 3) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
    *(undefined8 *)(puVar13 + 4) = 0;
    *(undefined8 *)(puVar13 + 6) = 0xf;
    *(undefined1 *)puVar13 = 0;
    uVar20 = uVar19 | 1;
    *(uint *)(puVar16 + 0x20) = uVar20;
    if ((uVar19 & 4) != 0) {
      uVar20 = uVar19 & 0xfffffffb | 1;
      *(uint *)(puVar16 + 0x20) = uVar20;
      *(undefined8 *)(puVar16 + -8) = 0x180197c1c;
      FUN_18020e450(local_f8);
    }
    if ((uVar20 & 2) != 0) {
      *(uint *)(puVar16 + 0x20) = uVar20 & 0xfffffffd;
      *(undefined8 *)(puVar16 + -8) = 0x180197c35;
      FUN_18020e450(local_d8);
    }
  }
  *(undefined8 *)(puVar16 + -8) = 0x180197c3f;
  FUN_18020e450(&local_98);
  *(undefined8 *)(puVar16 + -8) = 0x180197c49;
  FUN_18020e450(&local_b8);
LAB_180197c49:
  *(undefined8 *)(puVar16 + -8) = 0x180197c58;
  return param_1;
}



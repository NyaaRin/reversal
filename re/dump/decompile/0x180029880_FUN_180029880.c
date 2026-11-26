// 0x180029880  FUN_180029880
// size=1087 thunk=false
// signature: undefined FUN_180029880()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180029880(undefined8 *param_1,byte *param_2,undefined8 param_3)

{
  byte bVar1;
  char cVar2;
  code *pcVar3;
  byte *pbVar4;
  ulonglong uVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [40];
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 *local_178;
  char local_168 [256];
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  puVar9 = auStack_1d8;
  puVar10 = auStack_1d8;
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_1d8;
  local_1a8 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0xf;
  local_68 = (byte *)0x0;
  uVar5 = *(ulonglong *)(param_2 + 0x10);
  local_180 = param_3;
  local_178 = param_1;
  if (0xf < uVar5) {
    FUN_18021aa80(&local_68);
    uVar5 = *(ulonglong *)(param_2 + 0x10);
  }
  local_58 = 0;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(byte **)param_2;
  }
  pbVar6 = param_2 + uVar5;
  uVar5 = local_58;
  uVar11 = uStack_50;
  for (; local_58 = uVar5, param_2 != pbVar6; param_2 = param_2 + 1) {
    bVar1 = *param_2;
    if ((0x1f < bVar1) && (bVar1 != 0x7f)) {
      if (uVar5 < uVar11) {
        local_58 = uVar5 + 1;
        pbVar8 = (byte *)&local_68;
        if (0xf < uVar11) {
          pbVar8 = local_68;
        }
        pbVar8[uVar5] = bVar1;
        pbVar8[uVar5 + 1] = 0;
        uVar11 = uStack_50;
      }
      else {
        FUN_18021abd0(&local_68);
        uVar11 = uStack_50;
      }
    }
    uVar5 = local_58;
  }
  pbVar6 = (byte *)&local_68;
  if (0xf < uVar11) {
    pbVar6 = local_68;
  }
  if (uVar5 != 0) {
    if (uVar5 + 2 < 0x10) {
      memset(local_168,0,0x100);
      pbVar8 = &DAT_180340eb4;
      do {
        local_168[*pbVar8] = '\x01';
        pbVar8 = pbVar8 + 1;
        pbVar4 = pbVar6;
      } while (pbVar8 != &DAT_180340eb6);
      for (; pbVar4 < pbVar6 + uVar5; pbVar4 = pbVar4 + 1) {
        if (local_168[*pbVar4] == '\0') {
          uVar5 = (longlong)pbVar4 - (longlong)pbVar6;
          goto LAB_180029abe;
        }
      }
    }
    else {
      uVar5 = FUN_1802d6fd0(pbVar6,uVar5,&DAT_180340eb4,2);
      uVar11 = uStack_50;
LAB_180029abe:
      pbVar6 = &DAT_180340eb4;
      if (uVar5 != 0xffffffffffffffff) {
        pbVar8 = (byte *)&local_68;
        if (0xf < uVar11) {
          pbVar8 = local_68;
        }
        lVar12 = -1;
        if (local_58 != 0) {
          lVar13 = -1;
          if (local_58 - 1 != -1) {
            lVar13 = local_58 - 1;
          }
          if (lVar13 + 3U < 0x10) {
            memset(local_168,0,0x100);
            do {
              local_168[*pbVar6] = '\x01';
              pbVar6 = pbVar6 + 1;
            } while (pbVar6 != &DAT_180340eb6);
            pbVar6 = pbVar8 + lVar13;
            cVar2 = local_168[*pbVar6];
            while (cVar2 != '\0') {
              if (pbVar6 == pbVar8) goto LAB_180029b68;
              pbVar6 = pbVar6 + -1;
              cVar2 = local_168[*pbVar6];
            }
            lVar12 = (longlong)pbVar6 - (longlong)pbVar8;
          }
          else {
            lVar12 = thunk_FUN_1802d4c50(pbVar8,lVar13 + 1,&DAT_180340eb4,2);
          }
        }
LAB_180029b68:
        local_1a0 = 0;
        uStack_198 = 0;
        local_190 = 0;
        uStack_188 = 0;
        if (local_58 < uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_18022ec00();
        }
        uVar11 = (lVar12 - uVar5) + 1;
        if (local_58 - uVar5 < uVar11) {
          uVar11 = local_58 - uVar5;
        }
        pbVar6 = (byte *)&local_68;
        if (0xf < uStack_50) {
          pbVar6 = local_68;
        }
        FUN_18001d080(&local_1a0,pbVar6 + uVar5,uVar11);
        local_1a8 = 2;
        if (0xf < uStack_50) {
          pbVar6 = local_68;
          puVar10 = auStack_1d8;
          if ((0xfff < uStack_50 + 1) &&
             (pbVar6 = *(byte **)(local_68 + -8), puVar10 = auStack_1d8,
             (byte *)0x1f < local_68 + (-8 - (longlong)pbVar6))) {
            pcVar3 = (code *)swi(0x29);
            pbVar6 = (byte *)(*pcVar3)(5);
            puVar10 = auStack_1d0;
          }
          *(undefined8 *)(puVar10 + -8) = 0x180029c03;
          free(pbVar6);
        }
        local_58 = 0;
        uStack_50 = 0xf;
        local_68 = (byte *)((ulonglong)local_68 & 0xffffffffffffff00);
        local_68 = (byte *)*(undefined8 **)(puVar10 + 0x38);
        uStack_60 = *(undefined8 *)(puVar10 + 0x40);
        local_58 = *(ulonglong *)(puVar10 + 0x48);
        uStack_50 = *(ulonglong *)(puVar10 + 0x50);
        *(undefined8 *)(puVar10 + 0x48) = 0;
        *(undefined8 *)(puVar10 + 0x50) = 0xf;
        puVar10[0x38] = 0;
        *(undefined4 *)(puVar10 + 0x30) = 0;
        *(undefined8 *)(puVar10 + -8) = 0x180029c54;
        FUN_18020e450(puVar10 + 0x38);
        uVar5 = *(ulonglong *)(puVar10 + 0x58);
        if (uVar5 < local_58) {
          puVar7 = &local_68;
          if (0xf < uStack_50) {
            puVar7 = (undefined8 *)local_68;
          }
          local_58 = uVar5;
          *(undefined1 *)(uVar5 + (longlong)puVar7) = 0;
        }
        *(undefined4 *)param_1 = (undefined4)local_68;
        *(undefined4 *)((longlong)param_1 + 4) = local_68._4_4_;
        *(undefined4 *)(param_1 + 1) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_60._4_4_;
        param_1[2] = local_58;
        param_1[3] = uStack_50;
        local_58 = 0;
        uStack_50 = 0xf;
        local_68 = (byte *)((ulonglong)local_68 & 0xffffffffffffff00);
        *(undefined4 *)(puVar10 + 0x30) = 1;
        puVar9 = puVar10;
        goto LAB_180029a85;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_1a8 = 1;
LAB_180029a85:
  *(undefined8 *)(puVar9 + -8) = 0x180029a8e;
  FUN_18020e450(&local_68);
  *(undefined8 *)(puVar9 + -8) = 0x180029aa0;
  return param_1;
}



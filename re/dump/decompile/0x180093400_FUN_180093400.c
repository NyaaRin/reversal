// 0x180093400  FUN_180093400
// size=971 thunk=false
// signature: undefined FUN_180093400()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

longlong * FUN_180093400(longlong *param_1,undefined8 *param_2)

{
  byte *******pppppppbVar1;
  size_t _Size;
  byte *******pppppppbVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  byte *pbVar9;
  char *pcVar10;
  undefined8 *_Buf1;
  byte *******pppppppbVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  ulonglong uVar14;
  uint uVar15;
  byte *******pppppppbVar16;
  undefined1 auStack_1a8 [32];
  uint local_188;
  longlong *local_180;
  longlong *local_178;
  char local_168 [256];
  byte *******local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_1a8;
  uVar5 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar15 = 1;
  local_188 = 1;
  uVar4 = param_2[2];
  local_180 = param_1;
  local_178 = param_1;
  if (uVar4 != 0) {
    while ((ulonglong)(param_1[1] - *param_1 >> 5) < 0x20) {
      puVar7 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar7 = (undefined8 *)*param_2;
      }
      if (uVar4 <= uVar5) {
        return param_1;
      }
      pbVar13 = (byte *)((longlong)puVar7 + uVar5);
      if ((uVar4 - uVar5) + 6 < 0x10) {
        memset(local_168,0,0x100);
        pbVar9 = &DAT_18034913c;
        do {
          local_168[*pbVar9] = '\x01';
          pbVar9 = pbVar9 + 1;
        } while (pbVar9 != &DAT_180349142);
        while( true ) {
          if ((byte *)(uVar4 + (longlong)puVar7) <= pbVar13) {
            return param_1;
          }
          if (local_168[*pbVar13] == '\0') break;
          pbVar13 = pbVar13 + 1;
        }
        uVar4 = (longlong)pbVar13 - (longlong)puVar7;
      }
      else {
        uVar4 = FUN_1802d6fd0(pbVar13,uVar4 - uVar5,&DAT_18034913c,6);
        if (uVar4 != 0xffffffffffffffff) {
          uVar4 = uVar4 + uVar5;
        }
      }
      if (uVar4 == 0xffffffffffffffff) {
        return param_1;
      }
      puVar7 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar7 = (undefined8 *)*param_2;
      }
      uVar5 = param_2[2];
      if (uVar4 < uVar5) {
        pbVar13 = (byte *)((longlong)puVar7 + uVar4);
        if ((uVar5 - uVar4) + 6 < 0x10) {
          memset(local_168,0,0x100);
          pbVar9 = &DAT_18034913c;
          do {
            local_168[*pbVar9] = '\x01';
            pbVar9 = pbVar9 + 1;
          } while (pbVar9 != &DAT_180349142);
          for (; pbVar13 < (byte *)(uVar5 + (longlong)puVar7); pbVar13 = pbVar13 + 1) {
            if (local_168[*pbVar13] != '\0') {
              uVar5 = (longlong)pbVar13 - (longlong)puVar7;
              goto LAB_1800935fc;
            }
          }
          goto LAB_180093602;
        }
        uVar5 = FUN_1802d70c0(pbVar13,uVar5 - uVar4,&DAT_18034913c,6);
        if (uVar5 != 0xffffffffffffffff) {
          uVar5 = uVar5 + uVar4;
        }
LAB_1800935fc:
        if (uVar5 == 0xffffffffffffffff) goto LAB_180093602;
      }
      else {
LAB_180093602:
        uVar5 = param_2[2];
      }
      local_68 = (byte *******)0x0;
      uStack_60 = 0;
      local_58 = 0;
      local_50 = 0;
      if ((ulonglong)param_2[2] < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_18022ec00();
      }
      uVar6 = param_2[2] - uVar4;
      uVar14 = uVar5 - uVar4;
      if (uVar6 < uVar5 - uVar4) {
        uVar14 = uVar6;
      }
      puVar7 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar7 = (undefined8 *)*param_2;
      }
      FUN_18001d080(&local_68,(longlong)puVar7 + uVar4,uVar14);
      uVar4 = local_50;
      pppppppbVar16 = local_68;
      local_188 = uVar15 | 2;
      param_1 = local_180;
      if (local_58 < 0x80) {
        pppppppbVar11 = (byte *******)&local_68;
        if (0xf < local_50) {
          pppppppbVar11 = local_68;
        }
        if (local_58 != 0) {
          if (local_58 + 0x3f < 0x10) {
            pppppppbVar1 = (byte *******)((longlong)pppppppbVar11 + local_58);
            memset(local_168,0,0x100);
            pcVar10 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_";
            do {
              local_168[(byte)*pcVar10] = '\x01';
              pcVar10 = pcVar10 + 1;
              pppppppbVar2 = pppppppbVar11;
            } while ((byte *)pcVar10 != (byte *)0x18034918f);
            for (; pppppppbVar2 < pppppppbVar1;
                pppppppbVar2 = (byte *******)((longlong)pppppppbVar2 + 1)) {
              if (local_168[*(byte *)pppppppbVar2] == '\0') {
                lVar8 = (longlong)pppppppbVar2 - (longlong)pppppppbVar11;
                goto LAB_180093717;
              }
            }
          }
          else {
            lVar8 = FUN_1802d6fd0(pppppppbVar11,local_58,
                                  "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_",
                                  0x3f);
            uVar4 = local_50;
            pppppppbVar16 = local_68;
LAB_180093717:
            param_1 = local_180;
            if (lVar8 != -1) goto LAB_1800937a2;
          }
        }
        uVar14 = local_58;
        puVar7 = (undefined8 *)local_180[1];
        for (puVar12 = (undefined8 *)*local_180; puVar12 != puVar7; puVar12 = puVar12 + 4) {
          pppppppbVar11 = (byte *******)&local_68;
          if (0xf < uVar4) {
            pppppppbVar11 = pppppppbVar16;
          }
          _Size = puVar12[2];
          _Buf1 = puVar12;
          if (0xf < (ulonglong)puVar12[3]) {
            _Buf1 = (undefined8 *)*puVar12;
          }
          if ((_Size == uVar14) &&
             ((_Size == 0 || (iVar3 = memcmp(_Buf1,pppppppbVar11,_Size), iVar3 == 0)))) {
            param_1 = local_180;
            if (puVar12 != puVar7) goto LAB_1800937a2;
            break;
          }
        }
        param_1 = local_180;
        FUN_18020d6f0(local_180,&local_68);
      }
LAB_1800937a2:
      uVar15 = local_188 & 0xfffffffd;
      local_188 = uVar15;
      FUN_18020e450(&local_68);
      uVar4 = param_2[2];
      if (uVar4 <= uVar5) {
        return param_1;
      }
    }
  }
  return param_1;
}



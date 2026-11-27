// 0x180026bc0  FUN_180026bc0
// size=1126 thunk=false
// signature: undefined FUN_180026bc0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180026bc0(byte *param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  byte *pbVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  byte *******pppppppbVar7;
  byte *pbVar8;
  byte *******pppppppbVar9;
  char *pcVar10;
  longlong lVar11;
  byte *pbVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 *******pppppppuVar15;
  undefined1 auStack_218 [32];
  uint local_1f8;
  undefined8 *local_1f0;
  undefined1 local_1e8 [32];
  undefined1 local_1c8 [32];
  char local_1a8 [256];
  byte ******local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined8 ******local_88 [2];
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_218;
  uVar13 = 0;
  local_1f8 = 0;
  lVar3 = param_2[1];
  lVar11 = *param_2;
  local_1f0 = param_3;
  if (lVar11 != lVar3) {
    do {
      FUN_18020e450(lVar11);
      lVar11 = lVar11 + 0x20;
    } while (lVar11 != lVar3);
    param_2[1] = *param_2;
  }
  param_3[2] = 0;
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  *(undefined1 *)param_3 = 0;
  lVar3 = *(longlong *)(param_1 + 0x10);
  pbVar12 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pbVar12 = *(byte **)param_1;
  }
  if (lVar3 != 0) {
    if (lVar3 + 2U < 0x10) {
      memset(local_1a8,0,0x100);
      pbVar8 = &DAT_180340eb4;
      do {
        local_1a8[*pbVar8] = '\x01';
        pbVar8 = pbVar8 + 1;
        pbVar2 = pbVar12;
      } while (pbVar8 != &DAT_180340eb6);
      for (; pbVar2 < pbVar12 + lVar3; pbVar2 = pbVar2 + 1) {
        if (local_1a8[*pbVar2] == '\0') {
          lVar3 = (longlong)pbVar2 - (longlong)pbVar12;
          goto LAB_180026d42;
        }
      }
    }
    else {
      lVar3 = FUN_1802d6fd0(pbVar12,lVar3,&DAT_180340eb4,2);
LAB_180026d42:
      pbVar12 = &DAT_180340eb4;
      if (lVar3 != -1) {
        pbVar8 = param_1;
        if (0xf < *(ulonglong *)(param_1 + 0x18)) {
          pbVar8 = *(byte **)param_1;
        }
        if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_180026d63:
          lVar11 = -1;
        }
        else {
          lVar5 = *(longlong *)(param_1 + 0x10) + -1;
          lVar11 = -1;
          if (lVar5 != -1) {
            lVar11 = lVar5;
          }
          if (lVar11 + 3U < 0x10) {
            memset(local_1a8,0,0x100);
            do {
              local_1a8[*pbVar12] = '\x01';
              pbVar12 = pbVar12 + 1;
            } while (pbVar12 != &DAT_180340eb6);
            pbVar12 = pbVar8 + lVar11;
            cVar1 = local_1a8[*pbVar12];
            while (cVar1 != '\0') {
              if (pbVar12 == pbVar8) goto LAB_180026d63;
              pbVar12 = pbVar12 + -1;
              cVar1 = local_1a8[*pbVar12];
            }
            lVar11 = (longlong)pbVar12 - (longlong)pbVar8;
          }
          else {
            lVar11 = thunk_FUN_1802d4c50(pbVar8,lVar11 + 1,&DAT_180340eb4,2);
          }
        }
        FUN_18020e670(param_1,local_88,lVar3,(lVar11 - lVar3) + 1);
        if (local_78 < 0x81) {
          uVar4 = 0;
          do {
            pppppppuVar15 = local_88;
            if (0xf < local_70) {
              pppppppuVar15 = (undefined8 *******)local_88[0];
            }
            if ((uVar4 < local_78) &&
               (lVar3 = local_78 + (longlong)pppppppuVar15,
               lVar11 = thunk_FUN_1802d5c20((longlong)pppppppuVar15 + uVar4,lVar3,0x2e),
               lVar11 != lVar3)) {
              lVar11 = lVar11 - (longlong)pppppppuVar15;
              if (lVar11 == -1) goto LAB_180026eb7;
              puVar6 = (undefined8 *)FUN_18020e670(local_88,local_1e8,uVar4,lVar11 - uVar4);
              uVar13 = uVar13 | 2;
            }
            else {
              lVar11 = -1;
LAB_180026eb7:
              puVar6 = (undefined8 *)FUN_18020e670(local_88,local_1c8,uVar4,0xffffffffffffffff);
              uVar13 = uVar13 | 1;
            }
            pppppppbVar7 = (byte *******)*puVar6;
            local_a8 = (byte ******)pppppppbVar7;
            uStack_a0 = puVar6[1];
            lVar3 = puVar6[2];
            uVar4 = puVar6[3];
            local_98 = lVar3;
            uStack_90 = uVar4;
            *(undefined1 *)puVar6 = 0;
            puVar6[2] = 0;
            puVar6[3] = 0xf;
            local_1f8 = uVar13;
            if ((uVar13 & 2) != 0) {
              uVar13 = uVar13 & 0xfffffffd;
              local_1f8 = uVar13;
              FUN_18020e450(local_1e8);
            }
            if ((uVar13 & 1) != 0) {
              uVar13 = uVar13 & 0xfffffffe;
              local_1f8 = uVar13;
              FUN_18020e450(local_1c8);
            }
            if (lVar3 == 0) {
              pcVar10 = "empty segment (doubled, leading or trailing \'.\')";
              uVar14 = 0x30;
LAB_180026ffc:
              FUN_180212700(local_1f0,pcVar10,uVar14);
              FUN_18020e450(&local_a8);
              goto LAB_180027010;
            }
            if (uVar4 < 0x10) {
              pppppppbVar7 = &local_a8;
            }
            pppppppbVar9 = (byte *******)((longlong)pppppppbVar7 + lVar3);
            for (; pppppppbVar7 != pppppppbVar9;
                pppppppbVar7 = (byte *******)((longlong)pppppppbVar7 + 1)) {
              if ((*(byte *)pppppppbVar7 < 0x20) || (*(byte *)pppppppbVar7 == 0x7f)) {
                pcVar10 = "segment contains a control character";
                uVar14 = 0x24;
                goto LAB_180026ffc;
              }
            }
            if (7 < (int)(param_2[1] - *param_2 >> 5)) {
              uVar14 = 0x10;
              pcVar10 = "path is too deep";
              goto LAB_180026ffc;
            }
            FUN_18020d6f0(param_2,&local_a8);
            if (lVar11 == -1) goto LAB_180026fd3;
            uVar4 = lVar11 + 1;
            FUN_18020e450(&local_a8);
          } while( true );
        }
        FUN_180212700(local_1f0,"path is too long",0x10);
LAB_180027010:
        uVar4 = 0;
        goto LAB_180027012;
      }
    }
  }
  uVar4 = FUN_180212700(local_1f0,"path is empty",0xd);
  return uVar4 & 0xffffffffffffff00;
LAB_180026fd3:
  FUN_18020e450(&local_a8);
  uVar4 = 1;
LAB_180027012:
  FUN_18020e450(local_88);
  return uVar4;
}



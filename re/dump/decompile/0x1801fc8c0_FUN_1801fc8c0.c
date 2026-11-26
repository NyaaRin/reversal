// 0x1801fc8c0  FUN_1801fc8c0
// size=782 thunk=false
// signature: undefined FUN_1801fc8c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801fc8c0(longlong *param_1,ulonglong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ushort uVar5;
  ulonglong uVar6;
  longlong lVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  if (param_1[0x13] != 0) {
    lVar3 = param_1[1];
    lVar7 = *param_1;
    uVar6 = 0;
    if ((lVar3 - lVar7 >> 5) * -0x5555555555555555 != 0) {
      do {
        uVar4 = (lVar3 - lVar7 >> 5) * -0x5555555555555555;
        if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_180262180();
        }
        plVar1 = (longlong *)param_1[0x13];
        local_68 = *(undefined8 *)(uVar6 * 0x60 + 0x58 + lVar7);
        local_58 = uVar6;
        if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::_Xbad_function_call();
        }
        (**(code **)(*plVar1 + 0x10))(plVar1,&local_58,&local_68);
        lVar3 = param_1[1];
        uVar6 = uVar6 + 1;
        lVar7 = *param_1;
      } while (uVar6 < (ulonglong)((lVar3 - lVar7 >> 5) * -0x5555555555555555));
    }
  }
  lVar3 = param_1[1];
  lVar7 = *param_1;
  if (lVar7 != lVar3) {
    do {
      FUN_18023b050(lVar7);
      lVar7 = lVar7 + 0x60;
    } while (lVar7 != lVar3);
    param_1[1] = *param_1;
  }
  FUN_180256750(param_1);
  pbVar10 = (byte *)*param_3 + param_3[1];
  pbVar8 = (byte *)*param_3;
  do {
    while( true ) {
      if (pbVar10 <= pbVar8) {
        FUN_180256830(param_1,param_2,0,(param_1[1] - *param_1 >> 5) * -0x5555555555555555 + -1);
        *(undefined1 *)(param_1 + 3) = 1;
        return;
      }
      uVar5 = (ushort)(char)*pbVar8;
      if (-1 < (char)*pbVar8) break;
      pbVar9 = pbVar8 + 1;
      if ((pbVar9 < pbVar10) && ((*pbVar8 & 0xe0) == 0xc0)) {
        uVar5 = (ushort)(*pbVar8 & 0x1f) << 6 | (ushort)(*pbVar9 & 0x3f);
        pbVar9 = pbVar8 + 2;
        goto LAB_1801fca62;
      }
      if ((pbVar8 + 2 < pbVar10) && ((*pbVar8 & 0xf0) == 0xe0)) {
        uVar5 = ((ushort)(*pbVar9 & 0x3f) | (short)(char)*pbVar8 << 6) << 6 |
                (ushort)(pbVar8[2] & 0x3f);
        pbVar9 = pbVar8 + 3;
        goto LAB_1801fca62;
      }
      if ((pbVar8 + 3 < pbVar10) && ((*pbVar8 & 0xf8) == 0xf0)) {
        uVar5 = 0xfffd;
        pbVar9 = pbVar8 + 4;
      }
      else {
        uVar5 = 0xfffd;
      }
LAB_1801fca9d:
      pbVar8 = pbVar9;
      if (((char)param_2[1] == '\0') || (uVar5 != 9)) {
        if (uVar5 != 0xd) {
          lVar3 = param_1[1];
          local_68._0_4_ = CONCAT22(0x300,uVar5);
          uStack_60 = 0;
          puVar2 = *(undefined4 **)(lVar3 + -0x58);
          if (puVar2 == *(undefined4 **)(lVar3 + -0x50)) {
            FUN_18022f0a0();
          }
          else {
            *puVar2 = (undefined4)local_68;
            puVar2[1] = local_68._4_4_;
            puVar2[2] = 0;
            puVar2[3] = 0;
            *(longlong *)(lVar3 + -0x58) = *(longlong *)(lVar3 + -0x58) + 0x10;
          }
        }
      }
      else {
        uVar4 = *(longlong *)(param_1[1] + -0x58) - *(longlong *)(param_1[1] + -0x60) >> 4;
        uVar4 = (uVar4 / *param_2 + 1) * *param_2 - uVar4;
        uVar6 = 0;
        if (uVar4 != 0) {
          do {
            lVar3 = param_1[1];
            local_58 = CONCAT44(local_58._4_4_,0x3000020);
            uStack_50 = 0;
            puVar2 = *(undefined4 **)(lVar3 + -0x58);
            if (puVar2 == *(undefined4 **)(lVar3 + -0x50)) {
              FUN_18022f0a0();
            }
            else {
              *puVar2 = 0x3000020;
              puVar2[1] = local_58._4_4_;
              puVar2[2] = 0;
              puVar2[3] = 0;
              *(longlong *)(lVar3 + -0x58) = *(longlong *)(lVar3 + -0x58) + 0x10;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar4);
        }
      }
    }
    pbVar9 = pbVar8 + 1;
LAB_1801fca62:
    if (uVar5 != 10) goto LAB_1801fca9d;
    FUN_180256750(param_1);
    pbVar8 = pbVar9;
  } while( true );
}



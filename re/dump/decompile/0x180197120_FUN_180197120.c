// 0x180197120  FUN_180197120
// size=625 thunk=false
// signature: undefined FUN_180197120()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180197120(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  byte *pbVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  uVar2 = 0;
  local_68 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0xf;
  local_58 = (byte *)0x0;
  uVar4 = *(ulonglong *)(param_2 + 0x10);
  local_60 = param_1;
  if (0xf < uVar4) {
    FUN_18021aa80(&local_58);
    uVar4 = *(ulonglong *)(param_2 + 0x10);
  }
  local_48 = 0;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(byte **)param_2;
  }
  pbVar5 = param_2 + uVar4;
  if (param_2 != pbVar5) {
    do {
      uVar4 = local_48;
      bVar1 = *param_2;
      if (((((bVar1 == 0x2f) || (bVar1 == 0x5c)) || (0x5e < (byte)(bVar1 - 0x20))) ||
          ((bVar1 < 0x40 && ((0xd400040400000000U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)))) ||
         (bVar1 == 0x7c)) {
        if (uStack_40 <= local_48) goto LAB_180197238;
        local_48 = local_48 + 1;
        pbVar3 = (byte *)&local_58;
        if (0xf < uStack_40) {
          pbVar3 = local_58;
        }
        (pbVar3 + uVar4)[0] = 0x5f;
        (pbVar3 + uVar4)[1] = 0;
      }
      else if (local_48 < uStack_40) {
        local_48 = local_48 + 1;
        pbVar3 = (byte *)&local_58;
        if (0xf < uStack_40) {
          pbVar3 = local_58;
        }
        pbVar3[uVar4] = bVar1;
        pbVar3[uVar4 + 1] = 0;
      }
      else {
LAB_180197238:
        FUN_18021abd0(&local_58);
      }
      pbVar3 = local_58;
    } while ((local_48 < 0x60) && (param_2 = param_2 + 1, param_2 != pbVar5));
    while (local_58 = pbVar3, local_48 != 0) {
      pbVar5 = (byte *)&local_58;
      if (0xf < uStack_40) {
        pbVar5 = pbVar3;
      }
      if (pbVar5[local_48 - 1] != 0x20) {
        pbVar5 = (byte *)&local_58;
        if (0xf < uStack_40) {
          pbVar5 = pbVar3;
        }
        if (pbVar5[local_48 - 1] != 0x2e) {
          if (local_48 == 0) break;
          pbVar5 = (byte *)&local_58;
          if (0xf < uStack_40) {
            pbVar5 = pbVar3;
          }
          if (local_48 == 1) {
            if (*pbVar5 != 0x2e) {
              uVar2 = -(uint)(*pbVar5 < 0x2e) | 1;
            }
            if (uVar2 == 0) break;
          }
          pbVar5 = (byte *)&local_58;
          if (0xf < uStack_40) {
            pbVar5 = pbVar3;
          }
          if (local_48 == 2) {
            bVar1 = *pbVar5;
            if ((bVar1 == 0x2e) && (bVar1 = pbVar5[1], bVar1 == 0x2e)) {
              uVar2 = 0;
            }
            else {
              uVar2 = -(uint)(bVar1 < 0x2e) | 1;
            }
            if (uVar2 == 0) break;
          }
          local_58._0_4_ = SUB84(pbVar3,0);
          local_58._4_4_ = (undefined4)((ulonglong)pbVar3 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          *(undefined4 *)param_1 = (undefined4)local_58;
          *(undefined4 *)((longlong)param_1 + 4) = local_58._4_4_;
          *(undefined4 *)(param_1 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)param_1 + 0xc) = uStack_50._4_4_;
          param_1[2] = local_48;
          param_1[3] = uStack_40;
          local_48 = 0;
          uStack_40 = 0xf;
          local_58 = (byte *)((ulonglong)pbVar3 & 0xffffffffffffff00);
          goto LAB_1801972e1;
        }
      }
      local_48 = local_48 - 1;
      pbVar5 = (byte *)&local_58;
      if (0xf < uStack_40) {
        pbVar5 = pbVar3;
      }
      pbVar5[local_48] = 0;
      pbVar3 = local_58;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_18001d080(param_1,"unknown_server",0xe);
LAB_1801972e1:
  local_68 = 1;
  FUN_18020e450(&local_58);
  return param_1;
}



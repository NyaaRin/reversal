// 0x18025cdf0  FUN_18025cdf0
// size=945 thunk=false
// signature: undefined FUN_18025cdf0()
// status: ok


void FUN_18025cdf0(char *param_1,longlong *param_2)

{
  ushort uVar1;
  short sVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  byte *pbVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  char local_res18;
  undefined1 local_res20;
  ushort local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b7;
  undefined2 local_b3;
  undefined1 local_b1;
  longlong local_a8;
  ulonglong local_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined4 local_95;
  undefined1 local_91;
  ulonglong local_90;
  undefined1 local_88;
  undefined4 local_87;
  undefined2 local_83;
  undefined1 local_81;
  ushort local_80;
  undefined1 local_7e;
  undefined4 local_7d;
  undefined1 local_79;
  ulonglong local_78;
  undefined1 local_70;
  undefined4 local_6f;
  undefined2 local_6b;
  undefined1 local_69;
  ushort local_68;
  undefined1 local_66;
  undefined4 local_65;
  undefined1 local_61;
  ulonglong local_60;
  char local_58;
  undefined4 local_57;
  undefined2 local_53;
  undefined1 local_51;
  undefined2 local_50;
  undefined8 local_48;
  
  local_a8 = *param_2;
  uVar10 = param_2[1] - local_a8 >> 4;
  if (uVar10 != 0) {
    if (uVar10 == 1) {
      *(undefined1 *)(local_a8 + 3) = 2;
      return;
    }
    if (*param_1 == '\0') {
      if (param_1[0x78] != '\0') {
        if (*(ulonglong *)(param_1 + 0x20) < 0x10) {
          local_c8 = param_1 + 8;
        }
        else {
          local_c8 = *(char **)(param_1 + 8);
        }
        local_c0 = *(undefined8 *)(param_1 + 0x18);
        FUN_18025d1b0(param_1 + 0x80,&local_c8);
        if (*(ulonglong *)(param_1 + 0x40) < 0x10) {
          local_c8 = param_1 + 0x28;
        }
        else {
          local_c8 = *(char **)(param_1 + 0x28);
        }
        local_c0 = *(undefined8 *)(param_1 + 0x38);
        FUN_18025d1b0(param_1 + 0xc0,&local_c8);
        param_1[0x78] = '\0';
      }
      uVar8 = 0;
      if (uVar10 != 0) {
        do {
          pbVar7 = (byte *)(*param_2 + uVar8 * 0x10);
          uVar9 = (((ulonglong)*pbVar7 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)pbVar7[1])
                  * 0x100000001b3;
          plVar5 = (longlong *)
                   ((*(ulonglong *)(param_1 + 0xb0) & uVar9) * 0x10 + *(longlong *)(param_1 + 0x98))
          ;
          lVar4 = plVar5[1];
          if (lVar4 == *(longlong *)(param_1 + 0x88)) {
LAB_18025d0d7:
            lVar4 = 0;
          }
          else {
            sVar2 = *(short *)(lVar4 + 0x10);
            while (*(short *)pbVar7 != sVar2) {
              if (lVar4 == *plVar5) goto LAB_18025d0d7;
              lVar4 = *(longlong *)(lVar4 + 8);
              sVar2 = *(short *)(lVar4 + 0x10);
            }
          }
          if ((lVar4 == 0) || (lVar4 == *(longlong *)(param_1 + 0x88))) {
            if (uVar8 != 0) {
              plVar5 = (longlong *)
                       ((*(ulonglong *)(param_1 + 0xf0) & uVar9) * 0x10 +
                       *(longlong *)(param_1 + 0xd8));
              lVar4 = plVar5[1];
              if (lVar4 == *(longlong *)(param_1 + 200)) {
LAB_18025d133:
                lVar4 = 0;
              }
              else {
                sVar2 = *(short *)(lVar4 + 0x10);
                while (*(short *)pbVar7 != sVar2) {
                  if (lVar4 == *plVar5) goto LAB_18025d133;
                  lVar4 = *(longlong *)(lVar4 + 8);
                  sVar2 = *(short *)(lVar4 + 0x10);
                }
              }
              if ((lVar4 != 0) && (lVar4 != *(longlong *)(param_1 + 200))) {
                pbVar7[-0xd] = 1;
                *(undefined1 *)(*param_2 + 3 + uVar8 * 0x10) = 2;
                goto LAB_18025d154;
              }
            }
            pbVar7[3] = 2;
          }
          else {
            pbVar7[3] = 1;
          }
LAB_18025d154:
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar10);
      }
    }
    else {
      uVar6 = 0;
      local_96 = 0x31;
      local_98 = 0;
      local_c8 = (char *)0xffffffffffffffff;
      local_90 = 0xffffffffffffffff;
      local_88 = 0;
      local_80 = 0;
      local_7e = 0x31;
      local_70 = 0;
      local_d8 = 0;
      local_res20 = 0x31;
      local_res18 = '\0';
      local_50 = 0;
      local_48 = 0;
      uVar8 = uVar6;
      uVar9 = 0xffffffffffffffff;
      local_a0 = uVar10;
      if (uVar10 != 0) {
        while( true ) {
          uVar1 = *(ushort *)(*param_2 + uVar6 * 0x10);
          local_66 = FUN_18025ad40(uVar1);
          if (local_res18 == '\0') {
            local_96 = local_7e;
            local_95 = local_7d;
            local_91 = local_79;
            local_90 = (ulonglong)local_c8;
            local_88 = local_70;
            local_87 = local_6f;
            local_83 = local_6b;
            local_81 = local_69;
            local_80 = local_d8;
            local_7e = local_res20;
            local_7d = local_65;
            local_79 = local_61;
            local_6f = local_57;
            local_6b = local_53;
            local_69 = local_51;
            local_98 = (undefined2)uVar8;
            local_70 = 0;
          }
          local_65 = local_c8._3_4_;
          local_61 = local_c8._7_1_;
          local_57 = local_b7;
          local_53 = local_b3;
          local_51 = local_b1;
          local_58 = '\0';
          local_78 = uVar9;
          local_68 = uVar1;
          local_60 = uVar6;
          uVar3 = FUN_18025c610(param_1,&local_a8);
          if (uVar6 != 0) {
            *(undefined1 *)(*param_2 + -0xd + uVar6 * 0x10) = uVar3;
          }
          uVar6 = uVar6 + 1;
          if (uVar10 <= uVar6) break;
          local_res18 = local_58;
          uVar8 = (ulonglong)local_80;
          local_res20 = local_66;
          local_d8 = local_68;
          local_c8 = (char *)local_78;
          uVar9 = local_60;
        }
      }
    }
    *(undefined1 *)(*param_2 + -0xd + uVar10 * 0x10) = 2;
  }
  return;
}



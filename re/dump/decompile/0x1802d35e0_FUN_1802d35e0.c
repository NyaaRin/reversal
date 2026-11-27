// 0x1802d35e0  FUN_1802d35e0
// size=1057 thunk=false
// signature: undefined FUN_1802d35e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1802d35e0(longlong *param_1)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  undefined1 *puVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  undefined1 auStack_c8 [32];
  byte local_a8;
  byte local_a7;
  undefined2 local_a0;
  undefined4 uStack_9e;
  undefined2 uStack_9a;
  undefined4 uStack_98;
  undefined2 uStack_94;
  ulonglong local_90;
  ulonglong *local_88;
  undefined2 local_80;
  undefined4 local_7e;
  undefined2 local_7a;
  undefined1 *local_78;
  _MEMORY_BASIC_INFORMATION local_70;
  ulonglong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  puVar13 = (ulonglong *)0x0;
  local_80 = 0x15ff;
  local_7e = 2;
  local_a7 = 0;
  local_7a = 0x8eb;
  local_78 = (undefined1 *)0x0;
  local_a0 = 0x25ff;
  uStack_9e = 0;
  uStack_9a = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_90 = 0x25ff0e70;
  local_88 = (ulonglong *)0x0;
  local_a8 = 0;
  param_1[4] = 0;
  puVar14 = puVar13;
  do {
    lVar6 = param_1[2];
    puVar10 = (ulonglong *)((ulonglong)local_a7 + *param_1);
    uVar3 = FUN_180242250(puVar10,&local_70);
    uVar3 = uVar3 & 0xffffffff;
    if (((uint)local_70._33_4_ >> 0xc & 1) != 0) {
      return 0;
    }
    uVar8 = (ulonglong)local_a8;
    if (local_a7 < 5) {
      if ((local_70.AllocationBase._5_1_ & 199) == 5) {
        puVar11 = puVar10;
        puVar7 = local_40;
        for (uVar5 = uVar3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(char *)puVar7 = (char)*puVar11;
          puVar11 = (ulonglong *)((longlong)puVar11 + 1);
          puVar7 = (ulonglong *)((longlong)puVar7 + 1);
        }
        *(uint *)((longlong)local_40 +
                 ((ulonglong)(byte)local_70.BaseAddress -
                 (ulonglong)((uint)local_70._33_4_ >> 2 & 0xf)) + -4) =
             (((int)puVar10 - (uint)local_a8) - (int)lVar6) + local_70._29_4_;
        puVar11 = local_40;
        if ((local_70.AllocationBase._3_1_ == 0xff) && (local_70.AllocationBase._7_1_ == '\x04')) {
          puVar13 = (ulonglong *)0x1;
        }
      }
      else if (local_70.AllocationBase._3_1_ == 0xe8) {
        uVar3 = 0x10;
        local_78 = (undefined1 *)
                   ((longlong)puVar10 +
                   (ulonglong)(byte)local_70.BaseAddress + (longlong)(int)local_70._21_4_);
        puVar11 = (ulonglong *)&local_80;
      }
      else {
        puVar11 = puVar10;
        if ((local_70.AllocationBase._3_1_ & 0xfd) == 0xe9) {
          lVar6 = (longlong)(char)local_70._21_1_;
          if (local_70.AllocationBase._3_1_ != 0xeb) {
            lVar6 = (longlong)(int)local_70._21_4_;
          }
          puVar7 = (ulonglong *)((longlong)puVar10 + lVar6 + (ulonglong)(byte)local_70.BaseAddress);
          if ((puVar7 < (ulonglong *)*param_1) || ((ulonglong *)(*param_1 + 5) <= puVar7)) {
            uStack_9a = SUB82(puVar7,0);
            uStack_98 = (undefined4)((ulonglong)puVar7 >> 0x10);
            uStack_94 = (undefined2)((ulonglong)puVar7 >> 0x30);
            puVar13 = (ulonglong *)(ulonglong)(puVar14 <= puVar10);
            uVar3 = 0xe;
            puVar11 = (ulonglong *)&local_a0;
          }
          else if (puVar14 < puVar7) {
            puVar14 = puVar7;
          }
        }
        else if ((((local_70.AllocationBase._3_1_ & 0xf0) == 0x70) ||
                 ((local_70.AllocationBase._3_1_ & 0xfc) == 0xe0)) ||
                ((local_70.AllocationBase._4_1_ & 0xf0) == 0x80)) {
          if (((local_70.AllocationBase._3_1_ & 0xf0) == 0x70) ||
             (lVar6 = (longlong)(int)local_70._21_4_, (local_70.AllocationBase._3_1_ & 0xfc) == 0xe0
             )) {
            lVar6 = (longlong)(char)local_70._21_1_;
          }
          puVar7 = (ulonglong *)((longlong)puVar10 + lVar6 + (ulonglong)(byte)local_70.BaseAddress);
          if ((puVar7 < (ulonglong *)*param_1) || ((ulonglong *)(*param_1 + 5) <= puVar7)) {
            if ((local_70.AllocationBase._3_1_ & 0xfc) == 0xe0) {
              return 0;
            }
            bVar2 = local_70.AllocationBase._3_1_;
            if (local_70.AllocationBase._3_1_ == 0xf) {
              bVar2 = local_70.AllocationBase._4_1_;
            }
            local_88 = puVar7;
            puVar11 = &local_90;
            local_90 = CONCAT71(local_90._1_7_,bVar2) & 0xffffffffffffff0f ^ 0x71;
            uVar3 = 0x10;
          }
          else if (puVar14 < puVar7) {
            puVar14 = puVar7;
          }
        }
        else if ((local_70.AllocationBase._3_1_ & 0xfe) == 0xc2) {
          puVar13 = (ulonglong *)(ulonglong)(puVar14 <= puVar10);
        }
      }
    }
    else {
      uStack_9a = SUB82(puVar10,0);
      uStack_98 = (undefined4)((ulonglong)puVar10 >> 0x10);
      uStack_94 = (undefined2)((ulonglong)puVar10 >> 0x30);
      uVar3 = 0xe;
      puVar13 = (ulonglong *)0x1;
      puVar11 = (ulonglong *)&local_a0;
    }
    if ((puVar10 < puVar14) && ((uint)uVar3 != (uint)(byte)local_70.BaseAddress)) {
      return 0;
    }
    if (0x32 < (uint)uVar3 + (uint)local_a8) {
      return 0;
    }
    if (7 < *(uint *)((longlong)param_1 + 0x24)) {
      return 0;
    }
    *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x24) + 0x28 + (longlong)param_1) = local_a7;
    *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x24) + 0x30 + (longlong)param_1) = local_a8;
    local_a8 = local_a8 + (char)uVar3;
    *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
    puVar12 = (undefined1 *)(param_1[2] + uVar8);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar12 = (char)*puVar11;
      puVar11 = (ulonglong *)((longlong)puVar11 + 1);
      puVar12 = puVar12 + 1;
    }
    local_a7 = local_a7 + (byte)local_70.BaseAddress;
  } while ((int)puVar13 == 0);
  if (local_a7 < 5) {
    lVar6 = *param_1;
    uVar3 = (ulonglong)local_a7;
    cVar1 = *(char *)(lVar6 + uVar3);
    if (((cVar1 != '\0') && (cVar1 != -0x70)) && (cVar1 != -0x34)) {
LAB_1802d38f6:
      if (local_a7 < 2) {
        if (((cVar1 != '\0') && (cVar1 != -0x70)) && (cVar1 != -0x34)) {
          return 0;
        }
        if (1 < 2 - local_a7) {
          uVar8 = 1;
          do {
            if (*(char *)(uVar8 + uVar3 + lVar6) != cVar1) {
              return 0;
            }
            uVar4 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar4;
          } while (uVar4 < 2 - local_a7);
        }
      }
      VirtualQuery((LPCVOID)(lVar6 + -5),&local_70,0x30);
      if ((CONCAT31(local_70.State._1_3_,(undefined1)local_70.State) == 0x1000) &&
         ((local_70._33_4_ & 0xf0000000) != 0)) {
        cVar1 = *(char *)(*param_1 + -5);
        if ((cVar1 == '\0') || ((cVar1 == -0x70 || (cVar1 == -0x34)))) {
          uVar3 = 1;
          do {
            if (*(char *)((uVar3 - 5) + *param_1) != cVar1) {
              return 0;
            }
            uVar4 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar4;
          } while (uVar4 < 5);
          *(undefined4 *)(param_1 + 4) = 1;
          goto LAB_1802d399c;
        }
      }
      return 0;
    }
    uVar8 = 1;
    if (1 < 5 - local_a7) {
      do {
        if (*(char *)(uVar8 + lVar6 + uVar3) != cVar1) goto LAB_1802d38f6;
        uVar4 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar4;
      } while (uVar4 < 5 - local_a7);
    }
  }
LAB_1802d399c:
  lVar6 = param_1[1];
  uStack_9a = (undefined2)lVar6;
  uStack_98 = (undefined4)((ulonglong)lVar6 >> 0x10);
  uStack_94 = (undefined2)((ulonglong)lVar6 >> 0x30);
  puVar9 = (undefined8 *)((ulonglong)local_a8 + param_1[2]);
  param_1[3] = (longlong)puVar9;
  *puVar9 = CONCAT26(uStack_9a,CONCAT42(uStack_9e,local_a0));
  *(undefined4 *)(puVar9 + 1) = uStack_98;
  *(undefined2 *)((longlong)puVar9 + 0xc) = uStack_94;
  return 1;
}



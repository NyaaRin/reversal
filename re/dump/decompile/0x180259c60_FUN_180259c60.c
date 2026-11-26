// 0x180259c60  FUN_180259c60
// size=713 thunk=false
// signature: undefined FUN_180259c60()
// status: ok


void FUN_180259c60(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  undefined4 *puVar10;
  bool bVar11;
  bool bVar12;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_68 = 0;
  uStack_60 = 0;
  plVar1 = (longlong *)(param_1 + 0xf0);
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  uStack_50 = 0;
  cVar7 = FUN_180255a80(param_1 + 0x50,&local_58,param_2,param_3,param_4,&local_68,&local_78);
  if (cVar7 == '\0') {
    FUN_1802542a0(plVar1,1);
    return;
  }
  puVar2 = (undefined4 *)*plVar1;
  puVar10 = *(undefined4 **)(param_1 + 0xf8);
  local_58 = local_78;
  uStack_50 = uStack_70;
  local_48 = (undefined4)local_68;
  uStack_44 = local_68._4_4_;
  uStack_40 = (undefined4)uStack_60;
  uStack_3c = uStack_60._4_4_;
  if (puVar2 != puVar10) {
    *(undefined4 **)(param_1 + 0xf8) = puVar2;
    puVar10 = puVar2;
  }
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  if (puVar10 == *(undefined4 **)(param_1 + 0x100)) {
    FUN_180262ec0(plVar1,(undefined4)local_78,&local_48,&local_58);
  }
  else {
    *puVar10 = (undefined4)local_68;
    puVar10[1] = local_68._4_4_;
    puVar10[2] = (undefined4)uStack_60;
    puVar10[3] = uStack_60._4_4_;
    *(undefined2 *)(puVar10 + 8) = 0x100;
    puVar10[4] = (undefined4)local_78;
    puVar10[5] = local_78._4_4_;
    puVar10[6] = (undefined4)uStack_70;
    puVar10[7] = uStack_70._4_4_;
    *(undefined1 *)((longlong)puVar10 + 0x22) = 1;
    *(undefined8 *)(puVar10 + 10) = 0;
    *(longlong *)(param_1 + 0xf8) = *(longlong *)(param_1 + 0xf8) + 0x30;
  }
  lVar6 = uStack_60;
  lVar5 = uStack_70;
  lVar4 = local_78;
  *(undefined1 *)(*plVar1 + 0x20) = 1;
  *(undefined1 *)(*plVar1 + 0x21) = 1;
  while( true ) {
    local_58 = 0;
    uVar8 = (*(longlong *)(param_1 + 0xf8) - *plVar1 >> 4) * -0x5555555555555555;
    uStack_50 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uVar3 = *(ulonglong *)(param_1 + 0x110);
    if (uVar8 < uVar3 || uVar8 - uVar3 == 0) break;
    puVar9 = (ulonglong *)(uVar3 * 0x30 + *plVar1);
    bVar11 = *puVar9 < puVar9[2];
    bVar12 = false;
    if (*puVar9 == puVar9[2]) {
      bVar11 = puVar9[1] < puVar9[3];
      bVar12 = puVar9[1] == puVar9[3];
    }
    if (bVar11 || bVar12) {
      puVar9 = puVar9 + 2;
    }
    local_48 = (undefined4)*puVar9;
    uStack_44 = *(undefined4 *)((longlong)puVar9 + 4);
    uStack_40 = (undefined4)puVar9[1];
    uStack_3c = *(undefined4 *)((longlong)puVar9 + 0xc);
    FUN_180255a80(param_1 + 0x50,&local_48,param_2,param_3,param_4,&local_58,&local_78);
    if ((((local_58 == local_68) && (uStack_50 == lVar6)) && (local_78 == lVar4)) &&
       (uStack_70 == lVar5)) {
      return;
    }
    uVar3 = *(ulonglong *)(param_1 + 0x110);
    uVar8 = (*(longlong *)(param_1 + 0xf8) - *plVar1 >> 4) * -0x5555555555555555;
    local_48 = (undefined4)local_78;
    uStack_44 = local_78._4_4_;
    uStack_40 = (undefined4)uStack_70;
    uStack_3c = uStack_70._4_4_;
    local_38 = (undefined4)local_58;
    uStack_34 = local_58._4_4_;
    uStack_30 = (undefined4)uStack_50;
    uStack_2c = uStack_50._4_4_;
    if (uVar8 < uVar3 || uVar8 - uVar3 == 0) break;
    *(undefined1 *)(*plVar1 + 0x21 + uVar3 * 0x30) = 0;
    puVar2 = *(undefined4 **)(param_1 + 0xf8);
    if (puVar2 == *(undefined4 **)(param_1 + 0x100)) {
      FUN_180262ec0(plVar1,puVar2,&local_38,&local_48);
    }
    else {
      *(undefined2 *)(puVar2 + 8) = 0x100;
      *(undefined8 *)(puVar2 + 10) = 0;
      *puVar2 = (undefined4)local_58;
      puVar2[1] = local_58._4_4_;
      puVar2[2] = (undefined4)uStack_50;
      puVar2[3] = uStack_50._4_4_;
      *(undefined1 *)((longlong)puVar2 + 0x22) = 1;
      puVar2[4] = (undefined4)local_78;
      puVar2[5] = local_78._4_4_;
      puVar2[6] = (undefined4)uStack_70;
      puVar2[7] = uStack_70._4_4_;
      *(longlong *)(param_1 + 0xf8) = *(longlong *)(param_1 + 0xf8) + 0x30;
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0xf8) + -0xf) = 1;
    *(longlong *)(param_1 + 0x110) =
         (*(longlong *)(param_1 + 0xf8) - *plVar1 >> 4) * -0x5555555555555555 + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180262180();
}



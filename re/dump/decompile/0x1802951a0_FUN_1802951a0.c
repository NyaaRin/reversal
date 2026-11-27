// 0x1802951a0  FUN_1802951a0
// size=431 thunk=false
// signature: undefined FUN_1802951a0()
// status: ok


void FUN_1802951a0(longlong param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                  uint param_5,uint param_6,uint param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  
  if (((param_4 | param_5 | param_6 | param_7) & 0xff000000) != 0) {
    uVar1 = **(undefined4 **)(param_1 + 0x38);
    uVar2 = (*(undefined4 **)(param_1 + 0x38))[1];
    FUN_1802927a0(param_1,6,4);
    **(undefined2 **)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x34);
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
    **(short **)(param_1 + 0x48) = *(short *)(param_1 + 0x34) + 1;
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
    **(short **)(param_1 + 0x48) = *(short *)(param_1 + 0x34) + 2;
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
    **(undefined2 **)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x34);
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
    **(short **)(param_1 + 0x48) = *(short *)(param_1 + 0x34) + 2;
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
    **(short **)(param_1 + 0x48) = *(short *)(param_1 + 0x34) + 3;
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
    **(undefined8 **)(param_1 + 0x40) = *param_2;
    lVar4 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(lVar4 + 8) = uVar1;
    *(undefined4 *)(lVar4 + 0xc) = uVar2;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    uVar3 = *(undefined4 *)((longlong)param_2 + 4);
    puVar5 = *(undefined4 **)(param_1 + 0x40);
    *puVar5 = *(undefined4 *)param_3;
    puVar5[1] = uVar3;
    lVar4 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(lVar4 + 8) = uVar1;
    *(undefined4 *)(lVar4 + 0xc) = uVar2;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_5;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    **(undefined8 **)(param_1 + 0x40) = *param_3;
    lVar4 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(lVar4 + 8) = uVar1;
    *(undefined4 *)(lVar4 + 0xc) = uVar2;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_6;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    uVar3 = *(undefined4 *)((longlong)param_3 + 4);
    puVar5 = *(undefined4 **)(param_1 + 0x40);
    *puVar5 = *(undefined4 *)param_2;
    puVar5[1] = uVar3;
    lVar4 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(lVar4 + 8) = uVar1;
    *(undefined4 *)(lVar4 + 0xc) = uVar2;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_7;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  }
  return;
}



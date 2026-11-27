// 0x180295000  FUN_180295000
// size=406 thunk=false
// signature: undefined FUN_180295000()
// status: ok


void FUN_180295000(longlong param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                  float param_5,uint param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  short sVar7;
  longlong lVar8;
  
  if ((param_4 & 0xff000000) != 0) {
    if ((DAT_180380ac0 <= param_5) && ((param_6 & 0x1f0) != 0x100)) {
      FUN_180294990(param_1,param_2,param_3,param_5,param_6);
      FUN_1802938c0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4)
      ;
      *(undefined4 *)(param_1 + 0x50) = 0;
      return;
    }
    FUN_1802927a0(param_1,6,4);
    sVar7 = *(short *)(param_1 + 0x34);
    uVar1 = *(undefined4 *)param_3;
    uVar2 = *(undefined4 *)((longlong)param_2 + 4);
    uVar3 = *(undefined4 *)param_2;
    uVar4 = (*(undefined4 **)(param_1 + 0x38))[1];
    uVar5 = **(undefined4 **)(param_1 + 0x38);
    uVar6 = *(undefined4 *)((longlong)param_3 + 4);
    **(short **)(param_1 + 0x48) = sVar7;
    *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar7 + 1;
    *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar7 + 2;
    *(short *)(*(longlong *)(param_1 + 0x48) + 6) = sVar7;
    *(short *)(*(longlong *)(param_1 + 0x48) + 8) = sVar7 + 2;
    *(short *)(*(longlong *)(param_1 + 0x48) + 10) = sVar7 + 3;
    **(undefined8 **)(param_1 + 0x40) = *param_2;
    lVar8 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(lVar8 + 8) = uVar5;
    *(undefined4 *)(lVar8 + 0xc) = uVar4;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
    lVar8 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(lVar8 + 0x14) = uVar1;
    *(undefined4 *)(lVar8 + 0x18) = uVar2;
    lVar8 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(lVar8 + 0x1c) = uVar5;
    *(undefined4 *)(lVar8 + 0x20) = uVar4;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x24) = param_4;
    *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x28) = *param_3;
    lVar8 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(lVar8 + 0x30) = uVar5;
    *(undefined4 *)(lVar8 + 0x34) = uVar4;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x38) = param_4;
    lVar8 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(lVar8 + 0x3c) = uVar3;
    *(undefined4 *)(lVar8 + 0x40) = uVar6;
    lVar8 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(lVar8 + 0x44) = uVar5;
    *(undefined4 *)(lVar8 + 0x48) = uVar4;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x4c) = param_4;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x50;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 4;
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0xc;
  }
  return;
}



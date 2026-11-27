// 0x18016de30  FUN_18016de30
// size=505 thunk=false
// signature: undefined FUN_18016de30()
// status: ok


undefined8 * FUN_18016de30(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  undefined1 local_40 [40];
  
  plVar10 = (longlong *)(param_1 + 0x88);
  if (*(uint *)(param_1 + 200) == 0xe) {
    uVar5 = FUN_180013cb0(local_40,*(undefined4 *)(param_1 + 0xe0));
    uVar6 = FUN_18002cfb0(local_60,plVar10,"Script ");
    uVar5 = FUN_1801fc880(local_80,uVar6,uVar5);
    plVar10 = (longlong *)(param_1 + 0xa8);
    if (0xf < *(ulonglong *)(param_1 + 0xc0)) {
      plVar10 = (longlong *)*plVar10;
    }
    puVar7 = (undefined4 *)FUN_18021aef0(uVar5,plVar10,*(undefined8 *)(param_1 + 0xb8));
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    uVar2 = puVar7[1];
    uVar3 = puVar7[2];
    uVar4 = puVar7[3];
    *(undefined4 *)param_2 = *puVar7;
    *(undefined4 *)((longlong)param_2 + 4) = uVar2;
    *(undefined4 *)(param_2 + 1) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
    uVar2 = puVar7[5];
    uVar3 = puVar7[6];
    uVar4 = puVar7[7];
    *(undefined4 *)(param_2 + 2) = puVar7[4];
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar2;
    *(undefined4 *)(param_2 + 3) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uVar4;
    *(undefined1 *)puVar7 = 0;
    *(undefined8 *)(puVar7 + 4) = 0;
    *(undefined8 *)(puVar7 + 6) = 0xf;
    FUN_18020e450(local_80);
    FUN_18020e450(local_60);
    puVar8 = local_40;
  }
  else {
    puVar9 = (undefined8 *)((ulonglong)*(uint *)(param_1 + 200) * 0x20 + DAT_1803fa808);
    uVar1 = puVar9[2];
    if (0x7fffffffffffffffU - *(longlong *)(param_1 + 0x98) < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1800130a0();
    }
    if (0xf < *(ulonglong *)(param_1 + 0xa0)) {
      plVar10 = (longlong *)*plVar10;
    }
    if (0xf < (ulonglong)puVar9[3]) {
      puVar9 = (undefined8 *)*puVar9;
    }
    FUN_18020e930(local_a0,puVar9,uVar1,plVar10,*(longlong *)(param_1 + 0x98),puVar9,uVar1);
    plVar10 = (longlong *)(param_1 + 0xa8);
    if (0xf < *(ulonglong *)(param_1 + 0xc0)) {
      plVar10 = (longlong *)*plVar10;
    }
    puVar7 = (undefined4 *)FUN_18021aef0(local_a0,plVar10,*(undefined8 *)(param_1 + 0xb8));
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    uVar2 = puVar7[1];
    uVar3 = puVar7[2];
    uVar4 = puVar7[3];
    *(undefined4 *)param_2 = *puVar7;
    *(undefined4 *)((longlong)param_2 + 4) = uVar2;
    *(undefined4 *)(param_2 + 1) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
    uVar5 = *(undefined8 *)(puVar7 + 6);
    param_2[2] = *(undefined8 *)(puVar7 + 4);
    param_2[3] = uVar5;
    *(undefined1 *)puVar7 = 0;
    *(undefined8 *)(puVar7 + 4) = 0;
    *(undefined8 *)(puVar7 + 6) = 0xf;
    puVar8 = local_a0;
  }
  FUN_18020e450(puVar8);
  return param_2;
}



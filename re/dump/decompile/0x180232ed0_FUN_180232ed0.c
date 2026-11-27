// 0x180232ed0  FUN_180232ed0
// size=386 thunk=false
// signature: undefined FUN_180232ed0()
// status: ok


undefined8 *
FUN_180232ed0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  
  puVar7 = param_4;
  if (param_1 != param_2) {
    puVar7 = param_1 + 8;
    do {
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      uVar1 = param_1[1];
      *param_3 = *param_1;
      param_3[1] = uVar1;
      uVar1 = param_1[3];
      param_3[2] = param_1[2];
      param_3[3] = uVar1;
      param_1[3] = 0xf;
      *(undefined1 *)param_1 = 0;
      param_1[2] = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      param_3[6] = 0;
      param_3[7] = 0;
      uVar1 = param_1[5];
      param_3[4] = param_1[4];
      param_3[5] = uVar1;
      uVar1 = param_1[7];
      param_3[6] = param_1[6];
      param_3[7] = uVar1;
      param_1[7] = 0xf;
      *(undefined1 *)(param_1 + 4) = 0;
      param_1[6] = 0;
      uVar1 = puVar7[2];
      puVar7[2] = 0;
      uVar2 = puVar7[1];
      puVar7[1] = 0;
      uVar3 = *puVar7;
      *puVar7 = 0;
      param_3[8] = uVar3;
      param_3[9] = uVar2;
      param_3[10] = uVar1;
      param_3[0xb] = 0;
      param_3[0xc] = 0;
      param_3[0xd] = 0;
      param_3[0xe] = 0;
      uVar4 = *(undefined4 *)((longlong)param_1 + 0x5c);
      uVar5 = *(undefined4 *)(param_1 + 0xc);
      uVar6 = *(undefined4 *)((longlong)param_1 + 100);
      *(undefined4 *)(param_3 + 0xb) = *(undefined4 *)(param_1 + 0xb);
      *(undefined4 *)((longlong)param_3 + 0x5c) = uVar4;
      *(undefined4 *)(param_3 + 0xc) = uVar5;
      *(undefined4 *)((longlong)param_3 + 100) = uVar6;
      uVar4 = *(undefined4 *)((longlong)param_1 + 0x6c);
      uVar5 = *(undefined4 *)(param_1 + 0xe);
      uVar6 = *(undefined4 *)((longlong)param_1 + 0x74);
      *(undefined4 *)(param_3 + 0xd) = *(undefined4 *)(param_1 + 0xd);
      *(undefined4 *)((longlong)param_3 + 0x6c) = uVar4;
      *(undefined4 *)(param_3 + 0xe) = uVar5;
      *(undefined4 *)((longlong)param_3 + 0x74) = uVar6;
      *(undefined1 *)(param_1 + 0xb) = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0xf;
      param_3[0xf] = param_1[0xf];
      *(undefined1 *)(param_3 + 0x10) = *(undefined1 *)(param_1 + 0x10);
      *(undefined1 *)((longlong)param_3 + 0x81) = *(undefined1 *)((longlong)param_1 + 0x81);
      *(undefined4 *)((longlong)param_3 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x84);
      *(undefined1 *)(param_3 + 0x11) = *(undefined1 *)(param_1 + 0x11);
      *(undefined1 *)((longlong)param_3 + 0x89) = *(undefined1 *)((longlong)param_1 + 0x89);
      param_3 = param_3 + 0x12;
      param_1 = param_1 + 0x12;
      puVar7 = puVar7 + 0x12;
    } while (param_1 != param_2);
  }
  FUN_18022a300(param_3,param_3,param_1,puVar7,param_3,param_3,param_4);
  return param_3;
}



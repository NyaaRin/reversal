// 0x1802333c0  FUN_1802333c0
// size=204 thunk=false
// signature: undefined FUN_1802333c0()
// status: ok


undefined8 *
FUN_1802333c0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)*param_1;
  if (*(char *)((longlong)param_2 + 0x19) == '\0') {
    puVar4 = param_1;
    puVar1 = (undefined8 *)FUN_1802d8350(0x30);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_2 + 4);
    puVar1[5] = param_2[5];
    *puVar1 = puVar3;
    puVar1[1] = puVar3;
    puVar1[2] = puVar3;
    *(undefined2 *)(puVar1 + 3) = 0;
    puVar1[1] = param_3;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_2 + 3);
    uVar2 = FUN_1802333c0(param_1,*param_2,puVar1,param_4,puVar4,0,param_1,param_1,puVar1);
    *puVar1 = uVar2;
    uVar2 = FUN_1802333c0(param_1,param_2[2],puVar1);
    puVar1[2] = uVar2;
    puVar3 = puVar1;
  }
  return puVar3;
}



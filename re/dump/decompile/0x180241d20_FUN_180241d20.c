// 0x180241d20  FUN_180241d20
// size=251 thunk=false
// signature: undefined FUN_180241d20()
// status: ok


undefined8 *
FUN_180241d20(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar3 = (undefined8 *)*param_1;
  if (*(char *)((longlong)param_2 + 0x19) == '\0') {
    puVar4 = param_1;
    puVar1 = (undefined8 *)FUN_1802d8350(0x78);
    puVar5 = puVar1 + 4;
    *puVar5 = param_2[4];
    puVar6 = puVar1 + 5;
    FUN_180241930(puVar6,param_2 + 5);
    FUN_180241280(puVar1 + 7,param_2 + 7);
    *puVar1 = puVar3;
    puVar1[1] = puVar3;
    puVar1[2] = puVar3;
    *(undefined2 *)(puVar1 + 3) = 0;
    puVar1[1] = param_3;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_2 + 3);
    uVar2 = FUN_180241d20(param_1,*param_2,puVar1,param_4,puVar4,0,param_1,param_1,puVar1,puVar5,
                          puVar6);
    *puVar1 = uVar2;
    uVar2 = FUN_180241d20(param_1,param_2[2],puVar1);
    puVar1[2] = uVar2;
    puVar3 = puVar1;
  }
  return puVar3;
}



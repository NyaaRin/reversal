// 0x1802137f0  FUN_1802137f0
// size=165 thunk=false
// signature: undefined FUN_1802137f0()
// status: ok


undefined8 *
FUN_1802137f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar2 = 0;
  puVar3 = param_1;
  puVar1 = (undefined8 *)FUN_1802d8350(0x68);
  puVar4 = puVar1;
  FUN_180169100(puVar1);
  *puVar1 = vftable_Features_Visual_ESP_Editor_Elements_BoxElement;
  *(undefined4 *)(puVar1 + 8) = 0x428c0000;
  *(undefined4 *)((longlong)puVar1 + 0x44) = 0x428c0000;
  *(undefined4 *)(puVar1 + 9) = 0x3f800000;
  *(undefined4 *)((longlong)puVar1 + 0x4c) = 0x3f800000;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0x3f800000;
  *(undefined4 *)((longlong)puVar1 + 0x5c) = 1;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  FUN_180212700(puVar1 + 4,&DAT_180360ad8,3,param_4,uVar2,puVar3,puVar4);
  *param_1 = puVar1;
  return param_1;
}



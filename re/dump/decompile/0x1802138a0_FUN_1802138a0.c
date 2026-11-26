// 0x1802138a0  FUN_1802138a0
// size=164 thunk=false
// signature: undefined FUN_1802138a0()
// status: ok


undefined8 *
FUN_1802138a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar2 = 0;
  puVar3 = param_1;
  puVar1 = (undefined8 *)FUN_1802d8350(0x60);
  puVar4 = puVar1;
  FUN_180169100(puVar1);
  *puVar1 = vftable_Features_Visual_ESP_Editor_Elements_CircleElement;
  *(undefined4 *)(puVar1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)puVar1 + 0x44) = 0x3f800000;
  *(undefined4 *)(puVar1 + 9) = 0x3f800000;
  *(undefined4 *)((longlong)puVar1 + 0x4c) = 0x3f800000;
  *(undefined4 *)(puVar1 + 10) = 1;
  *(undefined1 *)((longlong)puVar1 + 0x54) = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0x420c0000;
  *(undefined4 *)((longlong)puVar1 + 0x5c) = 0x18;
  FUN_180212700(puVar1 + 4,"Circle",6,param_4,uVar2,puVar3,puVar4);
  *param_1 = puVar1;
  return param_1;
}



// 0x180213650  FUN_180213650
// size=215 thunk=false
// signature: undefined FUN_180213650()
// status: ok


undefined8 *
FUN_180213650(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar2 = 0;
  puVar3 = param_1;
  puVar1 = (undefined8 *)FUN_1802d8350(0x88);
  puVar4 = puVar1;
  FUN_180169100(puVar1);
  *puVar1 = vftable_Features_Visual_ESP_Editor_Elements_BBoxElement;
  *(undefined4 *)(puVar1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)puVar1 + 0x44) = 0x3f800000;
  *(undefined4 *)(puVar1 + 9) = 0x3f800000;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 0x3f800000;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x5c) = 0x3f800000;
  *(undefined4 *)(puVar1 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)puVar1 + 100) = 0x3f59999a;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0x3f800000;
  *(undefined4 *)((longlong)puVar1 + 0x74) = 1;
  *(undefined2 *)(puVar1 + 0xf) = 0x100;
  *(undefined1 *)((longlong)puVar1 + 0x7a) = 1;
  *(undefined4 *)((longlong)puVar1 + 0x7c) = 0;
  *(undefined1 *)(puVar1 + 0x10) = 0;
  FUN_180212700(puVar1 + 4,"ESP Box",7,param_4,uVar2,puVar3,puVar4);
  *(undefined4 *)(puVar1 + 1) = 8;
  *param_1 = puVar1;
  return param_1;
}



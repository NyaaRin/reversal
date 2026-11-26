// 0x180253050  FUN_180253050
// size=309 thunk=false
// signature: undefined FUN_180253050()
// status: ok


undefined8 * FUN_180253050(longlong param_1,undefined8 *param_2,char param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if ((param_3 != '\0') && (*(char *)(param_1 + 0x371) != '\0')) {
    *(undefined1 *)(param_1 + 0x373) = 1;
  }
  *param_2 = 0;
  param_2[1] = 0;
  puVar5 = param_2;
  puVar4 = (undefined8 *)FUN_1802d8350(0x78);
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined4 *)(puVar4 + 1) = 1;
  *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
  *puVar4 = vftable_std_TextEditor_VTransaction____Ref_count_obj2;
  puVar1 = puVar4 + 2;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  *puVar1 = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  plVar2 = puVar4 + 5;
  puVar6 = puVar4;
  puVar7 = puVar1;
  FUN_180243880(plVar2);
  FUN_180243880(puVar4 + 10);
  *param_2 = 0;
  param_2[1] = 0;
  *param_2 = puVar1;
  param_2[1] = puVar4;
  if (plVar2 != (longlong *)(param_1 + 0xf0)) {
    lVar3 = *(longlong *)(param_1 + 0xf0);
    FUN_180261900(plVar2,lVar3,(*(longlong *)(param_1 + 0xf8) - lVar3 >> 4) * -0x5555555555555555,
                  param_4,1,puVar5,puVar6,puVar7);
  }
  puVar4[8] = *(undefined8 *)(param_1 + 0x108);
  puVar4[9] = *(undefined8 *)(param_1 + 0x110);
  return param_2;
}



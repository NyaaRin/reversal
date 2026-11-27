// 0x18016f800  FUN_18016f800
// size=312 thunk=false
// signature: undefined FUN_18016f800()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_18016f800(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  char *_Str;
  longlong lVar6;
  size_t sVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  uVar9 = 0;
  _Str = (char *)FUN_18001e410(*(undefined8 *)*param_1);
  pcVar10 = _Str;
  if ((_Str < (char *)0x10000) || (*_Str == '\0')) {
    lVar6 = (**(code **)(**(longlong **)*param_1 + 0x78))();
    if ((lVar6 == 0) || ((_Str = *(char **)(lVar6 + 0x10), _Str == (char *)0x0 || (*_Str == '\0'))))
    {
      uStack_50 = 0;
      local_48 = _DAT_1803814b0;
      uStack_40 = _UNK_1803814b8;
      local_58 = 0;
      puVar8 = &local_58;
      bVar5 = true;
      bVar4 = false;
      goto LAB_18016f8e7;
    }
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  sVar7 = strlen(_Str);
  FUN_18001d080(&local_38,_Str,sVar7,param_4,uVar9,pcVar10);
  puVar8 = &local_38;
  bVar5 = false;
  bVar4 = true;
LAB_18016f8e7:
  uVar3 = puVar8[1];
  *param_2 = *puVar8;
  param_2[1] = uVar3;
  uVar9 = *(undefined4 *)((longlong)puVar8 + 0x14);
  uVar1 = *(undefined4 *)(puVar8 + 3);
  uVar2 = *(undefined4 *)((longlong)puVar8 + 0x1c);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar8 + 2);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar9;
  *(undefined4 *)(param_2 + 3) = uVar1;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar2;
  *(undefined1 *)puVar8 = 0;
  puVar8[2] = 0;
  puVar8[3] = 0xf;
  if (bVar5) {
    FUN_18020e450(&local_58);
  }
  if (bVar4) {
    FUN_18020e450(&local_38);
  }
  return param_2;
}



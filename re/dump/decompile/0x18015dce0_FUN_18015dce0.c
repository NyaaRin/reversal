// 0x18015dce0  FUN_18015dce0
// size=351 thunk=false
// signature: undefined FUN_18015dce0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_18015dce0(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uVar9 = 0;
  _Str = (char *)FUN_18001e410(param_2);
  if (((_Str < (char *)0x10000) || (*_Str == '\0')) &&
     ((lVar6 = (**(code **)(*param_2 + 0x78))(param_2), lVar6 == 0 ||
      (_Str = *(char **)(lVar6 + 0x10), _Str == (char *)0x0)))) {
    _Str = (char *)0x0;
  }
  if ((_Str < (char *)0x10001) || (*_Str == '\0')) {
    uStack_40 = 0;
    local_38 = _DAT_1803814b0;
    uStack_30 = _UNK_1803814b8;
    local_48 = 0;
    puVar8 = &local_48;
    bVar5 = true;
    bVar4 = false;
  }
  else {
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    uStack_10 = 0;
    pcVar10 = _Str;
    sVar7 = strlen(_Str);
    FUN_18001d080(&local_28,_Str,sVar7,param_4,uVar9,pcVar10);
    puVar8 = &local_28;
    bVar5 = false;
    bVar4 = true;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  uVar3 = puVar8[1];
  *param_1 = *puVar8;
  param_1[1] = uVar3;
  uVar9 = *(undefined4 *)((longlong)puVar8 + 0x14);
  uVar1 = *(undefined4 *)(puVar8 + 3);
  uVar2 = *(undefined4 *)((longlong)puVar8 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar8 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar9;
  *(undefined4 *)(param_1 + 3) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  *(undefined1 *)puVar8 = 0;
  puVar8[2] = 0;
  puVar8[3] = 0xf;
  if (bVar5) {
    FUN_18020e450(&local_48);
  }
  if (bVar4) {
    FUN_18020e450(&local_28);
  }
  return param_1;
}



// 0x180013a20  FUN_180013a20
// size=256 thunk=false
// signature: undefined FUN_180013a20()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_180013a20(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  size_t sVar7;
  undefined8 *puVar8;
  char *_Str;
  undefined4 uVar9;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uVar9 = 0;
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    uStack_48 = 0;
    local_40 = _DAT_1803814b0;
    uStack_38 = _UNK_1803814b8;
    local_50 = 0;
    puVar8 = &local_50;
    bVar6 = true;
    bVar5 = false;
  }
  else {
    _Str = *(char **)(lVar1 + 0x28);
    if (_Str == (char *)0x0) {
      _Str = (char *)(lVar1 + 0x30);
    }
    local_30 = 0;
    uStack_28 = 0;
    local_20 = 0;
    uStack_18 = 0;
    sVar7 = strlen(_Str);
    FUN_18001d080(&local_30,_Str,sVar7,param_4,uVar9);
    puVar8 = &local_30;
    bVar6 = false;
    bVar5 = true;
  }
  uVar4 = puVar8[1];
  *param_2 = *puVar8;
  param_2[1] = uVar4;
  uVar9 = *(undefined4 *)((longlong)puVar8 + 0x14);
  uVar2 = *(undefined4 *)(puVar8 + 3);
  uVar3 = *(undefined4 *)((longlong)puVar8 + 0x1c);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar8 + 2);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar9;
  *(undefined4 *)(param_2 + 3) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar3;
  *(undefined1 *)puVar8 = 0;
  puVar8[2] = 0;
  puVar8[3] = 0xf;
  if (bVar6) {
    FUN_18020e450(&local_50);
  }
  if (bVar5) {
    FUN_18020e450(&local_30);
  }
  return param_2;
}



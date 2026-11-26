// 0x1800768c0  FUN_1800768c0
// size=350 thunk=false
// signature: undefined FUN_1800768c0()
// status: ok


undefined8 FUN_1800768c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  char *_Str;
  size_t sVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  
  bVar1 = false;
  uVar7 = 0;
  if (param_1 == 0) {
    return 0;
  }
  cVar3 = FUN_180076870();
  if (cVar3 == '\0') {
    return 1;
  }
  _Str = (char *)FUN_18001e4e0(param_1);
  pcVar8 = _Str;
  cVar3 = FUN_180076800(_Str);
  if (cVar3 != '\0') {
    return 0;
  }
  if (DAT_180409780 == param_1) {
    puVar6 = &DAT_1803eb458;
    if (0xf < DAT_1803eb470) {
      puVar6 = DAT_1803eb458;
    }
    cVar3 = FUN_180076800(puVar6);
    if (cVar3 != '\0') {
      return 0;
    }
  }
  if (DAT_1803fa798 == param_1) {
    puVar6 = &DAT_1803de118;
    if (0xf < DAT_1803de130) {
      puVar6 = DAT_1803de118;
    }
    cVar3 = FUN_180076800(puVar6);
    if (cVar3 != '\0') {
      return 0;
    }
  }
  if ((char *)0x10000 < _Str) {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    sVar5 = strlen(_Str);
    uVar7 = FUN_18001d080(&local_48,_Str,sVar5,param_4,uVar7,pcVar8);
    bVar1 = true;
    cVar3 = FUN_18020bf70(uVar7,&local_48);
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_1800769d7;
    }
  }
  bVar2 = false;
LAB_1800769d7:
  if (bVar1) {
    FUN_18020e450(&local_48);
  }
  if (bVar2) {
    return 1;
  }
  iVar4 = FUN_18001e700(param_1);
  if (-1 < iVar4) {
    return 1;
  }
  iVar4 = FUN_18001e5b0(param_1);
  if (iVar4 < 1) {
    return 0;
  }
  return 1;
}



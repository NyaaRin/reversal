// 0x18007e790  Features_Weapons_Backends_HVH2WeaponBackend_vfunc01
// size=315 thunk=false
// signature: undefined Features_Weapons_Backends_HVH2WeaponBackend_vfunc01()
// status: ok


undefined8
Features_Weapons_Backends_HVH2WeaponBackend_vfunc01
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  char *_Str;
  size_t sVar4;
  int ***pppiVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int **local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  ulonglong uStack_38;
  undefined1 local_30 [40];
  
  plVar3 = (longlong *)FUN_18001f260(param_2,local_30,param_3,param_4,0);
  bVar2 = false;
  uVar8 = 1;
  plVar1 = plVar3 + 2;
  if (0xf < (ulonglong)plVar3[3]) {
    plVar3 = (longlong *)*plVar3;
  }
  if (*plVar1 == 0xb) {
    lVar6 = *plVar3 + -0x625f6e6f70616577;
    if ((lVar6 == 0) && (lVar6 = (ulonglong)*(ushort *)(plVar3 + 1) - 0x7361, lVar6 == 0)) {
      lVar6 = (ulonglong)*(byte *)((longlong)plVar3 + 10) - 0x65;
    }
    if (lVar6 == 0) {
      lVar6 = FUN_18001e4e0(param_2);
      if (lVar6 == 0) {
        _Str = "";
      }
      else {
        _Str = (char *)FUN_18001e4e0(param_2);
      }
      local_50 = (int **)0x0;
      uStack_48 = 0;
      local_40 = 0;
      uStack_38 = 0;
      sVar4 = strlen(_Str);
      FUN_18001d080(&local_50,_Str,sVar4,param_4,uVar8);
      bVar2 = true;
      pppiVar5 = &local_50;
      if (0xf < uStack_38) {
        pppiVar5 = (int ***)local_50;
      }
      if ((3 < local_40) && (*(int *)pppiVar5 == 0x5f737363)) {
        uVar7 = 1;
        goto LAB_18007e88c;
      }
    }
  }
  uVar7 = 0;
LAB_18007e88c:
  if (bVar2) {
    FUN_18020e450(&local_50);
  }
  FUN_18020e450(local_30);
  return uVar7;
}



// 0x180078300  vfunc_shared_180078300
// size=193 thunk=false
// signature: undefined vfunc_shared_180078300()
// status: ok


undefined8 * vfunc_shared_180078300(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  char *_Str1;
  
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar4 = (*pcVar1)(DAT_1803fa360,uVar2);
  if (lVar4 == 0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (((param_3 != 0) && (_Str1 = (char *)FUN_18001e4e0(param_3), (char *)0x10000 < _Str1)) &&
     ((iVar3 = strcmp(_Str1,"weapon_pistol"), iVar3 == 0 ||
      (iVar3 = strcmp(_Str1,"weapon_357"), iVar3 == 0)))) {
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)((longlong)param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    return param_2;
  }
  FUN_18001f9d0(lVar4,param_2);
  return param_2;
}



// 0x1800764c0  FUN_1800764c0
// size=630 thunk=false
// signature: undefined FUN_1800764c0()
// status: ok


bool FUN_1800764c0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  char *_Str;
  size_t sVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar1 = param_3 + 2;
  *plVar1 = 0;
  puVar5 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar5 = (undefined8 *)*param_3;
  }
  *(undefined1 *)puVar5 = 0;
  if ((param_1 != (longlong *)0x0) && (param_2[2] != 0)) {
    puVar5 = param_3;
    plVar7 = plVar1;
    plVar8 = param_1;
    iVar3 = (**(code **)*param_1)();
    iVar4 = iVar3;
    FUN_180023e60(param_1,0);
    FUN_18002db10(param_1[1],0xffffffff,"weapons",param_4,puVar5,plVar7,plVar8,iVar4);
    cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);
    if (cVar2 == '\0') {
      while (iVar4 = (**(code **)*param_1)(param_1), iVar3 < iVar4) {
        (**(code **)(*param_1 + 0x10))(param_1,1);
      }
    }
    else {
      FUN_18002d9c0(param_1[1],0xffffffff,"GetStored");
      cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
      if (cVar2 == '\0') {
        (**(code **)(*param_1 + 0x10))(param_1,1);
        FUN_18002d9c0(param_1[1],0xffffffff,&DAT_180346c44);
      }
      cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
      if (cVar2 == '\0') {
        while (iVar4 = (**(code **)*param_1)(param_1), iVar3 < iVar4) {
          (**(code **)(*param_1 + 0x10))(param_1,1);
        }
      }
      else {
        if (0xf < (ulonglong)param_2[3]) {
          param_2 = (undefined8 *)*param_2;
        }
        (**(code **)(*param_1 + 0xe8))(param_1,param_2,0);
        iVar4 = FUN_180023180(param_1[1],1,1);
        if ((iVar4 == 0) &&
           (cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5), cVar2 != '\0')) {
          FUN_18002d9c0(param_1[1],0xffffffff,&DAT_1803401d4);
          cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,4);
          if ((cVar2 != '\0') &&
             (_Str = (char *)(**(code **)(*param_1 + 0xb8))(param_1,0xffffffff,0),
             _Str != (char *)0x0)) {
            sVar6 = strlen(_Str);
            FUN_180212700(param_3,_Str,sVar6);
          }
          iVar4 = (**(code **)*param_1)(param_1);
          while (iVar3 < iVar4) {
            (**(code **)(*param_1 + 0x10))(param_1,1);
            iVar4 = (**(code **)*param_1)(param_1);
          }
          return *plVar1 != 0;
        }
        while (iVar4 = (**(code **)*param_1)(param_1), iVar3 < iVar4) {
          (**(code **)(*param_1 + 0x10))(param_1,1);
        }
      }
    }
  }
  return false;
}



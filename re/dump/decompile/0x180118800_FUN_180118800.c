// 0x180118800  FUN_180118800
// size=656 thunk=false
// signature: undefined FUN_180118800()
// status: ok


undefined8 FUN_180118800(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  HMODULE hModule;
  int iVar8;
  undefined8 uVar9;
  
  uVar3 = (**(code **)*param_1)();
  uVar9 = 0;
  FUN_180023e60(param_1,0);
  FUN_18002db10(param_1[1],0xffffffff,&DAT_1803445e0);
  cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);
  if (cVar2 != '\0') {
    FUN_18002db10(param_1[1],0xffffffff,"GetTable");
    cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
    if (cVar2 != '\0') {
      iVar8 = 1;
      do {
        iVar4 = (**(code **)*param_1)(param_1);
        (**(code **)(*param_1 + 0x370))(param_1,0xffffffff,iVar8);
        iVar5 = (**(code **)*param_1)(param_1);
        if (iVar5 <= iVar4) break;
        cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);
        if (cVar2 != '\0') {
          uVar6 = (**(code **)*param_1)(param_1);
          FUN_18002db10(param_1[1],uVar6,"PreRender");
          cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);
          if (cVar2 != '\0') {
            uVar7 = (**(code **)*param_1)(param_1);
            FUN_18002db10(param_1[1],uVar7,"RSC.PreRender");
            cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,0);
            (**(code **)(*param_1 + 0x10))(param_1,1);
            if (cVar2 != '\0') goto LAB_18011896f;
LAB_180118a18:
            (**(code **)(*param_1 + 0x10))(param_1,1);
            uVar9 = 1;
            (**(code **)(*param_1 + 0x10))(param_1,1);
            break;
          }
LAB_18011896f:
          (**(code **)(*param_1 + 0x10))(param_1,1);
          FUN_18002db10(param_1[1],uVar6,"PostRender");
          cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);
          if (cVar2 != '\0') {
            uVar6 = (**(code **)*param_1)(param_1);
            FUN_18002db10(param_1[1],uVar6,"RSC.PostRender");
            cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,0);
            (**(code **)(*param_1 + 0x10))(param_1,1);
            if (cVar2 == '\0') goto LAB_180118a18;
          }
          (**(code **)(*param_1 + 0x10))(param_1,1);
        }
        (**(code **)(*param_1 + 0x10))(param_1,1);
        iVar8 = iVar8 + 1;
      } while (iVar8 < 5);
    }
  }
  lVar1 = param_1[1];
  if (DAT_180425540 == (FARPROC)0x0) {
    hModule = GetModuleHandleA("lua_shared.dll");
    DAT_180425540 = GetProcAddress(hModule,"lua_settop");
  }
  (*DAT_180425540)(lVar1,(ulonglong)uVar3);
  return uVar9;
}



// 0x1800240f0  FUN_1800240f0
// size=346 thunk=false
// signature: undefined FUN_1800240f0()
// status: ok


void FUN_1800240f0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  HMODULE hModule;
  INT_PTR IVar7;
  undefined8 uVar8;
  uint uVar9;
  
  if (param_1 != (longlong *)0x0) {
    uVar9 = param_2;
    if ((int)param_2 < 1) {
      iVar5 = (**(code **)*param_1)();
      uVar9 = param_2 + 1 + iVar5;
    }
    lVar1 = param_1[1];
    if (DAT_1803fe490 == (FARPROC)0x0) {
      hModule = GetModuleHandleA("lua_shared.dll");
      DAT_1803fe490 = GetProcAddress(hModule,"lua_type");
    }
    lVar2 = *param_1;
    IVar7 = (*DAT_1803fe490)(lVar1,(ulonglong)param_2);
    iVar5 = (int)IVar7;
    if (iVar5 == 0) {
      (**(code **)(lVar2 + 0xe0))(param_1);
    }
    else if (iVar5 == 1) {
      uVar4 = (**(code **)(lVar2 + 200))(param_1,param_2);
      (**(code **)(lVar2 + 0xf8))(param_1,uVar4);
    }
    else if (iVar5 == 3) {
      uVar6 = (**(code **)(lVar2 + 0xc0))(param_1,param_2);
      (**(code **)(lVar2 + 0xf0))(param_1,uVar6);
    }
    else if (iVar5 == 4) {
      uVar6 = (**(code **)(lVar2 + 0x168))(param_1,param_2);
      uVar8 = (**(code **)(*param_1 + 0xb8))(param_1,param_2,0);
      (**(code **)(lVar2 + 0xe8))(param_1,uVar8,uVar6);
    }
    else if (iVar5 == 5) {
      (**(code **)(lVar2 + 0x30))();
      (**(code **)(*param_1 + 8))(param_1,uVar9);
      cVar3 = FUN_180024400(param_1);
      if (cVar3 == '\0') {
        FUN_180014410("FAILED COPY\n");
      }
    }
    else {
      (**(code **)(lVar2 + 8))(param_1,uVar9);
    }
    (**(code **)(*param_1 + 0x78))(param_1,uVar9);
  }
  return;
}



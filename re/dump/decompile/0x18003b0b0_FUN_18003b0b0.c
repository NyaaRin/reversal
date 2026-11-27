// 0x18003b0b0  FUN_18003b0b0
// size=455 thunk=false
// signature: undefined FUN_18003b0b0()
// status: ok


void FUN_18003b0b0(longlong param_1,uint param_2,char *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  HMODULE pHVar5;
  INT_PTR IVar6;
  INT_PTR IVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  if (DAT_1803fe490 == (FARPROC)0x0) {
    pHVar5 = GetModuleHandleA("lua_shared.dll");
    DAT_1803fe490 = GetProcAddress(pHVar5,"lua_type");
  }
  IVar6 = (*DAT_1803fe490)(uVar1,(ulonglong)param_2);
  if ((int)IVar6 == 5) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    if (DAT_1803ff2d0 == (FARPROC)0x0) {
      pHVar5 = GetModuleHandleA("lua_shared.dll");
      DAT_1803ff2d0 = GetProcAddress(pHVar5,"lua_topointer");
    }
    IVar6 = (*DAT_1803ff2d0)(uVar1,(ulonglong)param_2);
    if (IVar6 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x10);
      if (lVar2 != 0) {
        if ((DAT_1803faf38 == (code *)0x0) || (*(longlong *)(lVar2 + 8) == 0)) {
          FUN_180023e60(lVar2,0);
        }
        else {
          (*DAT_1803faf38)(*(longlong *)(lVar2 + 8),0xffffd8ee);
        }
      }
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      if (DAT_1803ff2d0 == (FARPROC)0x0) {
        pHVar5 = GetModuleHandleA("lua_shared.dll");
        DAT_1803ff2d0 = GetProcAddress(pHVar5,"lua_topointer");
      }
      IVar7 = (*DAT_1803ff2d0)(uVar1,0xffffffff);
      plVar3 = *(longlong **)(param_1 + 0x10);
      if (plVar3 != (longlong *)0x0) {
        if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (plVar3[1] == 0))
        {
          (**(code **)(*plVar3 + 0x10))(plVar3,1);
        }
        else {
          iVar4 = (*DAT_1803fb088)();
          iVar8 = 0;
          if (-1 < iVar4 + -1) {
            iVar8 = iVar4 + -1;
          }
          (*DAT_1803faf10)(plVar3[1],iVar8);
        }
      }
      if ((IVar7 != 0) && (IVar7 == IVar6)) {
        iVar8 = *(int *)(param_1 + 8);
        if (iVar8 == 0) {
          pcVar9 = "client";
        }
        else if (iVar8 == 1) {
          pcVar9 = "server";
        }
        else if (iVar8 == 2) {
          pcVar9 = "menu";
        }
        else {
          pcVar9 = "?";
        }
        pcVar10 = "<computed key>";
        if (param_3 != (char *)0x0) {
          pcVar10 = param_3;
        }
        FUN_180014410("[LUABRIDGE] write to _G(%s): %s\n",pcVar9,pcVar10);
      }
    }
  }
  return;
}



// 0x180044650  FUN_180044650
// size=470 thunk=false
// signature: undefined FUN_180044650()
// status: ok


undefined8 FUN_180044650(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  double dVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  HMODULE pHVar7;
  INT_PTR IVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined4 uVar11;
  
  plVar6 = (longlong *)FUN_180039770();
  if ((plVar6 == (longlong *)0x0) || (plVar6[1] != param_2)) {
    return 0;
  }
  dVar3 = (double)(**(code **)(*plVar6 + 0x160))(plVar6,1);
  uVar10 = (uint)dVar3;
  if (((0 < (int)uVar10) && (DAT_1803ff8a8 != 0)) && (uVar5 = uVar10 & 0xf, uVar5 < 8)) {
    lVar1 = (ulonglong)uVar5 * 0x18;
    if (((&DAT_1803ff7e0)[(ulonglong)uVar5 * 0x18] != '\0') &&
       (*(uint *)(&DAT_1803ff7e4 + lVar1) == uVar10 >> 4)) {
      dVar3 = (double)(**(code **)(*plVar6 + 0x160))(plVar6,2);
      lVar4 = DAT_1803ff8a8;
      if (DAT_1803fcfa0 == (FARPROC)0x0) {
        pHVar7 = GetModuleHandleA("lua_shared.dll");
        DAT_1803fcfa0 = GetProcAddress(pHVar7,"lua_gettop");
      }
      IVar8 = (*DAT_1803fcfa0)(lVar4);
      lVar4 = DAT_1803ff8a8;
      uVar10 = (uint)dVar3;
      if (uVar10 != 0) {
        if ((int)uVar10 < 0) {
          uVar10 = uVar10 + 1 + (int)IVar8;
        }
        if ((*(int *)(&DAT_1803ff7e8 + lVar1) < (int)uVar10) && ((int)uVar10 <= (int)IVar8)) {
          if (DAT_1803fe490 == (FARPROC)0x0) {
            pHVar7 = GetModuleHandleA("lua_shared.dll");
            DAT_1803fe490 = GetProcAddress(pHVar7,"lua_type");
          }
          IVar8 = (*DAT_1803fe490)(lVar4,(ulonglong)uVar10);
          if (((int)IVar8 != 7) && ((int)IVar8 != 2)) {
            (**(code **)(*plVar6 + 0xe0))(plVar6);
            return 1;
          }
          pcVar2 = *(code **)(*plVar6 + 0xf0);
          uVar9 = (*DAT_1803faec8)(DAT_1803ff8a8,uVar10);
          uVar11 = FUN_180041740(&DAT_1803ff7e0 + lVar1,uVar9);
          (*pcVar2)(plVar6,uVar11);
          return 1;
        }
      }
      (**(code **)(*plVar6 + 0xe0))(plVar6);
      return 1;
    }
  }
  (**(code **)(*plVar6 + 0xe0))(plVar6);
  return 1;
}



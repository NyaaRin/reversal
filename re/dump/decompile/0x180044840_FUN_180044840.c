// 0x180044840  FUN_180044840
// size=453 thunk=false
// signature: undefined FUN_180044840()
// status: ok


undefined8 FUN_180044840(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  double dVar2;
  uint uVar3;
  longlong *plVar4;
  HMODULE pHVar5;
  INT_PTR IVar6;
  longlong lVar7;
  uint uVar8;
  undefined4 uVar9;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_2)) {
    return 0;
  }
  dVar2 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
  uVar8 = (uint)dVar2;
  if (((0 < (int)uVar8) && (DAT_1803ff8a8 != 0)) && (uVar3 = uVar8 & 0xf, uVar3 < 8)) {
    lVar1 = (ulonglong)uVar3 * 0x18;
    if (((&DAT_1803ff7e0)[(ulonglong)uVar3 * 0x18] != '\0') &&
       (*(uint *)(&DAT_1803ff7e4 + lVar1) == uVar8 >> 4)) {
      dVar2 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,2);
      lVar7 = DAT_1803ff8a8;
      if (DAT_1803fcfa0 == (FARPROC)0x0) {
        pHVar5 = GetModuleHandleA("lua_shared.dll");
        DAT_1803fcfa0 = GetProcAddress(pHVar5,"lua_gettop");
      }
      IVar6 = (*DAT_1803fcfa0)(lVar7);
      lVar7 = DAT_1803ff8a8;
      uVar8 = (uint)dVar2;
      if (uVar8 != 0) {
        if ((int)uVar8 < 0) {
          uVar8 = uVar8 + 1 + (int)IVar6;
        }
        if ((*(int *)(&DAT_1803ff7e8 + lVar1) < (int)uVar8) && ((int)uVar8 <= (int)IVar6)) {
          if (DAT_1803fe490 == (FARPROC)0x0) {
            pHVar5 = GetModuleHandleA("lua_shared.dll");
            DAT_1803fe490 = GetProcAddress(pHVar5,"lua_type");
          }
          IVar6 = (*DAT_1803fe490)(lVar7,(ulonglong)uVar8);
          if ((int)IVar6 != 6) {
            (**(code **)(*plVar4 + 0xe0))(plVar4);
            return 1;
          }
          lVar7 = (*DAT_1803faf18)(DAT_1803ff8a8,uVar8);
          if (lVar7 != 0) {
            uVar9 = FUN_180041740(&DAT_1803ff7e0 + lVar1,lVar7);
            (**(code **)(*plVar4 + 0xf0))(plVar4,uVar9);
            return 1;
          }
        }
      }
    }
  }
  (**(code **)(*plVar4 + 0xe0))(plVar4);
  return 1;
}



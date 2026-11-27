// 0x18003b280  FUN_18003b280
// size=557 thunk=false
// signature: undefined FUN_18003b280()
// status: ok


void FUN_18003b280(void)

{
  undefined4 *puVar1;
  longlong *plVar2;
  HMODULE pHVar3;
  ulonglong uVar4;
  INT_PTR IVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int iVar8;
  
  puVar1 = DAT_1803eb3e8;
  if (DAT_1803eb3e0 != DAT_1803eb3e8) {
    iVar8 = 0;
    puVar7 = DAT_1803eb3e0;
    do {
      plVar2 = (longlong *)FUN_18003ae40(*puVar7);
      if (((plVar2 != (longlong *)0x0) && (lVar6 = plVar2[1], lVar6 != 0)) && (puVar7[1] != -1)) {
        if (DAT_1803fcfa0 == (FARPROC)0x0) {
          pHVar3 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fcfa0 = GetProcAddress(pHVar3,"lua_gettop");
        }
        uVar4 = (*DAT_1803fcfa0)(lVar6);
        (**(code **)(*plVar2 + 0x128))(plVar2,puVar7[1]);
        if (DAT_1803fe490 == (FARPROC)0x0) {
          pHVar3 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fe490 = GetProcAddress(pHVar3,"lua_type");
        }
        IVar5 = (*DAT_1803fe490)(lVar6,0xffffffff);
        if ((int)IVar5 == 5) {
          (**(code **)(*plVar2 + 0xf8))(plVar2,0);
          (**(code **)(*plVar2 + 0x28))(plVar2,0xfffffffe,&DAT_180342144);
          (**(code **)(*plVar2 + 0xe0))(plVar2);
          (**(code **)(*plVar2 + 0x28))(plVar2,0xfffffffe,&DAT_18034214c);
          (**(code **)(*plVar2 + 0xe0))(plVar2);
          (**(code **)(*plVar2 + 0x28))(plVar2,0xfffffffe,&DAT_180342150);
          iVar8 = iVar8 + 1;
        }
        if (DAT_180425540 == (FARPROC)0x0) {
          pHVar3 = GetModuleHandleA("lua_shared.dll");
          DAT_180425540 = GetProcAddress(pHVar3,"lua_settop");
        }
        (*DAT_180425540)(lVar6,uVar4 & 0xffffffff);
        (**(code **)(*plVar2 + 0x120))(plVar2,puVar7[1]);
      }
      if (puVar7[2] != -1) {
        lVar6 = FUN_180039770();
        if (((lVar6 != 0) && (*(longlong *)(lVar6 + 8) != 0)) &&
           (*(longlong *)(lVar6 + 8) == *(longlong *)(puVar7 + 4))) {
          FUN_18002d8c0(lVar6,puVar7[2]);
        }
      }
      puVar7 = puVar7 + 6;
    } while (puVar7 != puVar1);
    FUN_180014410("[LUABRIDGE] revoked %d/%d cross-state callback(s)\n",iVar8,
                  ((longlong)DAT_1803eb3e8 - (longlong)DAT_1803eb3e0 >> 3) * -0x5555555555555555);
    if (DAT_1803eb3e0 != DAT_1803eb3e8) {
      DAT_1803eb3e8 = DAT_1803eb3e0;
    }
  }
  return;
}



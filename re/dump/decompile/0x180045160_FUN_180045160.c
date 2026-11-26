// 0x180045160  FUN_180045160
// size=936 thunk=false
// signature: undefined FUN_180045160()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180045160(undefined8 param_1,longlong param_2)

{
  double dVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  HMODULE pHVar5;
  INT_PTR IVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 ****ppppuVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 ***local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_2)) {
    return 0;
  }
  dVar1 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
  uVar9 = (uint)dVar1;
  if ((((0 < (int)uVar9) && (DAT_1803ff8a8 != 0)) &&
      (uVar8 = (ulonglong)(uVar9 & 0xf), (uVar9 & 0xf) < 8)) &&
     (((&DAT_1803ff7e0)[uVar8 * 0x18] != '\0' &&
      (*(uint *)(&DAT_1803ff7e4 + uVar8 * 0x18) == uVar9 >> 4)))) {
    dVar1 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,2);
    lVar7 = DAT_1803ff8a8;
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar5 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar5,"lua_gettop");
    }
    IVar6 = (*DAT_1803fcfa0)(lVar7);
    uVar9 = (uint)dVar1;
    if (uVar9 != 0) {
      if ((int)uVar9 < 0) {
        uVar9 = uVar9 + 1 + (int)IVar6;
      }
      if ((*(int *)(&DAT_1803ff7e8 + uVar8 * 0x18) < (int)uVar9) && ((int)uVar9 <= (int)IVar6)) {
        lVar7 = (**(code **)(*plVar4 + 0x158))(plVar4,3);
        if (lVar7 == 0) {
          (**(code **)(*plVar4 + 0xf8))(plVar4,0);
          return 1;
        }
        if (((DAT_1803ff8a8 != 0) && (DAT_1803fb038 != (code *)0x0)) &&
           (iVar3 = (*DAT_1803fb038)(DAT_1803ff8a8,4), lVar2 = DAT_1803ff8a8, iVar3 != 0)) {
          if (DAT_1803fcfa0 == (FARPROC)0x0) {
            pHVar5 = GetModuleHandleA("lua_shared.dll");
            DAT_1803fcfa0 = GetProcAddress(pHVar5,"lua_gettop");
          }
          uVar8 = (*DAT_1803fcfa0)(lVar2);
          (*DAT_1803faf58)(DAT_1803ff8a8,FUN_18002d640,0);
          lVar2 = DAT_1803ff8a8;
          if (DAT_180423ad0 == (FARPROC)0x0) {
            pHVar5 = GetModuleHandleA("lua_shared.dll");
            DAT_180423ad0 = GetProcAddress(pHVar5,"lua_pushvalue");
          }
          (*DAT_180423ad0)(lVar2,(ulonglong)uVar9);
          (*DAT_1803fafa0)(DAT_1803ff8a8,lVar7);
          iVar3 = FUN_180023180(DAT_1803ff8a8,2,1);
          if (iVar3 != 0) {
            local_60 = (undefined8 ****)0x0;
            uStack_58 = 0;
            local_50 = 0;
            uStack_48 = 0;
            FUN_18001d080(&local_60,&DAT_18033e9cc,1);
            lVar7 = DAT_1803ff8a8;
            if (DAT_1803fe490 == (FARPROC)0x0) {
              pHVar5 = GetModuleHandleA("lua_shared.dll");
              DAT_1803fe490 = GetProcAddress(pHVar5,"lua_type");
            }
            IVar6 = (*DAT_1803fe490)(lVar7,0xffffffff);
            if ((int)IVar6 == 4) {
              local_68 = 0;
              lVar7 = (*DAT_1803fb008)(DAT_1803ff8a8,0xffffffff,&local_68);
              if (lVar7 != 0) {
                FUN_180212700(&local_60,lVar7,local_68);
              }
            }
            lVar7 = DAT_1803ff8a8;
            if (DAT_180425540 == (FARPROC)0x0) {
              pHVar5 = GetModuleHandleA("lua_shared.dll");
              DAT_180425540 = GetProcAddress(pHVar5,"lua_settop");
            }
            (*DAT_180425540)(lVar7,uVar8 & 0xffffffff);
            (**(code **)(*plVar4 + 0xf8))(plVar4,0);
            ppppuVar10 = &local_60;
            if (0xf < uStack_48) {
              ppppuVar10 = (undefined8 ****)local_60;
            }
            (**(code **)(*plVar4 + 0xe8))(plVar4,ppppuVar10,0);
            FUN_18020e450(&local_60);
            return 2;
          }
          (**(code **)(*plVar4 + 0xf8))(plVar4,1);
          return 1;
        }
      }
    }
  }
  (**(code **)(*plVar4 + 0xf8))(plVar4,0);
  return 1;
}



// 0x180046ac0  FUN_180046ac0
// size=963 thunk=false
// signature: undefined FUN_180046ac0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180046ac0(undefined8 param_1,longlong param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  HMODULE pHVar6;
  INT_PTR IVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 ****ppppuVar11;
  int iVar12;
  int iVar13;
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
    uVar8 = 0;
  }
  else {
    dVar1 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
    uVar10 = (uint)dVar1;
    if (((((int)uVar10 < 1) || (DAT_1803ff8a8 == 0)) ||
        (uVar5 = (ulonglong)(uVar10 & 0xf), 7 < (uVar10 & 0xf))) ||
       (((&DAT_1803ff7e0)[uVar5 * 0x18] == '\0' ||
        (*(uint *)(&DAT_1803ff7e4 + uVar5 * 0x18) != uVar10 >> 4)))) {
      (**(code **)(*plVar4 + 0xf8))(plVar4,0);
      uVar8 = 1;
    }
    else {
      dVar1 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,2);
      iVar12 = (int)dVar1;
      cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,3,3);
      if (cVar2 == '\0') {
        iVar13 = 0;
      }
      else {
        dVar1 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);
        iVar13 = (int)dVar1;
      }
      lVar9 = DAT_1803ff8a8;
      if (((iVar12 < 0) || (iVar13 < 0)) || ((0x20 < iVar12 || (0x20 < iVar13)))) {
        (**(code **)(*plVar4 + 0xf8))(plVar4,0);
        (**(code **)(*plVar4 + 0xe8))(plVar4,"argument/result count out of range",0);
        uVar8 = 2;
      }
      else {
        if (DAT_1803fcfa0 == (FARPROC)0x0) {
          pHVar6 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fcfa0 = GetProcAddress(pHVar6,"lua_gettop");
        }
        IVar7 = (*DAT_1803fcfa0)(lVar9);
        if ((int)IVar7 - *(int *)(&DAT_1803ff7e8 + uVar5 * 0x18) < iVar12 + 1) {
          (**(code **)(*plVar4 + 0xf8))(plVar4,0);
          (**(code **)(*plVar4 + 0xe8))(plVar4,"not enough values on the private stack",0);
          uVar8 = 2;
        }
        else {
          if (((DAT_1803ff8a8 != 0) && (DAT_1803fb038 != (code *)0x0)) &&
             (iVar3 = (*DAT_1803fb038)(DAT_1803ff8a8,iVar13 + 2), iVar3 != 0)) {
            iVar12 = FUN_180023180(DAT_1803ff8a8,iVar12,iVar13);
            if (iVar12 != 0) {
              local_60 = (undefined8 ****)0x0;
              uStack_58 = 0;
              local_50 = 0;
              uStack_48 = 0;
              FUN_18001d080(&local_60,&DAT_18033e9cc,1);
              lVar9 = DAT_1803ff8a8;
              if (DAT_1803fe490 == (FARPROC)0x0) {
                pHVar6 = GetModuleHandleA("lua_shared.dll");
                DAT_1803fe490 = GetProcAddress(pHVar6,"lua_type");
              }
              IVar7 = (*DAT_1803fe490)(lVar9,0xffffffff);
              if ((int)IVar7 == 4) {
                local_68 = 0;
                lVar9 = (*DAT_1803fb008)(DAT_1803ff8a8,0xffffffff,&local_68);
                if (lVar9 != 0) {
                  FUN_180212700(&local_60,lVar9,local_68);
                }
              }
              lVar9 = DAT_1803ff8a8;
              if (DAT_1803fcfa0 == (FARPROC)0x0) {
                pHVar6 = GetModuleHandleA("lua_shared.dll");
                DAT_1803fcfa0 = GetProcAddress(pHVar6,"lua_gettop");
              }
              IVar7 = (*DAT_1803fcfa0)(lVar9);
              lVar9 = DAT_1803ff8a8;
              if (DAT_180425540 == (FARPROC)0x0) {
                pHVar6 = GetModuleHandleA("lua_shared.dll");
                DAT_180425540 = GetProcAddress(pHVar6,"lua_settop");
              }
              (*DAT_180425540)(lVar9,(ulonglong)((int)IVar7 - 1));
              (**(code **)(*plVar4 + 0xf8))(plVar4,0);
              ppppuVar11 = &local_60;
              if (0xf < uStack_48) {
                ppppuVar11 = (undefined8 ****)local_60;
              }
              (**(code **)(*plVar4 + 0xe8))(plVar4,ppppuVar11,0);
              FUN_18020e450(&local_60);
              return 2;
            }
            (**(code **)(*plVar4 + 0xf8))(plVar4,1);
            return 1;
          }
          (**(code **)(*plVar4 + 0xf8))(plVar4,0);
          (**(code **)(*plVar4 + 0xe8))(plVar4,"private stack cannot grow",0);
          uVar8 = 2;
        }
      }
    }
  }
  return uVar8;
}



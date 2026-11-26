// 0x180040890  FUN_180040890
// size=890 thunk=false
// signature: undefined FUN_180040890()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180040890(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  HMODULE hModule;
  INT_PTR IVar9;
  char *pcVar10;
  size_t sVar11;
  uint uVar12;
  undefined8 ****ppppuVar13;
  int iVar14;
  int iVar15;
  char *_Str;
  longlong lVar16;
  undefined1 auStack_78 [32];
  undefined8 ***local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  plVar6 = (longlong *)FUN_180039770();
  if ((plVar6 == (longlong *)0x0) || (plVar6[1] != param_2)) {
    uVar8 = 0;
  }
  else {
    dVar3 = (double)(**(code **)(*plVar6 + 0x160))(plVar6,1);
    uVar12 = (uint)dVar3;
    if (((((int)uVar12 < 1) || (uVar7 = (ulonglong)(uVar12 & 0xf), 7 < (uVar12 & 0xf))) ||
        (lVar16 = uVar7 * 0x30, (&DAT_1803e75c0)[lVar16] == '\0')) ||
       (((*(uint *)(&DAT_1803e75c4 + lVar16) != uVar12 >> 4 || ((&DAT_1803e75d0)[uVar7 * 6] == 0))
        || ((&DAT_1803e75d8)[uVar7 * 6] == 0)))) {
      (**(code **)(*plVar6 + 0xf8))(plVar6,0);
      uVar8 = 1;
    }
    else {
      dVar3 = (double)(**(code **)(*plVar6 + 0x160))(plVar6,2);
      iVar14 = (int)dVar3;
      cVar4 = (**(code **)(*plVar6 + 0x138))(plVar6,3,3);
      if (cVar4 == '\0') {
        iVar15 = 0;
      }
      else {
        dVar3 = (double)(**(code **)(*plVar6 + 0xc0))(plVar6,3);
        iVar15 = (int)dVar3;
      }
      if (((iVar14 < 0) || (iVar15 < 0)) || ((0x20 < iVar14 || (0x20 < iVar15)))) {
        (**(code **)(*plVar6 + 0xf8))(plVar6,0);
        (**(code **)(*plVar6 + 0xe8))(plVar6,"argument/result count out of range",0);
        uVar8 = 2;
      }
      else {
        puVar1 = (undefined8 *)(&DAT_1803e75d0)[uVar7 * 6];
        if (puVar1 == (undefined8 *)0x0) {
          iVar5 = 0;
        }
        else if ((DAT_1803fb088 == (code *)0x0) || (puVar1[1] == 0)) {
          iVar5 = (**(code **)*puVar1)();
        }
        else {
          iVar5 = (*DAT_1803fb088)(puVar1[1]);
        }
        if (iVar5 - *(int *)(&DAT_1803e75e0 + lVar16) < iVar14 + 1) {
          (**(code **)(*plVar6 + 0xf8))(plVar6,0);
          (**(code **)(*plVar6 + 0xe8))(plVar6,"not enough values on the bridge stack",0);
          uVar8 = 2;
        }
        else {
          if ((((&DAT_1803e75d8)[uVar7 * 6] != 0) && (DAT_1803fb038 != (code *)0x0)) &&
             (iVar5 = (*DAT_1803fb038)((&DAT_1803e75d8)[uVar7 * 6],iVar15 + 2), iVar5 != 0)) {
            iVar14 = FUN_180023180((&DAT_1803e75d8)[uVar7 * 6],iVar14,iVar15);
            if (iVar14 != 0) {
              uVar8 = (&DAT_1803e75d8)[uVar7 * 6];
              if (DAT_1803fe490 == (FARPROC)0x0) {
                hModule = GetModuleHandleA("lua_shared.dll");
                DAT_1803fe490 = GetProcAddress(hModule,"lua_type");
              }
              IVar9 = (*DAT_1803fe490)(uVar8,0xffffffff);
              if ((int)IVar9 == 4) {
                pcVar10 = (char *)(**(code **)(*(longlong *)(&DAT_1803e75d0)[uVar7 * 6] + 0xb8))
                                            ((longlong *)(&DAT_1803e75d0)[uVar7 * 6],0xffffffff,0);
              }
              else {
                pcVar10 = "?";
              }
              _Str = "?";
              if (pcVar10 != (char *)0x0) {
                _Str = pcVar10;
              }
              local_58 = (undefined8 ****)0x0;
              uStack_50 = 0;
              local_48 = 0;
              uStack_40 = 0;
              sVar11 = strlen(_Str);
              FUN_18001d080(&local_58,_Str,sVar11);
              plVar2 = (longlong *)(&DAT_1803e75d0)[uVar7 * 6];
              if (plVar2 != (longlong *)0x0) {
                if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) ||
                   (plVar2[1] == 0)) {
                  (**(code **)(*plVar2 + 0x10))(plVar2,1);
                }
                else {
                  iVar15 = (*DAT_1803fb088)();
                  iVar14 = 0;
                  if (-1 < iVar15 + -1) {
                    iVar14 = iVar15 + -1;
                  }
                  (*DAT_1803faf10)(plVar2[1],iVar14);
                }
              }
              (**(code **)(*plVar6 + 0xf8))(plVar6,0);
              ppppuVar13 = &local_58;
              if (0xf < uStack_40) {
                ppppuVar13 = (undefined8 ****)local_58;
              }
              (**(code **)(*plVar6 + 0xe8))(plVar6,ppppuVar13,0);
              FUN_18020e450(&local_58);
              return 2;
            }
            (**(code **)(*plVar6 + 0xf8))(plVar6,1);
            return 1;
          }
          (**(code **)(*plVar6 + 0xf8))(plVar6,0);
          (**(code **)(*plVar6 + 0xe8))(plVar6,"that Lua stack cannot grow",0);
          uVar8 = 2;
        }
      }
    }
  }
  return uVar8;
}



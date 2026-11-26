// 0x1801555e0  FUN_1801555e0
// size=660 thunk=false
// signature: undefined FUN_1801555e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801555e0(undefined8 param_1,undefined4 param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_368 [32];
  undefined4 local_348;
  longlong local_340;
  ulonglong local_338;
  ulonglong local_330;
  longlong local_328;
  undefined *local_320;
  ulonglong local_318 [2];
  undefined1 local_308 [704];
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_368;
  local_348 = param_2;
  local_328 = param_3;
  iVar3 = (*DAT_180409f10)();
  if ((iVar3 == 5) && (uVar4 = (*DAT_180409d38)(param_1,param_2), uVar4 != 0)) {
    local_320 = &DAT_1803e8780;
    local_338 = uVar4;
    iVar3 = _Mtx_lock(&DAT_1803e8780);
    if (iVar3 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (DAT_1803e87cc == 0x7fffffff) {
      DAT_1803e87cc = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    if (DAT_1803e9df0 != DAT_1803e9df8) {
      uVar6 = 1;
      lVar10 = 0;
      local_340 = 0;
      local_330 = 1;
      if (uVar4 != 0) {
        do {
          uVar8 = local_330;
          (*DAT_180409f18)(param_1,param_2,local_330 & 0xffffffff);
          iVar3 = (*DAT_180409f10)(param_1,0xffffffff);
          if (iVar3 == 4) {
            local_318[0] = 0;
            lVar5 = (*DAT_180409e58)(param_1,0xffffffff,local_318);
            uVar9 = local_318[0];
            if (lVar5 == 0) goto LAB_1801557e9;
            uVar4 = 0;
            uVar7 = 0;
            if (param_4 != 0) {
              do {
                uVar4 = uVar7 + 1;
                if (699 < uVar4) goto LAB_180155757;
                local_308[uVar7] = *(undefined1 *)(local_328 + uVar7);
                uVar7 = uVar4;
              } while (uVar4 < param_4);
              if (param_4 != 0) {
LAB_180155757:
                uVar4 = uVar7;
                if (uVar7 + 1 < 700) {
                  local_308[uVar7] = 0x2f;
                  uVar4 = uVar7 + 1;
                }
              }
            }
            uVar7 = 0;
            if (local_318[0] != 0) {
              do {
                uVar1 = uVar4 + 1;
                uVar8 = local_330;
                if (699 < uVar1) break;
                iVar3 = tolower((uint)*(byte *)(uVar7 + lVar5));
                local_308[uVar4] = (char)iVar3;
                uVar7 = uVar7 + 1;
                uVar4 = uVar1;
                uVar8 = local_330;
              } while (uVar7 < uVar9);
            }
            local_308[uVar4] = 0;
            iVar3 = FUN_180155310(local_308,uVar4);
            uVar4 = local_338;
            lVar10 = local_340;
            param_2 = local_348;
            if (iVar3 != 1) goto LAB_1801557e9;
            (*DAT_180409f20)(param_1,0xfffffffe);
            lVar10 = local_340 + 1;
            uVar4 = local_338;
            local_340 = lVar10;
            param_2 = local_348;
          }
          else {
LAB_1801557e9:
            uVar9 = uVar6 & 0xffffffff;
            uVar6 = uVar6 + 1;
            (*DAT_180409d10)(param_1,param_2,uVar9);
          }
          local_330 = uVar8 + 1;
        } while (local_330 <= uVar4);
        if (lVar10 != 0) {
          for (; uVar6 <= uVar4; uVar6 = uVar6 + 1) {
            (*DAT_180409f58)(param_1);
            (*DAT_180409d10)(param_1,param_2,uVar6 & 0xffffffff);
          }
          LOCK();
          DAT_180409f40 = DAT_180409f40 + lVar10;
          UNLOCK();
        }
      }
    }
    _Mtx_unlock(&DAT_1803e8780);
  }
  return;
}



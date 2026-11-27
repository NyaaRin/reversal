// 0x1800f0ab0  FUN_1800f0ab0
// size=451 thunk=false
// signature: undefined FUN_1800f0ab0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800f0ab0(void)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  undefined8 ***pppuVar10;
  undefined1 auStack_a8 [32];
  int *local_88;
  int *piStack_80;
  undefined8 local_78;
  undefined *local_70;
  char local_68 [8];
  undefined8 **local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  local_88 = (int *)0x0;
  piStack_80 = (int *)0x0;
  local_78 = 0;
  local_70 = &DAT_1803e8550;
  iVar7 = _Mtx_lock(&DAT_1803e8550);
  if (iVar7 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (DAT_1803e859c == 0x7fffffff) {
    DAT_1803e859c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  piVar5 = DAT_1803e9ea8;
  piVar9 = DAT_1803e9ea0;
  if (DAT_1803e9ea0 == DAT_1803e9ea8) {
    _Mtx_unlock(&DAT_1803e8550);
  }
  else {
    local_88 = DAT_1803e9ea0;
    DAT_1803e9ea0 = (int *)0x0;
    piStack_80 = DAT_1803e9ea8;
    DAT_1803e9ea8 = (int *)0x0;
    local_78 = DAT_1803e9eb0;
    DAT_1803e9eb0 = 0;
    _Mtx_unlock(&DAT_1803e8550);
    uVar4 = _UNK_1803814b8;
    uVar3 = _DAT_1803814b0;
    do {
      uStack_58 = 0;
      local_50 = uVar3;
      uStack_48 = uVar4;
      local_60 = (undefined8 ***)0x0;
      cVar6 = FUN_1800f0630(*piVar9,piVar9 + 2,&local_60);
      if (cVar6 == '\0') {
        pppuVar10 = &local_60;
        if (0xf < uStack_48) {
          pppuVar10 = (undefined8 ***)local_60;
        }
        iVar7 = *piVar9;
        if (iVar7 == 0) {
          pcVar8 = "Client/shared";
        }
        else if (iVar7 == 1) {
          pcVar8 = "Server";
        }
        else if (iVar7 == 2) {
          pcVar8 = "Menu";
        }
        else {
          pcVar8 = "Unknown";
        }
        FUN_180014410("[LUAEDITOR] external %s chunk failed: %s\n",pcVar8,pppuVar10);
      }
      plVar1 = *(longlong **)(piVar9 + 0x18);
      if (plVar1 != (longlong *)0x0) {
        local_68[0] = cVar6;
        (**(code **)(*plVar1 + 0x10))(plVar1,local_68,&local_60);
      }
      FUN_18020e450(&local_60);
      piVar9 = piVar9 + 0x1a;
    } while (piVar9 != piVar5);
  }
  FUN_18020bb60(&local_88);
  return;
}



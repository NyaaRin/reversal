// 0x1800ea2e0  FUN_1800ea2e0
// size=491 thunk=false
// signature: undefined FUN_1800ea2e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800ea2e0(void)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined *local_88;
  longlong local_80;
  longlong lStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined *local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  local_48 = &DAT_1803e84a0;
  iVar3 = _Mtx_lock(&DAT_1803e84a0);
  if (iVar3 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (DAT_1803e84ec == 0x7fffffff) {
    DAT_1803e84ec = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  lVar5 = DAT_1803eb430;
  lVar4 = DAT_1803eb428;
  if (DAT_1803eb428 != DAT_1803eb430) {
    do {
      local_88 = (undefined *)lVar4;
      FUN_18020e450(lVar4 + 8);
      local_88 = (undefined *)(lVar4 + 0x30);
      lVar4 = (longlong)local_88;
    } while (local_88 != (undefined *)lVar5);
    DAT_1803eb430 = DAT_1803eb428;
  }
  _Mtx_unlock(&DAT_1803e84a0);
  local_80 = 0;
  lStack_78 = 0;
  local_70 = 0;
  local_88 = &DAT_1803e8550;
  iVar3 = _Mtx_lock(&DAT_1803e8550);
  if (iVar3 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (DAT_1803e859c == 0x7fffffff) {
    DAT_1803e859c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  lVar4 = DAT_1803e9ea8;
  lVar5 = DAT_1803e9ea0;
  local_80 = DAT_1803e9ea0;
  DAT_1803e9ea0 = 0;
  lStack_78 = DAT_1803e9ea8;
  DAT_1803e9ea8 = 0;
  local_70 = DAT_1803e9eb0;
  DAT_1803e9eb0 = 0;
  _Mtx_unlock(&DAT_1803e8550);
  do {
    if (lVar5 == lVar4) {
      FUN_18020bb60(&local_80);
      return;
    }
    if (*(longlong *)(lVar5 + 0x60) != 0) {
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      FUN_18001d080(&local_68,"Lua state closed before the chunk ran",0x25);
      local_40[0] = 0;
      plVar1 = *(longlong **)(lVar5 + 0x60);
      if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::_Xbad_function_call();
      }
      (**(code **)(*plVar1 + 0x10))(plVar1,local_40,&local_68);
      FUN_18020e450(&local_68);
    }
    lVar5 = lVar5 + 0x68;
  } while( true );
}



// 0x1800ebff0  FUN_1800ebff0
// size=1598 thunk=false
// signature: undefined FUN_1800ebff0()
// status: ok


void FUN_1800ebff0(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  HMODULE pHVar4;
  ulonglong uVar5;
  
  if ((param_1 != (longlong *)0x0) && (lVar1 = param_1[1], lVar1 != 0)) {
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar4 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar4,"lua_gettop");
    }
    uVar5 = (*DAT_1803fcfa0)(lVar1);
    cVar3 = FUN_1800260c0(lVar1,0x2736efefe1fb290);
    pcVar2 = DAT_1803fcbe0;
    if (cVar3 == '\0') {
      FUN_180014410(&DAT_18034f4a8);
      if (DAT_180425540 == (FARPROC)0x0) {
        pHVar4 = GetModuleHandleA("lua_shared.dll");
        DAT_180425540 = GetProcAddress(pHVar4,"lua_settop");
      }
    }
    else {
      if (DAT_1803fcbe0 != (code *)0x0) {
        (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ec630);
        (*pcVar2)(lVar1,0xfffffffe,"conprint");
        (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ec6e0);
        (*pcVar2)(lVar1,0xfffffffe,&DAT_180345c44);
        (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ec6e0);
        (*pcVar2)(lVar1,0xfffffffe,"copytable");
        (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ec630);
        (*pcVar2)(lVar1,0xfffffffe,&DAT_18034f504);
        (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800ecb40);
        (*pcVar2)(lVar1,0xfffffffe,"RunScript");
        (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800ed2b0);
        (*pcVar2)(lVar1,0xfffffffe,"RunFile");
        (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ed2c0);
        (*pcVar2)(lVar1,0xfffffffe,"CreateHook");
        (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ed410);
        (*pcVar2)(lVar1,0xfffffffe,"RemoveHook");
        (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ed4f0);
        (*pcVar2)(lVar1,0xfffffffe,"CallHook");
        (**(code **)(*param_1 + 0x30))(param_1);
        (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ed5c0);
        (*pcVar2)(lVar1,0xfffffffe,"GetBool");
        (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ed6f0);
        (*pcVar2)(lVar1,0xfffffffe,"SetBool");
        (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ed840);
        (*pcVar2)(lVar1,0xfffffffe,"GetInt");
        (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ed970);
        (*pcVar2)(lVar1,0xfffffffe,"SetInt");
        (**(code **)(*param_1 + 0x100))(param_1,FUN_1800edae0);
        (*pcVar2)(lVar1,0xfffffffe,"GetFloat");
        (**(code **)(*param_1 + 0x100))(param_1,FUN_1800edc10);
        (*pcVar2)(lVar1,0xfffffffe,"SetFloat");
        (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800edf20);
        (*pcVar2)(lVar1,0xfffffffe,"GetString");
        (**(code **)(*param_1 + 0x100))(param_1,FUN_1800edf30);
        (*pcVar2)(lVar1,0xfffffffe,"SetString");
        (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ee0e0);
        (*pcVar2)(lVar1,0xfffffffe,&DAT_18034f558);
        (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ee230);
        (*pcVar2)(lVar1,0xfffffffe,&DAT_18034f560);
        (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ee380);
        (*pcVar2)(lVar1,0xfffffffe,"GetCurrent");
        (*pcVar2)(lVar1,0xfffffffe,"Config");
        (**(code **)(*param_1 + 0x30))(param_1);
        (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ee480);
        (*pcVar2)(lVar1,0xfffffffe,"KeyName");
        (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ee540);
        (*pcVar2)(lVar1,0xfffffffe,"KeyCode");
        (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ee620);
        (*pcVar2)(lVar1,0xfffffffe,"PreventKey");
        (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ee720);
        (*pcVar2)(lVar1,0xfffffffe,"ClearPreventedKeys");
        (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ee7c0);
        (*pcVar2)(lVar1,0xfffffffe,"IsKeyDown");
        (*pcVar2)(lVar1,0xfffffffe,"Input");
        (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800eeb30);
        (*pcVar2)(lVar1,0xfffffffe,"FindCFunction");
        (**(code **)(*param_1 + 0x100))(param_1,FUN_1800eeb40);
        (*pcVar2)(lVar1,0xfffffffe,"DrawRect");
        (**(code **)(*param_1 + 0x100))(param_1,FUN_1800eed30);
        (*pcVar2)(lVar1,0xfffffffe,"DrawOutline");
        (**(code **)(*param_1 + 0x100))(param_1,FUN_1800eef30);
        (*pcVar2)(lVar1,0xfffffffe,"DrawLine");
        (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800ef300);
        (*pcVar2)(lVar1,0xfffffffe,"DrawCircle");
        (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800ef600);
        (*pcVar2)(lVar1,0xfffffffe,"DrawText");
        (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ef610);
        (*pcVar2)(lVar1,0xfffffffe,"GetTextSize");
        (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ef760);
        (*pcVar2)(lVar1,0xfffffffe,"GetScreenSize");
        if (DAT_180423ad0 == (FARPROC)0x0) {
          pHVar4 = GetModuleHandleA("lua_shared.dll");
          DAT_180423ad0 = GetProcAddress(pHVar4,"lua_pushvalue");
        }
        (*DAT_180423ad0)(lVar1,0xffffffff);
        (*pcVar2)(lVar1,0xfffffffe,"mayrr");
      }
      if (DAT_180425540 == (FARPROC)0x0) {
        pHVar4 = GetModuleHandleA("lua_shared.dll");
        DAT_180425540 = GetProcAddress(pHVar4,"lua_settop");
      }
    }
    (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);
  }
  return;
}



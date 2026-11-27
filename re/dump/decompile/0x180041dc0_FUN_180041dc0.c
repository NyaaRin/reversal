// 0x180041dc0  FUN_180041dc0
// size=2487 thunk=false
// signature: undefined FUN_180041dc0()
// status: ok


void FUN_180041dc0(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  HMODULE pHVar5;
  ulonglong uVar6;
  INT_PTR IVar7;
  ulonglong uVar8;
  int iVar9;
  
  if ((param_1 != (longlong *)0x0) && (lVar1 = param_1[1], lVar1 != 0)) {
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar5 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar5,"lua_gettop");
    }
    uVar6 = (*DAT_1803fcfa0)(lVar1);
    cVar3 = FUN_1800260c0(lVar1,0x2736efefe1fb290);
    pcVar2 = DAT_1803fcbe0;
    if (cVar3 == '\0') {
      FUN_180014410("[LUASTACK] api table unavailable -- persist not ready\n");
    }
    else if (DAT_1803fcbe0 != (code *)0x0) {
      FUN_180041420();
      if ((DAT_1803faf38 == (code *)0x0) || (param_1[1] == 0)) {
        FUN_180023e60(param_1,0);
      }
      else {
        (*DAT_1803faf38)(param_1[1],0xffffd8ee);
      }
      (*DAT_1803fcba8)(lVar1,0xffffffff,"stack");
      if (DAT_1803fe490 == (FARPROC)0x0) {
        pHVar5 = GetModuleHandleA("lua_shared.dll");
        DAT_1803fe490 = GetProcAddress(pHVar5,"lua_type");
      }
      IVar7 = (*DAT_1803fe490)(lVar1,0xffffffff);
      if ((int)IVar7 != 0) {
        if (DAT_1803fe490 == (FARPROC)0x0) {
          pHVar5 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fe490 = GetProcAddress(pHVar5,"lua_type");
        }
        uVar8 = (*DAT_1803fe490)(lVar1,0xffffffff);
        FUN_180014410("[LUASTACK] warning: _G.stack exists (type %d) -- scripts in the sandbox will see ours\n"
                      ,uVar8 & 0xffffffff);
      }
      if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (param_1[1] == 0)) {
        (**(code **)(*param_1 + 0x10))(param_1,2);
      }
      else {
        iVar4 = (*DAT_1803fb088)();
        iVar9 = 0;
        if (-1 < iVar4 + -2) {
          iVar9 = iVar4 + -2;
        }
        (*DAT_1803faf10)(param_1[1],iVar9);
      }
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180042b60);
      (*pcVar2)(lVar1,0xfffffffe,&DAT_18034260c);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180042b70);
      (*pcVar2)(lVar1,0xfffffffe,"IsValid");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180042c10);
      (*pcVar2)(lVar1,0xfffffffe,&DAT_18034262c);
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180042ef0);
      (*pcVar2)(lVar1,0xfffffffe,&DAT_180342630);
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180043100);
      (*pcVar2)(lVar1,0xfffffffe,&DAT_180342638);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180043110);
      (*pcVar2)(lVar1,0xfffffffe,"Insert");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180043260);
      (*pcVar2)(lVar1,0xfffffffe,"Remove");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800433b0);
      (*pcVar2)(lVar1,0xfffffffe,"PushNil");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180043500);
      (*pcVar2)(lVar1,0xfffffffe,"PushBool");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180043620);
      (*pcVar2)(lVar1,0xfffffffe,"PushNumber");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180043730);
      (*pcVar2)(lVar1,0xfffffffe,"PushString");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800438f0);
      (*pcVar2)(lVar1,0xfffffffe,"PushValue");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180043ad0);
      (*pcVar2)(lVar1,0xfffffffe,"PushSpecial");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180043c60);
      (*pcVar2)(lVar1,0xfffffffe,"GetType");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180043dc0);
      (*pcVar2)(lVar1,0xfffffffe,"GetActualTypeName");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180043f40);
      (*pcVar2)(lVar1,0xfffffffe,"GetBool");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800440a0);
      (*pcVar2)(lVar1,0xfffffffe,"GetNumber");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180044460);
      (*pcVar2)(lVar1,0xfffffffe,"GetString");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180044470);
      (*pcVar2)(lVar1,0xfffffffe,"GetValue");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180044830);
      (*pcVar2)(lVar1,0xfffffffe,"GetUserdata");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180044a10);
      (*pcVar2)(lVar1,0xfffffffe,"GetCFunction");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180044a20);
      (*pcVar2)(lVar1,0xfffffffe,"ObjLen");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180044f50);
      (*pcVar2)(lVar1,0xfffffffe,"Equal");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180045150);
      (*pcVar2)(lVar1,0xfffffffe,"RawEqual");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180045510);
      (*pcVar2)(lVar1,0xfffffffe,"GetField");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180045850);
      (*pcVar2)(lVar1,0xfffffffe,"SetField");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180045b50);
      (*pcVar2)(lVar1,0xfffffffe,"GetTable");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180045ea0);
      (*pcVar2)(lVar1,0xfffffffe,"SetTable");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800460c0);
      (*pcVar2)(lVar1,0xfffffffe,"RawGet");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180046300);
      (*pcVar2)(lVar1,0xfffffffe,"RawSet");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800466c0);
      (*pcVar2)(lVar1,0xfffffffe,&DAT_18034277c);
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180046860);
      (*pcVar2)(lVar1,0xfffffffe,"GetMetaTable");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180046ab0);
      (*pcVar2)(lVar1,0xfffffffe,"SetMetaTable");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180046e90);
      (*pcVar2)(lVar1,0xfffffffe,"PCall");
      (*DAT_1803fcba8)(lVar1,0xffffffff,"PCall");
      (*pcVar2)(lVar1,0xfffffffe,&DAT_1803427b0);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180046ea0);
      (*pcVar2)(lVar1,0xfffffffe,"CheckType");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180047030);
      (*pcVar2)(lVar1,0xfffffffe,"ThrowError");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180040e20);
      (*pcVar2)(lVar1,0xfffffffe,"ArgError");
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0xf0))(param_1,0);
      (*pcVar2)(lVar1,0xfffffffe,&DAT_180342828);
      (*pcVar2)(lVar1,0xfffffffe,"SPECIAL");
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0xf0))(param_1,0);
      (*pcVar2)(lVar1,0xfffffffe,&DAT_180342840);
      (**(code **)(*param_1 + 0xf0))(param_1,DAT_180380d08);
      (*pcVar2)(lVar1,0xfffffffe,&DAT_180342844);
      (**(code **)(*param_1 + 0xf0))(param_1,DAT_180380d38);
      (*pcVar2)(lVar1,0xfffffffe,"LIGHTUSERDATA");
      (**(code **)(*param_1 + 0xf0))(param_1,DAT_180380d48);
      (*pcVar2)(lVar1,0xfffffffe,"NUMBER");
      (**(code **)(*param_1 + 0xf0))(param_1,DAT_180380d68);
      (*pcVar2)(lVar1,0xfffffffe,"STRING");
      (**(code **)(*param_1 + 0xf0))(param_1,DAT_180380d80);
      (*pcVar2)(lVar1,0xfffffffe,"TABLE");
      (**(code **)(*param_1 + 0xf0))(param_1,DAT_180380d88);
      (*pcVar2)(lVar1,0xfffffffe,"FUNCTION");
      (**(code **)(*param_1 + 0xf0))(param_1,DAT_180380db0);
      (*pcVar2)(lVar1,0xfffffffe,"USERDATA");
      (**(code **)(*param_1 + 0xf0))(param_1,DAT_180380dc0);
      (*pcVar2)(lVar1,0xfffffffe,"THREAD");
      (**(code **)(*param_1 + 0xf0))(param_1,DAT_180380dc8);
      (*pcVar2)(lVar1,0xfffffffe,"ENTITY");
      (**(code **)(*param_1 + 0xf0))(param_1,DAT_180380dd8);
      (*pcVar2)(lVar1,0xfffffffe,"VECTOR");
      (**(code **)(*param_1 + 0xf0))(param_1,DAT_180380de0);
      (*pcVar2)(lVar1,0xfffffffe,"ANGLE");
      (*pcVar2)(lVar1,0xfffffffe,&DAT_1803428b4);
      (*pcVar2)(lVar1,0xfffffffe,"stack");
      if (DAT_180425540 == (FARPROC)0x0) {
        pHVar5 = GetModuleHandleA("lua_shared.dll");
        DAT_180425540 = GetProcAddress(pHVar5,"lua_settop");
      }
      (*DAT_180425540)(lVar1,uVar6 & 0xffffffff);
      FUN_180014410("[LUASTACK] stack table registered (depth limit %d)\n",8);
      return;
    }
    if (DAT_180425540 == (FARPROC)0x0) {
      pHVar5 = GetModuleHandleA("lua_shared.dll");
      DAT_180425540 = GetProcAddress(pHVar5,"lua_settop");
    }
    (*DAT_180425540)(lVar1,uVar6 & 0xffffffff);
  }
  return;
}



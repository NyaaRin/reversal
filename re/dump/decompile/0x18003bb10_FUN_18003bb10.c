// 0x18003bb10  FUN_18003bb10
// size=2867 thunk=false
// signature: undefined FUN_18003bb10()
// status: ok


void FUN_18003bb10(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  HMODULE pHVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  INT_PTR IVar8;
  ulonglong uVar9;
  int iVar10;
  
  if ((param_1 != (longlong *)0x0) && (lVar1 = param_1[1], lVar1 != 0)) {
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar5 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar5,"lua_gettop");
    }
    uVar6 = (*DAT_1803fcfa0)(lVar1);
    cVar3 = FUN_1800260c0(lVar1,0x2736efefe1fb290);
    pcVar2 = DAT_1803fcbe0;
    if (cVar3 == '\0') {
      FUN_180014410("[LUABRIDGE] api table unavailable -- persist not ready\n");
    }
    else if (DAT_1803fcbe0 != (code *)0x0) {
      puVar7 = (undefined4 *)&DAT_1803e75c0;
      do {
        *(undefined1 *)puVar7 = 0;
        *(undefined8 *)(puVar7 + 4) = 0;
        *(undefined8 *)(puVar7 + 6) = 0;
        puVar7 = puVar7 + 0xc;
      } while (puVar7 != &DAT_1803e7740);
      DAT_1803ff8f4 = 0;
      FUN_18003b280();
      if ((DAT_1803faf38 == (code *)0x0) || (param_1[1] == 0)) {
        FUN_180023e60(param_1,0);
      }
      else {
        (*DAT_1803faf38)(param_1[1],0xffffd8ee);
      }
      (*DAT_1803fcba8)(lVar1,0xffffffff,"bridge");
      if (DAT_1803fe490 == (FARPROC)0x0) {
        pHVar5 = GetModuleHandleA("lua_shared.dll");
        DAT_1803fe490 = GetProcAddress(pHVar5,"lua_type");
      }
      IVar8 = (*DAT_1803fe490)(lVar1,0xffffffff);
      if ((int)IVar8 != 0) {
        if (DAT_1803fe490 == (FARPROC)0x0) {
          pHVar5 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fe490 = GetProcAddress(pHVar5,"lua_type");
        }
        uVar9 = (*DAT_1803fe490)(lVar1,0xffffffff);
        FUN_180014410("[LUABRIDGE] warning: _G.bridge exists (type %d) -- scripts in the sandbox will see ours\n"
                      ,uVar9 & 0xffffffff);
      }
      if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (param_1[1] == 0)) {
        (**(code **)(*param_1 + 0x10))(param_1,2);
      }
      else {
        iVar4 = (*DAT_1803fb088)();
        iVar10 = 0;
        if (-1 < iVar4 + -2) {
          iVar10 = iVar4 + -2;
        }
        (*DAT_1803faf10)(param_1[1],iVar10);
      }
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18003cac0);
      (*pcVar2)(lVar1,0xfffffffe,&DAT_18034260c);
      (*DAT_1803fcba8)(lVar1,0xffffffff,&DAT_18034260c);
      (*pcVar2)(lVar1,0xfffffffe,"Bridge");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18003cad0);
      (*pcVar2)(lVar1,0xfffffffe,"IsValid");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18003cb80);
      (*pcVar2)(lVar1,0xfffffffe,"GetRealm");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18003cc50);
      (*pcVar2)(lVar1,0xfffffffe,&DAT_18034262c);
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18003cf00);
      (*pcVar2)(lVar1,0xfffffffe,&DAT_180342630);
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18003d0e0);
      (*pcVar2)(lVar1,0xfffffffe,&DAT_180342638);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18003d0f0);
      (*pcVar2)(lVar1,0xfffffffe,"Insert");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18003d230);
      (*pcVar2)(lVar1,0xfffffffe,"Remove");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18003d370);
      (*pcVar2)(lVar1,0xfffffffe,"PushNil");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18003d490);
      (*pcVar2)(lVar1,0xfffffffe,"PushBool");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18003d5b0);
      (*pcVar2)(lVar1,0xfffffffe,"PushNumber");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18003d6d0);
      (*pcVar2)(lVar1,0xfffffffe,"PushString");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18003db20);
      (*pcVar2)(lVar1,0xfffffffe,"PushSpecial");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18003de10);
      (*pcVar2)(lVar1,0xfffffffe,"PushUserType");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18003df80);
      (*pcVar2)(lVar1,0xfffffffe,"GetType");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18003e0f0);
      (*pcVar2)(lVar1,0xfffffffe,"GetActualTypeName");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18003e260);
      (*pcVar2)(lVar1,0xfffffffe,"GetBool");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18003e440);
      (*pcVar2)(lVar1,0xfffffffe,"GetNumber");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18003e670);
      (*pcVar2)(lVar1,0xfffffffe,"GetString");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18003e850);
      (*pcVar2)(lVar1,0xfffffffe,"GetUserdata");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18003ea40);
      (*pcVar2)(lVar1,0xfffffffe,"GetCFunction");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18003ebb0);
      (*pcVar2)(lVar1,0xfffffffe,"ObjLen");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18003ef50);
      (*pcVar2)(lVar1,0xfffffffe,"Equal");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18003f140);
      (*pcVar2)(lVar1,0xfffffffe,"RawEqual");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18003f3f0);
      (*pcVar2)(lVar1,0xfffffffe,"GetField");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18003f6f0);
      (*pcVar2)(lVar1,0xfffffffe,"SetField");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18003f9d0);
      (*pcVar2)(lVar1,0xfffffffe,"GetTable");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18003fce0);
      (*pcVar2)(lVar1,0xfffffffe,"SetTable");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18003fef0);
      (*pcVar2)(lVar1,0xfffffffe,"RawGet");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180040110);
      (*pcVar2)(lVar1,0xfffffffe,"RawSet");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800404a0);
      (*pcVar2)(lVar1,0xfffffffe,&DAT_18034277c);
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180040650);
      (*pcVar2)(lVar1,0xfffffffe,"GetMetaTable");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180040880);
      (*pcVar2)(lVar1,0xfffffffe,"SetMetaTable");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180040c10);
      (*pcVar2)(lVar1,0xfffffffe,"PCall");
      (*DAT_1803fcba8)(lVar1,0xffffffff,"PCall");
      (*pcVar2)(lVar1,0xfffffffe,&DAT_1803427b0);
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180040db0);
      (*pcVar2)(lVar1,0xfffffffe,"CheckType");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180040dc0);
      (*pcVar2)(lVar1,0xfffffffe,"ThrowError");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180040e20);
      (*pcVar2)(lVar1,0xfffffffe,"ArgError");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800413b0);
      (*pcVar2)(lVar1,0xfffffffe,"PushCFunction");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800413c0);
      (*pcVar2)(lVar1,0xfffffffe,"RevokeCallbacks");
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0xf0))(param_1,0);
      (*pcVar2)(lVar1,0xfffffffe,"CLIENT");
      (**(code **)(*param_1 + 0xf0))(param_1,DAT_180380d38);
      (*pcVar2)(lVar1,0xfffffffe,&DAT_180342810);
      (**(code **)(*param_1 + 0xf0))(param_1,DAT_180380d08);
      (*pcVar2)(lVar1,0xfffffffe,"SERVER");
      (*pcVar2)(lVar1,0xfffffffe,"STATE");
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0xf0))(param_1,0);
      (*pcVar2)(lVar1,0xfffffffe,&DAT_180342828);
      (**(code **)(*param_1 + 0xf0))(param_1,DAT_180380d08);
      (*pcVar2)(lVar1,0xfffffffe,&DAT_180342830);
      (**(code **)(*param_1 + 0xf0))(param_1,DAT_180380d38);
      (*pcVar2)(lVar1,0xfffffffe,&DAT_180342834);
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
      (*pcVar2)(lVar1,0xfffffffe,"bridge");
      if (DAT_180425540 == (FARPROC)0x0) {
        pHVar5 = GetModuleHandleA("lua_shared.dll");
        DAT_180425540 = GetProcAddress(pHVar5,"lua_settop");
      }
      (*DAT_180425540)(lVar1,uVar6 & 0xffffffff);
      FUN_180014410("[LUABRIDGE] bridge table registered (depth limit %d)\n",8);
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



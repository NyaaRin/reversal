// 0x1800e8340  FUN_1800e8340
// size=2217 thunk=false
// signature: undefined FUN_1800e8340()
// status: ok


void FUN_1800e8340(longlong *param_1)

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
    FUN_1800210b0(0,0);
    cVar3 = FUN_1800260c0(lVar1,0x2736efefe1fb290);
    pcVar2 = DAT_1803fcbe0;
    if (cVar3 == '\0') {
      FUN_180014410("[LUAFEAT] api table unavailable -- persist not ready\n");
    }
    else if (DAT_1803fcbe0 != (code *)0x0) {
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8bf0);
      (*pcVar2)(lVar1,0xfffffffe,"IsActive");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8c30);
      (*pcVar2)(lVar1,0xfffffffe,"HasTarget");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4340);
      (*pcVar2)(lVar1,0xfffffffe,"GetTarget");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8c70);
      (*pcVar2)(lVar1,0xfffffffe,"GetPosition");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8d40);
      (*pcVar2)(lVar1,0xfffffffe,"SetTarget");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8dc0);
      (*pcVar2)(lVar1,0xfffffffe,"SetPosition");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8e60);
      (*pcVar2)(lVar1,0xfffffffe,"ClearForced");
      (*pcVar2)(lVar1,0xfffffffe,"aimbot");
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8ea0);
      (*pcVar2)(lVar1,0xfffffffe,"IsActive");
      (*pcVar2)(lVar1,0xfffffffe,"triggerbot");
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8f00);
      (*pcVar2)(lVar1,0xfffffffe,"GetActive");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8f60);
      (*pcVar2)(lVar1,0xfffffffe,"SetActive");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4bb0);
      (*pcVar2)(lVar1,0xfffffffe,"GetPosition");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4c60);
      (*pcVar2)(lVar1,0xfffffffe,"GetAngle");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8fb0);
      (*pcVar2)(lVar1,0xfffffffe,"SetPosition");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9020);
      (*pcVar2)(lVar1,0xfffffffe,"SetAngle");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9120);
      (*pcVar2)(lVar1,0xfffffffe,"GetSpeed");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9200);
      (*pcVar2)(lVar1,0xfffffffe,"SetSpeed");
      (*pcVar2)(lVar1,0xfffffffe,"freecam");
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9280);
      (*pcVar2)(lVar1,0xfffffffe,"GetActive");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e92e0);
      (*pcVar2)(lVar1,0xfffffffe,"SetActive");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9330);
      (*pcVar2)(lVar1,0xfffffffe,"GetDistance");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9410);
      (*pcVar2)(lVar1,0xfffffffe,"SetDistance");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e94a0);
      (*pcVar2)(lVar1,0xfffffffe,"GetSideDistance");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9580);
      (*pcVar2)(lVar1,0xfffffffe,"SetSideDistance");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9610);
      (*pcVar2)(lVar1,0xfffffffe,"GetUpDistance");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e96f0);
      (*pcVar2)(lVar1,0xfffffffe,"SetUpDistance");
      (*DAT_1803fcba8)(lVar1,0xffffffff,"GetDistance");
      (*pcVar2)(lVar1,0xfffffffe,"GetBackDistance");
      (*DAT_1803fcba8)(lVar1,0xffffffff,"SetDistance");
      (*pcVar2)(lVar1,0xfffffffe,"SetBackDistance");
      (*pcVar2)(lVar1,0xfffffffe,"thirdperson");
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9780);
      (*pcVar2)(lVar1,0xfffffffe,"GetRecords");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e98c0);
      (*pcVar2)(lVar1,0xfffffffe,"Count");
      (*pcVar2)(lVar1,0xfffffffe,"backtrack");
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e98d0);
      (*pcVar2)(lVar1,0xfffffffe,"Installed");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e99d0);
      (*pcVar2)(lVar1,0xfffffffe,"Active");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e99e0);
      (*pcVar2)(lVar1,0xfffffffe,"Pumps");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180052af0);
      (*pcVar2)(lVar1,0xfffffffe,"Interval");
      (*pcVar2)(lVar1,0xfffffffe,"tick_anims");
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e9d50);
      (*pcVar2)(lVar1,0xfffffffe,"SetText");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9d60);
      (*pcVar2)(lVar1,0xfffffffe,"ClearText");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9de0);
      (*pcVar2)(lVar1,0xfffffffe,"Clear");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9e10);
      (*pcVar2)(lVar1,0xfffffffe,"GetText");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9f50);
      (*pcVar2)(lVar1,0xfffffffe,"Slots");
      (*DAT_1803fcba8)(lVar1,0xffffffff,"SetText");
      (*pcVar2)(lVar1,0xfffffffe,"SetPlayerText");
      (*DAT_1803fcba8)(lVar1,0xffffffff,"SetText");
      (*pcVar2)(lVar1,0xfffffffe,"SetEntityText");
      (*DAT_1803fcba8)(lVar1,0xffffffff,"ClearText");
      (*pcVar2)(lVar1,0xfffffffe,"ClearPlayerText");
      (*DAT_1803fcba8)(lVar1,0xffffffff,"ClearText");
      (*pcVar2)(lVar1,0xfffffffe,"ClearEntityText");
      (*pcVar2)(lVar1,0xfffffffe,&DAT_18034f128);
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800516a0);
      (*pcVar2)(lVar1,0xfffffffe,"IsVisible");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9f90);
      (*pcVar2)(lVar1,0xfffffffe,"SetVisible");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ea000);
      (*pcVar2)(lVar1,0xfffffffe,"GetAlpha");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ea090);
      (*pcVar2)(lVar1,0xfffffffe,"GetWindowPos");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ea100);
      (*pcVar2)(lVar1,0xfffffffe,"GetWindowSize");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ea170);
      (*pcVar2)(lVar1,0xfffffffe,"InPanic");
      (*pcVar2)(lVar1,0xfffffffe,&DAT_1803406cc);
      if (DAT_180425540 == (FARPROC)0x0) {
        pHVar4 = GetModuleHandleA("lua_shared.dll");
        DAT_180425540 = GetProcAddress(pHVar4,"lua_settop");
      }
      (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);
      FUN_180014410(
                   "[LUAFEAT] aimbot, triggerbot, freecam, thirdperson, backtrack, tick_anims, esp and menu tables registered\n"
                   );
      return;
    }
    if (DAT_180425540 == (FARPROC)0x0) {
      pHVar4 = GetModuleHandleA("lua_shared.dll");
      DAT_180425540 = GetProcAddress(pHVar4,"lua_settop");
    }
    (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);
  }
  return;
}



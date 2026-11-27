// 0x180054350  FUN_180054350
// size=2246 thunk=false
// signature: undefined FUN_180054350()
// status: ok


void FUN_180054350(longlong *param_1)

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
      FUN_180014410("[LUAENGINE] api table unavailable -- persist not ready\n");
    }
    else if (DAT_1803fcbe0 != (code *)0x0) {
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180054c20);
      (*pcVar2)(lVar1,0xfffffffe,"ServerCmd");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180054cf0);
      (*pcVar2)(lVar1,0xfffffffe,"ClientCmd");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180054d70);
      (*pcVar2)(lVar1,0xfffffffe,"ExecuteClientCmd");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180054df0);
      (*pcVar2)(lVar1,0xfffffffe,"ClientCmdUnrestricted");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180054e70);
      (*pcVar2)(lVar1,0xfffffffe,"SetRestrictServerCommands");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180054ef0);
      (*pcVar2)(lVar1,0xfffffffe,"SetRestrictClientCommands");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180054f70);
      (*pcVar2)(lVar1,0xfffffffe,"GetViewAngles");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180055050);
      (*pcVar2)(lVar1,0xfffffffe,"SetViewAngles");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800551e0);
      (*pcVar2)(lVar1,0xfffffffe,"GetLocalPlayer");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180055270);
      (*pcVar2)(lVar1,0xfffffffe,"IsInGame");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800552f0);
      (*pcVar2)(lVar1,0xfffffffe,"IsConnected");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180055370);
      (*pcVar2)(lVar1,0xfffffffe,"GetGameDirectory");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180055400);
      (*pcVar2)(lVar1,0xfffffffe,"GetTime");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180055480);
      (*pcVar2)(lVar1,0xfffffffe,"GetLastTimeStamp");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180055500);
      (*pcVar2)(lVar1,0xfffffffe,"IsBoxVisible");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800555d0);
      (*pcVar2)(lVar1,0xfffffffe,"IsBoxInViewCluster");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800556a0);
      (*pcVar2)(lVar1,0xfffffffe,"IsOccluded");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180055770);
      (*pcVar2)(lVar1,0xfffffffe,"RawClientCmdUnrestricted");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180055830);
      (*pcVar2)(lVar1,0xfffffffe,"ExcludeFromCapture");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180055b20);
      (*pcVar2)(lVar1,0xfffffffe,"SetInterpolation");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180055cf0);
      (*pcVar2)(lVar1,0xfffffffe,"GetInterpolation");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180055d00);
      (*pcVar2)(lVar1,0xfffffffe,"GetClipboardText");
      (*pcVar2)(lVar1,0xfffffffe,"engine");
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180055dd0);
      (*pcVar2)(lVar1,0xfffffffe,"CurTime");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180055e30);
      (*pcVar2)(lVar1,0xfffffffe,"SetCurTime");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180055ea0);
      (*pcVar2)(lVar1,0xfffffffe,"FrameTime");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180055f00);
      (*pcVar2)(lVar1,0xfffffffe,"SetFrameTime");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180055f80);
      (*pcVar2)(lVar1,0xfffffffe,"RealTime");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180055fe0);
      (*pcVar2)(lVar1,0xfffffffe,"SetRealTime");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180056060);
      (*pcVar2)(lVar1,0xfffffffe,"FrameCount");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800560d0);
      (*pcVar2)(lVar1,0xfffffffe,"SetFrameCount");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180056150);
      (*pcVar2)(lVar1,0xfffffffe,"AbsFrameTime");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800561b0);
      (*pcVar2)(lVar1,0xfffffffe,"SetAbsFrameTime");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180056230);
      (*pcVar2)(lVar1,0xfffffffe,"InterpolationAmount");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180056290);
      (*pcVar2)(lVar1,0xfffffffe,"SetInterpolationAmount");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180056310);
      (*pcVar2)(lVar1,0xfffffffe,"TickCount");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180056380);
      (*pcVar2)(lVar1,0xfffffffe,"IntervalPerTick");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800563e0);
      (*pcVar2)(lVar1,0xfffffffe,"MaxClients");
      (*pcVar2)(lVar1,0xfffffffe,"globals");
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180056450);
      (*pcVar2)(lVar1,0xfffffffe,"Exists");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800564f0);
      (*pcVar2)(lVar1,0xfffffffe,"GetFloat");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800565b0);
      (*pcVar2)(lVar1,0xfffffffe,"GetInt");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180056670);
      (*pcVar2)(lVar1,0xfffffffe,"GetString");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180056770);
      (*pcVar2)(lVar1,0xfffffffe,"GetFlags");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800569d0);
      (*pcVar2)(lVar1,0xfffffffe,"SetFloat");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180056b80);
      (*pcVar2)(lVar1,0xfffffffe,"SetInt");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180056d30);
      (*pcVar2)(lVar1,0xfffffffe,"SetString");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180056d40);
      (*pcVar2)(lVar1,0xfffffffe,"SetDefault");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180056e80);
      (*pcVar2)(lVar1,0xfffffffe,"SetViaConsole");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180057040);
      (*pcVar2)(lVar1,0xfffffffe,"Unlock");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180057140);
      (*pcVar2)(lVar1,0xfffffffe,"IsLinkedChild");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180057240);
      (*pcVar2)(lVar1,0xfffffffe,"SetFlags");
      (*pcVar2)(lVar1,0xfffffffe,&DAT_180344334);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180057360);
      (*pcVar2)(lVar1,0xfffffffe,"MD5PseudoRandom");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180057410);
      (*pcVar2)(lVar1,0xfffffffe,"PredictSpread");
      if (DAT_180425540 == (FARPROC)0x0) {
        pHVar4 = GetModuleHandleA("lua_shared.dll");
        DAT_180425540 = GetProcAddress(pHVar4,"lua_settop");
      }
      (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);
      FUN_180014410("[LUAENGINE] engine, globals and cvar tables registered\n");
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



// 0x180047bf0  FUN_180047bf0
// size=1346 thunk=false
// signature: undefined FUN_180047bf0()
// status: ok


void FUN_180047bf0(longlong *param_1)

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
    cVar3 = FUN_1800260c0(lVar1,0xa66cb242adaa3914);
    pcVar2 = DAT_1803fcbe0;
    if (cVar3 == '\0') {
      FUN_180014410("[LUAVGUI] overlay table unavailable -- persist not ready\n");
    }
    else if (DAT_1803fcbe0 != (code *)0x0) {
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180048140);
      (*pcVar2)(lVar1,0xfffffffe,"SetDrawColor");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180048190);
      (*pcVar2)(lVar1,0xfffffffe,"SetTextColor");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800481e0);
      (*pcVar2)(lVar1,0xfffffffe,"SetTextPos");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800482b0);
      (*pcVar2)(lVar1,0xfffffffe,"DrawRect");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800486b0);
      (*pcVar2)(lVar1,0xfffffffe,"DrawOutlinedRect");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800486c0);
      (*pcVar2)(lVar1,0xfffffffe,"DrawLine");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180048850);
      (*pcVar2)(lVar1,0xfffffffe,"DrawText");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180048a70);
      (*pcVar2)(lVar1,0xfffffffe,"GetTextSize");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180048b40);
      (*pcVar2)(lVar1,0xfffffffe,"SetFont");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180048bc0);
      (*pcVar2)(lVar1,0xfffffffe,"CreateFont");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180048d20);
      (*pcVar2)(lVar1,0xfffffffe,"SetMaterial");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180048d50);
      (*pcVar2)(lVar1,0xfffffffe,"DrawTexturedRect");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180048d80);
      (*pcVar2)(lVar1,0xfffffffe,"DrawTexturedRectRotated");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180048db0);
      (*pcVar2)(lVar1,0xfffffffe,"DrawPoly");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180048de0);
      (*pcVar2)(lVar1,0xfffffffe,"SetDrawColorMaterial");
      (*pcVar2)(lVar1,0xfffffffe,"surface");
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180049040);
      (*pcVar2)(lVar1,0xfffffffe,"RoundedBox");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180049040);
      (*pcVar2)(lVar1,0xfffffffe,"RoundedBoxEx");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180049480);
      (*pcVar2)(lVar1,0xfffffffe,"SimpleText");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180049830);
      (*pcVar2)(lVar1,0xfffffffe,"DrawText");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180049840);
      (*pcVar2)(lVar1,0xfffffffe,"TexturedQuad");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180049870);
      (*pcVar2)(lVar1,0xfffffffe,&DAT_180342d00);
      (*pcVar2)(lVar1,0xfffffffe,&DAT_180342e44);
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,vfunc_shared_1800139e0);
      (*pcVar2)(lVar1,0xfffffffe,"Start2D");
      (**(code **)(*param_1 + 0x100))(param_1,vfunc_shared_1800139e0);
      (*pcVar2)(lVar1,0xfffffffe,"End2D");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800498a0);
      (*pcVar2)(lVar1,0xfffffffe,"Start3D");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800498d0);
      (*pcVar2)(lVar1,0xfffffffe,"End3D");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180049900);
      (*pcVar2)(lVar1,0xfffffffe,"Start3D2D");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180049930);
      (*pcVar2)(lVar1,0xfffffffe,"End3D2D");
      (*pcVar2)(lVar1,0xfffffffe,&DAT_180342e60);
      if (DAT_180425540 == (FARPROC)0x0) {
        pHVar4 = GetModuleHandleA("lua_shared.dll");
        DAT_180425540 = GetProcAddress(pHVar4,"lua_settop");
      }
      (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);
      FUN_180014410("[LUAVGUI] overlay shims registered (surface, draw, cam)\n");
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



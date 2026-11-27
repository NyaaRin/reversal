// 0x1801393d0  FUN_1801393d0
// size=358 thunk=false
// signature: undefined FUN_1801393d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801393d0(char param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  FUN_180014410("[AS] ---- diagnostics (app %u) - build %s %s ----\n",4000,"Sep  7 2026","21:33:34")
  ;
  FUN_180136d80(&DAT_18035b304,DAT_180409c80);
  if ((DAT_180409c29 == '\0') || (lVar5 = DAT_180409c38, DAT_180409c38 == 0)) {
    uVar3 = FUN_1801321e0();
    plVar4 = (longlong *)FUN_1801323e0(uVar3);
    if (plVar4 == (longlong *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar4;
    }
  }
  FUN_180136d80(&DAT_1803476ec,lVar5);
  if (param_1 != '\0') {
    if ((DAT_180409c29 == '\0') || (lVar5 = DAT_180409c38, DAT_180409c38 == 0)) {
      uVar3 = FUN_1801321e0();
      plVar4 = (longlong *)FUN_1801323e0(uVar3);
      if (plVar4 == (longlong *)0x0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *plVar4;
      }
    }
    uVar1 = FUN_180136c90(lVar5);
    uVar2 = FUN_180136c90(DAT_180409c80);
    FUN_180014410("[AS] diag blob: ours=%d game=%d (one game connect token each)\n",uVar2,uVar1);
    lVar5 = FUN_1801321e0();
    if (lVar5 == 0) {
      iVar6 = 0;
      uVar1 = 0;
    }
    else {
      local_18 = 0;
      iVar6 = FUN_1801322f0(lVar5);
      uVar1 = local_18;
      if (iVar6 != 0) {
        FUN_180132370(lVar5,iVar6);
        uVar1 = local_18;
      }
    }
    FUN_180014410("[AS] diag ticket: ISteamUser::GetAuthSessionTicket -> handle=%u bytes=%u (0 = refused; NOT proof of a good session - a healthy-looking handle still got rejected by a server on 2026-08-24)\n"
                  ,iVar6,uVar1);
    return;
  }
  FUN_180014410(
               "[AS] diag ticket: skipped - a probe costs one of the 100 auth tickets this user will ever get. Ctrl+click Diagnose to spend one on purpose.\n"
               );
  return;
}



// 0x18014a690  FUN_18014a690
// size=600 thunk=false
// signature: undefined FUN_18014a690()
// status: ok


void FUN_18014a690(longlong param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  size_t sVar7;
  undefined8 ***pppuVar8;
  undefined8 *puVar9;
  char *pcVar10;
  undefined8 **local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  DAT_180409ae0 = 0;
  DAT_1803e83a4 = 0xffffffff;
  DAT_180409b88 = 0;
  DAT_1803e8450 = 0xffffffff;
  if (((param_2 == 0) || (param_2 != *(longlong *)(param_1 + 0x10))) ||
     (param_2 != *(longlong *)(param_1 + 0x50))) {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_180014410("[Toolbox] restore SKIPPED: no snapshot for this entity (owner=%p local=%p idx=%d)\n"
                    ,*(undefined8 *)(param_1 + 0x50),param_2,*(undefined4 *)(param_1 + 0x60));
    }
    if (param_2 == 0) goto LAB_18014a8a2;
  }
  else {
    if (*(int *)(param_1 + 0x60) < 0) {
LAB_18014a727:
      lVar1 = *(longlong *)(param_1 + 0x58);
      if (lVar1 != 0) {
        cVar4 = FUN_1801477c0(param_2,lVar1,1);
        if (cVar4 != '\0') {
          lVar1 = *(longlong *)(param_1 + 0x58);
          lVar6 = FUN_1801475e0(param_2);
          if (lVar6 == lVar1) {
            bVar3 = true;
            goto LAB_18014a758;
          }
        }
      }
      bVar3 = false;
    }
    else {
      cVar4 = FUN_1801478f0(param_2);
      if (cVar4 == '\0') goto LAB_18014a727;
      lVar1 = *(longlong *)(param_1 + 0x58);
      if (lVar1 != 0) {
        lVar6 = FUN_1801475e0(param_2);
        if (lVar6 != lVar1) goto LAB_18014a727;
      }
      bVar3 = true;
    }
LAB_18014a758:
    pcVar10 = "FAILED";
    if (bVar3) {
      pcVar10 = "OK";
    }
    FUN_180014410("[Toolbox] restore idx=%d model=%p -> %s\n",*(undefined4 *)(param_1 + 0x60),
                  *(undefined8 *)(param_1 + 0x58),pcVar10);
  }
  if (DAT_1803fa668 != (longlong *)0x0) {
    cVar4 = (**(code **)(*DAT_1803fa668 + 0xd0))();
    if (cVar4 != '\0') {
      cVar4 = FUN_180147b40();
      pcVar10 = "UNAVAILABLE";
      if (cVar4 != '\0') {
        pcVar10 = "OK";
      }
      FUN_180014410("[Toolbox] full-update requested -> %s\n",pcVar10);
      pcVar10 = "Model restored (full-update sig OUTDATED - snapshot only)";
      if (cVar4 != '\0') {
        pcVar10 = "Model restored - server re-sync requested";
      }
      local_48 = (undefined8 ***)0x0;
      uStack_40 = 0;
      local_38 = 0;
      local_30 = 0;
      sVar7 = strlen(pcVar10);
      FUN_18001d080(&local_48,pcVar10,sVar7);
      iVar5 = _Mtx_lock(&DAT_1803e8400);
      if (iVar5 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (DAT_1803e844c == 0x7fffffff) {
        DAT_1803e844c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      pppuVar8 = &local_48;
      if (0xf < local_30) {
        pppuVar8 = (undefined8 ***)local_48;
      }
      FUN_180212700(s_Ready_1803e9eb8,pppuVar8,local_38);
      _Mtx_unlock(&DAT_1803e8400);
      FUN_18020e450(&local_48);
    }
  }
LAB_18014a8a2:
  *(undefined8 *)(param_1 + 0x24) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  puVar9 = (undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x48)) {
    puVar9 = (undefined8 *)*puVar9;
  }
  *(undefined1 *)puVar9 = 0;
  FUN_1801488a0();
  return;
}



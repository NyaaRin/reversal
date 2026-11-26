// 0x180136ab0  FUN_180136ab0
// size=470 thunk=false
// signature: undefined FUN_180136ab0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180136ab0(char *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 auStack_58 [32];
  char *local_38;
  undefined *local_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  FUN_180134f10();
  local_30 = &DAT_1803e86b0;
  iVar3 = _Mtx_lock(&DAT_1803e86b0);
  if (iVar3 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803e86fc == 0x7fffffff) {
    DAT_1803e86fc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  pcVar8 = DAT_1803eb7c0;
  pcVar6 = DAT_1803eb7b8;
  pcVar7 = DAT_1803eb7c0;
  if (DAT_1803eb7b8 != DAT_1803eb7c0) {
    do {
      pcVar7 = param_1;
      if (0xf < *(ulonglong *)(param_1 + 0x18)) {
        pcVar7 = *(char **)param_1;
      }
      pcVar4 = pcVar6;
      if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
        pcVar4 = *(char **)pcVar6;
      }
      iVar3 = _stricmp(pcVar4,pcVar7);
    } while ((iVar3 != 0) && (pcVar6 = pcVar6 + 0x48, pcVar6 != pcVar8));
    pcVar7 = DAT_1803eb7c0;
    if (pcVar6 != pcVar8) {
      pcVar7 = pcVar6 + 0x48;
      pcVar4 = DAT_1803eb7c0;
      if (pcVar7 != pcVar8) {
        do {
          pcVar4 = param_1;
          if (0xf < *(ulonglong *)(param_1 + 0x18)) {
            pcVar4 = *(char **)param_1;
          }
          pcVar5 = pcVar7;
          if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
            pcVar5 = *(char **)pcVar7;
          }
          iVar3 = _stricmp(pcVar5,pcVar4);
          if (iVar3 != 0) {
            FUN_18020e8a0(pcVar6,pcVar7);
            *(undefined8 *)(pcVar6 + 0x20) = *(undefined8 *)(pcVar7 + 0x20);
            FUN_18020e8a0(pcVar6 + 0x28,pcVar7 + 0x28);
            pcVar6 = pcVar6 + 0x48;
          }
          pcVar7 = pcVar7 + 0x48;
        } while (pcVar7 != pcVar8);
        pcVar7 = DAT_1803eb7c0;
        pcVar4 = DAT_1803eb7c0;
        if (pcVar6 == pcVar8) goto LAB_180136c58;
      }
      for (; pcVar7 = DAT_1803eb7c0, bVar2 = pcVar8 != DAT_1803eb7c0, pcVar5 = pcVar6,
          DAT_1803eb7c0 = pcVar4, bVar2; pcVar8 = pcVar8 + 0x48) {
        FUN_18020e8a0(pcVar6,pcVar8);
        *(undefined8 *)(pcVar6 + 0x20) = *(undefined8 *)(pcVar8 + 0x20);
        FUN_18020e8a0(pcVar6 + 0x28,pcVar8 + 0x28);
        pcVar6 = pcVar6 + 0x48;
        pcVar4 = DAT_1803eb7c0;
        DAT_1803eb7c0 = pcVar7;
      }
      for (; pcVar7 = pcVar6, local_38 = pcVar5, pcVar5 != pcVar4; pcVar5 = pcVar5 + 0x48) {
        FUN_18020e450(pcVar5 + 0x28);
        FUN_18020e450(pcVar5);
      }
    }
  }
LAB_180136c58:
  DAT_1803eb7c0 = pcVar7;
  _Mtx_unlock(&DAT_1803e86b0);
  FUN_1801365b0();
  return;
}



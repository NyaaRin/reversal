// 1801542d0  FUN_1801542d0
// signature: undefined FUN_1801542d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801542d0(void)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  BOOL BVar5;
  char *pcVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined *local_58;
  DWORD local_40 [2];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  pcVar6 = (char *)FUN_180152220();
  uVar7 = *pcVar6 != '\0' | 2;
  if (pcVar6[1] == '\0') {
    uVar7 = (uint)(*pcVar6 != '\0');
  }
  uVar3 = uVar7 | 4;
  if (pcVar6[2] == '\0') {
    uVar3 = uVar7;
  }
  uVar7 = uVar3 | 8;
  if (pcVar6[3] == '\0') {
    uVar7 = uVar3;
  }
  uVar3 = uVar7 | 0x10;
  if (pcVar6[4] == '\0') {
    uVar3 = uVar7;
  }
  uVar7 = uVar3 | 0x20;
  if (pcVar6[5] == '\0') {
    uVar7 = uVar3;
  }
  uVar3 = uVar7 | 0x40;
  if (pcVar6[7] == '\0') {
    uVar3 = uVar7;
  }
  uVar7 = uVar3 | 0x80;
  if (pcVar6[8] == '\0') {
    uVar7 = uVar3;
  }
  local_58 = &DAT_1803e79f0;
  DAT_180400af0 = uVar7;
  iVar4 = _Mtx_lock(&DAT_1803e79f0);
  if (iVar4 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803e7a3c == 0x7fffffff) {
    DAT_1803e7a3c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  if (DAT_180400af8 != (HANDLE)0x0) {
    local_40[0] = 0;
    BVar5 = GetExitCodeProcess(DAT_180400af8,local_40);
    if (((BVar5 != 0) && (local_40[0] == 0x103)) && (DAT_180400b04 == uVar7)) goto LAB_180154430;
    FUN_180153bc0();
  }
  if (uVar7 != 0) {
    FUN_18014e3b0(local_38);
    cVar2 = FUN_18014e280(local_38);
    if (cVar2 == '\0') {
      if (DAT_180400b00 != uVar7) {
        FUN_180014410("[DATA] post-exit cleaner failed: game root unresolved\n");
      }
    }
    else {
      FUN_180153c60(uVar7,local_38);
      uVar7 = DAT_180400b00;
    }
    DAT_180400b00 = uVar7;
    FUN_18021e290(local_38);
  }
LAB_180154430:
  _Mtx_unlock(&DAT_1803e79f0);
  return;
}



// 0x18013ed20  FUN_18013ed20
// size=441 thunk=false
// signature: undefined FUN_18013ed20()
// status: ok


ulonglong FUN_18013ed20(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  byte bVar2;
  longlong *plVar3;
  int iVar4;
  size_t sVar5;
  ulonglong uVar6;
  undefined8 ****ppppuVar7;
  char cVar8;
  char *_Str;
  undefined8 *puVar9;
  undefined8 ***local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  undefined *local_18;
  
  plVar3 = DAT_180409c80;
  if (*(char *)(param_1 + 4) == '\0') {
    puVar9 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar9 = (undefined8 *)*param_1;
    }
    iVar4 = FUN_1801318c0(DAT_180409c80,param_2,"Set2ndFactorAuthCode");
    if (iVar4 < 0) {
      cVar8 = '\0';
      goto LAB_18013edbb;
    }
    (**(code **)(*plVar3 + (longlong)iVar4 * 8))(plVar3,puVar9,0);
  }
  else {
    puVar9 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar9 = (undefined8 *)*param_1;
    }
    iVar4 = FUN_1801318c0(DAT_180409c80,param_2,"SetTwoFactorCode");
    if (iVar4 < 0) {
      cVar8 = '\0';
      goto LAB_18013edbb;
    }
    (**(code **)(*plVar3 + (longlong)iVar4 * 8))(plVar3,puVar9);
  }
  cVar8 = '\x01';
LAB_18013edbb:
  FUN_180014410("[AS] code submitted out of band (twoFactor=%d, accepted=%d)\n",
                *(char *)(param_1 + 4) != '\0',cVar8);
  if (cVar8 == '\0') {
    _Str = "Set2ndFactorAuthCode is missing from IClientUser";
    if (*(char *)(param_1 + 4) != '\0') {
      _Str = "SetTwoFactorCode is missing from IClientUser";
    }
    local_38 = (undefined8 ****)0x0;
    uStack_30 = 0;
    local_28 = 0;
    local_20 = 0;
    sVar5 = strlen(_Str);
    FUN_18001d080(&local_38,_Str,sVar5);
    local_18 = &DAT_1803e85c0;
    iVar4 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar4 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    ppppuVar7 = &local_38;
    if (0xf < local_20) {
      ppppuVar7 = (undefined8 ****)local_38;
    }
    FUN_180212700(&DAT_1803e9e20,ppppuVar7,local_28);
    _Mtx_unlock(&DAT_1803e85c0);
    FUN_18020e450(&local_38);
    LOCK();
    DAT_180409c24 = 5;
    UNLOCK();
  }
  else {
    FUN_18013ca40(*(undefined1 *)((longlong)param_1 + 0x21),180000,0x110000100000000);
  }
  bVar2 = DAT_180409c59;
  LOCK();
  DAT_180409c59 = 0;
  UNLOCK();
  return (ulonglong)bVar2;
}



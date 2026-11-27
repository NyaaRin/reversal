// 0x1800672c0  FUN_1800672c0
// size=399 thunk=false
// signature: undefined FUN_1800672c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1800672c0(wchar_t *param_1,uint param_2,undefined8 *param_3,longlong param_4)

{
  undefined8 uVar1;
  int iVar2;
  size_t sVar3;
  uint *puVar4;
  wchar_t *_Str;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 *local_50 [2];
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  local_78 = 0;
  _Str = param_1;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    _Str = *(wchar_t **)param_1;
  }
  sVar3 = wcslen(_Str);
  if ((sVar3 == 0) || (sVar3 != *(size_t *)(param_1 + 8))) {
    iVar2 = 2;
  }
  else {
    FUN_18020e540(local_40,param_1);
    local_50[0] = &local_70;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    local_58 = 0;
    FUN_180211510(&local_70,&DAT_180345b50,1);
    local_78 = 0;
    FUN_1800654d0(param_1,&local_70);
    FUN_18021e290(&local_70);
    if (7 < *(ulonglong *)(param_1 + 0xc)) {
      param_1 = *(wchar_t **)param_1;
    }
    iVar2 = FUN_1802d7920(param_1,param_3,param_4);
    if (iVar2 == 0) {
      uVar1 = *param_3;
      do {
        if ((*(short *)(param_4 + 0x2c) != 0x2e) ||
           ((*(short *)(param_4 + 0x2e) != 0 &&
            ((*(short *)(param_4 + 0x2e) != 0x2e || (*(short *)(param_4 + 0x30) != 0)))))) {
          iVar2 = 0;
          break;
        }
        iVar2 = FUN_1802d78e0(uVar1,param_4);
      } while (iVar2 == 0);
    }
    else if (iVar2 == 5) {
      if ((param_2 & 2) != 0) {
        iVar2 = 0x12;
      }
    }
    else if ((iVar2 == 2) && (puVar4 = (uint *)FUN_180067c80(local_50,local_40), 1 < *puVar4)) {
      iVar2 = 0x12;
    }
    FUN_18021e290(local_40);
  }
  return iVar2;
}



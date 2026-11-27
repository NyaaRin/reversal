// 0x18016e030  FUN_18016e030
// size=447 thunk=false
// signature: undefined FUN_18016e030()
// status: ok


char * FUN_18016e030(longlong param_1,char *param_2,longlong *param_3)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  size_t sVar7;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  char *_Str2;
  
  param_2[0] = '\0';
  param_2[1] = '\0';
  param_2[2] = '\0';
  param_2[3] = '\0';
  param_2[4] = '\0';
  param_2[5] = '\0';
  param_2[6] = '\0';
  param_2[7] = '\0';
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = '\0';
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  param_2[0x18] = '\x0f';
  param_2[0x19] = '\0';
  param_2[0x1a] = '\0';
  param_2[0x1b] = '\0';
  param_2[0x1c] = '\0';
  param_2[0x1d] = '\0';
  param_2[0x1e] = '\0';
  param_2[0x1f] = '\0';
  *param_2 = '\0';
  _Str2 = param_2 + 0x20;
  _Str2[0] = '\0';
  _Str2[1] = '\0';
  _Str2[2] = '\0';
  _Str2[3] = '\0';
  _Str2[4] = '\0';
  _Str2[5] = '\0';
  _Str2[6] = '\0';
  _Str2[7] = '\0';
  param_2[0x28] = '\0';
  param_2[0x29] = '\0';
  param_2[0x2a] = '\0';
  param_2[0x2b] = '\0';
  param_2[0x2c] = '\0';
  param_2[0x2d] = '\0';
  param_2[0x2e] = '\0';
  param_2[0x2f] = '\0';
  param_2[0x30] = '\0';
  param_2[0x31] = '\0';
  param_2[0x32] = '\0';
  param_2[0x33] = '\0';
  param_2[0x34] = '\0';
  param_2[0x35] = '\0';
  param_2[0x36] = '\0';
  param_2[0x37] = '\0';
  param_2[0x38] = '\x0f';
  param_2[0x39] = '\0';
  param_2[0x3a] = '\0';
  param_2[0x3b] = '\0';
  param_2[0x3c] = '\0';
  param_2[0x3d] = '\0';
  param_2[0x3e] = '\0';
  param_2[0x3f] = '\0';
  *_Str2 = '\0';
  param_2[0x40] = '\0';
  pcVar1 = DAT_1803fed38;
  param_2[0x41] = '\0';
  if (DAT_1803fed38 == (code *)0x0) {
    pcVar10 = "unknown";
  }
  else {
    FUN_18001c560(param_3);
    pcVar10 = (char *)(*pcVar1)();
    if ((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) goto LAB_18016e0fc;
  }
  lVar8 = 0;
  do {
    lVar9 = lVar8 + 1;
    if (pcVar10[lVar8] != "unknown"[lVar8]) {
      sVar7 = strlen(pcVar10);
      FUN_180212700(_Str2,pcVar10,sVar7);
      break;
    }
    lVar8 = lVar9;
  } while (lVar9 != 8);
LAB_18016e0fc:
  plVar6 = (longlong *)(**(code **)(*param_3 + 0x20))(param_3);
  if (plVar6 != (longlong *)0x0) {
    uVar3 = FUN_18001f7d0(param_3);
    uVar4 = (**(code **)(*plVar6 + 0x48))(plVar6);
    pcVar10 = (char *)FUN_1800395c0(uVar4,uVar3);
    if ((pcVar10 != (char *)0x0) && (*pcVar10 != '\0')) {
      sVar7 = strlen(pcVar10);
      FUN_180212700(param_2,pcVar10,sVar7);
    }
  }
  if ((*(longlong *)(param_2 + 0x10) == 0) || (*(longlong *)(param_2 + 0x30) == 0)) {
    param_2[0x40] = '\0';
  }
  else {
    param_2[0x40] = '\x01';
    if (*(int *)(param_1 + 0xfc) == 1) {
      cVar2 = FUN_18016d900(param_2,_Str2);
      if ((cVar2 == '\0') && (cVar2 = FUN_18016d900(_Str2,param_2), cVar2 == '\0')) {
        param_2[0x41] = '\x01';
        return param_2;
      }
    }
    else {
      if (0xf < *(ulonglong *)(param_2 + 0x38)) {
        _Str2 = *(char **)_Str2;
      }
      pcVar10 = param_2;
      if (0xf < *(ulonglong *)(param_2 + 0x18)) {
        pcVar10 = *(char **)param_2;
      }
      iVar5 = _stricmp(pcVar10,_Str2);
      if (iVar5 != 0) {
        param_2[0x41] = '\x01';
        return param_2;
      }
    }
  }
  param_2[0x41] = '\0';
  return param_2;
}



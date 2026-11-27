// 18019a680  FUN_18019a680
// signature: undefined FUN_18019a680()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18019a680(char *param_1)

{
  size_t _Size;
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_38 [32];
  char *local_18;
  ulonglong local_10;
  
  _Size = DAT_1803de100;
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  local_18 = param_1;
  if (DAT_1803facfd == '\0') {
    if (DAT_1803de100 != 0) {
      sVar2 = strlen(param_1);
      puVar4 = &DAT_1803de0f0;
      if (0xf < DAT_1803de108) {
        puVar4 = DAT_1803de0f0;
      }
      if ((_Size == sVar2) && ((_Size == 0 || (iVar1 = memcmp(puVar4,param_1,_Size), iVar1 == 0))))
      {
        DAT_1803de100 = 0;
        puVar4 = &DAT_1803de0f0;
        if (0xf < DAT_1803de108) {
          puVar4 = DAT_1803de0f0;
        }
        *(undefined1 *)puVar4 = 0;
        FUN_180280fd0(param_1);
      }
    }
    uVar3 = FUN_180281720(param_1,0);
    return uVar3;
  }
  if (DAT_1803fcbf8 == DAT_1803fcc00) {
    FUN_180221c00(&DAT_1803fcbf0,DAT_1803fcbf8,&local_18);
    return 1;
  }
  *DAT_1803fcbf8 = param_1;
  DAT_1803fcbf8 = DAT_1803fcbf8 + 1;
  return 1;
}



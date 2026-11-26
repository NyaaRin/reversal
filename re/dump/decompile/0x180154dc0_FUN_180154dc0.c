// 0x180154dc0  FUN_180154dc0
// size=344 thunk=false
// signature: undefined FUN_180154dc0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180154dc0(undefined8 *param_1,byte *param_2)

{
  int iVar1;
  ulonglong uVar2;
  size_t sVar3;
  byte bVar4;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  undefined8 local_230;
  char local_228 [512];
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_258;
  local_238 = 0;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(byte **)param_2;
  }
  local_228[0] = '\0';
  local_230 = param_1;
  if (param_2 != (byte *)0x0) {
    for (; ((bVar4 = *param_2, bVar4 == 0x2f || (bVar4 == 0x5c)) ||
           ((bVar4 == 0x2e && ((param_2[1] == 0x2f || (param_2[1] == 0x5c))))));
        param_2 = param_2 + (ulonglong)(bVar4 == 0x2e) + 1) {
    }
    uVar2 = 0;
    if (bVar4 != 0) {
      do {
        if (0x1ff < uVar2 + 1) break;
        bVar4 = *param_2;
        if (bVar4 == 0x5c) {
          bVar4 = 0x2f;
LAB_180154e6e:
          if ((uVar2 != 0) && (local_228[uVar2 - 1] != '/')) goto LAB_180154e8b;
        }
        else {
          if (bVar4 == 0x2f) goto LAB_180154e6e;
LAB_180154e8b:
          iVar1 = tolower((uint)bVar4);
          local_228[uVar2] = (char)iVar1;
          uVar2 = uVar2 + 1;
        }
        param_2 = param_2 + 1;
      } while (*param_2 != 0);
      for (; (uVar2 != 0 && (local_228[uVar2 - 1] == '/')); uVar2 = uVar2 - 1) {
      }
    }
    local_228[uVar2] = '\0';
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  sVar3 = strlen(local_228);
  FUN_18001d080(param_1,local_228,sVar3);
  return param_1;
}



// 0x18006c500  FUN_18006c500
// size=531 thunk=false
// signature: undefined FUN_18006c500()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18006c500(char *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  undefined1 auStack_2a8 [32];
  char *local_288;
  char local_278 [576];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_2a8;
  if (*param_1 != '\0') {
    return;
  }
  iVar6 = *(int *)(param_1 + 0xc);
  if (iVar6 < 4) {
    return;
  }
  uVar2 = 3;
  local_278[0] = '\0';
  local_278[1] = '\0';
  local_278[2] = '\0';
  local_278[3] = '\0';
  local_278[4] = '\0';
  local_278[5] = '\0';
  local_278[6] = '\0';
  local_278[7] = '\0';
  local_278[8] = '\0';
  local_278[9] = '\0';
  local_278[10] = '\0';
  local_278[0xb] = '\0';
  local_278[0xc] = '\0';
  local_278[0xd] = '\0';
  local_278[0xe] = '\0';
  local_278[0xf] = '\0';
  iVar5 = 0;
  local_278[0x10] = '\0';
  local_278[0x11] = '\0';
  local_278[0x12] = '\0';
  local_278[0x13] = '\0';
  local_278[0x14] = '\0';
  local_278[0x15] = '\0';
  local_278[0x16] = '\0';
  local_278[0x17] = '\0';
  local_278[0x18] = '\0';
  local_278[0x19] = '\0';
  local_278[0x1a] = '\0';
  local_278[0x1b] = '\0';
  local_278[0x1c] = '\0';
  local_278[0x1d] = '\0';
  local_278[0x1e] = '\0';
  local_278[0x1f] = '\0';
  local_278[0x20] = '\0';
  local_278[0x21] = '\0';
  local_278[0x22] = '\0';
  local_278[0x23] = '\0';
  local_278[0x24] = '\0';
  local_278[0x25] = '\0';
  local_278[0x26] = '\0';
  local_278[0x27] = '\0';
  local_278[0x28] = '\0';
  local_278[0x29] = '\0';
  local_278[0x2a] = '\0';
  local_278[0x2b] = '\0';
  local_278[0x2c] = '\0';
  local_278[0x2d] = '\0';
  local_278[0x2e] = '\0';
  local_278[0x2f] = '\0';
  while ((cVar1 = param_1[(ulonglong)uVar2 + 0x54], cVar1 != '\0' && (iVar5 < 0x2f))) {
    if (0x5e < (byte)(cVar1 - 0x20U)) {
      return;
    }
    lVar4 = (longlong)iVar5;
    uVar2 = uVar2 + 1;
    iVar5 = iVar5 + 1;
    local_278[lVar4] = cVar1;
    if (iVar6 <= (int)uVar2) {
      return;
    }
  }
  if (param_1[(longlong)(int)uVar2 + 0x54] != '\0') {
    return;
  }
  if (iVar5 == 0) {
    return;
  }
  iVar5 = uVar2 + 5;
  if (iVar6 < iVar5) {
    return;
  }
  uVar7 = iVar6 - iVar5;
  uVar10 = CONCAT31(CONCAT21(CONCAT11(param_1[(longlong)(int)uVar2 + 0x58],
                                      param_1[(longlong)(int)(uVar2 + 3) + 0x54]),
                             param_1[(longlong)(int)(uVar2 + 2) + 0x54]),
                    param_1[(longlong)(int)(uVar2 + 1) + 0x54]);
  uVar2 = uVar7;
  if (uVar10 < uVar7) {
    uVar2 = uVar10;
  }
  iVar6 = 0;
  iVar8 = 0;
  if (0 < (int)uVar2) {
    do {
      if (0x202 < iVar6) break;
      cVar1 = param_1[(longlong)(iVar8 + iVar5) + 0x54];
      if ((byte)(cVar1 - 0x20U) < 0x5f) {
        local_278[(longlong)iVar6 + 0x30] = cVar1;
        iVar3 = 1;
      }
      else {
        iVar3 = FUN_180012ac0(local_278 + (longlong)iVar6 + 0x30,0x208 - (longlong)iVar6,"\\x%02X",
                              cVar1);
      }
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + iVar3;
    } while (iVar8 < (int)uVar2);
  }
  if ((ulonglong)(longlong)iVar6 < 0x208) {
    local_278[(longlong)iVar6 + 0x30] = '\0';
    pcVar9 = "";
    if (uVar7 < uVar10) {
      pcVar9 = " (TRUNCATED by capture cap)";
    }
    local_288 = local_278 + 0x30;
    FUN_180014410("[NWCAP]   sub=\'%s\' bodyLen=%u%s body: %s\n",local_278,uVar10,pcVar9);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802d8348();
}



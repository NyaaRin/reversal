// 0x1800228e0  FUN_1800228e0
// size=1285 thunk=false
// signature: undefined FUN_1800228e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1800228e0(undefined8 *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char ****_Str;
  longlong *plVar4;
  undefined1 auStack_148 [32];
  longlong local_128;
  char *local_120;
  undefined8 local_118;
  undefined4 local_108;
  char ***local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  ulonglong uStack_e8;
  longlong local_e0;
  longlong lStack_d8;
  undefined8 *local_c8;
  char *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  longlong lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong alStack_50 [2];
  char acStack_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_148;
  local_108 = 1;
  local_c8 = param_1;
  local_b8 = param_2;
  if ((DAT_18042f188 & 1) == 0) {
    DAT_18042f188 = DAT_18042f188 | 1;
    _DAT_1805c7bd0 = 0;
    _DAT_1805c7bd8 = 0;
    _DAT_1805c7be0 = 0;
    uRam00000001805c7be8 = 0;
    DAT_1805c7bf0 = 0;
    FUN_18020df40(&DAT_1805c7bd0,"\\[string \"(.+)\"\\]:([0-9]+): (.*)");
    atexit(FUN_180308b30);
  }
  if ((DAT_18042f188 & 2) == 0) {
    DAT_18042f188 = DAT_18042f188 | 2;
    _DAT_180430130 = 0;
    _DAT_180430138 = 0;
    _DAT_180430140 = 0;
    uRam0000000180430148 = 0;
    DAT_180430150 = 0;
    FUN_18020df40(&DAT_180430130,"^(.*[^\\]]):([0-9]+): (.*)$");
    atexit(FUN_180308ae0);
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  lStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  alStack_50[0] = 0;
  alStack_50[1] = 0;
  acStack_40[0] = '\0';
  acStack_40[1] = '\0';
  acStack_40[2] = '\0';
  acStack_40[3] = '\0';
  acStack_40[4] = '\0';
  acStack_40[5] = '\0';
  acStack_40[6] = '\0';
  acStack_40[7] = '\0';
  plVar4 = (longlong *)(param_2 + 0x10);
  local_120 = param_2;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    local_120 = *(char **)param_2;
  }
  cVar1 = FUN_180210750(local_120,local_120 + *plVar4,&local_a8,&DAT_1805c7bd0);
  if (cVar1 == '\0') {
    local_120 = param_2;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      local_120 = *(char **)param_2;
    }
    cVar1 = FUN_180210750(local_120,local_120 + *plVar4,&local_a8,&DAT_180430130);
    if (cVar1 == '\0') {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0xf;
      *(undefined1 *)param_1 = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0xf;
      *(undefined1 *)(param_1 + 5) = 0;
      local_108 = 3;
      *(undefined4 *)(param_1 + 4) = 1;
      local_128 = *plVar4;
      if (0x7fffffffffffffffU - local_128 < 0x1d) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_118 = 0x1d;
      local_120 = " (Failed to parse the error!)";
      FUN_18020e930(&local_100);
      local_108 = 0x83;
      FUN_18020e8a0(param_1 + 5,&local_100);
      local_108 = 3;
      FUN_18020e450(&local_100);
      local_108 = 1;
      goto LAB_180022da8;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0xf;
  *(undefined1 *)(param_1 + 5) = 0;
  local_108 = 1;
  if ((ulonglong)((lStack_90 - local_98 >> 3) * -0x5555555555555555) < 2) {
    plVar4 = alStack_50;
    pcVar3 = acStack_40;
  }
  else {
    plVar4 = (longlong *)(local_98 + 0x18);
    pcVar3 = (char *)(local_98 + 0x28);
  }
  if (*pcVar3 == '\0') {
    local_e0 = 0;
    lStack_d8 = 0;
  }
  else {
    local_e0 = *plVar4;
    lStack_d8 = plVar4[1];
  }
  local_100 = (char ***)0x0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  if (local_e0 == lStack_d8) {
    local_f0 = _DAT_1803814b0;
    uStack_e8 = _UNK_1803814b8;
    local_100 = (char ***)0x0;
  }
  else {
    FUN_18001d080(&local_100,local_e0,lStack_d8 - local_e0);
  }
  local_108 = 5;
  FUN_18020e8a0(param_1,&local_100);
  local_108 = 1;
  FUN_18020e450(&local_100);
  if ((ulonglong)((lStack_90 - local_98 >> 3) * -0x5555555555555555) < 3) {
    plVar4 = alStack_50;
    pcVar3 = acStack_40;
  }
  else {
    plVar4 = (longlong *)(local_98 + 0x30);
    pcVar3 = (char *)(local_98 + 0x40);
  }
  if (*pcVar3 == '\0') {
    local_e0 = 0;
    lStack_d8 = 0;
  }
  else {
    local_e0 = *plVar4;
    lStack_d8 = plVar4[1];
  }
  local_100 = (char ***)0x0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  if (local_e0 == lStack_d8) {
    local_f0 = _DAT_1803814b0;
    uStack_e8 = _UNK_1803814b8;
    local_100 = (char ***)0x0;
  }
  else {
    FUN_18001d080(&local_100,local_e0,lStack_d8 - local_e0);
  }
  local_108 = 0x11;
  _Str = &local_100;
  if (0xf < uStack_e8) {
    _Str = (char ****)local_100;
  }
  iVar2 = atoi((char *)_Str);
  *(int *)(param_1 + 4) = iVar2;
  local_108 = 1;
  FUN_18020e450(&local_100);
  if ((ulonglong)((lStack_90 - local_98 >> 3) * -0x5555555555555555) < 4) {
    plVar4 = alStack_50;
    pcVar3 = acStack_40;
  }
  else {
    plVar4 = (longlong *)(local_98 + 0x48);
    pcVar3 = (char *)(local_98 + 0x58);
  }
  if (*pcVar3 == '\0') {
    local_e0 = 0;
    lStack_d8 = 0;
  }
  else {
    local_e0 = *plVar4;
    lStack_d8 = plVar4[1];
  }
  local_100 = (char ***)0x0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  if (local_e0 == lStack_d8) {
    local_f0 = _DAT_1803814b0;
    uStack_e8 = _UNK_1803814b8;
    local_100 = (char ***)0x0;
  }
  else {
    FUN_18001d080(&local_100,local_e0,lStack_d8 - local_e0);
  }
  local_108 = 0x21;
  FUN_18020e8a0(param_1 + 5,&local_100);
  local_108 = 1;
  FUN_18020e450(&local_100);
  local_108 = 0;
LAB_180022da8:
  FUN_18020abf0(&local_98);
  FUN_18020e450(param_2);
  return param_1;
}



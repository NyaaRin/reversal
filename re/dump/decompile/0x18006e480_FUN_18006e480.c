// 0x18006e480  FUN_18006e480
// size=420 thunk=false
// signature: undefined FUN_18006e480()
// status: ok


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_18006e480(undefined8 param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined1 auStack_1168 [32];
  undefined8 local_1148;
  undefined4 local_1140;
  char local_1138;
  char local_1137;
  undefined4 local_1134;
  undefined8 local_1130;
  char local_1128 [256];
  undefined1 local_1028 [4096];
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x18006e499;
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_1168;
  local_1130 = param_1;
  if (DAT_1803fefa8 == (code *)0x0) {
    cVar2 = '\0';
    local_1138 = '\0';
  }
  else {
    cVar2 = (*DAT_1803fefa8)();
    local_1138 = cVar2;
    if (cVar2 != '\0') {
      FUN_18006be90(param_1);
    }
  }
  if (((DAT_18042586d == '\0') || (DAT_1803e95f1 == '\0')) || (DAT_180425869 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (cVar2 == '\0') {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = FUN_18006df50(param_1);
  }
  local_1134 = uVar4;
  memset(local_1128,0,0x100);
  if ((cVar2 != '\0') && (bVar1)) {
    cVar3 = FUN_18006e130(uVar4,local_1128,0x100);
    if (cVar3 != '\0') {
      cVar3 = '\x01';
      goto LAB_18006e554;
    }
  }
  cVar3 = '\0';
LAB_18006e554:
  local_1137 = cVar3;
  if (bVar1) {
    uVar5 = FUN_18006df10(param_1);
    pcVar6 = local_1128;
    if (cVar3 == '\0') {
      pcVar6 = "GMod (in)";
    }
    local_1140 = 0;
    local_1148 = 0;
    FUN_18006b650(0,pcVar6,uVar5,uVar4);
  }
  if ((cVar2 != '\0') && (DAT_1803ffb90 != '\0')) {
    local_1134 = 0;
    uVar5 = FUN_18006bbb0(param_1,local_1028,0x1000,&local_1134);
    pcVar6 = local_1128;
    if (cVar3 == '\0') {
      pcVar6 = "";
    }
    local_1148 = CONCAT44(local_1148._4_4_,local_1134);
    FUN_18003a910(pcVar6,uVar4,local_1028,uVar5);
  }
  return cVar2;
}



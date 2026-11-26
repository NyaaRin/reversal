// 0x18011c710  FUN_18011c710
// size=391 thunk=false
// signature: undefined FUN_18011c710()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_18011c710(longlong *param_1,byte *param_2)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  size_t sVar5;
  longlong lVar6;
  char *pcVar7;
  byte *pbVar8;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  longlong *local_20;
  char local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_28 = 1;
  lVar6 = *(longlong *)(param_2 + 0x10);
  local_20 = param_1;
  if ((ulonglong)param_1[3] < lVar6 + 8U) {
    lVar2 = param_1[2];
    FUN_18021aa80(param_1,(lVar6 + 8U) - lVar2);
    param_1[2] = lVar2;
    lVar6 = *(longlong *)(param_2 + 0x10);
  }
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(byte **)param_2;
  }
  pbVar8 = param_2 + lVar6;
  do {
    if (param_2 == pbVar8) {
      return param_1;
    }
    bVar1 = *param_2;
    if (bVar1 == 10) {
      pcVar7 = "\\n";
LAB_18011c85d:
      sVar5 = 2;
LAB_18011c863:
      FUN_18021aef0(param_1,pcVar7,sVar5);
    }
    else {
      if (bVar1 == 0xd) {
        pcVar7 = "\\r";
        goto LAB_18011c85d;
      }
      if (bVar1 == 0x22) {
        pcVar7 = "\\\"";
        goto LAB_18011c85d;
      }
      if (bVar1 == 0x5c) {
        pcVar7 = "\\\\";
        goto LAB_18011c85d;
      }
      if ((bVar1 < 0x20) || (bVar1 == 0x7f)) {
        FUN_180012ac0(local_18,8,"\\%03u",bVar1);
        sVar5 = strlen(local_18);
        pcVar7 = local_18;
        goto LAB_18011c863;
      }
      uVar3 = param_1[2];
      uVar4 = param_1[3];
      if (uVar3 < uVar4) {
        param_1[2] = uVar3 + 1;
        if (uVar4 < 0x10) {
          *(byte *)(uVar3 + (longlong)param_1) = bVar1;
          *(undefined1 *)(uVar3 + 1 + (longlong)param_1) = 0;
        }
        else {
          lVar6 = *param_1;
          *(byte *)(uVar3 + lVar6) = bVar1;
          *(undefined1 *)(uVar3 + 1 + lVar6) = 0;
        }
      }
      else {
        FUN_18021abd0(param_1,uVar3,uVar4,bVar1);
      }
    }
    param_2 = param_2 + 1;
  } while( true );
}



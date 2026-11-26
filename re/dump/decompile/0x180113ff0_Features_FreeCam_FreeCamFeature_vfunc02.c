// 0x180113ff0  Features_FreeCam_FreeCamFeature_vfunc02
// size=632 thunk=false
// signature: undefined Features_FreeCam_FreeCamFeature_vfunc02()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_FreeCam_FreeCamFeature_vfunc02
               (longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
               undefined1 *param_5)

{
  char cVar1;
  longlong *plVar2;
  char *pcVar3;
  ulonglong uVar4;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [56];
  undefined1 local_160;
  undefined1 local_15f;
  undefined1 local_15e;
  undefined1 local_15d;
  undefined1 local_15c;
  undefined1 local_15b;
  undefined1 local_15a;
  undefined1 local_159;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined1 auStack_14c [244];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  if (param_3 == (undefined8 *)0x0) {
    return;
  }
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_1d8;
  if (param_4 == (undefined4 *)0x0) {
    return;
  }
  local_58 = 0x237bcfbdef3b6800;
  local_50 = 0x402819404e703058;
  plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1b8,&local_58);
  plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_1a8,&local_50);
  pcVar3 = (char *)FUN_1801fcfc0(*plVar2 + 0x28);
  cVar1 = DAT_1803fe678;
  uVar4 = 0;
  if ((*pcVar3 != '\0') && (DAT_1803fe678 == '\0')) {
    *(undefined4 *)(param_1 + 0x2c) = param_4[2];
    *(undefined4 *)(param_1 + 0x30) = param_4[3];
    *(undefined4 *)(param_1 + 0x34) = param_4[4];
    *(undefined4 *)(param_1 + 0x20) = param_4[2];
    *(undefined4 *)(param_1 + 0x24) = param_4[3];
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x3c) = param_4[2];
    *(undefined4 *)(param_1 + 0x40) = param_4[3];
    *(undefined4 *)(param_1 + 0x44) = param_4[4];
    *(undefined1 *)(param_1 + 0x48) = 1;
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  if (*pcVar3 == '\0') {
    if (cVar1 == '\0') goto LAB_180114231;
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_3 + 2) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined1 *)(param_1 + 0x38) = 0;
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  else {
    FUN_180113550(param_1);
    DAT_1803db438 = 0;
    DAT_1803db5ee = 0;
    DAT_1803db45c = 0;
    memset(local_198,0,0x140);
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[3] = 0;
    *(undefined1 *)(param_3 + 7) = local_160;
    *(undefined1 *)((longlong)param_3 + 0x39) = local_15f;
    *(undefined1 *)((longlong)param_3 + 0x3a) = local_15e;
    *(undefined1 *)((longlong)param_3 + 0x3b) = local_15d;
    *(undefined1 *)((longlong)param_3 + 0x3c) = local_15c;
    *(undefined1 *)((longlong)param_3 + 0x3d) = local_15b;
    *(undefined1 *)((longlong)param_3 + 0x3e) = local_15a;
    *(undefined1 *)((longlong)param_3 + 0x3f) = local_159;
    *(undefined4 *)(param_3 + 8) = local_158;
    *(undefined4 *)(param_3 + 9) = local_150;
    *(undefined4 *)((longlong)param_3 + 0x44) = local_154;
    do {
      *(undefined1 *)((longlong)param_3 + uVar4 + 0x4c) = auStack_14c[uVar4];
      *(undefined1 *)((longlong)param_3 + uVar4 + 0x4d) = auStack_14c[uVar4 + 1];
      uVar4 = uVar4 + 2;
    } while (uVar4 < 0xf2);
    *(undefined4 *)param_3 = *param_4;
    *(undefined4 *)((longlong)param_3 + 4) = param_4[1];
    *(undefined4 *)((longlong)param_3 + 0x2c) = param_4[0xb];
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_3 + 2) = 0;
    *(undefined4 *)(param_3 + 6) = 0;
    *(undefined1 *)(param_1 + 0x49) = 1;
  }
  *param_5 = 1;
LAB_180114231:
  DAT_1803fe678 = *pcVar3;
  return;
}



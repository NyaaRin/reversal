// 0x180210750  FUN_180210750
// size=481 thunk=false
// signature: undefined FUN_180210750()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180210750(longlong param_1,longlong param_2,undefined8 *param_3,longlong *param_4,
                       undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined1 *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148 [8];
  undefined1 local_140 [32];
  undefined1 local_120 [24];
  undefined1 local_108 [8];
  undefined1 local_100 [32];
  undefined1 local_e0 [24];
  undefined1 local_c8 [24];
  undefined1 local_b0 [32];
  longlong local_90;
  uint local_74;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_1a8;
  lVar1 = *param_4;
  if (lVar1 == 0) {
    return local_38 & 0xffffffffffffff00;
  }
  memset(local_148,0,0x108);
  local_178 = *(undefined4 *)(lVar1 + 0x20);
  local_180 = *(undefined4 *)(lVar1 + 0x28);
  local_188 = lVar1;
  FUN_18022b910(local_148,param_1,param_2,param_4 + 1);
  cVar2 = FUN_18021f2b0(local_148,param_3);
  if (cVar2 == '\0') {
    uVar4 = 0;
    if (param_1 == param_2) goto LAB_1802108a3;
    local_74 = local_74 & 0xffffdfff | 0x100;
    local_180 = 0;
    local_188 = 0;
    plVar3 = (longlong *)FUN_18022a8c0(local_148,&local_168,param_1 + 1,param_2);
    lVar1 = *plVar3;
    while (lVar1 != param_2) {
      local_90 = lVar1;
      cVar2 = FUN_18021f2b0(local_148,param_3);
      if (cVar2 != '\0') goto LAB_180210882;
      local_180 = 0;
      local_188 = 0;
      plVar3 = (longlong *)FUN_18022a8c0(local_148,&local_168,lVar1 + 1,param_2);
      lVar1 = *plVar3;
    }
    local_90 = param_2;
    cVar2 = FUN_18021f2b0(local_148,param_3);
    if (cVar2 == '\0') goto LAB_1802108a3;
  }
LAB_180210882:
  uVar4 = 1;
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = param_6;
    param_3[5] = param_1;
    *(bool *)(param_3 + 7) = param_1 != param_3[6];
  }
LAB_1802108a3:
  FUN_18022b850(local_b0);
  FUN_18020d430(local_c8);
  local_168 = local_108;
  FUN_18020d430(local_e0);
  local_160 = local_100;
  FUN_18021e060(local_100);
  local_158 = local_148;
  FUN_18020d430(local_120);
  local_150 = local_140;
  FUN_18021e060(local_140);
  return uVar4;
}



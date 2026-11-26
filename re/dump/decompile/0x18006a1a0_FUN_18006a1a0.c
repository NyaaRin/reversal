// 0x18006a1a0  FUN_18006a1a0
// size=569 thunk=false
// signature: undefined FUN_18006a1a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18006a1a0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 ****ppppuVar4;
  undefined1 auStack_1e8 [48];
  undefined8 local_1b8;
  undefined2 local_1b0;
  undefined4 local_1ae;
  undefined2 local_1aa;
  longlong local_1a8;
  undefined1 local_1a0;
  undefined1 local_19f;
  undefined4 local_19e;
  undefined2 local_19a;
  undefined8 local_198;
  undefined1 local_190;
  undefined1 local_18f;
  undefined4 local_18e;
  undefined2 local_18a;
  longlong local_188;
  undefined1 local_180;
  undefined1 local_17f;
  undefined4 local_17e;
  undefined2 local_17a;
  longlong *local_178;
  longlong local_168 [2];
  byte abStack_158 [56];
  longlong alStack_120 [25];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 ***local_38 [2];
  undefined4 local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_1e8;
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_2)) {
    uVar3 = 0;
  }
  else {
    uStack_50 = 0;
    local_48 = _DAT_1803814a0;
    uStack_40 = _UNK_1803814a8;
    local_58 = 0;
    local_178 = plVar2;
    uVar3 = (**(code **)(*plVar2 + 0x158))(plVar2,1);
    cVar1 = FUN_1800694e0(uVar3);
    if (cVar1 == '\0') {
      (**(code **)(*plVar2 + 0xe0))(plVar2);
      FUN_18021e290(&local_58);
      uVar3 = 1;
    }
    else {
      memset(local_168,0,0x110);
      FUN_180202040(local_168,&local_58,0x20);
      if ((abStack_158[*(int *)(local_168[0] + 4)] & 6) == 0) {
        local_198 = 0;
        local_190 = 1;
        local_18f = 0;
        local_1a8 = *(longlong *)((longlong)alStack_120 + (longlong)*(int *)(local_168[0] + 4));
        local_1a0 = local_1a8 == 0;
        local_17f = 0;
        local_1b8 = 0;
        local_1b0 = 1;
        local_1ae = local_18e;
        local_1aa = local_18a;
        local_19f = 0;
        local_19e = local_17e;
        local_19a = local_17a;
        local_188 = local_1a8;
        local_180 = local_1a0;
        FUN_180202170(local_38,&local_1a8,&local_1b8);
        ppppuVar4 = local_38;
        if (0xf < local_20) {
          ppppuVar4 = (undefined8 ****)local_38[0];
        }
        (**(code **)(*plVar2 + 0xe8))(plVar2,ppppuVar4,local_28);
        FUN_18020e450(local_38);
        FUN_18006afc0(local_168);
        FUN_18021e290(&local_58);
        uVar3 = 1;
      }
      else {
        (**(code **)(*plVar2 + 0xe0))(plVar2);
        FUN_18006afc0(local_168);
        FUN_18021e290(&local_58);
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}



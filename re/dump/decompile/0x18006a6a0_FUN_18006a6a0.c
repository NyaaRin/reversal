// 0x18006a6a0  FUN_18006a6a0
// size=388 thunk=false
// signature: undefined FUN_18006a6a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18006a6a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined1 auStack_98 [32];
  int local_78;
  undefined4 local_74;
  undefined **local_70;
  longlong *local_68;
  int local_60;
  int iStack_5c;
  int local_50;
  undefined4 local_4c;
  undefined **local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2)) {
    uVar4 = 0;
  }
  else {
    uStack_28 = 0;
    local_20 = _DAT_1803814a0;
    uStack_18 = _UNK_1803814a8;
    local_30 = 0;
    local_68 = plVar3;
    uVar4 = (**(code **)(*plVar3 + 0x158))(plVar3,1);
    cVar2 = FUN_1800694e0(uVar4,&local_30);
    if (cVar2 == '\0') {
      (**(code **)(*plVar3 + 0xf8))(plVar3,0);
      FUN_18021e290(&local_30);
      uVar4 = 1;
    }
    else {
      lVar1 = *plVar3;
      local_78 = 0;
      local_70 = &PTR_vftable_std__System_error_category_1803e9500;
      piVar5 = (int *)FUN_180067c80(local_40,&local_30);
      local_60 = *piVar5;
      iStack_5c = piVar5[1];
      local_40[0] = *(undefined8 *)piVar5;
      local_50 = piVar5[2];
      local_48 = &PTR_vftable_std__System_error_category_1803e9500;
      local_74 = local_4c;
      local_70 = &PTR_vftable_std__System_error_category_1803e9500;
      if (local_60 == 0) {
        uVar6 = 0;
        if (local_50 != 0) {
          local_78 = local_50;
                    /* WARNING: Subroutine does not return */
          FUN_1800670f0("exists",&local_78,&local_30);
        }
      }
      else {
        uVar6 = CONCAT31((int3)((uint)local_60 >> 8),local_60 != 1);
      }
      local_78 = 0;
      local_70 = &PTR_vftable_std__System_error_category_1803e9500;
      (**(code **)(lVar1 + 0xf8))(plVar3,uVar6);
      FUN_18021e290(&local_30);
      uVar4 = 1;
    }
  }
  return uVar4;
}



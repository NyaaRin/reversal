// 0x18006ae10  FUN_18006ae10
// size=414 thunk=false
// signature: undefined FUN_18006ae10()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18006ae10(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined1 *puVar6;
  bool bVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  int local_70;
  int iStack_6c;
  undefined8 local_60;
  undefined **ppuStack_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_2)) {
    uVar4 = 0;
  }
  else {
    local_78 = plVar2;
    puVar3 = (undefined1 *)(**(code **)(*plVar2 + 0x158))(plVar2,1);
    uStack_30 = 0;
    local_28 = _DAT_1803814a0;
    uStack_20 = _UNK_1803814a8;
    local_38 = 0;
    cVar1 = FUN_1800694e0(puVar3,&local_38);
    if (cVar1 == '\0') {
      (**(code **)(*plVar2 + 0xf8))(plVar2,0);
      FUN_18021e290(&local_38);
      uVar4 = 1;
    }
    else {
      local_60 = 0;
      ppuStack_58 = &PTR_vftable_std__System_error_category_1803e9500;
      FUN_180067d80(&local_38,&local_60);
      piVar5 = (int *)FUN_180067c80(local_50,&local_38);
      local_70 = *piVar5;
      iStack_6c = piVar5[1];
      local_50[0] = *(undefined8 *)piVar5;
      if ((piVar5[2] != 0) && ((local_70 - 1U & 0xfffffff7) != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_180067040("status",piVar5[2],&local_38);
      }
      bVar7 = local_70 == 3;
      local_40 = local_50[0];
      if (bVar7) {
        puVar6 = &DAT_18033e9cc;
        if (puVar3 != (undefined1 *)0x0) {
          puVar6 = puVar3;
        }
        FUN_180014410("[LUAFILE] script created directory \'%s\'\n",puVar6);
      }
      (**(code **)(*plVar2 + 0xf8))(plVar2,bVar7);
      FUN_18021e290(&local_38);
      uVar4 = 1;
    }
  }
  return uVar4;
}



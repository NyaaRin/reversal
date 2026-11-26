// 0x18006a840  FUN_18006a840
// size=427 thunk=false
// signature: undefined FUN_18006a840()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18006a840(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  int *piVar4;
  ulonglong uVar5;
  undefined8 ****ppppuVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_88 [32];
  longlong *local_68;
  int local_60;
  int iStack_5c;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 ***local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_2)) {
    return 0;
  }
  local_68 = plVar2;
  puVar3 = (undefined1 *)(**(code **)(*plVar2 + 0x158))(plVar2,1);
  uStack_30 = 0;
  local_28 = _DAT_1803814a0;
  uStack_20 = _UNK_1803814a8;
  local_38 = (undefined8 ****)0x0;
  cVar1 = FUN_1800694e0(puVar3,&local_38);
  if (cVar1 == '\0') {
    (**(code **)(*plVar2 + 0xf8))(plVar2,0);
    FUN_18021e290(&local_38);
    return 1;
  }
  piVar4 = (int *)FUN_180067c80(local_50,&local_38);
  local_60 = *piVar4;
  iStack_5c = piVar4[1];
  local_50[0] = *(undefined8 *)piVar4;
  if ((piVar4[2] != 0) && ((local_60 - 1U & 0xfffffff7) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_180067040("status",piVar4[2],&local_38);
  }
  local_40 = local_50[0];
  if (local_60 == 2) {
    ppppuVar6 = &local_38;
    if (7 < uStack_20) {
      ppppuVar6 = (undefined8 ****)local_38;
    }
    uVar5 = FUN_1802d7d9c(ppppuVar6);
    if ((int)(uVar5 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180067040("remove",uVar5 >> 0x20,&local_38);
    }
    if ((char)uVar5 != '\0') {
      uVar8 = 1;
      puVar7 = &DAT_18033e9cc;
      if (puVar3 != (undefined1 *)0x0) {
        puVar7 = puVar3;
      }
      FUN_180014410("[LUAFILE] script deleted \'%s\'\n",puVar7);
      goto LAB_18006a983;
    }
  }
  uVar8 = 0;
LAB_18006a983:
  (**(code **)(*plVar2 + 0xf8))(plVar2,uVar8);
  FUN_18021e290(&local_38);
  return 1;
}



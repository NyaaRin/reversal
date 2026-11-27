// 0x180256930  FUN_180256930
// size=490 thunk=false
// signature: undefined FUN_180256930()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180256930(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char *pcVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  char *pcVar8;
  char *pcVar9;
  longlong lVar10;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 *puStack_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  local_48 = param_2;
  FUN_180261770(param_1,*(undefined8 *)(param_1 + 0x18));
  puVar7 = *(undefined8 **)(param_1 + 8);
  if (puVar7 == *(undefined8 **)(param_1 + 0x10)) {
    FUN_180264570(param_1,puVar7,param_2);
  }
  else {
    *puVar7 = 0;
    puVar7[1] = 0;
    if (param_2[1] != 0) {
      LOCK();
      piVar1 = (int *)(param_2[1] + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *puVar7 = *param_2;
    puVar7[1] = param_2[1];
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x10;
  }
  lVar10 = _UNK_180381488 + *(longlong *)(param_1 + 0x20);
  *(longlong *)(param_1 + 0x18) = _DAT_180381480 + *(longlong *)(param_1 + 0x18);
  *(longlong *)(param_1 + 0x20) = lVar10;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    local_38 = 0;
    puStack_30 = (undefined8 *)0x0;
    local_28 = (undefined8 *)0x0;
    pcVar4 = (char *)((undefined8 *)*param_2)[1];
    puVar7 = puStack_30;
    for (pcVar9 = *(char **)*param_2; puStack_30 = puVar7, pcVar9 != pcVar4; pcVar9 = pcVar9 + 0x48)
    {
      if (puVar7 == local_28) {
        puVar7 = (undefined8 *)FUN_180263470(&local_38);
      }
      else {
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        puVar7[8] = 0xf;
        *(undefined1 *)(puVar7 + 5) = 0;
        puStack_30 = puVar7 + 9;
        local_40 = puVar7;
      }
      *(bool *)puVar7 = *pcVar9 == '\0';
      uVar6 = *(undefined8 *)(pcVar9 + 0x10);
      puVar7[1] = *(undefined8 *)(pcVar9 + 8);
      puVar7[2] = uVar6;
      uVar6 = *(undefined8 *)(pcVar9 + 0x20);
      puVar7[3] = *(undefined8 *)(pcVar9 + 0x18);
      puVar7[4] = uVar6;
      pcVar8 = pcVar9 + 0x28;
      if ((char *)(puVar7 + 5) != pcVar8) {
        if (0xf < *(ulonglong *)(pcVar9 + 0x40)) {
          pcVar8 = *(char **)pcVar8;
        }
        FUN_180212700(puVar7 + 5,pcVar8,*(undefined8 *)(pcVar9 + 0x38));
      }
      puVar7 = puStack_30;
    }
    plVar5 = *(longlong **)(param_1 + 0x60);
    if (plVar5 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_function_call();
    }
    (**(code **)(*plVar5 + 0x10))(plVar5,&local_38);
    FUN_180260960(&local_38);
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return;
}



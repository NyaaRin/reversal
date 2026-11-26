// 0x180095710  FUN_180095710
// size=502 thunk=false
// signature: undefined FUN_180095710()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180095710(longlong *param_1,longlong param_2,char param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  char local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  iVar2 = 0;
  if (0xf < (int)param_1[0x22]) {
    local_68[0] = 0;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_68,(ThrowInfo *)&DAT_1803d59f0);
  }
  uStack_3c = 0;
  uStack_38 = 0;
  local_40 = 0;
  if (param_3 != '\0') {
    if (DAT_1803faee8 != (code *)0x0) {
      lVar5 = param_1[1];
      uVar1 = *(undefined8 *)(*param_1 + 8);
      FUN_180023010(&local_60,uVar1);
      (*DAT_1803faee8)(uVar1,(int)lVar5,param_2);
      if ((local_48 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
        (*DAT_1803fae90)(local_60,local_58,local_50,local_4c);
      }
    }
    iVar2 = (**(code **)(*(longlong *)*param_1 + 0x140))((longlong *)*param_1,0xffffffff);
    if (iVar2 == 10) {
      puVar4 = (undefined8 *)
               (**(code **)(*(longlong *)*param_1 + 0x178))((longlong *)*param_1,0xffffffff);
      local_30 = *puVar4;
      local_28 = *(undefined4 *)(puVar4 + 1);
    }
    else if (iVar2 == 0xb) {
      puVar4 = (undefined8 *)
               (**(code **)(*(longlong *)*param_1 + 0x170))((longlong *)*param_1,0xffffffff);
      local_40 = (undefined4)*puVar4;
      uStack_3c = (undefined4)((ulonglong)*puVar4 >> 0x20);
      uStack_38 = *(undefined4 *)(puVar4 + 1);
    }
    (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,1);
  }
  (**(code **)(*(longlong *)*param_1 + 0x128))
            ((longlong *)*param_1,*(undefined4 *)((longlong)param_1 + 0xc));
  FUN_18002db10(*(undefined8 *)(*param_1 + 8),0xffffffff,param_2);
  uVar3 = (**(code **)(*(longlong *)*param_1 + 0x118))();
  (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,1);
  lVar5 = (longlong)(int)param_1[0x22] + 1;
  param_1[lVar5 * 2] = param_2;
  *(undefined4 *)(param_1 + lVar5 * 2 + 1) = uVar3;
  *(undefined4 *)((longlong)param_1 + lVar5 * 0x10 + 0xc) = local_24;
  *(int *)(param_1 + 0x22) = (int)param_1[0x22] + 1;
  if (param_3 != '\0') {
    if (iVar2 == 10) {
      (**(code **)(*(longlong *)*param_1 + 0x188))((longlong *)*param_1,&local_30);
    }
    else {
      if (iVar2 != 0xb) {
        return;
      }
      (**(code **)(*(longlong *)*param_1 + 0x180))((longlong *)*param_1,&local_40);
    }
    FUN_18002da40(*(undefined8 *)(*param_1 + 8),(int)param_1[1],param_2);
  }
  return;
}



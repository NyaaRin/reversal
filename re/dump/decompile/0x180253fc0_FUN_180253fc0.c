// 0x180253fc0  FUN_180253fc0
// size=385 thunk=false
// signature: undefined FUN_180253fc0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180253fc0(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 ***pppuVar5;
  longlong *plVar6;
  undefined8 ***pppuVar7;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  undefined8 **local_c0;
  undefined1 local_b8 [16];
  undefined8 **local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 **local_68 [2];
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_e8;
  local_a8 = (undefined8 **)*param_4;
  uStack_a0 = param_4[1];
  local_98 = *(undefined4 *)param_3;
  uStack_94 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_90 = *(undefined4 *)(param_3 + 1);
  uStack_8c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_88 = param_2;
  FUN_180254e90(param_1 + 0x50,local_68,&local_98,&local_a8);
  local_98 = *(undefined4 *)param_4;
  uStack_94 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_90 = *(undefined4 *)(param_4 + 1);
  uStack_8c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_a8 = (undefined8 **)*param_3;
  uStack_a0 = param_3[1];
  FUN_180254bd0(param_1 + 0x50,param_1,&local_a8,&local_98);
  lVar4 = *param_2;
  local_a8 = local_68;
  if (0xf < local_50) {
    local_a8 = local_68[0];
  }
  uStack_a0 = local_58;
  local_98 = *(undefined4 *)param_4;
  uStack_94 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_90 = *(undefined4 *)(param_4 + 1);
  uStack_8c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_78 = *(undefined4 *)param_3;
  uStack_74 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_70 = *(undefined4 *)(param_3 + 1);
  uStack_6c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_b8[0] = 1;
  pppuVar5 = *(undefined8 ****)(lVar4 + 8);
  if (pppuVar5 == *(undefined8 ****)(lVar4 + 0x10)) {
    local_c0 = &local_a8;
    local_c8 = &local_98;
    FUN_180262680(lVar4,pppuVar5,local_b8,&local_78);
  }
  else {
    *(undefined1 *)pppuVar5 = 1;
    *(undefined4 *)(pppuVar5 + 1) = local_78;
    *(undefined4 *)((longlong)pppuVar5 + 0xc) = uStack_74;
    *(undefined4 *)(pppuVar5 + 2) = uStack_70;
    *(undefined4 *)((longlong)pppuVar5 + 0x14) = uStack_6c;
    *(undefined4 *)(pppuVar5 + 3) = local_98;
    *(undefined4 *)((longlong)pppuVar5 + 0x1c) = uStack_94;
    *(undefined4 *)(pppuVar5 + 4) = uStack_90;
    *(undefined4 *)((longlong)pppuVar5 + 0x24) = uStack_8c;
    pppuVar5[5] = (undefined8 **)0x0;
    pppuVar5[6] = (undefined8 **)0x0;
    pppuVar5[7] = (undefined8 **)0x0;
    pppuVar5[8] = (undefined8 **)0x0;
    pppuVar7 = (undefined8 ***)local_a8;
    local_a8 = pppuVar5;
    FUN_18001d080(pppuVar5 + 5,pppuVar7);
    *(longlong *)(lVar4 + 8) = *(longlong *)(lVar4 + 8) + 0x48;
  }
  FUN_18024f370(param_1);
  *(undefined4 *)(param_1 + 0x560) = 0xbe99999a;
  *(undefined1 *)(param_1 + 0x825) = 1;
  FUN_18020e450(local_68);
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  return;
}



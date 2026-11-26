// 0x180253e80  FUN_180253e80
// size=305 thunk=false
// signature: undefined FUN_180253e80()
// status: ok


undefined4 *
FUN_180253e80(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 local_88 [16];
  undefined1 *local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_78 = (undefined1 *)*param_4;
  uStack_70 = param_4[1];
  local_68 = param_3;
  FUN_180254730(param_1 + 0x50,param_2,param_1,&local_78,param_5);
  lVar4 = *param_3;
  local_78 = (undefined1 *)*param_5;
  uStack_70 = param_5[1];
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_48 = *(undefined4 *)param_4;
  uStack_44 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_40 = *(undefined4 *)(param_4 + 1);
  uStack_3c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_88[0] = 0;
  puVar5 = *(undefined1 **)(lVar4 + 8);
  if (puVar5 == *(undefined1 **)(lVar4 + 0x10)) {
    FUN_180262680(lVar4,puVar5,local_88,&local_48,&local_58,&local_78);
  }
  else {
    *puVar5 = 0;
    uVar7 = param_4[1];
    *(undefined8 *)(puVar5 + 8) = *param_4;
    *(undefined8 *)(puVar5 + 0x10) = uVar7;
    *(undefined4 *)(puVar5 + 0x18) = local_58;
    *(undefined4 *)(puVar5 + 0x1c) = uStack_54;
    *(undefined4 *)(puVar5 + 0x20) = uStack_50;
    *(undefined4 *)(puVar5 + 0x24) = uStack_4c;
    *(undefined8 *)(puVar5 + 0x28) = 0;
    *(undefined8 *)(puVar5 + 0x30) = 0;
    *(undefined8 *)(puVar5 + 0x38) = 0;
    *(undefined8 *)(puVar5 + 0x40) = 0;
    puVar8 = local_78;
    local_78 = puVar5;
    FUN_18001d080(puVar5 + 0x28,puVar8,uStack_70);
    *(longlong *)(lVar4 + 8) = *(longlong *)(lVar4 + 8) + 0x48;
  }
  FUN_18024f370(param_1);
  plVar6 = (longlong *)param_3[1];
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
  return param_2;
}



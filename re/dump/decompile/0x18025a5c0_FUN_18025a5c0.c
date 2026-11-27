// 0x18025a5c0  FUN_18025a5c0
// size=482 thunk=false
// signature: undefined FUN_18025a5c0()
// status: ok


void FUN_18025a5c0(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4)

{
  void *_Src;
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  void *_Dst;
  undefined8 local_78;
  longlong *plStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  FUN_180253050(0,&local_68,1);
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_58 = &local_78;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
    UNLOCK();
  }
  local_78 = local_68;
  plStack_70 = plStack_60;
  FUN_180253fc0(param_1,&local_78,&local_38,&local_48);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_58 = &local_78;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
    UNLOCK();
  }
  local_78 = local_68;
  plStack_70 = plStack_60;
  FUN_180253e80(param_1,&local_48,&local_78,&local_38,param_4);
  _Src = *(void **)(param_1 + 0xf0);
  while (_Dst = _Src, _Dst < *(void **)(param_1 + 0xf8)) {
    _Src = (void *)((longlong)_Dst + 0x30);
    if (*(char *)((longlong)_Dst + 0x20) == '\0') {
      memmove(_Dst,_Src,(longlong)*(void **)(param_1 + 0xf8) - (longlong)_Src);
      *(longlong *)(param_1 + 0xf8) = *(longlong *)(param_1 + 0xf8) + -0x30;
      _Src = _Dst;
    }
  }
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 0x21) = 1;
  uVar5 = *(ulonglong *)(param_1 + 0x108);
  lVar6 = *(longlong *)(param_1 + 0xf0);
  uVar8 = (*(longlong *)(param_1 + 0xf8) - lVar6 >> 4) * -0x5555555555555555;
  if (uVar8 < uVar5 || uVar8 - uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180262180();
  }
  puVar3 = (undefined8 *)(lVar6 + uVar5 * 0x30);
  *puVar3 = CONCAT44(uStack_44,local_48);
  puVar3[1] = CONCAT44(uStack_3c,uStack_40);
  puVar3 = (undefined8 *)(lVar6 + 0x10 + uVar5 * 0x30);
  *puVar3 = CONCAT44(uStack_44,local_48);
  puVar3[1] = CONCAT44(uStack_3c,uStack_40);
  *(undefined1 *)(lVar6 + 0x22 + uVar5 * 0x30) = 1;
  local_58 = &local_78;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
    UNLOCK();
  }
  local_78 = local_68;
  plStack_70 = plStack_60;
  FUN_180253190(param_1,&local_78);
  plVar7 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  return;
}



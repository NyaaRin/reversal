// 0x1801911e0  Features_Visual_ESP_CGhostEntityListener_vfunc00
// size=304 thunk=false
// signature: undefined Features_Visual_ESP_CGhostEntityListener_vfunc00()
// status: ok


void Features_Visual_ESP_CGhostEntityListener_vfunc00(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  BOOL BVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  undefined1 local_48 [48];
  
  if ((((param_2 != (longlong *)0x0) && (DAT_1803e89e0 != '\0')) &&
      (BVar4 = IsBadReadPtr(param_2,8), BVar4 == 0)) &&
     ((BVar4 = IsBadReadPtr((void *)*param_2,8), BVar4 == 0 &&
      (plVar6 = (longlong *)(**(code **)(*param_2 + 0x20))(param_2), plVar6 != (longlong *)0x0)))) {
    iVar5 = (**(code **)(*plVar6 + 0x48))(plVar6);
    puVar7 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2);
    if (0 < iVar5) {
      uVar1 = *puVar7;
      FUN_180121710(local_48,param_2,iVar5,uVar1,plVar6,0,0);
      uVar2 = FUN_180208320(plVar6);
      uVar3 = FUN_180208710(plVar6);
      FUN_180121710(local_48,param_2,iVar5,uVar1,plVar6,uVar3,uVar2);
    }
  }
  return;
}



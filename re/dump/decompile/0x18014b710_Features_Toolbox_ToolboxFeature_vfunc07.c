// 0x18014b710  Features_Toolbox_ToolboxFeature_vfunc07
// size=140 thunk=false
// signature: undefined Features_Toolbox_ToolboxFeature_vfunc07()
// status: ok


void Features_Toolbox_ToolboxFeature_vfunc07(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar3 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar4 = (*pcVar1)(DAT_1803fa360,uVar3);
  FUN_18014a8f0(param_1,lVar4,0);
  lVar2 = *(longlong *)(param_1 + 0x18);
  if ((((lVar2 != 0) && (lVar4 != 0)) && (lVar4 == *(longlong *)(param_1 + 0x10))) &&
     (*(uint *)(param_1 + 0x24) < 3)) {
    lVar5 = FUN_1801475e0(lVar4);
    if (lVar5 == lVar2) {
      FUN_180148a70(lVar4,*(undefined8 *)(param_1 + 0x18));
    }
  }
  return;
}



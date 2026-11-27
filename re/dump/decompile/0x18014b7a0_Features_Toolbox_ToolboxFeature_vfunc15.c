// 0x18014b7a0  Features_Toolbox_ToolboxFeature_vfunc15
// size=153 thunk=false
// signature: undefined Features_Toolbox_ToolboxFeature_vfunc15()
// status: ok


void Features_Toolbox_ToolboxFeature_vfunc15
               (longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((((*(longlong *)(param_1 + 0x18) != 0) && (*(uint *)(param_1 + 0x24) < 3)) &&
      (DAT_1803e8280 != '\0')) &&
     ((0 < *(int *)(param_4 + 0x44) && (DAT_1803fa360 != (longlong *)0x0)))) {
    pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar3 = (*pcVar1)(DAT_1803fa360,uVar2);
    if ((lVar3 != 0) &&
       ((lVar3 == *(longlong *)(param_1 + 0x10) &&
        (lVar4 = (**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,*(undefined4 *)(param_4 + 0x44))
        , lVar3 == lVar4)))) {
      FUN_180149800(lVar3);
    }
  }
  return;
}



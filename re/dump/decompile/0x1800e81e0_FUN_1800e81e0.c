// 0x1800e81e0  FUN_1800e81e0
// size=345 thunk=false
// signature: undefined FUN_1800e81e0()
// status: ok


undefined8 FUN_1800e81e0(longlong *param_1,int param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  (**(code **)(*param_1 + 0x30))();
  iVar7 = 0;
  uVar5 = DAT_1803fac60 + DAT_1803fac58;
  uVar6 = DAT_1803fac58;
LAB_1800e8237:
  if (uVar6 == uVar5) {
    return 1;
  }
  puVar1 = *(undefined8 **)(DAT_1803fac48 + (DAT_1803fac50 - 1U & uVar6) * 8);
  plVar8 = (longlong *)*puVar1;
  plVar2 = (longlong *)puVar1[1];
LAB_1800e8266:
  do {
    if (plVar8 == plVar2) break;
    if ((longlong *)*plVar8 == (longlong *)0x0) {
      plVar8 = plVar8 + 0x30d;
      goto LAB_1800e8266;
    }
    plVar9 = plVar8;
    plVar4 = (longlong *)(**(code **)(*(longlong *)*plVar8 + 0x20))();
    if (plVar4 != (longlong *)0x0) {
      iVar3 = (**(code **)(*plVar4 + 0x48))(plVar4);
      if (iVar3 == param_2) {
        iVar7 = iVar7 + 1;
        (**(code **)(*param_1 + 0xf0))(param_1,(double)iVar7);
        FUN_1800e7d70(param_1,plVar8,*(undefined4 *)(puVar1 + 3),param_3,param_3,plVar9);
        (**(code **)(*param_1 + 0x38))(param_1,0xfffffffd);
        plVar8 = plVar8 + 0x30d;
        goto LAB_1800e8266;
      }
    }
    plVar8 = plVar8 + 0x30d;
  } while( true );
  uVar6 = uVar6 + 1;
  goto LAB_1800e8237;
}



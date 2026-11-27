// 0x18008ad70  FUN_18008ad70
// size=440 thunk=false
// signature: undefined FUN_18008ad70()
// status: ok


undefined8 FUN_18008ad70(undefined8 *param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  char local_20;
  
  uVar10 = 0;
  if (DAT_1803faee8 != (code *)0x0) {
    uVar4 = *(undefined8 *)(*(longlong *)*param_1 + 8);
    FUN_180023010(&local_38,uVar4);
    (*DAT_1803faee8)(uVar4,0xffffffff,"GetValue");
    if ((local_20 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
      (*DAT_1803fae90)(local_38,local_30,local_28,local_24);
    }
  }
  cVar5 = (**(code **)(**(longlong **)*param_1 + 0x138))(*(longlong **)*param_1,0xffffffff,6);
  plVar9 = *(longlong **)*param_1;
  if (cVar5 == '\0') {
    lVar8 = *plVar9;
  }
  else {
    FUN_18001e2b0(*(undefined8 *)param_1[1],plVar9);
    (**(code **)(**(longlong **)*param_1 + 0xe8))(*(longlong **)*param_1,"ShootOffsetAngle",0);
    iVar6 = FUN_180023180(*(undefined8 *)(*(longlong *)*param_1 + 8),2,1);
    plVar9 = *(longlong **)*param_1;
    lVar8 = *plVar9;
    if (iVar6 == 0) {
      cVar5 = (**(code **)(lVar8 + 0x138))(plVar9,0xffffffff,0xb);
      if (cVar5 != '\0') {
        puVar7 = (uint *)(**(code **)(**(longlong **)*param_1 + 0x170))
                                   (*(longlong **)*param_1,0xffffffff);
        uVar1 = *puVar7;
        *param_3 = uVar1;
        uVar2 = puVar7[1];
        param_3[1] = uVar2;
        uVar3 = puVar7[2];
        param_3[2] = uVar3;
        if ((((uVar1 & 0x7f800000) == 0x7f800000) || ((uVar2 & 0x7f800000) == 0x7f800000)) ||
           ((uVar3 & 0x7f800000) == 0x7f800000)) {
          uVar10 = 0;
        }
        else {
          uVar10 = 1;
        }
      }
      (**(code **)(**(longlong **)*param_1 + 0x10))(*(longlong **)*param_1,1);
      return uVar10;
    }
  }
  (**(code **)(lVar8 + 0x10))(plVar9,1);
  return 0;
}



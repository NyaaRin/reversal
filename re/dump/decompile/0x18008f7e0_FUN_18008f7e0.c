// 0x18008f7e0  FUN_18008f7e0
// size=381 thunk=false
// signature: undefined FUN_18008f7e0()
// status: ok


undefined1 FUN_18008f7e0(undefined8 *param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined1 uVar9;
  
  iVar6 = (**(code **)**(undefined8 **)*param_1)();
  uVar9 = 0;
  (**(code **)(**(longlong **)*param_1 + 0x180))(*(longlong **)*param_1,param_1[1]);
  FUN_18002d9c0(*(undefined8 *)(*(longlong *)*param_1 + 8),0xffffffff,param_2);
  cVar5 = (**(code **)(**(longlong **)*param_1 + 0x138))(*(longlong **)*param_1,0xffffffff,6);
  if (cVar5 != '\0') {
    (**(code **)(**(longlong **)*param_1 + 8))(*(longlong **)*param_1,0xfffffffe);
    iVar7 = FUN_180023180(*(undefined8 *)(*(longlong *)*param_1 + 8),1,1);
    if ((iVar7 == 0) &&
       (cVar5 = (**(code **)(**(longlong **)*param_1 + 0x138))(*(longlong **)*param_1,0xffffffff,10)
       , cVar5 != '\0')) {
      puVar8 = (uint *)(**(code **)(**(longlong **)*param_1 + 0x178))
                                 (*(longlong **)*param_1,0xffffffff);
      uVar1 = *puVar8;
      *param_3 = uVar1;
      uVar2 = puVar8[1];
      param_3[1] = uVar2;
      uVar3 = puVar8[2];
      param_3[2] = uVar3;
      if (((uVar1 & 0x7f800000) == 0x7f800000) ||
         (((uVar2 & 0x7f800000) == 0x7f800000 || ((uVar3 & 0x7f800000) == 0x7f800000)))) {
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
    }
  }
  plVar4 = *(longlong **)*param_1;
  if ((plVar4 != (longlong *)0x0) && (iVar7 = (**(code **)*plVar4)(plVar4), iVar6 < iVar7)) {
    (**(code **)(*plVar4 + 0x10))(plVar4,iVar7 - iVar6);
  }
  return uVar9;
}



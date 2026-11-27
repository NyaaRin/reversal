// 0x180137260  FUN_180137260
// size=253 thunk=false
// signature: undefined FUN_180137260()
// status: ok


void FUN_180137260(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  *param_1 = 0;
  *param_4 = 0;
  plVar5 = (longlong *)FUN_1801323e0(param_3);
  if ((plVar5 != (longlong *)0x0) && (plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0)) {
    uVar6 = FUN_180132160(plVar5);
    *param_4 = uVar6;
    iVar3 = FUN_1801318c0(plVar5);
    if (iVar3 < 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = (**(code **)(*plVar5 + (longlong)iVar3 * 8))(plVar5);
    }
    iVar3 = FUN_1801318c0(plVar5);
    if (iVar3 < 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar5 + (longlong)iVar3 * 8))(plVar5,4000);
    }
    iVar3 = FUN_1801318c0(plVar5);
    if (iVar3 < 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = (**(code **)(*plVar5 + (longlong)iVar3 * 8))(plVar5);
    }
    FUN_180012b20(param_1,0xa0,0xffffffffffffffff," connectTokens=%d ownershipTicket=%d loggedOn=%d"
                  ,cVar2 != '\0',uVar4,cVar1 != '\0');
  }
  return;
}



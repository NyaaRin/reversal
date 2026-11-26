// 0x180138610  FUN_180138610
// size=95 thunk=false
// signature: undefined FUN_180138610()
// status: ok


undefined8
FUN_180138610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if ((DAT_180409c29 == '\0') || (lVar3 = DAT_180409c38, DAT_180409c38 == 0)) {
    uVar1 = FUN_1801321e0();
    plVar2 = (longlong *)FUN_1801323e0(uVar1);
    if (plVar2 == (longlong *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *plVar2;
    }
  }
  FUN_180138510(param_1,lVar3,param_3,param_4,uVar4);
  return param_1;
}



// 0x18004def0  FUN_18004def0
// size=265 thunk=false
// signature: undefined FUN_18004def0()
// status: ok


undefined8 FUN_18004def0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 local_res10 [24];
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    if (DAT_1803ff8ec == '\0') {
      uVar4 = FUN_18004a240(param_1);
      return uVar4;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,1);
    if (cVar1 == '\0') {
      local_res10[0] = 0;
    }
    else {
      local_res10[0] = (**(code **)(*plVar3 + 200))(plVar3,2);
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);
    if (cVar1 == '\0') {
      puVar6 = &DAT_1803431c0;
    }
    else {
      puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);
      puVar6 = &DAT_1803431c0;
      if (puVar5 != (undefined *)0x0) {
        puVar6 = puVar5;
      }
    }
    uVar2 = FUN_1802ad620(puVar6,local_res10);
    (**(code **)(*plVar3 + 0xf8))(plVar3,local_res10[0]);
    (**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);
    return 2;
  }
  return 0;
}



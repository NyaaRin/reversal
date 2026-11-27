// 0x18004d6c0  FUN_18004d6c0
// size=188 thunk=false
// signature: undefined FUN_18004d6c0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18004d6c0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18 [16];
  
  plVar2 = (longlong *)FUN_180039770();
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,4);
    if (cVar1 == '\0') {
      puVar5 = &DAT_18033e5ea;
    }
    else {
      puVar3 = (undefined1 *)(**(code **)(*plVar2 + 0xb8))(plVar2,2,0);
      puVar5 = &DAT_18033e5ea;
      if (puVar3 != (undefined1 *)0x0) {
        puVar5 = puVar3;
      }
    }
    local_28 = _DAT_180381760;
    uStack_20 = _UNK_180381768;
    uVar4 = FUN_180049dc0(local_18,plVar2,1,&local_28);
    FUN_1802aabb0(uVar4,&DAT_1803431ac,puVar5);
  }
  return 0;
}



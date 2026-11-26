// 0x18006f3a0  FUN_18006f3a0
// size=304 thunk=false
// signature: undefined FUN_18006f3a0()
// status: ok


void FUN_18006f3a0(undefined8 param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  if ((DAT_18042586d == '\0') || (DAT_1803feff0 == '\0')) goto LAB_18006f4b7;
  if (DAT_1803fa678 == (longlong *)0x0) {
LAB_18006f40e:
    puVar2 = &DAT_18033e5ea;
  }
  else {
    plVar1 = (longlong *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
    if (plVar1 == (longlong *)0x0) goto LAB_18006f40e;
    puVar2 = (undefined1 *)(**(code **)(*plVar1 + 0xb8))(plVar1,1,0);
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_18001d080(&local_68,"net.WriteString(\"",0x11);
  puVar4 = &DAT_18033e5ea;
  if (puVar2 != (undefined1 *)0x0) {
    puVar4 = puVar2;
  }
  uVar3 = FUN_1801fc680(local_28,&local_68,puVar4);
  uVar3 = FUN_1801fc680(local_48,uVar3,&DAT_18034675c);
  if (DAT_1803feff0 != '\0') {
    FUN_18020d6f0(&DAT_1803eb820,uVar3);
  }
  FUN_18020e450(local_48);
  FUN_18020e450(local_28);
  FUN_18020e450(&local_68);
LAB_18006f4b7:
                    /* WARNING: Could not recover jumptable at 0x00018006f4d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1803fefa0)(param_1);
  return;
}



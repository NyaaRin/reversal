// 0x18006f940  FUN_18006f940
// size=230 thunk=false
// signature: undefined FUN_18006f940()
// status: ok


void FUN_18006f940(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  if ((((DAT_18042586d != '\0') && (DAT_1803feff0 != '\0')) && (DAT_1803fa678 != (longlong *)0x0))
     && (plVar1 = (longlong *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0),
        plVar1 != (longlong *)0x0)) {
    uVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1,1);
    uVar2 = FUN_18006ecb0(local_28,uVar3);
    uVar2 = FUN_1801fd1b0(local_48,"net.WriteFloat(",uVar2);
    uVar2 = FUN_1801fc680(local_68,uVar2,&DAT_1803467cc);
    if (DAT_1803feff0 != '\0') {
      FUN_18020d6f0(&DAT_1803eb820,uVar2);
    }
    FUN_18020e450(local_68);
    FUN_18020e450(local_48);
    FUN_18020e450(local_28);
  }
                    /* WARNING: Could not recover jumptable at 0x00018006fa2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1803fefb0)(param_1);
  return;
}



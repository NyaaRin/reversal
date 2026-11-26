// 0x18006f670  FUN_18006f670
// size=385 thunk=false
// signature: undefined FUN_18006f670()
// status: ok


void FUN_18006f670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 local_f0 [32];
  undefined1 local_d0 [32];
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [48];
  
  if ((((DAT_18042586d != '\0') && (DAT_1803feff0 != '\0')) && (DAT_1803fa678 != (longlong *)0x0))
     && (plVar1 = (longlong *)
                  (**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0,param_3,param_4,0),
        plVar1 != (longlong *)0x0)) {
    uVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1,2);
    FUN_18006ecb0(local_50,uVar3);
    uVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1,1);
    uVar2 = FUN_18006ecb0(local_70,uVar3);
    uVar2 = FUN_1801fd1b0(local_90,"net.WriteUInt(",uVar2);
    FUN_1801fc680(local_b0,uVar2,&DAT_1803467d0);
    FUN_18021e540(local_f0);
    uVar2 = FUN_1801fc680(local_d0,local_f0,&DAT_1803467cc);
    if (DAT_1803feff0 != '\0') {
      FUN_18020d6f0(&DAT_1803eb820,uVar2);
    }
    FUN_18020e450(local_d0);
    FUN_18020e450(local_f0);
    FUN_18020e450(local_b0);
    FUN_18020e450(local_90);
    FUN_18020e450(local_70);
    FUN_18020e450(local_50);
  }
                    /* WARNING: Could not recover jumptable at 0x00018006f7f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1803fefe8)(param_1);
  return;
}



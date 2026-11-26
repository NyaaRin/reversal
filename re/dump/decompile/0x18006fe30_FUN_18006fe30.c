// 0x18006fe30  FUN_18006fe30
// size=504 thunk=false
// signature: undefined FUN_18006fe30()
// status: ok


void FUN_18006fe30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined1 local_150 [32];
  undefined1 local_130 [32];
  undefined1 local_110 [32];
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
    pfVar2 = (float *)(**(code **)(*plVar1 + 0x178))(plVar1,1);
    FUN_18006ecb0(local_50,(double)pfVar2[2]);
    FUN_18006ecb0(local_70,(double)pfVar2[1]);
    uVar3 = FUN_18006ecb0(local_90,(double)*pfVar2);
    uVar3 = FUN_1801fd1b0(local_b0,"net.WriteVector(",uVar3);
    FUN_1801fc680(local_d0,uVar3,&DAT_1803467d0);
    FUN_18021e540(local_130);
    FUN_1801fc680(local_f0,local_130,&DAT_1803467d0);
    FUN_18021e540(local_150);
    uVar3 = FUN_1801fc680(local_110,local_150,&DAT_1803467cc);
    if (DAT_1803feff0 != '\0') {
      FUN_18020d6f0(&DAT_1803eb820,uVar3);
    }
    FUN_18020e450(local_110);
    FUN_18020e450(local_150);
    FUN_18020e450(local_f0);
    FUN_18020e450(local_130);
    FUN_18020e450(local_d0);
    FUN_18020e450(local_b0);
    FUN_18020e450(local_90);
    FUN_18020e450(local_70);
    FUN_18020e450(local_50);
  }
                    /* WARNING: Could not recover jumptable at 0x00018007002d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1803fef80)(param_1);
  return;
}



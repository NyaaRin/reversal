// 0x18006fb20  FUN_18006fb20
// size=461 thunk=false
// signature: undefined FUN_18006fb20()
// status: ok


void FUN_18006fb20(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  if ((((DAT_18042586d != '\0') && (DAT_1803feff0 != '\0')) && (DAT_1803fa678 != (longlong *)0x0))
     && (plVar3 = (longlong *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0),
        plVar3 != (longlong *)0x0)) {
    iVar2 = (**(code **)(*plVar3 + 0x140))(plVar3,1);
    if (iVar2 == 1) {
      cVar1 = (**(code **)(*plVar3 + 200))();
      pcVar5 = "false";
      if (cVar1 != '\0') {
        pcVar5 = "true";
      }
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      FUN_18001d080(&local_c8,"net.WriteBool(",0xe);
      uVar4 = FUN_1801fc680(local_88,&local_c8,pcVar5);
      uVar4 = FUN_1801fc680(local_a8,uVar4,&DAT_1803467cc);
      if (DAT_1803feff0 != '\0') {
        FUN_18020d6f0(&DAT_1803eb820,uVar4);
      }
      FUN_18020e450(local_a8);
      FUN_18020e450(local_88);
      FUN_18020e450(&local_c8);
    }
    else {
      uVar6 = (**(code **)(*plVar3 + 0xc0))(plVar3);
      uVar4 = FUN_18006ecb0(local_28,uVar6);
      uVar4 = FUN_1801fd1b0(local_48,"net.WriteBit(",uVar4);
      uVar4 = FUN_1801fc680(local_68,uVar4,&DAT_1803467cc);
      if (DAT_1803feff0 != '\0') {
        FUN_18020d6f0(&DAT_1803eb820,uVar4);
      }
      FUN_18020e450(local_68);
      FUN_18020e450(local_48);
      FUN_18020e450(local_28);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00018006fcf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1803ff000)(param_1);
  return;
}



// 0x180137a30  FUN_180137a30
// size=74 thunk=false
// signature: undefined FUN_180137a30()
// status: ok


undefined8 FUN_180137a30(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  FUN_1801377f0();
  if ((DAT_180409c90 == 0) || (DAT_180409c88 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined4 *)((ulonglong)DAT_180409c88 + DAT_180409c90);
    *(undefined4 *)((ulonglong)DAT_180409c88 + DAT_180409c90) = 0;
    FUN_180014410("[AS] engine auth-ticket cache cleared (%s): m_cubTicket %u -> 0\n",param_1,uVar1)
    ;
    uVar2 = 1;
  }
  return uVar2;
}



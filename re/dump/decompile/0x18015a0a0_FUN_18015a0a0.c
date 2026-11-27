// 0x18015a0a0  FUN_18015a0a0
// size=337 thunk=false
// signature: undefined FUN_18015a0a0()
// status: ok


bool FUN_18015a0a0(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [32];
  
  if (DAT_1803e71b0 == -2) {
    DAT_1803e71b0 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    FUN_18001d080(&local_78,"DT_BasePlayer",0xd);
    uVar2 = FUN_18016d4c0(local_38,&local_78);
    uVar2 = FUN_180018ef0(&DAT_1803fac80,uVar2);
    FUN_18020e450(&local_78);
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0;
    FUN_18001d080(&local_58,"m_lifeState",0xb);
    uVar3 = FUN_18016d4c0(local_38,&local_58);
    iVar1 = FUN_180018c10(uVar2,uVar3);
    FUN_18020e450(&local_58);
    DAT_1803e71b0 = iVar1;
  }
  if (DAT_1803e71b0 < 0x41) {
    bVar4 = 0 < param_2;
  }
  else {
    bVar4 = *(char *)(DAT_1803e71b0 + param_1) == '\0';
  }
  return bVar4;
}



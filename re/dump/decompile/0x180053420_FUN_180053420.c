// 0x180053420  FUN_180053420
// size=448 thunk=false
// signature: undefined FUN_180053420()
// status: ok


undefined8 FUN_180053420(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2)) {
    return 0;
  }
  if ((DAT_1803eb490 != '\0') && (DAT_1803eb498 != 0)) {
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    local_68 = 0;
    FUN_18001d080(&local_80,"DT_BasePlayer",0xd);
    uVar4 = FUN_18016d4c0(local_40,&local_80);
    uVar4 = FUN_180018ef0(&DAT_1803fac80,uVar4);
    FUN_18020e450(&local_80);
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    local_48 = 0;
    FUN_18001d080(&local_60,"m_fFlags",8);
    uVar5 = FUN_18016d4c0(local_40,&local_60);
    iVar2 = FUN_180018c10(uVar4,uVar5);
    FUN_18020e450(&local_60);
    lVar1 = *plVar3;
    if (iVar2 < 1) {
      (**(code **)(lVar1 + 0xe0))(plVar3);
      return 1;
    }
    (**(code **)(lVar1 + 0xf8))(plVar3,*(byte *)(iVar2 + DAT_1803eb498) & 1,lVar1,param_4,iVar2);
    return 1;
  }
  (**(code **)(*plVar3 + 0xe0))(plVar3);
  return 1;
}



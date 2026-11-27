// 0x18001c560  FUN_18001c560
// size=287 thunk=false
// signature: undefined FUN_18001c560()
// status: ok


int FUN_18001c560(longlong *param_1)

{
  double dVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined1 local_68 [32];
  undefined1 local_48 [40];
  
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x20))();
  pcVar2 = DAT_1803fe398;
  if ((plVar5 != (longlong *)0x0) && (DAT_1803fe398 != (code *)0x0)) {
    uVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
    dVar1 = (double)(*pcVar2)(uVar3,"iTeam",0);
    if ((int)dVar1 != 0) {
      return (int)dVar1;
    }
  }
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_18001d080(&local_b8,"DT_BaseEntity",0xd);
  uVar6 = FUN_18016d4c0(local_68,&local_b8);
  uVar6 = FUN_180018ef0(&DAT_1803fac80,uVar6);
  FUN_18020e450(&local_b8);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_18001d080(&local_98,"m_iTeamNum",10);
  local_78 = &local_98;
  local_70 = local_48;
  uVar7 = FUN_18016d4c0(local_48,&local_98);
  iVar4 = FUN_180018c10(uVar6,uVar7);
  FUN_18020e450(&local_98);
  return *(int *)((longlong)iVar4 + (longlong)param_1);
}



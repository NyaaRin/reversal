// 0x18014e280  FUN_18014e280
// size=301 thunk=false
// signature: undefined FUN_18014e280()
// status: ok


ulonglong FUN_18014e280(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  uint *puVar3;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80 [2];
  undefined8 *local_70;
  undefined1 local_68 [32];
  undefined1 local_48 [40];
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  local_70 = &local_a0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_88 = 0;
  FUN_180211510(&local_a0,L"gameinfo.txt",0xc,param_4,0);
  local_80[0] = &local_c0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  FUN_180211510(&local_c0,L"garrysmod",9,param_4,0);
  uVar2 = FUN_180066720(local_48,param_1,&local_c0,param_4,0);
  uVar2 = FUN_180066720(local_68,uVar2,&local_a0);
  puVar3 = (uint *)FUN_180067c80(local_80,uVar2);
  uVar1 = *puVar3;
  FUN_18021e290(local_68);
  FUN_18021e290(local_48);
  FUN_18021e290(&local_c0);
  FUN_18021e290(&local_a0);
  return (ulonglong)(1 < uVar1);
}



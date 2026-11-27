// 0x180079260  vfunc_shared_180079260
// size=561 thunk=false
// signature: undefined vfunc_shared_180079260()
// status: ok


/* WARNING: Removing unreachable block (ram,0x0001800792b7) */
/* WARNING: Removing unreachable block (ram,0x0001800792cf) */
/* WARNING: Removing unreachable block (ram,0x0001800792c6) */
/* WARNING: Removing unreachable block (ram,0x0001800792db) */

ulonglong vfunc_shared_180079260
                    (undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulonglong in_RAX;
  undefined8 uVar5;
  undefined1 uVar6;
  longlong local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 uStack_28;
  longlong local_20;
  int local_18;
  
  if ((DAT_1803fa678 != 0) && (param_2 != 0)) {
    local_30 = (longlong *)0x0;
    uStack_28 = 0;
    local_20 = 0;
    in_RAX = FUN_18001bcd0(0,&local_30);
    if (local_30 != (longlong *)0x0) {
      iVar3 = (**(code **)*local_30)();
      bVar2 = 0;
      uVar6 = 0;
      local_18 = iVar3;
      cVar1 = FUN_18001e2b0(param_2,local_30);
      if (cVar1 != '\0') {
        FUN_18002d9c0(local_30[1],0xffffffff,"FireMode",param_4,uVar6);
        cVar1 = (**(code **)(*local_30 + 0x138))(local_30,0xffffffff,4);
        if (cVar1 != '\0') {
          uVar5 = (**(code **)(*local_30 + 0xb8))(local_30,0xffffffff,0);
          local_50 = 0;
          uStack_48 = 0;
          local_40 = 0;
          local_38 = 0;
          FUN_18001d080(&local_50,&DAT_180346dfc,4);
          bVar2 = FUN_18009e9b0(&local_50,uVar5);
          FUN_18020e450(&local_50);
        }
      }
      iVar4 = (**(code **)*local_30)();
      while (iVar3 < iVar4) {
        (**(code **)(*local_30 + 0x10))(local_30,1);
        iVar4 = (**(code **)*local_30)();
      }
      if (local_30 != (longlong *)0x0) {
        (**(code **)*local_30)();
        DAT_1803fa338 = local_20 != 0;
        DAT_1803fa330 = local_50;
        if ((bool)DAT_1803fa338) {
          DAT_1803fa330 = local_20;
        }
        DAT_1803fa339 = uStack_48._1_4_;
        DAT_1803fa33d = uStack_48._5_2_;
        DAT_1803fa33f = uStack_48._7_1_;
      }
      return (ulonglong)bVar2;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// 0x180077cc0  vfunc_shared_180077cc0
// size=816 thunk=false
// signature: undefined vfunc_shared_180077cc0()
// status: ok


/* WARNING: Removing unreachable block (ram,0x000180077f91) */
/* WARNING: Removing unreachable block (ram,0x000180077fa9) */
/* WARNING: Removing unreachable block (ram,0x000180077fa0) */
/* WARNING: Removing unreachable block (ram,0x000180077fb5) */

ulonglong vfunc_shared_180077cc0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  longlong local_68;
  undefined4 local_5f;
  undefined2 local_5b;
  undefined1 local_59;
  longlong *local_58;
  undefined8 uStack_50;
  longlong local_48;
  byte local_40;
  undefined4 local_2f;
  undefined2 local_2b;
  undefined1 local_29;
  longlong local_28;
  undefined4 local_1f;
  undefined2 local_1b;
  undefined1 local_19;
  undefined4 local_f;
  undefined2 local_b;
  undefined1 local_9;
  
  if (((param_2 != 0) && (DAT_1803e9f88 != 0)) && (DAT_1803fa678 != 0)) {
    local_58 = (longlong *)0x0;
    uStack_50 = 0;
    local_48 = 0;
    in_RAX = FUN_18001bcd0(0,&local_58);
    if (local_58 != (longlong *)0x0) {
      bVar2 = 0;
      FUN_18001e2b0(param_2,local_58);
      cVar1 = (**(code **)(*local_58 + 0x138))(local_58,0xffffffff,9);
      if (cVar1 == '\0') {
        uVar3 = (**(code **)(*local_58 + 0x10))(local_58,1);
        if (local_58 != (longlong *)0x0) {
          (**(code **)*local_58)();
          if (local_48 == 0) {
            DAT_1803fa330 = local_28;
            DAT_1803fa339 = local_1f;
            DAT_1803fa33d = local_1b;
            local_29 = local_19;
          }
          else {
            DAT_1803fa330 = local_48;
            DAT_1803fa339 = local_2f;
            DAT_1803fa33d = local_2b;
          }
          DAT_1803fa338 = local_48 != 0;
          uVar3 = 0;
          DAT_1803fa33f = local_29;
        }
        return uVar3 & 0xffffffffffffff00;
      }
      FUN_18002d9c0(local_58[1],0xffffffff,"Primary");
      cVar1 = (**(code **)(*local_58 + 0x138))(local_58,0xffffffff,5);
      if (cVar1 == '\0') {
        uVar3 = (**(code **)(*local_58 + 0x10))(local_58,2);
        if (local_58 != (longlong *)0x0) {
          (**(code **)*local_58)();
          if (local_48 == 0) {
            DAT_1803fa330 = local_68;
            DAT_1803fa339 = local_5f;
            DAT_1803fa33d = local_5b;
            local_9 = local_59;
          }
          else {
            DAT_1803fa330 = local_48;
            DAT_1803fa339 = local_f;
            DAT_1803fa33d = local_b;
          }
          DAT_1803fa338 = local_48 != 0;
          uVar3 = 0;
          DAT_1803fa33f = local_9;
        }
        return uVar3 & 0xffffffffffffff00;
      }
      FUN_18002d9c0(local_58[1],0xffffffff,"Automatic");
      cVar1 = (**(code **)(*local_58 + 0x138))(local_58,0xffffffff,1);
      if (cVar1 != '\0') {
        bVar2 = (**(code **)(*local_58 + 200))(local_58,0xffffffff);
        local_40 = bVar2;
      }
      (**(code **)(*local_58 + 0x10))(local_58,3);
      if (local_58 != (longlong *)0x0) {
        (**(code **)*local_58)();
        DAT_1803fa338 = local_48 != 0;
        DAT_1803fa330 = local_68;
        if ((bool)DAT_1803fa338) {
          DAT_1803fa330 = local_48;
        }
        DAT_1803fa339 = local_5f;
        DAT_1803fa33d = local_5b;
        DAT_1803fa33f = local_59;
      }
      return (ulonglong)bVar2;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



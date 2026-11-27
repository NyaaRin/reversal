// 0x180090f30  FUN_180090f30
// size=1018 thunk=false
// signature: undefined FUN_180090f30()
// status: ok


/* WARNING: Removing unreachable block (ram,0x000180090fa1) */
/* WARNING: Removing unreachable block (ram,0x000180090fb9) */
/* WARNING: Removing unreachable block (ram,0x000180090fb0) */
/* WARNING: Removing unreachable block (ram,0x000180090fc5) */

ulonglong FUN_180090f30(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong in_RAX;
  ulonglong uVar7;
  byte bVar8;
  char cVar9;
  longlong local_b0;
  undefined4 local_a7;
  undefined2 local_a3;
  undefined1 local_a1;
  longlong *local_98;
  undefined8 uStack_90;
  longlong local_88;
  float local_80;
  float local_7c;
  float local_78;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  char local_58;
  undefined4 local_47;
  undefined2 local_43;
  undefined1 local_41;
  
  if ((((*(char *)(param_1 + 0xc) != '\0') && (DAT_1803fa678 != 0)) && (param_2 != 0)) &&
     (DAT_1803fa608 != 0)) {
    local_98 = (longlong *)0x0;
    uStack_90 = 0;
    local_88 = 0;
    in_RAX = FUN_18001bcd0(0,&local_98);
    if (local_98 != (longlong *)0x0) {
      iVar4 = (**(code **)*local_98)();
      local_74 = iVar4;
      FUN_18002dc30(&local_70,local_98[1]);
      FUN_18001e2b0(param_2,local_98);
      uVar7 = (**(code **)(*local_98 + 0x138))(local_98,0xffffffff,9);
      plVar1 = local_98;
      if ((char)uVar7 == '\0') {
        if (local_98 != (longlong *)0x0) {
          uVar7 = (**(code **)*local_98)(local_98);
          if (iVar4 < (int)uVar7) {
            uVar7 = (**(code **)(*plVar1 + 0x10))(plVar1,(int)uVar7 - iVar4);
          }
        }
        if ((local_58 != '\0') && (uVar7 = 0, DAT_1803faf78 != (code *)0x0)) {
          uVar7 = (*DAT_1803faf78)(local_70,local_68,local_60,local_5c);
        }
        if (local_98 != (longlong *)0x0) {
          (**(code **)*local_98)();
          if (local_88 == 0) {
            DAT_1803fa330 = local_b0;
            DAT_1803fa339 = local_a7;
            DAT_1803fa33d = local_a3;
            local_41 = local_a1;
          }
          else {
            DAT_1803fa330 = local_88;
            DAT_1803fa339 = local_47;
            DAT_1803fa33d = local_43;
          }
          DAT_1803fa338 = local_88 != 0;
          uVar7 = 0;
          DAT_1803fa33f = local_41;
        }
        return uVar7 & 0xffffffffffffff00;
      }
      uVar5 = (**(code **)*local_98)();
      local_80 = 0.0;
      local_7c = 0.0;
      local_78 = 0.0;
      cVar2 = FUN_18008e820(local_98,uVar5,"GetBurstShotsLeft",&local_80);
      if (((cVar2 == '\0') ||
          (cVar2 = FUN_18008e820(local_98,uVar5,"GetNextBurstShot",&local_7c), cVar2 == '\0')) ||
         (cVar2 = FUN_18008e820(local_98,uVar5,"GetReloadFinish",&local_78), cVar2 == '\0')) {
        cVar2 = '\0';
      }
      else {
        cVar2 = '\x01';
      }
      cVar9 = cVar2;
      cVar3 = FUN_18008d9b0(local_98,uVar5,"NoTakeAmmoOnBurst");
      iVar6 = FUN_18001e5b0(param_2);
      plVar1 = local_98;
      if ((((cVar2 == '\0') || (local_80 <= 0.0)) ||
          (*(double *)(DAT_1803fa608 + 0x10) < (double)local_7c)) ||
         ((local_78 != 0.0 || ((cVar3 == '\0' && (iVar6 < 1)))))) {
        bVar8 = 0;
      }
      else {
        bVar8 = 1;
      }
      if ((local_98 != (longlong *)0x0) && (iVar6 = (**(code **)*local_98)(local_98), iVar4 < iVar6)
         ) {
        (**(code **)(*plVar1 + 0x10))(plVar1,iVar6 - iVar4);
      }
      if ((local_58 != '\0') && (DAT_1803faf78 != (code *)0x0)) {
        (*DAT_1803faf78)(local_70,local_68,local_60,local_5c,cVar9);
      }
      if (local_98 != (longlong *)0x0) {
        (**(code **)*local_98)();
        if (local_88 != 0) {
          DAT_1803fa330 = local_88;
          DAT_1803fa338 = 1;
          DAT_1803fa339 = local_a7;
          DAT_1803fa33d = local_a3;
          DAT_1803fa33f = local_a1;
          return (ulonglong)bVar8;
        }
        DAT_1803fa330 = local_b0;
        DAT_1803fa338 = 0;
        DAT_1803fa339 = local_a7;
        DAT_1803fa33d = local_a3;
        DAT_1803fa33f = local_a1;
      }
      return (ulonglong)bVar8;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// 0x18007d060  FUN_18007d060
// size=1036 thunk=false
// signature: undefined FUN_18007d060()
// status: ok


/* WARNING: Removing unreachable block (ram,0x00018007d0b5) */
/* WARNING: Removing unreachable block (ram,0x00018007d0cd) */
/* WARNING: Removing unreachable block (ram,0x00018007d0c4) */
/* WARNING: Removing unreachable block (ram,0x00018007d0d9) */

ulonglong FUN_18007d060(undefined8 param_1,longlong param_2,undefined8 param_3,float *param_4)

{
  double dVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ulonglong in_RAX;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  longlong local_90;
  undefined4 local_87;
  undefined2 local_83;
  undefined1 local_81;
  longlong *local_80;
  undefined8 uStack_78;
  longlong local_70;
  int local_68;
  undefined4 local_57;
  undefined2 local_53;
  undefined1 local_51;
  longlong local_50;
  undefined4 local_47;
  undefined2 local_43;
  undefined1 local_41;
  undefined4 local_37;
  undefined2 local_33;
  undefined1 local_31;
  
  if ((DAT_1803fa678 == 0) || (param_2 == 0)) {
LAB_18007d101:
    return in_RAX & 0xffffffffffffff00;
  }
  local_80 = (longlong *)0x0;
  uStack_78 = 0;
  local_70 = 0;
  in_RAX = FUN_18001bcd0(0,&local_80);
  if (local_80 == (longlong *)0x0) goto LAB_18007d101;
  iVar4 = (**(code **)*local_80)();
  uVar7 = 0;
  local_68 = iVar4;
  FUN_18001e2b0(param_2,local_80);
  uVar6 = (**(code **)(*local_80 + 0x138))(local_80,0xffffffff,9);
  if ((char)uVar6 == '\0') {
    if (local_80 != (longlong *)0x0) {
      uVar6 = (**(code **)*local_80)();
      if (iVar4 < (int)uVar6) {
        uVar6 = (**(code **)(*local_80 + 0x10))(local_80,(int)uVar6 - iVar4);
      }
    }
    if (local_80 != (longlong *)0x0) {
      (**(code **)*local_80)();
      if (local_70 == 0) {
        DAT_1803fa330 = local_50;
        DAT_1803fa339 = local_47;
        DAT_1803fa33d = local_43;
        local_51 = local_41;
      }
      else {
        DAT_1803fa330 = local_70;
        DAT_1803fa339 = local_57;
        DAT_1803fa33d = local_53;
      }
      DAT_1803fa338 = local_70 != 0;
      uVar6 = 0;
      DAT_1803fa33f = local_51;
    }
    return uVar6 & 0xffffffffffffff00;
  }
  FUN_18002d9c0(local_80[1],0xffffffff,"Primary");
  uVar6 = (**(code **)(*local_80 + 0x138))(local_80,0xffffffff,5);
  plVar2 = local_80;
  if ((char)uVar6 == '\0') {
    if (local_80 != (longlong *)0x0) {
      uVar6 = (**(code **)*local_80)();
      if (iVar4 < (int)uVar6) {
        uVar6 = (**(code **)(*local_80 + 0x10))(local_80,(int)uVar6 - iVar4);
      }
    }
    if (local_80 != (longlong *)0x0) {
      (**(code **)*local_80)();
      if (local_70 == 0) {
        DAT_1803fa330 = local_90;
        DAT_1803fa339 = local_87;
        DAT_1803fa33d = local_83;
        local_31 = local_81;
      }
      else {
        DAT_1803fa330 = local_70;
        DAT_1803fa339 = local_37;
        DAT_1803fa33d = local_33;
      }
      DAT_1803fa338 = local_70 != 0;
      uVar6 = 0;
      DAT_1803fa33f = local_31;
    }
    return uVar6 & 0xffffffffffffff00;
  }
  (**(code **)(*local_80 + 0xe8))(local_80,param_3,0);
  (**(code **)(*plVar2 + 0xa8))(plVar2,0xfffffffe);
  cVar3 = (**(code **)(*local_80 + 0x138))(local_80,0xffffffff,3);
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*local_80 + 0x138))(local_80,0xffffffff,1);
    if (cVar3 == '\0') goto LAB_18007d3a0;
    cVar3 = (**(code **)(*local_80 + 200))(local_80,0xffffffff);
    fVar8 = DAT_180380bb0;
    if (cVar3 == '\0') {
      fVar8 = 0.0;
    }
    *param_4 = fVar8;
  }
  else {
    dVar1 = (double)(**(code **)(*local_80 + 0xc0))();
    *param_4 = (float)dVar1;
  }
  uVar7 = 1;
LAB_18007d3a0:
  if ((local_80 != (longlong *)0x0) && (iVar5 = (**(code **)*local_80)(), iVar4 < iVar5)) {
    (**(code **)(*local_80 + 0x10))(local_80,iVar5 - iVar4);
  }
  if (local_80 != (longlong *)0x0) {
    (**(code **)*local_80)();
    if (local_70 != 0) {
      DAT_1803fa330 = local_70;
      DAT_1803fa338 = 1;
      DAT_1803fa339 = local_87;
      DAT_1803fa33d = local_83;
      DAT_1803fa33f = local_81;
      return uVar7;
    }
    DAT_1803fa330 = local_90;
    DAT_1803fa338 = 0;
    DAT_1803fa339 = local_87;
    DAT_1803fa33d = local_83;
    DAT_1803fa33f = local_81;
  }
  return uVar7;
}



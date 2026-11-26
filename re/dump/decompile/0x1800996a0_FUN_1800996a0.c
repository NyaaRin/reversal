// 0x1800996a0  FUN_1800996a0
// size=1478 thunk=false
// signature: undefined FUN_1800996a0()
// status: ok


void FUN_1800996a0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  double dVar5;
  char cVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  char local_90;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = false;
  if (DAT_1803faee8 != (code *)0x0) {
    lVar1 = param_1[1];
    FUN_180023010(&local_a8,lVar1);
    (*DAT_1803faee8)(lVar1,param_2,"bullet");
    if ((local_90 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
      (*DAT_1803fae90)(local_a8,local_a0,local_98,local_94);
    }
  }
  cVar6 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);
  dVar5 = DAT_180380fa0;
  dVar10 = DAT_180380ec0;
  if (cVar6 != '\0') {
    uVar7 = (**(code **)*param_1)(param_1);
    if (DAT_1803faee8 != (code *)0x0) {
      lVar1 = param_1[1];
      FUN_180023010(&local_a8,lVar1);
      (*DAT_1803faee8)(lVar1,uVar7,"Penetration");
      if ((local_90 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
        (*DAT_1803fae90)(local_a8,local_a0,local_98,local_94);
      }
    }
    cVar6 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3);
    bVar2 = bVar3;
    if (((cVar6 != '\0') &&
        (dVar8 = (double)(**(code **)(*param_1 + 0xc0))(param_1,0xffffffff), 0.0 < dVar8)) &&
       (dVar8 < dVar10)) {
      DAT_1803e9230 = (float)dVar8;
      bVar2 = true;
    }
    (**(code **)(*param_1 + 0x10))(param_1,1);
    if (DAT_1803faee8 != (code *)0x0) {
      lVar1 = param_1[1];
      FUN_180023010(&local_a8,lVar1);
      (*DAT_1803faee8)(lVar1,uVar7,"Damage");
      if ((local_90 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
        (*DAT_1803fae90)(local_a8,local_a0,local_98,local_94);
      }
    }
    cVar6 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3);
    if (((cVar6 != '\0') &&
        (dVar8 = (double)(**(code **)(*param_1 + 0xc0))(param_1,0xffffffff), 0.0 < dVar8)) &&
       (dVar8 < dVar5)) {
      DAT_1803e9208 = (float)dVar8;
      bVar4 = true;
    }
    (**(code **)(*param_1 + 0x10))(param_1,1);
    if (DAT_1803faee8 != (code *)0x0) {
      lVar1 = param_1[1];
      FUN_180023010(&local_a8,lVar1);
      (*DAT_1803faee8)(lVar1,uVar7,"noricochet");
      if ((local_90 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
        (*DAT_1803fae90)(local_a8,local_a0,local_98,local_94);
      }
    }
    cVar6 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,1);
    if ((cVar6 == '\0') ||
       (cVar6 = (**(code **)(*param_1 + 200))(param_1,0xffffffff), cVar6 == '\0')) {
      DAT_18042398c = 0;
    }
    else {
      DAT_18042398c = 1;
    }
    (**(code **)(*param_1 + 0x10))(param_1,1);
  }
  (**(code **)(*param_1 + 0x10))(param_1,1);
  if (!bVar2) {
    if (DAT_1803faee8 != (code *)0x0) {
      lVar1 = param_1[1];
      FUN_180023010(&local_a8,lVar1);
      (*DAT_1803faee8)(lVar1,param_2,"Penetration");
      if ((local_90 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
        (*DAT_1803fae90)(local_a8,local_a0,local_98,local_94);
      }
    }
    cVar6 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3);
    if (cVar6 == '\0') {
      (**(code **)(*param_1 + 0x10))(param_1,1);
    }
    else {
      dVar9 = (double)(**(code **)(*param_1 + 0xc0))(param_1,0xffffffff);
      (**(code **)(*param_1 + 0x10))(param_1,1);
      dVar8 = DAT_180380d08;
      if (0.0 < dVar9) {
        if (DAT_1803faee8 != (code *)0x0) {
          lVar1 = param_1[1];
          FUN_180023010(&local_a8,lVar1);
          (*DAT_1803faee8)(lVar1,param_2,"PenetrationMultiplier");
          if ((local_90 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
            (*DAT_1803fae90)(local_a8,local_a0,local_98,local_94);
          }
        }
        cVar6 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3);
        if (cVar6 != '\0') {
          dVar8 = (double)(**(code **)(*param_1 + 0xc0))(param_1,0xffffffff);
        }
        (**(code **)(*param_1 + 0x10))(param_1,1);
        if (dVar8 <= 0.0) {
          dVar8 = DAT_180380d08;
        }
        dVar8 = dVar8 * dVar9;
        if ((0.0 < dVar8) && (dVar8 < dVar10)) {
          DAT_1803e9230 = (float)dVar8;
        }
      }
    }
  }
  if (!bVar4) {
    if (DAT_1803faee8 != (code *)0x0) {
      lVar1 = param_1[1];
      FUN_180023010(&local_a8,lVar1);
      (*DAT_1803faee8)(lVar1,param_2,"Primary");
      if ((local_90 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
        (*DAT_1803fae90)(local_a8,local_a0,local_98,local_94);
      }
    }
    cVar6 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);
    if (cVar6 != '\0') {
      uVar7 = (**(code **)*param_1)(param_1);
      if (DAT_1803faee8 != (code *)0x0) {
        lVar1 = param_1[1];
        FUN_180023010(&local_a8,lVar1);
        (*DAT_1803faee8)(lVar1,uVar7,"Damage");
        if ((local_90 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
          (*DAT_1803fae90)(local_a8,local_a0,local_98,local_94);
        }
      }
      cVar6 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3);
      if (((cVar6 != '\0') &&
          (dVar10 = (double)(**(code **)(*param_1 + 0xc0))(param_1,0xffffffff), 0.0 < dVar10)) &&
         (dVar10 < dVar5)) {
        DAT_1803e9208 = (float)dVar10;
      }
      (**(code **)(*param_1 + 0x10))(param_1,1);
    }
    (**(code **)(*param_1 + 0x10))(param_1,1);
  }
  return;
}



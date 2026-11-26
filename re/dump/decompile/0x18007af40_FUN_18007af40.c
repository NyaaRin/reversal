// 0x18007af40  FUN_18007af40
// size=1570 thunk=false
// signature: undefined FUN_18007af40()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18007af40(undefined8 param_1,undefined8 param_2,char param_3,float param_4,
                       float *param_5,float *param_6,char param_7,char param_8,float *param_9,
                       float *param_10)

{
  longlong *plVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 **ppuVar9;
  bool bVar10;
  float fVar11;
  double dVar12;
  byte local_c8;
  undefined4 local_b7;
  undefined2 local_b3;
  undefined1 local_b1;
  undefined8 *local_a0;
  undefined4 uStack_98;
  float *local_90;
  longlong *local_88;
  undefined8 *puStack_80;
  float *local_78;
  undefined8 *local_70 [2];
  float *local_60;
  
  bVar10 = DAT_1803fa678 == 0;
  if (bVar10) {
    local_a0 = (undefined8 *)0x0;
    uStack_98 = 0;
    local_90 = (float *)0x0;
    ppuVar9 = &local_a0;
  }
  else {
    ppuVar9 = (undefined8 **)FUN_18001bcd0(param_1,local_70);
  }
  pfVar2 = local_90;
  plVar1 = *ppuVar9;
  local_88 = plVar1;
  puStack_80 = ppuVar9[1];
  local_78 = (float *)ppuVar9[2];
  if ((bVar10) && (local_a0 != (undefined8 *)0x0)) {
    (**(code **)*local_a0)();
    DAT_1803fa330 = pfVar2;
    if (pfVar2 == (float *)0x0) {
      DAT_1803fa330 = param_10;
    }
    DAT_1803fa338 = pfVar2 != (float *)0x0;
    DAT_1803fa339 = local_b7;
    DAT_1803fa33d = local_b3;
    ppuVar9 = (undefined8 **)0x0;
    DAT_1803fa33f = local_b1;
  }
  if ((!bVar10) && (local_70[0] != (undefined8 *)0x0)) {
    (**(code **)*local_70[0])();
    DAT_1803fa338 = local_60 != (float *)0x0;
    DAT_1803fa330 = param_10;
    if ((bool)DAT_1803fa338) {
      DAT_1803fa330 = local_60;
    }
    DAT_1803fa339 = local_b7;
    DAT_1803fa33d = local_b3;
    ppuVar9 = (undefined8 **)0x0;
    DAT_1803fa33f = local_b1;
  }
  if (plVar1 == (longlong *)0x0) {
    return (ulonglong)ppuVar9 & 0xffffffffffffff00;
  }
  iVar6 = (**(code **)*plVar1)(plVar1);
  local_c8 = 0;
  FUN_180023e60(plVar1,0);
  FUN_18002db10(plVar1[1],0xffffffff,&DAT_180341c48);
  cVar5 = (**(code **)(*plVar1 + 0x138))(plVar1,0xffffffff,5);
  if (cVar5 != '\0') {
    FUN_18002db10(plVar1[1],0xffffffff,"randomseed");
    cVar5 = (**(code **)(*plVar1 + 0x138))(plVar1,0xffffffff,6);
    if (cVar5 != '\0') {
      (**(code **)(*plVar1 + 0xf0))(plVar1,param_2);
      iVar7 = FUN_180023180(plVar1[1],1,0);
      if (iVar7 == 0) {
        if (param_3 != '\0') {
          FUN_18002d9c0(plVar1[1],0xffffffff,&DAT_180346dac);
          cVar5 = (**(code **)(*plVar1 + 0x138))(plVar1,0xffffffff,6);
          if (cVar5 == '\0') goto LAB_18007b4c8;
          (**(code **)(*plVar1 + 0xf0))(plVar1,DAT_180380cf0);
          (**(code **)(*plVar1 + 0xf0))(plVar1,DAT_180380d18);
          iVar7 = FUN_180023180(plVar1[1],2,1);
          if (iVar7 != 0) goto LAB_18007b4c8;
          (**(code **)(*plVar1 + 0x10))(plVar1,1);
        }
        FUN_18002d9c0(plVar1[1],0xffffffff,&DAT_180346dac);
        cVar5 = (**(code **)(*plVar1 + 0x138))(plVar1,0xffffffff,6);
        if (cVar5 != '\0') {
          fVar11 = (float)((uint)param_4 ^ DAT_1803817f0);
          (**(code **)(*plVar1 + 0xf0))(plVar1,(double)fVar11);
          (**(code **)(*plVar1 + 0xf0))(plVar1,(double)param_4);
          iVar7 = FUN_180023180(plVar1[1],2,1);
          if ((iVar7 == 0) &&
             (cVar5 = (**(code **)(*plVar1 + 0x138))(plVar1,0xffffffff,3), cVar5 != '\0')) {
            dVar12 = (double)(**(code **)(*plVar1 + 0xc0))(plVar1,0xffffffff);
            *param_5 = (float)dVar12;
            (**(code **)(*plVar1 + 0x10))(plVar1,1);
            FUN_18002d9c0(plVar1[1],0xffffffff,&DAT_180346dac);
            cVar5 = (**(code **)(*plVar1 + 0x138))(plVar1,0xffffffff,6);
            if (cVar5 != '\0') {
              (**(code **)(*plVar1 + 0xf0))(plVar1,(double)fVar11);
              (**(code **)(*plVar1 + 0xf0))(plVar1,(double)param_4);
              iVar7 = FUN_180023180(plVar1[1],2,1);
              if ((iVar7 == 0) &&
                 (cVar5 = (**(code **)(*plVar1 + 0x138))(plVar1,0xffffffff,3), cVar5 != '\0')) {
                dVar12 = (double)(**(code **)(*plVar1 + 0xc0))(plVar1,0xffffffff);
                *param_6 = (float)dVar12;
                (**(code **)(*plVar1 + 0x10))(plVar1,1);
                uVar4 = DAT_1803813b0;
                uVar3 = DAT_180380d08;
                local_c8 = 1;
                iVar7 = 0;
                while (iVar7 < 2) {
                  cVar5 = param_8;
                  pfVar2 = param_10;
                  if (iVar7 == 0) {
                    cVar5 = param_7;
                    pfVar2 = param_9;
                  }
                  if ((cVar5 == '\0') || (pfVar2 == (float *)0x0)) {
                    iVar7 = iVar7 + 1;
                  }
                  else {
                    FUN_18002d9c0(plVar1[1],0xffffffff,&DAT_180346dac);
                    cVar5 = (**(code **)(*plVar1 + 0x138))(plVar1,0xffffffff,6);
                    if (cVar5 == '\0') {
LAB_18007b4b7:
                      local_c8 = 0;
                      break;
                    }
                    (**(code **)(*plVar1 + 0xf0))(plVar1,uVar4);
                    (**(code **)(*plVar1 + 0xf0))(plVar1,uVar3);
                    iVar8 = FUN_180023180(plVar1[1],2,1);
                    if ((iVar8 != 0) ||
                       (cVar5 = (**(code **)(*plVar1 + 0x138))(plVar1,0xffffffff,3), cVar5 == '\0'))
                    goto LAB_18007b4b7;
                    dVar12 = (double)(**(code **)(*plVar1 + 0xc0))(plVar1,0xffffffff);
                    *pfVar2 = (float)dVar12;
                    (**(code **)(*plVar1 + 0x10))(plVar1,1);
                    iVar7 = iVar7 + 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_18007b4c8:
  while (iVar7 = (**(code **)*plVar1)(plVar1), iVar6 < iVar7) {
    (**(code **)(*plVar1 + 0x10))(plVar1,1);
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)*plVar1)(plVar1);
    DAT_1803fa338 = local_78 != (float *)0x0;
    DAT_1803fa330 = param_10;
    if ((bool)DAT_1803fa338) {
      DAT_1803fa330 = local_78;
    }
    DAT_1803fa339 = local_b7;
    DAT_1803fa33d = local_b3;
    DAT_1803fa33f = local_b1;
  }
  return (ulonglong)local_c8;
}



// 0x180078520  FUN_180078520
// size=1125 thunk=false
// signature: undefined FUN_180078520()
// status: ok


ulonglong FUN_180078520(undefined8 param_1,undefined4 param_2,float param_3,float param_4,
                       float *param_5,float *param_6)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 **ppuVar6;
  ulonglong uVar7;
  bool bVar8;
  double dVar9;
  byte local_c8;
  undefined8 *local_c0;
  undefined4 uStack_b8;
  undefined1 uStack_b4;
  undefined2 uStack_b3;
  undefined1 uStack_b1;
  undefined8 *local_b0;
  longlong *local_a8;
  undefined8 *puStack_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  char local_78;
  undefined8 *local_70 [2];
  undefined8 *local_60;
  
  bVar8 = DAT_1803fa678 == 0;
  if (bVar8) {
    local_c0 = (undefined8 *)0x0;
    uStack_b8 = 0;
    local_b0 = (undefined8 *)0x0;
    ppuVar6 = &local_c0;
  }
  else {
    ppuVar6 = (undefined8 **)FUN_18001bcd0(param_1,local_70);
  }
  puVar2 = local_b0;
  plVar1 = *ppuVar6;
  local_a8 = plVar1;
  puStack_a0 = ppuVar6[1];
  local_98 = ppuVar6[2];
  if ((bVar8) && (local_c0 != (undefined8 *)0x0)) {
    (**(code **)*local_c0)();
    DAT_1803fa330 = puVar2;
    if (puVar2 == (undefined8 *)0x0) {
      DAT_1803fa330 = local_c0;
    }
    DAT_1803fa338 = puVar2 != (undefined8 *)0x0;
    DAT_1803fa339 = CONCAT13(uStack_b4,uStack_b8._1_3_);
    DAT_1803fa33d = uStack_b3;
    ppuVar6 = (undefined8 **)0x0;
    DAT_1803fa33f = uStack_b1;
  }
  if ((!bVar8) && (local_70[0] != (undefined8 *)0x0)) {
    (**(code **)*local_70[0])();
    DAT_1803fa338 = local_60 != (undefined8 *)0x0;
    DAT_1803fa330 = local_c0;
    if ((bool)DAT_1803fa338) {
      DAT_1803fa330 = local_60;
    }
    DAT_1803fa339 = CONCAT13(uStack_b4,uStack_b8._1_3_);
    DAT_1803fa33d = uStack_b3;
    ppuVar6 = (undefined8 **)0x0;
    DAT_1803fa33f = uStack_b1;
  }
  if (plVar1 == (longlong *)0x0) {
    uVar7 = (ulonglong)ppuVar6 & 0xffffffffffffff00;
  }
  else {
    FUN_18002dc30(&local_90,plVar1[1]);
    iVar4 = (**(code **)*plVar1)(plVar1);
    local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,iVar4);
    local_c8 = 0;
    FUN_180023e60(plVar1,0);
    FUN_18002db10(plVar1[1],0xffffffff,&DAT_180341c48);
    cVar3 = (**(code **)(*plVar1 + 0x138))(plVar1,0xffffffff,5);
    if (cVar3 != '\0') {
      FUN_18002db10(plVar1[1],0xffffffff,"randomseed");
      cVar3 = (**(code **)(*plVar1 + 0x138))(plVar1,0xffffffff,6);
      if (cVar3 != '\0') {
        (**(code **)(*plVar1 + 0xf0))(plVar1,param_2);
        iVar5 = FUN_180023180(plVar1[1],1,0);
        if (iVar5 == 0) {
          FUN_18002d9c0(plVar1[1],0xffffffff,&DAT_180346dac);
          cVar3 = (**(code **)(*plVar1 + 0x138))(plVar1,0xffffffff,6);
          if (cVar3 != '\0') {
            (**(code **)(*plVar1 + 0xf0))(plVar1,SUB84((double)param_3,0));
            (**(code **)(*plVar1 + 0xf0))(plVar1,SUB84((double)param_4,0));
            iVar5 = FUN_180023180(plVar1[1],2,1);
            if ((iVar5 == 0) &&
               (cVar3 = (**(code **)(*plVar1 + 0x138))(plVar1,0xffffffff,3), cVar3 != '\0')) {
              dVar9 = (double)(**(code **)(*plVar1 + 0xc0))(plVar1,0xffffffff);
              *param_5 = (float)dVar9;
              (**(code **)(*plVar1 + 0x10))(plVar1,1);
              FUN_18002d9c0(plVar1[1],0xffffffff,&DAT_180346dac);
              cVar3 = (**(code **)(*plVar1 + 0x138))(plVar1,0xffffffff,6);
              if (cVar3 != '\0') {
                (**(code **)(*plVar1 + 0xf0))(plVar1,SUB84((double)param_3,0));
                (**(code **)(*plVar1 + 0xf0))(plVar1,SUB84((double)param_4,0));
                iVar5 = FUN_180023180(plVar1[1],2,1);
                if ((iVar5 == 0) &&
                   (cVar3 = (**(code **)(*plVar1 + 0x138))(plVar1,0xffffffff,3), cVar3 != '\0')) {
                  dVar9 = (double)(**(code **)(*plVar1 + 0xc0))(plVar1,0xffffffff);
                  *param_6 = (float)dVar9;
                  local_c8 = 1;
                }
              }
            }
          }
        }
      }
    }
    while (iVar5 = (**(code **)*plVar1)(plVar1), iVar4 < iVar5) {
      (**(code **)(*plVar1 + 0x10))(plVar1,1);
    }
    if ((local_78 != '\0') && (DAT_1803faf78 != (code *)0x0)) {
      (*DAT_1803faf78)(local_90,local_88,local_80,local_7c);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)*plVar1)(plVar1);
      DAT_1803fa338 = local_98 != (undefined8 *)0x0;
      DAT_1803fa330 = local_c0;
      if ((bool)DAT_1803fa338) {
        DAT_1803fa330 = local_98;
      }
      DAT_1803fa339 = CONCAT13(uStack_b4,uStack_b8._1_3_);
      DAT_1803fa33d = uStack_b3;
      DAT_1803fa33f = uStack_b1;
    }
    uVar7 = (ulonglong)local_c8;
  }
  return uVar7;
}



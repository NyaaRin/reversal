// 0x180079e70  vfunc_shared_180079e70
// size=933 thunk=false
// signature: undefined vfunc_shared_180079e70()
// status: ok


void vfunc_shared_180079e70(longlong param_1,longlong param_2)

{
  code *pcVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  undefined1 uVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  undefined8 local_a0;
  uint local_98;
  undefined1 uStack_94;
  undefined2 local_93;
  undefined1 local_91;
  longlong *local_90;
  undefined8 uStack_88;
  longlong local_80;
  float local_78;
  float local_74;
  int local_70;
  uint local_68;
  uint local_60;
  uint local_58;
  longlong local_50;
  
  local_50 = param_1;
  vfunc_shared_180078c00();
  if (param_2 != *(longlong *)(param_1 + 0x70)) {
    *(longlong *)(param_1 + 0x70) = param_2;
    *(undefined1 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  if ((DAT_1803fa678 != 0) && (param_2 != 0)) {
    local_90 = (longlong *)0x0;
    uStack_88 = 0;
    local_80 = 0;
    FUN_18001bcd0(0,&local_90);
    if (local_90 != (longlong *)0x0) {
      iVar4 = (**(code **)*local_90)();
      bVar10 = false;
      bVar11 = false;
      uVar9 = 0;
      fVar12 = 0.0;
      local_78 = 0.0;
      fVar13 = 0.0;
      local_74 = 0.0;
      local_a0 = 0;
      local_98 = 0;
      local_70 = iVar4;
      cVar3 = FUN_18001e2b0(param_2,local_90);
      if (cVar3 != '\0') {
        FUN_18002d9c0(local_90[1],0xffffffff,"AddSpread");
        cVar3 = (**(code **)(*local_90 + 0x138))(local_90,0xffffffff,3);
        bVar10 = cVar3 != '\0';
        if (bVar10) {
          dVar2 = (double)(**(code **)(*local_90 + 0xc0))(local_90,0xffffffff);
          fVar12 = (float)dVar2;
          local_78 = fVar12;
        }
        (**(code **)(*local_90 + 0x10))(local_90,1);
      }
      pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
      uVar5 = (**(code **)(*DAT_1803fa668 + 0x60))();
      lVar7 = (*pcVar1)(DAT_1803fa360,uVar5);
      if ((lVar7 != 0) && (cVar3 = FUN_18001e2b0(lVar7,local_90), cVar3 != '\0')) {
        FUN_18002d9c0(local_90[1],0xffffffff,"ViewAff");
        cVar3 = (**(code **)(*local_90 + 0x138))(local_90,0xffffffff,3);
        bVar11 = cVar3 != '\0';
        if (bVar11) {
          dVar2 = (double)(**(code **)(*local_90 + 0xc0))(local_90,0xffffffff);
          fVar13 = (float)dVar2;
          local_74 = fVar13;
        }
        (**(code **)(*local_90 + 0x10))(local_90,1);
        FUN_18002d9c0(local_90[1],0xffffffff,"LastView");
        cVar3 = (**(code **)(*local_90 + 0x138))(local_90,0xffffffff,10);
        if (cVar3 != '\0') {
          puVar8 = (uint *)(**(code **)(*local_90 + 0x178))(local_90,0xffffffff);
          local_68 = *puVar8;
          if ((((local_68 & 0x7f800000) != 0x7f800000) &&
              (local_60 = puVar8[1], (local_60 & 0x7f800000) != 0x7f800000)) &&
             (local_58 = puVar8[2], (local_58 & 0x7f800000) != 0x7f800000)) {
            uVar9 = 1;
            local_a0 = CONCAT44(local_60,local_68);
            local_98 = local_58;
          }
        }
        (**(code **)(*local_90 + 0x10))(local_90,1);
      }
      iVar6 = (**(code **)*local_90)();
      while (iVar4 < iVar6) {
        (**(code **)(*local_90 + 0x10))(local_90,1);
        iVar6 = (**(code **)*local_90)();
      }
      FUN_180079b90(param_1,bVar11,fVar13,uVar9,&local_a0,bVar10,fVar12);
    }
    if (local_90 != (longlong *)0x0) {
      (**(code **)*local_90)();
      DAT_1803fa338 = local_80 != 0;
      DAT_1803fa330 = local_a0;
      if ((bool)DAT_1803fa338) {
        DAT_1803fa330 = local_80;
      }
      DAT_1803fa339 = CONCAT13(uStack_94,local_98._1_3_);
      DAT_1803fa33d = local_93;
      DAT_1803fa33f = local_91;
    }
  }
  return;
}



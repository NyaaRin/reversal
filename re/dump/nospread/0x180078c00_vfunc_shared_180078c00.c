// 180078c00  vfunc_shared_180078c00
// signature: undefined vfunc_shared_180078c00()
// status: ok


void vfunc_shared_180078c00(longlong param_1,longlong param_2)

{
  code *pcVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint *puVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  longlong *local_58;
  undefined8 uStack_50;
  longlong local_48;
  longlong local_40;
  undefined4 local_37;
  undefined2 local_33;
  undefined1 local_31;
  int local_30;
  uint local_28;
  uint local_20;
  uint local_18;
  
  if ((DAT_1803fa678 != 0) && (param_2 != 0)) {
    local_58 = (longlong *)0x0;
    uStack_50 = 0;
    local_48 = 0;
    FUN_18001bcd0(0,&local_58);
    if (local_58 != (longlong *)0x0) {
      iVar4 = (**(code **)*local_58)();
      local_30 = iVar4;
      cVar3 = FUN_18001e2b0(param_2,local_58);
      if (cVar3 != '\0') {
        FUN_18002d9c0(local_58[1],0xffffffff,"CurCone");
        cVar3 = (**(code **)(*local_58 + 0x138))(local_58,0xffffffff,3);
        if (cVar3 != '\0') {
          dVar2 = (double)(**(code **)(*local_58 + 0xc0))(local_58,0xffffffff);
          *(float *)(param_1 + 8) = (float)dVar2;
        }
        (**(code **)(*local_58 + 0x10))(local_58,1);
        *(undefined4 *)(param_1 + 0x24) = 0;
        FUN_18002d9c0(local_58[1],0xffffffff,"MaxSpreadInc");
        cVar3 = (**(code **)(*local_58 + 0x138))(local_58,0xffffffff,3);
        if (cVar3 != '\0') {
          dVar2 = (double)(**(code **)(*local_58 + 0xc0))(local_58,0xffffffff);
          *(float *)(param_1 + 0x24) = (float)dVar2;
        }
        (**(code **)(*local_58 + 0x10))(local_58,1);
      }
      bVar10 = false;
      *(undefined1 *)(param_1 + 0x14) = 0;
      *(undefined1 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      piVar9 = (int *)&DAT_1803e9f78;
      if (0xf < DAT_1803e9f90) {
        piVar9 = DAT_1803e9f78;
      }
      if (DAT_1803e9f88 == 7) {
        iVar8 = *piVar9 + -0x625f7763;
        if ((iVar8 == 0) && (iVar8 = *(ushort *)(piVar9 + 1) - 0x7361, iVar8 == 0)) {
          iVar8 = *(byte *)((longlong)piVar9 + 6) - 0x65;
        }
        bVar10 = iVar8 == 0;
      }
      if (!bVar10) {
        pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
        uVar5 = (**(code **)(*DAT_1803fa668 + 0x60))();
        lVar6 = (*pcVar1)(DAT_1803fa360,uVar5);
        if ((lVar6 != 0) && (cVar3 = FUN_18001e2b0(lVar6,local_58), cVar3 != '\0')) {
          FUN_18002d9c0(local_58[1],0xffffffff,"ViewAff");
          cVar3 = (**(code **)(*local_58 + 0x138))(local_58,0xffffffff,3);
          if (cVar3 != '\0') {
            *(undefined1 *)(param_1 + 0xc) = 1;
            dVar2 = (double)(**(code **)(*local_58 + 0xc0))(local_58,0xffffffff);
            *(float *)(param_1 + 0x10) = (float)dVar2;
          }
          (**(code **)(*local_58 + 0x10))(local_58,1);
          FUN_18002d9c0(local_58[1],0xffffffff,"LastView");
          cVar3 = (**(code **)(*local_58 + 0x138))(local_58,0xffffffff,10);
          if (cVar3 != '\0') {
            puVar7 = (uint *)(**(code **)(*local_58 + 0x178))(local_58,0xffffffff);
            local_28 = *puVar7;
            if ((((local_28 & 0x7f800000) != 0x7f800000) &&
                (local_20 = puVar7[1], (local_20 & 0x7f800000) != 0x7f800000)) &&
               (local_18 = puVar7[2], (local_18 & 0x7f800000) != 0x7f800000)) {
              *(undefined1 *)(param_1 + 0x14) = 1;
              *(uint *)(param_1 + 0x18) = local_28;
              *(uint *)(param_1 + 0x1c) = local_20;
              *(uint *)(param_1 + 0x20) = local_18;
            }
          }
          (**(code **)(*local_58 + 0x10))(local_58,1);
        }
      }
      iVar8 = (**(code **)*local_58)();
      while (iVar4 < iVar8) {
        (**(code **)(*local_58 + 0x10))(local_58,1);
        iVar8 = (**(code **)*local_58)();
      }
    }
    if (local_58 != (longlong *)0x0) {
      (**(code **)*local_58)();
      DAT_1803fa338 = local_48 != 0;
      DAT_1803fa330 = local_40;
      if ((bool)DAT_1803fa338) {
        DAT_1803fa330 = local_48;
      }
      DAT_1803fa339 = local_37;
      DAT_1803fa33d = local_33;
      DAT_1803fa33f = local_31;
    }
  }
  return;
}



// 0x1801406e0  FUN_1801406e0
// size=560 thunk=false
// signature: undefined FUN_1801406e0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801406e0(undefined8 *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  float *pfVar8;
  int iVar9;
  float fVar10;
  undefined1 local_34 [20];
  
  iVar2 = DAT_180401598;
  if (0 < DAT_180401598) {
    iVar3 = FUN_1800b3740();
    iVar9 = 0;
    if (-1 < (int)DAT_1804096d8) {
      iVar9 = (int)DAT_1804096d8;
    }
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
    DAT_1804096cc = DAT_1804096cc + iVar2;
    if (iVar9 < iVar2) {
      DAT_1804096d0 = DAT_1804096d0 + 1;
      DAT_1804096c0 = DAT_1804096c0 + iVar9;
      uVar5 = FUN_1800b3740();
      iVar4 = FUN_1800b3740();
      iVar3 = 0;
      if (-1 < (int)DAT_1804096d8) {
        iVar3 = (int)DAT_1804096d8;
      }
      if (iVar4 < iVar3) {
        iVar3 = iVar4;
      }
      FUN_180014410("[WARP] bank short: asked %d, granted %d (bank %d/%d) - releasing the smaller burst\n"
                    ,iVar2,iVar9,iVar3,uVar5);
      DAT_180401598 = iVar9;
    }
    else {
      DAT_1804096c0 = DAT_1804096c0 + iVar2;
    }
    iVar2 = DAT_180401598;
    if (0 < DAT_180401598) {
      *(int *)(*(longlong *)*param_1 + 0xc) = *(int *)(*(longlong *)*param_1 + 0xc) + DAT_180401598;
      lVar6 = *(longlong *)*param_1;
      if (DAT_1803fa620 == 0) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = *(undefined4 *)(DAT_1803fa620 + 0x20b88);
      }
      FUN_180014410("[WARP] release ticks=%d clChoked=%d nchChoked=%d outSeq=%d ack=%d\n",iVar2,
                    uVar5,*(undefined4 *)(lVar6 + 0x20),*(undefined4 *)(lVar6 + 0xc),
                    *(undefined4 *)(lVar6 + 0x14));
      pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
      uVar5 = (**(code **)(*DAT_1803fa668 + 0x60))();
      lVar6 = (*pcVar1)(DAT_1803fa360,uVar5);
      if (lVar6 != 0) {
        puVar7 = (undefined8 *)FUN_18001daf0(lVar6,local_34);
        _DAT_1805b8888 = *puVar7;
        DAT_1805b8890 = *(undefined4 *)(puVar7 + 1);
        DAT_18040159c = DAT_180401598;
        DAT_1803e7b6c = 0;
        pfVar8 = (float *)FUN_18001d530(lVar6);
        fVar10 = pfVar8[1] * pfVar8[1] + *pfVar8 * *pfVar8;
        if (fVar10 < 0.0) {
          fVar10 = sqrtf(fVar10);
        }
        else {
          fVar10 = SQRT(fVar10);
        }
        iVar2 = DAT_180401598;
        DAT_180401594 = 0;
        DAT_180401598 = 0;
        if (0 < iVar2) {
          _DAT_1803e9fd8 = DAT_1805b8888;
          _DAT_1803e9fdc = DAT_1805b888c;
          _DAT_1803e9fe0 = DAT_1805b8890;
          DAT_1804096c8 = iVar2;
          _DAT_1804096d4 = fVar10;
          DAT_1803e7ba4 = 0xc;
          return;
        }
      }
    }
  }
  DAT_180401598 = 0;
  DAT_180401594 = 0;
  return;
}



// 0x18029d4d0  FUN_18029d4d0
// size=728 thunk=false
// signature: undefined FUN_18029d4d0()
// status: ok


uint * FUN_18029d4d0(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  int iVar5;
  void *_Dst;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 local_res10 [2];
  
  iVar2 = *(int *)(param_2 + 0x30);
  iVar7 = *(int *)(param_2 + 0x34);
  if (iVar2 == iVar7) {
    if (iVar7 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar7 / 2 + iVar7;
    }
    iVar9 = iVar2 + 1;
    if (iVar2 + 1 < iVar5) {
      iVar9 = iVar5;
    }
    if (iVar7 < iVar9) {
      _Dst = (void *)FUN_18026f580((longlong)iVar9 * 0x2c);
      if (*(void **)(param_2 + 0x38) != (void *)0x0) {
        memcpy(_Dst,*(void **)(param_2 + 0x38),(longlong)*(int *)(param_2 + 0x30) * 0x2c);
        FUN_18026f680(*(undefined8 *)(param_2 + 0x38));
      }
      *(void **)(param_2 + 0x38) = _Dst;
      *(int *)(param_2 + 0x34) = iVar9;
    }
  }
  uVar3 = param_4[1];
  lVar6 = (longlong)*(int *)(param_2 + 0x30) * 0x2c;
  lVar11 = *(longlong *)(param_2 + 0x38);
  *(undefined8 *)(lVar6 + lVar11) = *param_4;
  ((undefined8 *)(lVar6 + lVar11))[1] = uVar3;
  uVar3 = param_4[3];
  puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar11);
  *puVar1 = param_4[2];
  puVar1[1] = uVar3;
  uVar3 = *(undefined8 *)((longlong)param_4 + 0x24);
  puVar1 = (undefined8 *)(lVar6 + 0x1c + lVar11);
  *puVar1 = *(undefined8 *)((longlong)param_4 + 0x1c);
  puVar1[1] = uVar3;
  *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + 1;
  puVar10 = (uint *)((longlong)iVar2 * 0x2c + *(longlong *)(param_2 + 0x38));
  if (puVar10[10] != 0xffffffff) {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x68);
    lVar6 = (longlong)
            (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x78) +
                     (ulonglong)(puVar10[10] & 0x7ffff) * 4) << 0xc) >> 0xc;
    puVar10[6] = (uint)((float)*(ushort *)(lVar11 + lVar6 * 8) * *(float *)(param_1 + 0x54));
    puVar10[7] = (uint)((float)*(ushort *)(lVar11 + 2 + lVar6 * 8) * *(float *)(param_1 + 0x58));
    puVar10[8] = (uint)((float)((uint)*(ushort *)(lVar11 + 4 + lVar6 * 8) +
                               (uint)*(ushort *)(lVar11 + lVar6 * 8)) * *(float *)(param_1 + 0x54));
    puVar10[9] = (uint)((float)((uint)*(ushort *)(lVar11 + 6 + lVar6 * 8) +
                               (uint)*(ushort *)(lVar11 + 2 + lVar6 * 8)) *
                       *(float *)(param_1 + 0x58));
    uVar8 = *(uint *)(param_2 + 0x4c);
    *(uint *)(param_2 + 0x4c) =
         ((uint)*(ushort *)(lVar11 + 6 + lVar6 * 8) * (uint)*(ushort *)(lVar11 + 4 + lVar6 * 8) +
          uVar8 ^ uVar8) & 0x3ffffff ^ uVar8;
  }
  fVar4 = DAT_180380ac0;
  if (param_3 != 0) {
    fVar14 = *(float *)(**(longlong **)(*(longlong *)(param_2 + 0x58) + 0x28) + 0x3c);
    fVar12 = DAT_180380bb0;
    if (fVar14 != 0.0) {
      fVar12 = *(float *)(param_2 + 0x14) / fVar14;
    }
    fVar14 = (float)puVar10[1];
    fVar13 = fVar12 * *(float *)(param_3 + 0x58);
    if ((fVar13 <= fVar14) && (fVar13 = fVar12 * *(float *)(param_3 + 0x5c), fVar14 <= fVar13)) {
      fVar13 = fVar14;
    }
    if (fVar13 != fVar14) {
      fVar14 = (fVar13 - fVar14) * DAT_180380ac0;
      if (*(char *)(param_3 + 0x36) != '\0') {
        fVar14 = (float)(int)fVar14;
      }
      puVar10[2] = (uint)(fVar14 + (float)puVar10[2]);
      puVar10[4] = (uint)(fVar14 + (float)puVar10[4]);
    }
    if (*(char *)(param_3 + 0x36) != '\0') {
      fVar13 = (float)(int)(fVar13 + fVar4);
    }
    puVar10[1] = (uint)(fVar13 + *(float *)(param_3 + 0x60));
  }
  if ((*puVar10 & 1) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 0x56) = 1;
    *(undefined1 *)(param_1 + 0x53) = 1;
  }
  uVar8 = *puVar10 >> 6;
  iVar7 = uVar8 + 1;
  if (*(int *)(param_2 + 0x20) < iVar7) {
    local_res10[0] = 0xbf800000;
    FUN_1802a07e0(param_2,iVar7,local_res10);
    local_res10[0] = CONCAT22(local_res10[0]._2_2_,0xffff);
    FUN_1802a09d0(param_2 + 0x20,iVar7,local_res10);
  }
  *(uint *)(*(longlong *)(param_2 + 8) + (ulonglong)uVar8 * 4) = puVar10[1];
  *(short *)(*(longlong *)(param_2 + 0x28) + (ulonglong)uVar8 * 2) = (short)iVar2;
  lVar11 = (longlong)((int)uVar8 >> 0xd) >> 3;
  *(byte *)(lVar11 + 0x34 + *(longlong *)(param_2 + 0x58)) =
       *(byte *)(lVar11 + 0x34 + *(longlong *)(param_2 + 0x58)) |
       (byte)(1 << ((int)uVar8 >> 0xd & 7U));
  return puVar10;
}



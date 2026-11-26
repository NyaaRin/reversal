// 0x18029a210  FUN_18029a210
// size=722 thunk=false
// signature: undefined FUN_18029a210()
// status: ok


undefined8 FUN_18029a210(longlong param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  ulonglong uVar12;
  ushort uVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  int local_b8;
  uint local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  float local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  
  lVar7 = *(longlong *)(param_2 + 0x58);
  lVar9 = FUN_18029da20(param_2,0x2e);
  if (lVar9 == 0) {
    lVar9 = FUN_18029da20(param_2,0xff0e);
    if (lVar9 == 0) {
      return 0;
    }
  }
  uVar12 = (ulonglong)(*(uint *)(lVar9 + 0x28) & 0x7ffff);
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x68);
  lVar14 = (longlong)
           (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x78) + uVar12 * 4) << 0xc) >>
           0xc;
  fVar16 = (*(float *)(lVar9 + 0x10) - *(float *)(lVar9 + 8)) + DAT_180380bb0;
  local_50 = FUN_18029c320(param_1,(uint)*(ushort *)(lVar8 + 4 + lVar14 * 8) * 3 + 2,
                           *(undefined2 *)(lVar8 + 6 + lVar14 * 8),0);
  local_70 = *(float *)(lVar9 + 8);
  local_60 = 0;
  uStack_58 = 0;
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x68);
  local_78 = (uint)*(ushort *)(lVar7 + 0x30) << 6 | 2;
  local_68 = (fVar16 * DAT_180380e28 + local_70) - DAT_180380bb0;
  local_64 = *(undefined4 *)(lVar9 + 0x14);
  local_74 = *(float *)(lVar9 + 4);
  if (*(float *)(lVar9 + 4) <= local_68) {
    local_74 = local_68;
  }
  lVar15 = (longlong)
           (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x78) +
                    (ulonglong)(local_50 & 0x7ffff) * 4) << 0xc) >> 0xc;
  local_6c = *(undefined4 *)(lVar9 + 0xc);
  uVar10 = FUN_18029d4d0(param_1,param_2,0,&local_78);
  lVar7 = *(longlong *)(param_1 + 0x38);
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x68);
  lVar14 = (longlong)
           (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x78) + uVar12 * 4) << 0xc) >>
           0xc;
  local_b8 = 0;
  do {
    uVar1 = *(ushort *)(lVar9 + 4 + lVar14 * 8);
    iVar11 = 0;
    uVar2 = *(ushort *)(lVar9 + 6 + lVar14 * 8);
    uVar3 = *(ushort *)(lVar8 + lVar15 * 8);
    uVar4 = *(ushort *)(lVar9 + 2 + lVar14 * 8);
    uVar13 = *(ushort *)(lVar8 + 2 + lVar15 * 8);
    uVar5 = *(ushort *)(lVar9 + lVar14 * 8);
    if (uVar2 != 0) {
      do {
        iVar6 = *(int *)(lVar7 + 0x24);
        memcpy((void *)((longlong)
                        (int)(((iVar11 + (uint)uVar13) * *(int *)(lVar7 + 0x1c) +
                              (uVar1 + 1) * local_b8 + (uint)uVar3) * iVar6) +
                       *(longlong *)(lVar7 + 0x28)),
               (void *)((longlong)
                        (int)(((iVar11 + (uint)uVar4) * *(int *)(lVar7 + 0x1c) + (uint)uVar5) *
                             iVar6) + *(longlong *)(lVar7 + 0x28)),
               (longlong)(int)(iVar6 * (uint)uVar1));
        iVar11 = iVar11 + 1;
      } while (iVar11 < (int)(uint)uVar2);
      uVar13 = *(ushort *)(lVar8 + 2 + lVar15 * 8);
      uVar3 = *(ushort *)(lVar8 + lVar15 * 8);
    }
    local_b8 = local_b8 + 1;
  } while (local_b8 < 3);
  FUN_1802981f0(lVar7,uVar3,uVar13,*(undefined2 *)(lVar8 + 4 + lVar15 * 8),
                *(undefined2 *)(lVar8 + 6 + lVar15 * 8));
  *(undefined1 *)(param_1 + 0x52) = 0;
  return uVar10;
}



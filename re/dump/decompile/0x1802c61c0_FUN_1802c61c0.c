// 0x1802c61c0  FUN_1802c61c0
// size=884 thunk=false
// signature: undefined FUN_1802c61c0()
// status: ok


longlong FUN_1802c61c0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  
  lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar17 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar7 = *(longlong *)(lVar17 + 0xec0);
  lVar8 = *(longlong *)(lVar7 + 0x1520);
  fVar21 = *(float *)(lVar7 + 0x1238) - DAT_180380d30;
  uVar4 = *(undefined8 *)(lVar7 + 0xdb0);
  uVar1 = *(undefined4 *)(lVar8 + 0x118);
  uVar2 = *(undefined4 *)(lVar8 + 0x11c);
  uVar5 = *(undefined4 *)(lVar7 + 0xdb8);
  fVar19 = *(float *)(lVar7 + 0xdbc);
  fVar20 = *(float *)(lVar7 + 0xcc8) + *(float *)(lVar7 + 0xcc8) + *(float *)(lVar7 + 0x1238);
  if (*(char *)(lVar17 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar9 = *(longlong *)(lVar17 + 0xec0);
  uStack_f0 = *(undefined8 *)(lVar9 + 0xdb4);
  uStack_e8 = *(undefined4 *)(lVar9 + 0xdbc);
  local_f8 = (ulonglong)*(uint *)(lVar9 + 0xdb0) << 0x20;
  FUN_18028a220(lVar9 + 0x1fc8,&local_f8);
  if (*(int *)(lVar9 + 0x1fc4) != 0) {
    fVar19 = fVar19 * DAT_180380ac0;
    *(undefined8 *)(lVar9 + 0xdb0) = uVar4;
    *(undefined4 *)(lVar9 + 0xdb8) = uVar5;
    *(float *)(lVar9 + 0xdbc) = fVar19;
  }
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_18026a810(0x16,&local_f8);
  FUN_180279080(10,1);
  uVar5 = *(undefined4 *)(lVar7 + 0x94);
  uVar3 = *(undefined4 *)(lVar7 + 0x98);
  *(undefined4 *)(lVar7 + 0x94) = 0x3e800000;
  *(undefined4 *)(lVar7 + 0x98) = 0x3e4ccccd;
  fVar18 = *(float *)(param_1 + 0x40) - (fVar21 + fVar21);
  fVar19 = *(float *)(param_1 + 0x38);
  if (*(float *)(param_1 + 0x38) <= fVar18) {
    fVar19 = fVar18;
  }
  *(undefined4 *)(lVar8 + 0x11c) = *(undefined4 *)(param_1 + 0x3c);
  *(float *)(lVar8 + 0x118) = fVar19;
  bVar10 = FUN_1802ac570(&DAT_1803804ec,0,CONCAT44(fVar20,fVar21));
  iVar15 = 1;
  *(undefined4 *)(lVar8 + 0x11c) = *(undefined4 *)(param_1 + 0x3c);
  *(float *)(lVar8 + 0x118) = fVar21 + fVar19;
  cVar11 = FUN_1802ac570(&DAT_18038051c,1,CONCAT44(fVar20,fVar21));
  if (cVar11 == '\0') {
    iVar15 = (bVar10 ^ 1) - 1;
  }
  if (*(char *)(lVar17 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar17 = *(longlong *)(lVar17 + 0xec0);
  iVar6 = *(int *)(lVar17 + 0x2008);
  if (iVar6 < 2) {
    FUN_18027e9c0("Calling PopItemFlag() too many times!");
  }
  else {
    *(int *)(lVar17 + 0x2008) = iVar6 + -1;
    *(undefined4 *)(lVar17 + 0x1eb8) =
         *(undefined4 *)(*(longlong *)(lVar17 + 0x2010) + -8 + (longlong)iVar6 * 4);
  }
  FUN_18026a890();
  lVar17 = 0;
  *(undefined4 *)(lVar7 + 0x98) = uVar3;
  *(undefined4 *)(lVar7 + 0x94) = uVar5;
  if (((iVar15 != 0) && (*(int *)(param_1 + 0x20) != 0)) &&
     (iVar6 = *(int *)(param_1 + 8), 0 < iVar6)) {
    lVar7 = *(longlong *)(param_1 + 0x10);
    uVar14 = 0;
    do {
      if (*(int *)(uVar14 * 0x2c + lVar7) == *(int *)(param_1 + 0x20)) {
        uVar14 = (uVar14 * 0x2c) / 0x2c;
        iVar16 = (int)uVar14 + iVar15;
        while( true ) {
          if ((iVar16 < 0) || (iVar12 = iVar16, iVar6 <= iVar16)) {
            iVar12 = (int)uVar14;
          }
          lVar17 = (longlong)iVar12 * 0x2c + lVar7;
          if ((((*(uint *)((longlong)iVar12 * 0x2c + 4 + lVar7) & 0x200000) == 0) ||
              (iVar16 = iVar16 + iVar15, iVar16 < 0)) || (iVar6 <= iVar16)) break;
          uVar14 = (ulonglong)(uint)((int)uVar14 + iVar15);
        }
        break;
      }
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
      lVar17 = 0;
    } while ((int)uVar13 < iVar6);
  }
  fVar19 = fVar21 + fVar21 + DAT_180380bb0;
  *(undefined4 *)(lVar8 + 0x118) = uVar1;
  *(undefined4 *)(lVar8 + 0x11c) = uVar2;
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) - fVar19;
  return lVar17;
}



// 0x180248ca0  FUN_180248ca0
// size=1115 thunk=false
// signature: undefined FUN_180248ca0()
// status: ok


void FUN_180248ca0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(lVar2 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar3 + 0x1520) + 0xce) = 1;
    lVar3 = *(longlong *)(lVar3 + 0x1520);
    if (*(char *)(lVar3 + 0xc9) != '\0') {
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar2 = *(longlong *)(lVar2 + 0xec0);
      *(undefined1 *)(*(longlong *)(lVar2 + 0x1520) + 0xce) = 1;
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x1520) + 0x2c8);
      FUN_1802acbe0(&local_98,lVar3,1);
      fVar19 = (local_8c - local_94) / (float)*(ulonglong *)(param_1 + 0x210);
      fVar18 = (local_90 - local_98) * DAT_180380a6c;
      fVar20 = local_90 - fVar18;
      fVar18 = fVar18 + local_98;
      FUN_180292550(lVar2,&local_98,&local_90,0);
      uVar13 = 0;
      puVar4 = *(ulonglong **)(param_1 + 0xf8);
      for (puVar12 = *(ulonglong **)(param_1 + 0xf0); puVar12 != puVar4; puVar12 = puVar12 + 6) {
        uVar14 = *puVar12;
        uVar5 = puVar12[2];
        bVar17 = uVar14 < uVar5;
        if (uVar14 == uVar5) {
          bVar6 = puVar12[3] < puVar12[1];
          bVar17 = puVar12[1] < puVar12[3];
        }
        else {
          bVar6 = !bVar17;
        }
        uVar16 = uVar14;
        if (!bVar17) {
          uVar16 = uVar5;
        }
        if (!bVar6) {
          uVar14 = uVar5;
        }
        for (; uVar16 <= uVar14; uVar16 = uVar16 + 1) {
          lVar3 = *(longlong *)(param_1 + 0x50);
          lVar11 = uVar16 * 0x60;
          if (*(char *)(lVar11 + 0x22 + lVar3) != '\x03') {
            uVar5 = *(ulonglong *)(lVar11 + 0x28 + lVar3);
            local_res8 = fVar20;
            local_resc = (float)roundf((float)(*(longlong *)(lVar11 + 0x30 + lVar3) + uVar5) *
                                       fVar19 + local_94);
            local_res10 = fVar18;
            local_res14 = (float)roundf((float)uVar5 * fVar19 + local_94);
            FUN_180295000(lVar2,&local_res10,&local_res8,*(undefined4 *)(param_1 + 0x948),0,0);
          }
        }
      }
      if ((*(longlong *)(param_1 + 0x348) != *(longlong *)(param_1 + 0x340)) &&
         (*(longlong *)(param_1 + 0x210) != 0)) {
        do {
          lVar3 = *(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + uVar13 * 0x18) * 0x60 + 0x50 +
                   *(longlong *)(param_1 + 0x50));
          if (lVar3 != 0) {
            iVar15 = *(int *)(*(longlong *)(param_1 + 0x340) + -0x44 + lVar3 * 0x48);
            if (iVar15 == 0) {
              iVar15 = *(int *)(*(longlong *)(param_1 + 0x340) + -0x48 + lVar3 * 0x48);
            }
            local_res14 = (float)roundf((float)uVar13 * fVar19 + local_94);
            local_resc = local_res14 + fVar19;
            local_res8 = fVar20;
            local_res10 = fVar18;
            FUN_180295000(lVar2,&local_res10,&local_res8,iVar15,0,0);
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < *(ulonglong *)(param_1 + 0x210));
      }
      piVar1 = (int *)(lVar2 + 0xa0);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        puVar10 = (undefined4 *)(*(longlong *)(lVar2 + 0x38) + 0x38);
      }
      else {
        puVar10 = (undefined4 *)
                  ((longlong)(*(int *)(lVar2 + 0xa0) + -1) * 0x10 + *(longlong *)(lVar2 + 0xa8));
      }
      uVar7 = puVar10[1];
      uVar8 = puVar10[2];
      uVar9 = puVar10[3];
      *(undefined4 *)(lVar2 + 0x60) = *puVar10;
      *(undefined4 *)(lVar2 + 100) = uVar7;
      *(undefined4 *)(lVar2 + 0x68) = uVar8;
      *(undefined4 *)(lVar2 + 0x6c) = uVar9;
      FUN_180292360(lVar2);
    }
  }
  return;
}



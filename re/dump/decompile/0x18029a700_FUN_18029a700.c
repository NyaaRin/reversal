// 0x18029a700  FUN_18029a700
// size=896 thunk=false
// signature: undefined FUN_18029a700()
// status: ok


/* WARNING: Removing unreachable block (ram,0x00018029a966) */
/* WARNING: Removing unreachable block (ram,0x00018029a94d) */
/* WARNING: Removing unreachable block (ram,0x00018029a97b) */

undefined8 *
FUN_18029a700(longlong param_1,longlong param_2,float param_3,undefined4 param_4,undefined4 param_5)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *_Dst;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  
  lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar12 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar12 = *(longlong *)(lVar12 + 0xec0);
  if ((lVar12 != 0) && ((*(uint *)(lVar12 + 0x28e4) & 0x100) != 0)) {
    FUN_180289170("[font] Created baked %.2fpx\n",(double)param_3);
  }
  lVar12 = *(longlong *)(param_1 + 0x2b0);
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  uVar25 = 0;
  uVar26 = 0;
  uVar27 = 0;
  uVar28 = 0;
  uVar24 = 0xffffffff;
  iVar2 = *(int *)(lVar12 + 0xc0);
  iVar4 = *(int *)(lVar12 + 0xc4);
  if (iVar2 == iVar4) {
    uVar13 = iVar4 + 0x3fU & 0xffffffe0;
    iVar11 = (int)((iVar4 >> 0x1f & 0x1fU) + iVar4) >> 5;
    iVar4 = (int)(uVar13 + ((int)(iVar4 + 0x3fU) >> 0x1f & 0x1fU)) >> 5;
    if (iVar11 < iVar4) {
      iVar3 = *(int *)(lVar12 + 0xcc);
      if (iVar3 < iVar4) {
        if (iVar3 == 0) {
          iVar5 = 8;
        }
        else {
          iVar5 = iVar3 / 2 + iVar3;
        }
        iVar14 = iVar4;
        if (iVar4 < iVar5) {
          iVar14 = iVar5;
        }
        if (iVar3 < iVar14) {
          _Dst = (void *)FUN_18026f580((longlong)iVar14 << 3);
          if (*(void **)(lVar12 + 0xd0) != (void *)0x0) {
            memcpy(_Dst,*(void **)(lVar12 + 0xd0),(longlong)*(int *)(lVar12 + 200) << 3);
            FUN_18026f680(*(undefined8 *)(lVar12 + 0xd0));
          }
          *(void **)(lVar12 + 0xd0) = _Dst;
          *(int *)(lVar12 + 0xcc) = iVar14;
        }
      }
      *(int *)(lVar12 + 200) = iVar4;
      do {
        uVar6 = FUN_18026f580(0xd00);
        *(undefined8 *)(*(longlong *)(lVar12 + 0xd0) + (longlong)iVar11 * 8) = uVar6;
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar4);
      *(uint *)(lVar12 + 0xc4) = uVar13;
    }
  }
  lVar7 = 0;
  uVar9 = iVar2 >> 0x1f & 0x1f;
  uVar13 = iVar2 + uVar9;
  puVar15 = (undefined8 *)
            ((longlong)(int)((uVar13 & 0x1f) - uVar9) * 0x68 +
            *(longlong *)(*(longlong *)(lVar12 + 0xd0) + (longlong)((int)uVar13 >> 5) * 8));
  *puVar15 = 0;
  puVar15[1] = 0;
  puVar15[2] = 0;
  puVar15[3] = 0;
  puVar15[4] = 0;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[8] = uVar24;
  puVar15[9] = uVar25;
  puVar15[10] = 0;
  puVar15[0xb] = 0;
  puVar15[0xc] = 0;
  *(int *)(lVar12 + 0xc0) = *(int *)(lVar12 + 0xc0) + 1;
  *(float *)((longlong)puVar15 + 0x14) = param_3;
  *(undefined4 *)(puVar15 + 3) = param_4;
  *(undefined4 *)((longlong)puVar15 + 0x54) = param_5;
  puVar15[0xb] = param_2;
  *(undefined4 *)(puVar15 + 10) = *(undefined4 *)(*(longlong *)(param_1 + 0x2b0) + 0xa4);
  plVar8 = *(longlong **)(param_2 + 0x28);
  plVar1 = plVar8 + *(int *)(param_2 + 0x20);
  lVar12 = lVar7;
  if (plVar8 != plVar1) {
    do {
      lVar10 = *(longlong *)(*plVar8 + 0x88);
      if (lVar10 == 0) {
        lVar10 = *(longlong *)(param_1 + 0x2b8);
      }
      lVar12 = lVar12 + *(longlong *)(lVar10 + 0x48);
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar1);
    if (lVar12 != 0) {
      lVar7 = FUN_18026f580(lVar12,lVar10,lVar12,plVar1,uVar16,uVar17,uVar18,uVar19,uVar20,uVar21,
                            uVar22,uVar23,uVar24,uVar25,uVar26,uVar27,uVar28);
    }
  }
  puVar15[0xc] = lVar7;
  plVar8 = *(longlong **)(param_2 + 0x28);
  plVar1 = plVar8 + *(int *)(param_2 + 0x20);
  for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
    lVar12 = *(longlong *)(*plVar8 + 0x88);
    if (lVar12 == 0) {
      lVar12 = *(longlong *)(param_1 + 0x2b8);
    }
    if (*(code **)(lVar12 + 0x30) != (code *)0x0) {
      (**(code **)(lVar12 + 0x30))(param_1,*plVar8,puVar15,lVar7);
    }
    lVar7 = lVar7 + *(longlong *)(lVar12 + 0x48);
  }
  FUN_18029a5d0(param_1,puVar15);
  return puVar15;
}



// 0x1802bfdc0  FUN_1802bfdc0
// size=453 thunk=false
// signature: undefined FUN_1802bfdc0()
// status: ok


void FUN_1802bfdc0(uint param_1,float param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined2 uVar7;
  int iVar8;
  uint uVar9;
  void *_Dst;
  int iVar10;
  int iVar11;
  longlong lVar12;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar3 + 0xec0);
  lVar12 = (longlong)*(int *)(lVar3 + 0x2048);
  iVar2 = *(int *)(lVar3 + 0x204c);
  lVar4 = *(longlong *)(lVar3 + 0x1520);
  iVar10 = *(int *)(lVar3 + 0x2048) + 1;
  if (iVar2 < iVar10) {
    if (iVar2 == 0) {
      iVar8 = 8;
    }
    else {
      iVar8 = iVar2 / 2 + iVar2;
    }
    iVar11 = iVar10;
    if (iVar10 < iVar8) {
      iVar11 = iVar8;
    }
    if (iVar2 < iVar11) {
      _Dst = (void *)FUN_18026f580((longlong)iVar11 * 0x28);
      if (*(void **)(lVar3 + 0x2050) != (void *)0x0) {
        memcpy(_Dst,*(void **)(lVar3 + 0x2050),(longlong)*(int *)(lVar3 + 0x2048) * 0x28);
        FUN_18026f680(*(undefined8 *)(lVar3 + 0x2050));
      }
      *(void **)(lVar3 + 0x2050) = _Dst;
      *(int *)(lVar3 + 0x204c) = iVar11;
    }
  }
  *(int *)(lVar3 + 0x2048) = iVar10;
  lVar5 = *(longlong *)(lVar3 + 0x2050);
  *(undefined4 *)(lVar5 + lVar12 * 0x28) = *(undefined4 *)(lVar3 + 0x1ef8);
  *(uint *)(lVar5 + 4 + lVar12 * 0x28) = param_1;
  *(undefined4 *)(lVar5 + 8 + lVar12 * 0x28) = *(undefined4 *)(lVar3 + 0x1efc);
  uVar6 = *(undefined8 *)(lVar3 + 0x1f1c);
  puVar1 = (undefined8 *)(lVar5 + 0xc + lVar12 * 0x28);
  *puVar1 = *(undefined8 *)(lVar3 + 0x1f14);
  puVar1[1] = uVar6;
  if ((param_1 & 0x180000) == 0) {
    *(undefined4 *)(lVar5 + 0x1c + lVar12 * 0x28) = 0x7f7fffff;
  }
  else {
    *(float *)(lVar5 + 0x1c + lVar12 * 0x28) =
         *(float *)(lVar3 + 0x1238) * DAT_180380ac0 + param_2 + *(float *)(lVar3 + 0xcc4);
    if (*(longlong *)(lVar3 + 0x2368) != 0) {
      uVar7 = *(undefined2 *)(*(longlong *)(lVar3 + 0x2368) + 0x74);
      goto LAB_1802bff43;
    }
  }
  uVar7 = 0xffff;
LAB_1802bff43:
  *(undefined2 *)(lVar5 + 0x24 + lVar12 * 0x28) = uVar7;
  *(undefined4 *)(lVar5 + 0x20 + lVar12 * 0x28) = 0xff7fffff;
  uVar9 = 1 << ((byte)*(undefined4 *)(lVar4 + 0x1a0) & 0x1f);
  *(uint *)(lVar4 + 0x1a4) = *(uint *)(lVar4 + 0x1a4) | uVar9;
  if ((param_1 >> 0x14 & 1) != 0) {
    *(uint *)(lVar4 + 0x1a8) = *(uint *)(lVar4 + 0x1a8) | uVar9;
  }
  return;
}



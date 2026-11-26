// 0x1802859e0  FUN_1802859e0
// size=1036 thunk=false
// signature: undefined FUN_1802859e0()
// status: ok


void FUN_1802859e0(void)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 uVar9;
  float local_res8 [2];
  undefined8 local_res10;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  plVar7 = (longlong *)(lVar2 + 0x2158);
  if (*(int *)(lVar2 + 0x2160) == 0) {
    plVar7 = (longlong *)0x0;
    if (*(int *)(lVar2 + 0x21d0) != 0) {
      plVar7 = (longlong *)(lVar2 + 0x21c8);
    }
  }
  uVar4 = *(uint *)(lVar2 + 0x2114);
  if (((((uVar4 & 0x400) != 0) && (plVar7 == (longlong *)0x0)) &&
      ((*(int *)(lVar2 + 0x2154) == 1 || (*(int *)(lVar2 + 0x2150) == 0)))) &&
     (*(int *)(lVar2 + 0x2208) != 0)) {
    plVar7 = (longlong *)(lVar2 + 0x2200);
  }
  uVar6 = (ulonglong)(*(int *)(lVar2 + 0x2120) - 2U < 2);
  if (plVar7 == (longlong *)0x0) {
    if ((uVar4 & 0x400) != 0) {
      uVar4 = uVar4 | 0x4000;
      *(uint *)(lVar2 + 0x2114) = uVar4;
    }
    if ((*(int *)(lVar2 + 0x206c) != 0) && ((uVar4 >> 0xe & 1) == 0)) {
      FUN_180282bb0();
    }
    FUN_180282d00(uVar6);
    if ((*(byte *)(lVar2 + 0x28e4) & 0x10) != 0) {
      FUN_180289170("[nav] NavMoveSubmitted but not led to a result!\n");
      return;
    }
  }
  else {
    if ((uVar4 & 0x20) != 0) {
      if ((*(int *)(lVar2 + 0x2198) != 0) && (*(int *)(lVar2 + 0x2198) != *(int *)(lVar2 + 0x206c)))
      {
        plVar7 = (longlong *)(lVar2 + 0x2190);
      }
    }
    plVar1 = (longlong *)(lVar2 + 0x21c8);
    if (((plVar7 != plVar1) && (*(int *)(lVar2 + 0x21d0) != 0)) &&
       (*(longlong *)(*plVar1 + 0x3b0) == *(longlong *)(lVar2 + 0x2070))) {
      if ((*(float *)(lVar2 + 0x21ec) < *(float *)((longlong)plVar7 + 0x24)) ||
         ((*(float *)(lVar2 + 0x21ec) == *(float *)((longlong)plVar7 + 0x24) &&
          (*(float *)(lVar2 + 0x21f0) <= *(float *)(plVar7 + 5) &&
           *(float *)(plVar7 + 5) != *(float *)(lVar2 + 0x21f0))))) {
        plVar7 = plVar1;
      }
    }
    if (*(int *)(lVar2 + 0x207c) == 0) {
      lVar8 = *plVar7;
      local_28 = *(float *)(lVar8 + 0x128) + *(float *)(plVar7 + 2);
      local_20 = *(float *)(lVar8 + 0x128) + *(float *)(plVar7 + 3);
      local_24 = *(float *)(lVar8 + 300) + *(float *)((longlong)plVar7 + 0x14);
      local_1c = *(float *)(lVar8 + 300) + *(float *)((longlong)plVar7 + 0x1c);
      FUN_180280400(local_res8,lVar8,&local_28,*(undefined4 *)(lVar2 + 0x2118));
      if ((*(byte *)(lVar2 + 0x2114) & 0x40) != 0) {
        if (*(int *)(lVar2 + 0x2120) == 2) {
          uVar9 = *(undefined4 *)(*plVar7 + 0xa4);
        }
        else {
          uVar9 = 0;
        }
        lVar8 = *plVar7;
        *(undefined4 *)(lVar8 + 0xac) = uVar9;
        *(undefined4 *)(lVar8 + 0xb4) = 0;
        *(undefined4 *)(lVar8 + 0xbc) = 0;
      }
    }
    lVar8 = *(longlong *)(lVar2 + 0x2070);
    if (lVar8 != *plVar7) {
      if ((*(byte *)(lVar2 + 0x28e4) & 4) != 0) {
        FUN_180289170("[focus] NavMoveRequest: SetNavWindow(\"%s\")\n",*(undefined8 *)(*plVar7 + 8))
        ;
      }
      lVar8 = *plVar7;
      *(longlong *)(lVar2 + 0x2070) = lVar8;
      *(undefined8 *)(lVar2 + 0x20c8) = 0xffffffffffffffff;
    }
    if ((*(int *)(lVar2 + 0x1594) != (int)plVar7[1]) && ((*(uint *)(lVar2 + 0x2114) & 0x8000) == 0))
    {
      FUN_18026ea90(0,0);
      lVar8 = *(longlong *)(lVar2 + 0x2070);
    }
    iVar5 = (int)plVar7[1];
    uVar4 = *(uint *)(lVar2 + 0x2114);
    if (((*(int *)(lVar2 + 0x206c) != iVar5) || ((uVar4 >> 0xb & 1) != 0)) &&
       ((uVar4 >> 0xd & 1) == 0)) {
      *(undefined4 *)(lVar2 + 0x2238) = *(undefined4 *)(lVar2 + 0x2078);
      *(int *)(lVar2 + 0x223c) = (int)plVar7[1];
      *(undefined4 *)(lVar2 + 0x2240) = *(undefined4 *)((longlong)plVar7 + 0xc);
      *(undefined4 *)(lVar2 + 0x2244) = *(undefined4 *)(lVar2 + 0x211c);
      *(byte *)(lVar2 + 0x2248) = (byte)(uVar4 >> 10) & 1;
      *(byte *)(lVar2 + 0x2249) = (byte)(*(uint *)(plVar7 + 4) >> 0x15) & 1;
      iVar5 = (int)plVar7[1];
    }
    if ((*(byte *)(lVar2 + 0x28e4) & 0x10) != 0) {
      FUN_180289170("[nav] NavMoveRequest: result NavID 0x%08X in Layer %d Window \"%s\"\n",iVar5,
                    *(undefined4 *)(lVar2 + 0x207c),*(undefined8 *)(lVar8 + 8));
    }
    local_res10 = *(undefined8 *)
                   (*(longlong *)(*(longlong *)(lVar2 + 0x2070) + 0x3d8) + 0x418 +
                   (longlong)*(int *)(lVar2 + 0x207c) * 8);
    FUN_180282d70((int)plVar7[1],(longlong)*(int *)(lVar2 + 0x207c),
                  *(undefined4 *)((longlong)plVar7 + 0xc),plVar7 + 2);
    if (plVar7[6] != -1) {
      *(longlong *)(lVar2 + 0x20c8) = plVar7[6];
    }
    if ((*(uint *)(lVar2 + 0x2114) & 0x400) == 0) {
      iVar5 = *(int *)(lVar2 + 0x207c);
      local_res8[0] = (*(float *)(plVar7 + 3) + *(float *)(plVar7 + 2)) * DAT_180380ac0;
      local_res8[1] =
           (*(float *)((longlong)plVar7 + 0x1c) + *(float *)((longlong)plVar7 + 0x14)) *
           DAT_180380ac0;
      *(float *)((longlong)&local_res10 + uVar6 * 4) = local_res8[uVar6];
      *(undefined8 *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x2070) + 0x3d8) + 0x418 + (longlong)iVar5 * 8) =
           local_res10;
    }
    uVar4 = *(uint *)(lVar2 + 0x2114);
    if (((uVar4 >> 10 & 1) != 0) && ((*(uint *)(plVar7 + 4) & 0x100000) == 0)) {
      uVar4 = uVar4 & 0xffffefff;
      *(uint *)(lVar2 + 0x2114) = uVar4;
    }
    if ((uVar4 >> 0xc & 1) != 0) {
      *(int *)(lVar2 + 0x20b8) = (int)plVar7[1];
      uVar3 = 0;
      *(undefined4 *)(lVar2 + 0x20bc) = 0;
      if ((uVar4 >> 9 & 1) != 0) {
        uVar3 = 0x20;
        *(undefined4 *)(lVar2 + 0x20bc) = 0x20;
      }
      if ((uVar4 >> 10 & 1) != 0) {
        *(uint *)(lVar2 + 0x20bc) = uVar3 | 0xd;
      }
    }
    if ((uVar4 >> 0xe & 1) == 0) {
      FUN_180282bb0();
    }
  }
  return;
}



// 0x1802a8ac0  FUN_1802a8ac0
// size=492 thunk=false
// signature: undefined FUN_1802a8ac0()
// status: ok


void FUN_1802a8ac0(undefined4 *param_1)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  uint *puVar10;
  int iVar11;
  float *pfVar12;
  undefined4 uVar13;
  
  *(undefined1 *)((longlong)param_1 + 0x241) = 0;
  if ((*(byte *)(param_1 + 1) & 0x10) == 0) {
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar3 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar8 = *(longlong *)(lVar3 + 0xec0);
    lVar7 = FUN_1802a8a40(param_1);
    if (lVar7 == 0) {
      lVar7 = FUN_1802a8910(*param_1,param_1[0x1b]);
      param_1[0x19] = (int)lVar7 - *(int *)(lVar8 + 0x27e0);
    }
    pfVar12 = (float *)(lVar7 + 0x14);
    *(undefined2 *)(lVar7 + 0xc) = *(undefined2 *)(param_1 + 0x1b);
    bVar4 = false;
    puVar10 = *(uint **)(param_1 + 6);
    iVar11 = 0;
    *(undefined4 *)(lVar7 + 4) = 0;
    bVar5 = false;
    if (0 < (int)param_1[0x1b]) {
      do {
        bVar4 = bVar5;
        lVar8 = 0x1c;
        if ((*puVar10 & 8) == 0) {
          lVar8 = 0x10;
        }
        fVar1 = *(float *)(lVar8 + (longlong)puVar10);
        *pfVar12 = fVar1;
        *(short *)(pfVar12 + 2) = (short)iVar11;
        *(undefined2 *)((longlong)pfVar12 + 10) = *(undefined2 *)((longlong)puVar10 + 0x56);
        *(undefined2 *)(pfVar12 + 3) = *(undefined2 *)((longlong)puVar10 + 0x5e);
        bVar9 = (*(byte *)((longlong)pfVar12 + 0xe) ^ *(byte *)((longlong)puVar10 + 0x71)) & 3 ^
                *(byte *)((longlong)pfVar12 + 0xe);
        *(byte *)((longlong)pfVar12 + 0xe) = bVar9;
        bVar6 = *(byte *)((longlong)puVar10 + 0x67) << 2;
        bVar6 = (bVar9 ^ bVar6) & 0xf3 ^ bVar6;
        *(byte *)((longlong)pfVar12 + 0xe) = bVar6;
        *(byte *)((longlong)pfVar12 + 0xe) = ((char)(*puVar10 >> 3) << 4 ^ bVar6) & 0x10 ^ bVar6;
        if ((*puVar10 & 8) == 0) {
          bVar4 = true;
        }
        if (fVar1 != (float)puVar10[8]) {
          *(uint *)(lVar7 + 4) = *(uint *)(lVar7 + 4) | 1;
        }
        if (*(short *)((longlong)puVar10 + 0x56) != iVar11) {
          *(uint *)(lVar7 + 4) = *(uint *)(lVar7 + 4) | 2;
        }
        if (*(short *)((longlong)puVar10 + 0x5e) != -1) {
          *(uint *)(lVar7 + 4) = *(uint *)(lVar7 + 4) | 8;
        }
        if (*(byte *)((longlong)puVar10 + 0x67) != (~(byte)(*puVar10 >> 1) & 1)) {
          *(uint *)(lVar7 + 4) = *(uint *)(lVar7 + 4) | 4;
        }
        iVar11 = iVar11 + 1;
        puVar10 = puVar10 + 0x1d;
        pfVar12 = pfVar12 + 4;
        bVar5 = bVar4;
      } while (iVar11 < (int)param_1[0x1b]);
    }
    *(uint *)(lVar7 + 4) = *(uint *)(lVar7 + 4) & param_1[1];
    if (bVar4) {
      uVar13 = param_1[0x39];
    }
    else {
      uVar13 = 0;
    }
    cVar2 = *(char *)(lVar3 + 0x10);
    *(undefined4 *)(lVar7 + 8) = uVar13;
    if (cVar2 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(lVar3 + 0xec0);
    if (*(float *)(lVar3 + 0x27a4) <= 0.0) {
      *(undefined4 *)(lVar3 + 0x27a4) = *(undefined4 *)(lVar3 + 0x44);
    }
  }
  return;
}



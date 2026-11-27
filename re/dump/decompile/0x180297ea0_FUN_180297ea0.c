// 0x180297ea0  FUN_180297ea0
// size=835 thunk=false
// signature: undefined FUN_180297ea0()
// status: ok


void FUN_180297ea0(longlong param_1,float param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  
  puVar10 = *(uint **)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x34);
  if (*(int *)(param_1 + 0x30) == 1) {
    iVar9 = *(int *)(param_1 + 0x3c);
    if (0 < iVar9) {
      iVar2 = *(int *)(param_1 + 0x38);
      iVar8 = iVar2;
      puVar11 = puVar10;
      do {
        for (; 3 < iVar8; iVar8 = iVar8 + -4) {
          lVar6 = (longlong)((float)(byte)*puVar10 * param_2);
          bVar5 = 0xff;
          if ((uint)lVar6 < 0xff) {
            bVar5 = (byte)lVar6;
          }
          *(byte *)puVar10 = bVar5;
          lVar6 = (longlong)((float)*(byte *)((longlong)puVar10 + 1) * param_2);
          bVar5 = 0xff;
          if ((uint)lVar6 < 0xff) {
            bVar5 = (byte)lVar6;
          }
          *(byte *)((longlong)puVar10 + 1) = bVar5;
          lVar6 = (longlong)((float)*(byte *)((longlong)puVar10 + 2) * param_2);
          bVar5 = 0xff;
          if ((uint)lVar6 < 0xff) {
            bVar5 = (byte)lVar6;
          }
          *(byte *)((longlong)puVar10 + 2) = bVar5;
          lVar6 = (longlong)((float)*(byte *)((longlong)puVar10 + 3) * param_2);
          bVar5 = 0xff;
          if ((uint)lVar6 < 0xff) {
            bVar5 = (byte)lVar6;
          }
          *(byte *)((longlong)puVar10 + 3) = bVar5;
          puVar10 = puVar10 + 1;
        }
        for (; 0 < iVar8; iVar8 = iVar8 + -1) {
          lVar6 = (longlong)((float)(byte)*puVar10 * param_2);
          bVar5 = 0xff;
          if ((uint)lVar6 < 0xff) {
            bVar5 = (byte)lVar6;
          }
          *(byte *)puVar10 = bVar5;
          puVar10 = (uint *)((longlong)puVar10 + 1);
        }
        iVar9 = iVar9 + -1;
        puVar10 = (uint *)((longlong)puVar11 + (longlong)iVar1);
        iVar8 = iVar2;
        puVar11 = puVar10;
      } while (0 < iVar9);
      return;
    }
  }
  else if ((*(int *)(param_1 + 0x30) == 0) && (iVar9 = *(int *)(param_1 + 0x3c), 0 < iVar9)) {
    iVar2 = *(int *)(param_1 + 0x38);
    iVar8 = iVar2;
    puVar11 = puVar10;
    do {
      for (; 3 < iVar8; iVar8 = iVar8 + -4) {
        uVar7 = *puVar10;
        uVar3 = (uint)(longlong)((float)*(byte *)((longlong)puVar10 + 3) * param_2);
        uVar4 = 0xff;
        if (uVar3 < 0xff) {
          uVar4 = uVar3;
        }
        uVar3 = puVar10[1];
        *puVar10 = ((uVar4 << 8 | uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 8 & 0xff) << 8 |
                   uVar7 & 0xff;
        uVar4 = (uint)(longlong)((float)*(byte *)((longlong)puVar10 + 7) * param_2);
        uVar7 = 0xff;
        if (uVar4 < 0xff) {
          uVar7 = uVar4;
        }
        uVar4 = puVar10[2];
        puVar10[1] = ((uVar7 << 8 | uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 8 & 0xff) << 8 |
                     uVar3 & 0xff;
        uVar3 = (uint)(longlong)((float)*(byte *)((longlong)puVar10 + 0xb) * param_2);
        uVar7 = 0xff;
        if (uVar3 < 0xff) {
          uVar7 = uVar3;
        }
        uVar3 = puVar10[3];
        puVar10[2] = ((uVar7 << 8 | uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 8 & 0xff) << 8 |
                     uVar4 & 0xff;
        uVar4 = (uint)(longlong)((float)*(byte *)((longlong)puVar10 + 0xf) * param_2);
        uVar7 = 0xff;
        if (uVar4 < 0xff) {
          uVar7 = uVar4;
        }
        puVar10[3] = ((uVar7 << 8 | uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 8 & 0xff) << 8 |
                     uVar3 & 0xff;
        puVar10 = puVar10 + 4;
      }
      for (; 0 < iVar8; iVar8 = iVar8 + -1) {
        uVar7 = *puVar10;
        uVar3 = (uint)(longlong)((float)*(byte *)((longlong)puVar10 + 3) * param_2);
        uVar4 = 0xff;
        if (uVar3 < 0xff) {
          uVar4 = uVar3;
        }
        *puVar10 = ((uVar4 << 8 | uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 8 & 0xff) << 8 |
                   uVar7 & 0xff;
        puVar10 = puVar10 + 1;
      }
      iVar9 = iVar9 + -1;
      puVar10 = (uint *)((longlong)puVar11 + (longlong)iVar1);
      iVar8 = iVar2;
      puVar11 = puVar10;
    } while (0 < iVar9);
  }
  return;
}



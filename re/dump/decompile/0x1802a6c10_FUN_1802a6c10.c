// 0x1802a6c10  FUN_1802a6c10
// size=479 thunk=false
// signature: undefined FUN_1802a6c10()
// status: ok


void FUN_1802a6c10(longlong param_1)

{
  short sVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  
  iVar7 = *(int *)(param_1 + 0x6c);
  iVar9 = 0;
  if (iVar7 < 1) {
    lVar6 = 1;
    lVar4 = 1;
  }
  else {
    uVar8 = 0;
    iVar10 = 0;
    do {
      lVar4 = (longlong)iVar10 * 0x74;
      lVar6 = *(longlong *)(param_1 + 0x18);
      sVar1 = *(short *)(lVar4 + 0x5e + lVar6);
      if (sVar1 != -1) {
        if (*(char *)(lVar4 + 0x66 + lVar6) == '\0') {
          *(undefined2 *)(lVar4 + 0x5e + lVar6) = 0xffff;
          iVar7 = *(int *)(param_1 + 0x6c);
        }
        else {
          iVar9 = iVar9 + 1;
          uVar8 = uVar8 | 1L << ((longlong)sVar1 & 0x3fU);
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar7);
    lVar6 = 1L << ((byte)iVar9 & 0x3f);
    lVar4 = uVar8 + 1;
    if ((1 < iVar9) && ((*(uint *)(param_1 + 4) & 0x4000000) == 0)) {
      bVar2 = true;
      goto LAB_1802a6cac;
    }
  }
  bVar2 = false;
LAB_1802a6cac:
  if (((lVar6 == lVar4) && (!bVar2)) || (iVar9 < 1)) {
    if (((iVar9 == 0) && ((*(uint *)(param_1 + 4) & 0x8000000) == 0)) &&
       (0 < *(int *)(param_1 + 0x6c))) {
      uVar8 = 0;
      do {
        puVar11 = (uint *)(uVar8 * 0x74 + *(longlong *)(param_1 + 0x18));
        if ((*(char *)((longlong)puVar11 + 0x66) != '\0') && ((*puVar11 & 0x200) == 0)) {
          iVar9 = 1;
          *(undefined2 *)((longlong)puVar11 + 0x5e) = 0;
          *(byte *)((longlong)puVar11 + 0x71) =
               *(byte *)((longlong)puVar11 + 0x71) ^
               (*(byte *)((longlong)puVar11 + 0x71) ^ *(byte *)((longlong)puVar11 + 0x72)) & 3;
          break;
        }
        uVar5 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar5;
      } while ((int)uVar5 < *(int *)(param_1 + 0x6c));
    }
  }
  else {
    iVar7 = 0;
    uVar8 = 0;
    do {
      uVar3 = 0;
      uVar5 = 0xffffffff;
      if (0 < *(int *)(param_1 + 0x6c)) {
        do {
          if ((uVar8 >> ((ulonglong)uVar3 & 0x3f) & 1) == 0) {
            sVar1 = *(short *)((ulonglong)uVar3 * 0x74 + 0x5e + *(longlong *)(param_1 + 0x18));
            if ((sVar1 != -1) &&
               ((uVar5 == 0xffffffff ||
                (sVar1 < *(short *)((longlong)(int)uVar5 * 0x74 + 0x5e +
                                   *(longlong *)(param_1 + 0x18)))))) {
              uVar5 = uVar3;
            }
          }
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < *(int *)(param_1 + 0x6c));
      }
      uVar8 = uVar8 | 1L << ((longlong)(int)uVar5 & 0x3fU);
      *(short *)((longlong)(int)uVar5 * 0x74 + 0x5e + *(longlong *)(param_1 + 0x18)) = (short)iVar7;
      if (bVar2) {
        uVar3 = 0;
        iVar9 = 1;
        if (0 < *(int *)(param_1 + 0x6c)) {
          do {
            if (uVar3 != uVar5) {
              *(undefined2 *)((longlong)(int)uVar3 * 0x74 + 0x5e + *(longlong *)(param_1 + 0x18)) =
                   0xffff;
            }
            uVar3 = uVar3 + 1;
          } while ((int)uVar3 < *(int *)(param_1 + 0x6c));
        }
        break;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar9);
  }
  *(short *)(param_1 + 0x200) = (short)iVar9;
  return;
}



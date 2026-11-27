// 0x18027b7f0  FUN_18027b7f0
// size=817 thunk=false
// signature: undefined FUN_18027b7f0()
// status: ok


undefined1 FUN_18027b7f0(undefined4 param_1,uint param_2,int param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  uVar11 = param_2 | 0xd000;
  if ((param_2 & 0x3c00) != 0) {
    uVar11 = param_2;
  }
  uVar5 = FUN_18027b0a0(param_1);
  if (*(uint *)(lVar1 + 0x1eb0) == uVar5) {
    pcVar2 = (code *)swi(3);
    uVar3 = (*pcVar2)();
    return uVar3;
  }
  if (((uVar11 >> 0x10 & 1) != 0) && (*(longlong *)(lVar1 + 0x2070) == 0)) {
    return false;
  }
  if ((uVar11 >> 0xd & 1) != 0) {
    if ((*(uint *)(lVar1 + 0x28e4) & 0x200) != 0) {
      uVar7 = FUN_18027b190(uVar5);
      FUN_180289170("SetShortcutRouting(%s, flags=%04X, owner_id=0x%08X) -> always, no register\n",
                    uVar7,uVar11,param_3);
    }
    return true;
  }
  if ((*(int *)(lVar1 + 0x1594) != 0) && (*(int *)(lVar1 + 0x1594) != param_3)) {
    if ((uVar11 >> 10 & 1) != 0) {
      return false;
    }
    if ((*(char *)(lVar1 + 0xd2) != '\0') && (cVar4 = FUN_18027b760(uVar5), cVar4 != '\0')) {
      if ((*(uint *)(lVar1 + 0x28e4) & 0x200) == 0) {
        return false;
      }
      uVar7 = FUN_18027b190(uVar5);
      FUN_180289170("SetShortcutRouting(%s, flags=%04X, owner_id=0x%08X) -> filtered as potential char input\n"
                    ,uVar7,uVar11,param_3);
      return false;
    }
    if (((uVar11 >> 0xf & 1) == 0) && (*(char *)(lVar1 + 0x1eac) != '\0')) {
      uVar6 = uVar5 & 0xffff0fff;
      if ((uVar5 & 0xffff0fff) == 0) {
        uVar6 = uVar5 & 0xf000;
        if (uVar6 == 0x1000) {
          uVar6 = 0x297;
        }
        else if (uVar6 == 0x2000) {
          uVar6 = 0x298;
        }
        else if (uVar6 == 0x4000) {
          uVar6 = 0x299;
        }
        else if (uVar6 == 0x8000) {
          uVar6 = 0x29a;
        }
      }
      if (uVar6 - 0x200 < 0x78) {
        return false;
      }
    }
  }
  if ((uVar11 >> 0x11 & 1) == 0) {
    iVar10 = *(int *)(lVar1 + 0x1eb4);
  }
  else {
    iVar10 = *(int *)(*(longlong *)(*(longlong *)(lVar1 + 0x1520) + 0x3c0) + 0x10);
  }
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar8 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar8 = *(longlong *)(lVar8 + 0xec0);
  if ((uVar11 >> 0xb & 1) == 0) {
    if ((uVar11 >> 10 & 1) == 0) {
      if ((uVar11 >> 0xc & 1) != 0) {
        if ((uVar11 >> 0xf & 1) == 0) {
          if ((param_3 == 0) || (*(int *)(lVar8 + 0x1594) != param_3)) {
            iVar9 = 1;
            if ((uVar11 >> 0xe & 1) != 0) {
              iVar9 = 200;
            }
          }
          else {
            iVar9 = 300;
          }
        }
        else {
          iVar9 = 400;
        }
        goto LAB_18027ba8d;
      }
    }
    else if ((param_3 != 0) && (*(int *)(lVar8 + 0x1594) == param_3)) {
      iVar9 = 300;
      goto LAB_18027ba8d;
    }
    iVar9 = 0;
  }
  else if ((param_3 == 0) || (*(int *)(lVar8 + 0x1594) != param_3)) {
    iVar9 = 0;
    if ((iVar10 != 0) && (iVar9 = 0, 0 < *(int *)(lVar8 + 0x2098))) {
      uVar6 = 0;
      do {
        if (*(int *)(*(longlong *)(lVar8 + 0x20a0) + (ulonglong)uVar6 * 8) == iVar10) {
          if ((uVar11 >> 0xf & 1) == 0) {
            iVar9 = 199 - uVar6;
          }
          else {
            iVar9 = 599 - uVar6;
          }
          break;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < *(int *)(lVar8 + 0x2098));
    }
  }
  else {
    iVar9 = 300;
  }
LAB_18027ba8d:
  if ((*(uint *)(lVar1 + 0x28e4) & 0x200) != 0) {
    uVar7 = FUN_18027b190(uVar5);
    FUN_180289170("SetShortcutRouting(%s, flags=%04X, owner_id=0x%08X) -> score %d\n",uVar7,uVar11,
                  param_3,iVar9);
  }
  if (iVar9 == 0) {
    return false;
  }
  lVar8 = FUN_18027b620(uVar5);
  if ((int)(uint)*(ushort *)(lVar8 + 6) < iVar9) {
    *(int *)(lVar8 + 0xc) = param_3;
    *(short *)(lVar8 + 6) = (short)iVar9;
  }
  iVar10 = *(int *)(lVar8 + 8);
  bVar12 = false;
  if (iVar10 == param_3) {
    if ((*(uint *)(lVar1 + 0x28e4) & 0x200) != 0) {
      FUN_180289170("--> granting current route\n");
      iVar10 = *(int *)(lVar8 + 8);
    }
    bVar12 = iVar10 == param_3;
  }
  return bVar12;
}



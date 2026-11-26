// 0x1801143e0  FUN_1801143e0
// size=350 thunk=false
// signature: undefined FUN_1801143e0()
// status: ok


ulonglong FUN_1801143e0(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  ULONGLONG UVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = 0;
  if (*(int *)(lVar1 + 0xfc0) < 1) {
LAB_1801144ec:
    if (DAT_1803fa608 != 0) {
      iVar8 = *(int *)(DAT_1803fa608 + 4);
    }
    *(int *)(lVar1 + 0xfa8) = iVar8;
    *(undefined8 *)(lVar1 + 0xf98) = 0;
    *(undefined1 *)(lVar1 + 4000) = 0;
    *(undefined4 *)(lVar1 + 0xfa4) = 0;
    uVar6 = 0xf90;
    *(undefined8 *)(lVar1 + 0xf90) = 0;
  }
  else {
    if (DAT_1803fa608 != 0) {
      iVar7 = *(int *)(DAT_1803fa608 + 4);
    }
    if (*(int *)(lVar1 + 0xfa8) != iVar7) goto LAB_1801144ec;
    lVar2 = *(longlong *)(lVar1 + 0xf98);
    if ((lVar2 == 0) || (UVar5 = GetTickCount64(), 0xfa < UVar5 - lVar2)) goto LAB_1801144ec;
    cVar3 = FUN_180114310(*(undefined8 *)(lVar1 + 0xf90));
    if (cVar3 != '\0') {
      uVar4 = *(int *)(lVar1 + 0xfc0) - 1;
      uVar6 = (ulonglong)uVar4;
      if (((uVar4 < 0x10) &&
          (uVar6 = lVar1 + *(int *)(lVar1 + 0xfc0), *(char *)(uVar6 + 0xfaf) != '\0')) &&
         (uVar6 = 0xfa4, 0 < *(int *)(lVar1 + 0xfa4))) {
        return 0xf01;
      }
      goto LAB_18011452b;
    }
    if (DAT_1803fa608 != 0) {
      iVar8 = *(int *)(DAT_1803fa608 + 4);
    }
    *(int *)(lVar1 + 0xfa8) = iVar8;
    *(undefined8 *)(lVar1 + 0xf98) = 0;
    *(undefined8 *)(lVar1 + 0xf90) = 0;
    *(undefined1 *)(lVar1 + 4000) = 0;
    uVar6 = 0xfa4;
    *(undefined4 *)(lVar1 + 0xfa4) = 0;
  }
  *(undefined4 *)(lVar1 + 0xfc0) = 0;
  *(undefined8 *)(lVar1 + 0xfb0) = 0;
  *(undefined8 *)(lVar1 + 0xfb8) = 0;
LAB_18011452b:
  return uVar6 & 0xffffffffffffff00;
}



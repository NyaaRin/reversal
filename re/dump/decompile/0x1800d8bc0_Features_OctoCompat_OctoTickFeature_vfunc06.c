// 0x1800d8bc0  Features_OctoCompat_OctoTickFeature_vfunc06
// size=408 thunk=false
// signature: undefined Features_OctoCompat_OctoTickFeature_vfunc06()
// status: ok


void Features_OctoCompat_OctoTickFeature_vfunc06(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  char *_Str1;
  longlong lVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong lVar11;
  
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar7 = (*pcVar1)(DAT_1803fa360);
  if ((lVar7 == 0) || (cVar5 = FUN_18001c330(lVar7), cVar5 == '\0')) {
    lVar7 = 0;
  }
  else {
    lVar7 = FUN_18001dbf0(lVar7);
    if (((lVar7 != 0) && (_Str1 = (char *)FUN_18001e410(lVar7), (char *)0x10000 < _Str1)) &&
       (iVar6 = strncmp(_Str1,"weapon_octo_",0xc), iVar6 == 0)) {
      bVar2 = true;
      goto LAB_1800d8c4f;
    }
  }
  bVar2 = false;
LAB_1800d8c4f:
  plVar4 = DAT_180409790;
  if (DAT_180409790 == (longlong *)0x0) {
LAB_1800d8c88:
    bVar3 = false;
  }
  else {
    lVar8 = (**(code **)*DAT_180409790)(DAT_180409790);
    lVar10 = 0;
    do {
      lVar11 = lVar10 + 1;
      if (*(char *)(lVar8 + lVar10) != (&DAT_18034a0a8)[lVar10]) goto LAB_1800d8c88;
      lVar10 = lVar11;
    } while (lVar11 != 5);
    bVar3 = true;
  }
  if (lVar7 == 0) {
    if (bVar3) {
      (**(code **)(*plVar4 + 0xd0))(plVar4);
    }
    for (puVar9 = (undefined4 *)&DAT_1805c5a20; puVar9 != &DAT_1805c7a20; puVar9 = puVar9 + 0x10) {
      *(undefined1 *)puVar9 = 0;
    }
    DAT_1805c7a20 = 0;
    DAT_1805c7a24 = 0xffffffff;
    DAT_1805c7a38 = DAT_1803813b0;
    DAT_1805c7a30 = 0;
    DAT_1805c7a28 = 0;
  }
  else {
    if (!bVar2) {
      for (puVar9 = (undefined4 *)&DAT_1805c5a20; puVar9 != &DAT_1805c7a20; puVar9 = puVar9 + 0x10)
      {
        *(undefined1 *)puVar9 = 0;
      }
      DAT_1805c7a20 = 0;
      DAT_1805c7a24 = 0xffffffff;
      DAT_1805c7a38 = DAT_1803813b0;
      DAT_1805c7a30 = 0;
      DAT_1805c7a28 = 0;
      if (!bVar3) {
        DAT_1805c7a20 = 0;
        DAT_1805c7a24 = 0xffffffff;
        DAT_1805c7a28 = 0;
        DAT_1805c7a30 = 0;
        DAT_1805c7a38 = DAT_1803813b0;
        return;
      }
    }
    FUN_180076b50();
  }
  return;
}



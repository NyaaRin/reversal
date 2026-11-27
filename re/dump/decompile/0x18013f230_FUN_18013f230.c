// 0x18013f230  FUN_18013f230
// size=427 thunk=false
// signature: undefined FUN_18013f230()
// status: ok


undefined8 FUN_18013f230(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 uVar14;
  int iVar15;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [12];
  undefined1 local_5c [36];
  
  if ((((DAT_1803fa360 != (longlong *)0x0) && (DAT_1803fa668 != (longlong *)0x0)) &&
      (DAT_1803fa608 != 0)) && (param_1 != 0)) {
    iVar5 = FUN_18001c560();
    iVar6 = (**(code **)(*DAT_1803fa668 + 0x60))();
    iVar7 = (**(code **)(*DAT_1803fa360 + 0x30))();
    iVar15 = 0x80;
    if (*(int *)(DAT_1803fa608 + 0x1c) - 1U < 0x80) {
      iVar15 = *(int *)(DAT_1803fa608 + 0x1c);
    }
    if (iVar7 < iVar15) {
      iVar15 = iVar7;
    }
    iVar7 = 1;
    while (iVar7 <= iVar15) {
      if ((((iVar7 == iVar6) ||
           (plVar10 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar7),
           plVar10 == (longlong *)0x0)) ||
          ((cVar4 = FUN_18001c330(plVar10), cVar4 == '\0' ||
           ((plVar11 = (longlong *)(**(code **)(*plVar10 + 0x20))(plVar10),
            plVar11 == (longlong *)0x0 ||
            (cVar4 = (**(code **)(*plVar11 + 0x40))(plVar11), cVar4 != '\0')))))) ||
         ((0 < iVar5 && (iVar8 = FUN_18001c560(plVar10), iVar8 == iVar5)))) {
        iVar7 = iVar7 + 1;
      }
      else {
        puVar12 = (undefined8 *)FUN_18001c430(plVar10,local_68);
        uVar1 = *puVar12;
        uVar2 = *(undefined4 *)(puVar12 + 1);
        pcVar3 = *(code **)(*DAT_1803fa360 + 0x18);
        uVar9 = (**(code **)(*DAT_1803fa668 + 0x60))();
        lVar13 = (*pcVar3)(DAT_1803fa360,uVar9);
        if (lVar13 != 0) {
          uVar14 = FUN_18001c430(lVar13,local_5c);
          local_78 = uVar1;
          local_70 = uVar2;
          cVar4 = FUN_180021f30(uVar14,plVar10,&local_78);
          if (cVar4 != '\0') {
            return 1;
          }
        }
        iVar7 = iVar7 + 1;
      }
    }
  }
  return 0;
}



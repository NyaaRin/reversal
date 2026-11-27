// 0x180287620  FUN_180287620
// size=1030 thunk=false
// signature: undefined FUN_180287620()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_180287620(char *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  int iVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  char cVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res18;
  undefined4 local_res1c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar4 + 0xec0);
  if (param_1 != (char *)0x0) {
    if (*(int *)(lVar5 + 0x22bc) == -1) {
      return 0;
    }
    iVar12 = strcmp(param_1,(char *)(lVar5 + 0x22c0));
    if (iVar12 != 0) {
      return 0;
    }
  }
  fVar18 = *(float *)(lVar5 + 0x22f0);
  fVar19 = *(float *)(lVar5 + 0x22f4);
  fVar20 = *(float *)(lVar5 + 0x22e8);
  fVar17 = *(float *)(lVar5 + 0x22ec);
  fVar16 = (fVar19 - fVar17) * (fVar18 - fVar20);
  if (*(float *)(lVar5 + 0x2318) <= fVar16 && fVar16 != *(float *)(lVar5 + 0x2318)) {
    return 0;
  }
  cVar15 = '\x01';
  iVar12 = *(int *)(lVar5 + 0x2320);
  iVar3 = *(int *)(lVar5 + 0x2308);
  *(float *)(lVar5 + 0x2318) = fVar16;
  *(undefined4 *)(lVar5 + 0x2310) = 0;
  *(int *)(lVar5 + 0x231c) = iVar3;
  *(bool *)(lVar5 + 0x22e1) = iVar12 == iVar3;
  if ((iVar12 == iVar3) && ((*(uint *)(lVar5 + 0x229c) & 0x800) == 0)) {
    if (*(int *)(lVar5 + 0x230c) == 0) {
      if (*(char *)(lVar4 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar6 = *(longlong *)(lVar4 + 0xec0);
      fStack_7c = *(float *)(lVar6 + 0xd5c);
      if (fVar20 <= *(float *)(lVar6 + 0x22f8)) {
        fVar20 = *(float *)(lVar6 + 0x22f8);
      }
      if (fVar17 <= *(float *)(lVar6 + 0x22fc)) {
        fVar17 = *(float *)(lVar6 + 0x22fc);
      }
      if (*(float *)(lVar6 + 0x2300) <= fVar18) {
        fVar18 = *(float *)(lVar6 + 0x2300);
      }
      if (*(float *)(lVar6 + 0x2304) <= fVar19) {
        fVar19 = *(float *)(lVar6 + 0x2304);
      }
      lVar7 = *(longlong *)(lVar6 + 0x1520);
      local_88 = fVar20 - fStack_7c;
      fStack_84 = fVar17 - fStack_7c;
      fStack_80 = fVar18 + fStack_7c;
      fStack_7c = fVar19 + fStack_7c;
      if ((((local_88 < *(float *)(lVar7 + 0x268)) || (fStack_84 < *(float *)(lVar7 + 0x26c))) ||
          (*(float *)(lVar7 + 0x270) < fStack_80)) || (*(float *)(lVar7 + 0x274) < fStack_7c)) {
        lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x2c8) + 0x38);
        local_res8 = *(undefined4 *)(lVar8 + 0x40);
        local_resc = *(undefined4 *)(lVar8 + 0x44);
        local_res18 = *(undefined4 *)(lVar8 + 0x38);
        local_res1c = *(undefined4 *)(lVar8 + 0x3c);
        FUN_180292550(*(longlong *)(lVar7 + 0x2c8),&local_res18,&local_res8,0);
        FUN_180287a30(*(undefined8 *)(lVar7 + 0x2c8),&local_88,*(undefined4 *)(lVar6 + 0xd54));
        lVar6 = *(longlong *)(lVar7 + 0x2c8);
        piVar1 = (int *)(lVar6 + 0xa0);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          puVar14 = (undefined4 *)(*(longlong *)(lVar6 + 0x38) + 0x38);
        }
        else {
          puVar14 = (undefined4 *)
                    ((longlong)(*(int *)(lVar6 + 0xa0) + -1) * 0x10 + *(longlong *)(lVar6 + 0xa8));
        }
        uVar2 = puVar14[1];
        uVar9 = puVar14[2];
        uVar10 = puVar14[3];
        *(undefined4 *)(lVar6 + 0x60) = *puVar14;
        *(undefined4 *)(lVar6 + 100) = uVar2;
        *(undefined4 *)(lVar6 + 0x68) = uVar9;
        *(undefined4 *)(lVar6 + 0x6c) = uVar10;
        FUN_180292360();
      }
      else {
        FUN_180287a30(*(undefined8 *)(lVar7 + 0x2c8),&local_88,*(undefined4 *)(lVar6 + 0xd54));
      }
    }
    else {
      uVar2 = *(undefined4 *)(lVar5 + 0xd54);
      local_88 = *(float *)(lVar5 + 0x22e8) + DAT_180380e68;
      fStack_80 = *(float *)(lVar5 + 0x22f0) + _DAT_1803813c4;
      fStack_84 = *(float *)(lVar5 + 0x22ec) + DAT_180380e68;
      fStack_7c = *(float *)(lVar5 + 0x22f4) + _DAT_1803813c4;
      if (*(char *)(lVar4 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      uVar13 = FUN_18026f7d0(**(undefined8 **)(*(longlong *)(lVar4 + 0xec0) + 0x2060),1,
                             "##Foreground");
      FUN_180287a30(uVar13,&local_88,uVar2);
    }
  }
  *(int *)(lVar5 + 0x2324) = *(int *)(lVar5 + 4);
  if (((*(byte *)(lVar5 + 0x229c) & 0x10) == 0) || (*(int *)(lVar5 + 0x22a4) != -1)) {
    if (iVar12 == iVar3) {
      iVar12 = *(int *)(lVar5 + 0x22a4);
      if (*(char *)(lVar4 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if ((*(char *)((longlong)iVar12 + 0x108 + *(longlong *)(lVar4 + 0xec0)) == '\0') ||
         (cVar11 = FUN_18027deb0(iVar12 + 0x290,0), cVar11 == '\0')) goto LAB_1802879c4;
    }
  }
  else if ((iVar12 == iVar3) && (*(int *)(lVar5 + 0x22a0) < *(int *)(lVar5 + 4)))
  goto LAB_1802879c4;
  cVar15 = '\0';
LAB_1802879c4:
  *(char *)(lVar5 + 0x22e2) = cVar15;
  if (cVar15 == '\0') {
    return 0;
  }
  if ((*(byte *)(lVar5 + 0x28e4) & 2) != 0) {
    FUN_180289170("[dragdrop] AcceptDragDropPayload(): 0x%08X: payload delivery\n",
                  *(undefined4 *)(lVar5 + 0x2308));
  }
  return lVar5 + 0x22a8;
}



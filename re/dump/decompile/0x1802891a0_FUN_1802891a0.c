// 0x1802891a0  FUN_1802891a0
// size=650 thunk=false
// signature: undefined FUN_1802891a0()
// status: ok


void FUN_1802891a0(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  undefined *_Buf;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  int iVar10;
  undefined *puVar11;
  
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar4 + 0xec0);
  iVar7 = *(int *)(lVar4 + 0x28e8) + -1;
  if (*(int *)(lVar4 + 0x28e8) == 0) {
    iVar7 = 0;
  }
  if (*(char *)(lVar4 + 0x18) == '\0') {
    FUN_180269580(lVar4 + 0x28e8,"[%05d] ");
  }
  else {
    FUN_180269580(lVar4 + 0x28e8,"[%s] [%05d] ",lVar4 + 0x18,*(undefined4 *)(lVar4 + 4));
  }
  FUN_1802695b0(lVar4 + 0x28e8,param_1,param_2);
  iVar10 = *(int *)(lVar4 + 0x28e8) + -1;
  if (*(int *)(lVar4 + 0x28e8) == 0) {
    iVar10 = 0;
  }
  puVar9 = &DAT_1803fa56f;
  if (*(undefined **)(lVar4 + 0x28f0) != (undefined *)0x0) {
    puVar9 = *(undefined **)(lVar4 + 0x28f0);
  }
  if (iVar7 != iVar10) {
    piVar2 = (int *)(lVar4 + 0x28f8);
    piVar1 = (int *)(lVar4 + 0x2908);
    if ((*(int *)(lVar4 + 0x2908) == 0) || (puVar9[(longlong)*(int *)(lVar4 + 0x2908) + -1] == '\n')
       ) {
      FUN_18028a630(piVar2,piVar1);
    }
    puVar11 = puVar9 + iVar10;
    pvVar6 = memchr(puVar9 + iVar7,10,(longlong)puVar11 - (longlong)(puVar9 + iVar7));
    while (pvVar6 != (void *)0x0) {
      _Buf = (undefined *)((longlong)pvVar6 + 1);
      if (_Buf < puVar11) {
        iVar3 = *(int *)(lVar4 + 0x28fc);
        if (*piVar2 == iVar3) {
          iVar8 = *piVar2 + 1;
          if (iVar3 == 0) {
            iVar5 = 8;
          }
          else {
            iVar5 = iVar3 / 2 + iVar3;
          }
          if (iVar8 < iVar5) {
            iVar8 = iVar5;
          }
          if (iVar3 < iVar8) {
            pvVar6 = (void *)FUN_18026f580((longlong)iVar8 << 2);
            if (*(void **)(lVar4 + 0x2900) != (void *)0x0) {
              memcpy(pvVar6,*(void **)(lVar4 + 0x2900),(longlong)*piVar2 << 2);
              FUN_18026f680(*(undefined8 *)(lVar4 + 0x2900));
            }
            *(void **)(lVar4 + 0x2900) = pvVar6;
            *(int *)(lVar4 + 0x28fc) = iVar8;
          }
        }
        *(int *)(*(longlong *)(lVar4 + 0x2900) + (longlong)*piVar2 * 4) = (int)_Buf - (int)puVar9;
        *piVar2 = *piVar2 + 1;
      }
      pvVar6 = memchr(_Buf,10,(longlong)puVar11 - (longlong)_Buf);
    }
    if (iVar10 <= *piVar1) {
      iVar10 = *piVar1;
    }
    *piVar1 = iVar10;
  }
  puVar9 = &DAT_1803fa56f;
  if (*(undefined **)(lVar4 + 0x28f0) != (undefined *)0x0) {
    puVar9 = *(undefined **)(lVar4 + 0x28f0);
  }
  if ((*(uint *)(lVar4 + 0x28e4) & 0x100000) != 0) {
    FUN_180267140(&DAT_1803431ac,puVar9 + iVar7);
  }
  if ((*(uint *)(lVar4 + 0x28e4) & 0x200000) != 0) {
    OutputDebugStringA("[imgui] ");
                    /* WARNING: Could not recover jumptable at 0x00018028941d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    OutputDebugStringA(puVar9 + iVar7);
    return;
  }
  return;
}



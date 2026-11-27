// 0x1802889d0  FUN_1802889d0
// size=728 thunk=false
// signature: undefined FUN_1802889d0()
// status: ok


void FUN_1802889d0(longlong param_1,undefined8 *param_2,int *param_3)

{
  longlong *plVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  
  pvVar5 = ThreadLocalStoragePointer;
  plVar9 = *(longlong **)(param_1 + 0x14c8);
  plVar1 = plVar9 + *(int *)(param_1 + 0x14c0);
  if (plVar9 != plVar1) {
    uVar11 = (ulonglong)_tls_index;
    do {
      lVar4 = *plVar9;
      if ((*(uint *)(lVar4 + 0x14) & 0x100) == 0) {
        lVar6 = *(longlong *)((longlong)pvVar5 + uVar11 * 8);
        if (*(char *)(lVar6 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        if (*(int *)(lVar4 + 0x2c4) == -1) {
          lVar6 = FUN_180288660(*(undefined4 *)(lVar4 + 0x10));
        }
        else {
          lVar6 = (longlong)*(int *)(lVar4 + 0x2c4) +
                  *(longlong *)(*(longlong *)(lVar6 + 0xec0) + 0x27d0);
        }
        if (lVar6 == 0) {
          lVar6 = FUN_180288560(*(undefined8 *)(lVar4 + 8));
          *(int *)(lVar4 + 0x2c4) = (int)lVar6 - *(int *)(param_1 + 0x27d0);
        }
        fVar2 = *(float *)(lVar4 + 0x28);
        *(short *)(lVar6 + 6) = (short)(int)*(float *)(lVar4 + 0x2c);
        *(short *)(lVar6 + 4) = (short)(int)fVar2;
        fVar2 = *(float *)(lVar4 + 0x38);
        *(short *)(lVar6 + 10) = (short)(int)*(float *)(lVar4 + 0x3c);
        *(short *)(lVar6 + 8) = (short)(int)fVar2;
        *(byte *)(lVar6 + 0xd) = *(byte *)(lVar4 + 0x17) & 1;
        *(undefined1 *)(lVar6 + 0xc) = *(undefined1 *)(lVar4 + 0xcf);
        *(undefined1 *)(lVar6 + 0xf) = 0;
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar1);
  }
  iVar10 = *(int *)(param_1 + 0x27c8) * 6;
  iVar7 = iVar10 + -1 + *param_3;
  if (*param_3 == 0) {
    iVar7 = iVar10;
  }
  if (param_3[1] < iVar7) {
    pvVar5 = (void *)FUN_18026f580((longlong)iVar7);
    if (*(void **)(param_3 + 2) != (void *)0x0) {
      memcpy(pvVar5,*(void **)(param_3 + 2),(longlong)*param_3);
      FUN_18026f680(*(undefined8 *)(param_3 + 2));
    }
    *(void **)(param_3 + 2) = pvVar5;
    param_3[1] = iVar7;
  }
  lVar4 = 0;
  if (*(longlong *)(param_1 + 0x27d0) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x27d0) + 4;
  }
  while (lVar4 != 0) {
    if (*(char *)(lVar4 + 0xf) == '\0') {
      FUN_180269580(param_3,"[%s][%s]\n",*param_2,lVar4 + 0x10);
      if (*(char *)(lVar4 + 0xd) == '\0') {
        FUN_180269580(param_3,"Pos=%d,%d\n",(int)*(short *)(lVar4 + 4),(int)*(short *)(lVar4 + 6));
        FUN_180269580(param_3,"Size=%d,%d\n",(int)*(short *)(lVar4 + 8),(int)*(short *)(lVar4 + 10))
        ;
        if (*(char *)(lVar4 + 0xc) != '\0') {
          FUN_180269580(param_3,"Collapsed=1\n");
        }
      }
      else {
        FUN_180269580(param_3,"IsChild=1\n");
        FUN_180269580(param_3,"Size=%d,%d\n",(int)*(short *)(lVar4 + 8),(int)*(short *)(lVar4 + 10))
        ;
      }
      iVar10 = 1;
      if (*param_3 != 0) {
        iVar10 = *param_3;
      }
      iVar3 = param_3[1];
      iVar7 = iVar10 + 1;
      if (iVar3 <= iVar7) {
        iVar8 = iVar3 * 2;
        if (iVar3 * 2 < iVar7) {
          iVar8 = iVar7;
        }
        if (iVar3 < iVar8) {
          pvVar5 = (void *)FUN_18026f580((longlong)iVar8);
          if (*(void **)(param_3 + 2) != (void *)0x0) {
            memcpy(pvVar5,*(void **)(param_3 + 2),(longlong)*param_3);
            FUN_18026f680(*(undefined8 *)(param_3 + 2));
          }
          *(void **)(param_3 + 2) = pvVar5;
          param_3[1] = iVar8;
        }
      }
      FUN_18028a8d0(param_3,iVar7);
      *(undefined1 *)((longlong)iVar10 + -1 + *(longlong *)(param_3 + 2)) = 10;
      *(undefined1 *)((longlong)iVar10 + *(longlong *)(param_3 + 2)) = 0;
    }
    lVar6 = *(int *)(lVar4 + -4) + lVar4;
    lVar4 = 0;
    if (lVar6 != *(longlong *)(param_1 + 0x27d0) + 4 + (longlong)*(int *)(param_1 + 0x27c8)) {
      lVar4 = lVar6;
    }
  }
  return;
}



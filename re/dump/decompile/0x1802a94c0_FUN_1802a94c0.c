// 0x1802a94c0  FUN_1802a94c0
// size=961 thunk=false
// signature: undefined FUN_1802a94c0()
// status: ok


void FUN_1802a94c0(longlong param_1,undefined8 *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  int *piVar10;
  undefined8 uVar11;
  
  piVar3 = (int *)0x0;
  if (*(longlong *)(param_1 + 0x27e0) != 0) {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x27e0) + 4);
  }
  while (piVar3 != (int *)0x0) {
    if (*piVar3 != 0) {
      uVar1 = piVar3[1];
      iVar5 = (short)piVar3[3] * 0x32;
      iVar6 = *param_3 + -1 + iVar5;
      if (*param_3 == 0) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 0x1e;
      if (param_3[1] < iVar6) {
        pvVar4 = (void *)FUN_18026f580((longlong)iVar6);
        if (*(void **)(param_3 + 2) != (void *)0x0) {
          memcpy(pvVar4,*(void **)(param_3 + 2),(longlong)*param_3);
          FUN_18026f680(*(undefined8 *)(param_3 + 2));
        }
        *(void **)(param_3 + 2) = pvVar4;
        param_3[1] = iVar6;
      }
      FUN_180269580(param_3,"[%s][0x%08X,%d]\n",*param_2,*piVar3,(int)(short)piVar3[3]);
      if ((float)piVar3[2] != 0.0) {
        FUN_180269580(param_3,"RefScale=%g\n",(double)(float)piVar3[2]);
      }
      iVar6 = 0;
      pfVar9 = (float *)(piVar3 + 5);
      if (0 < (short)piVar3[3]) {
        do {
          if (((((pfVar9[1] != 0.0) || ((uVar1 & 1) != 0)) || ((uVar1 & 4) != 0)) ||
              ((uVar1 & 2) != 0)) || (((uVar1 & 8) != 0 && (*(short *)(pfVar9 + 3) != -1)))) {
            FUN_180269580(param_3,"Column %-2d",iVar6);
            if (pfVar9[1] != 0.0) {
              FUN_180269580(param_3," UserID=%08X");
            }
            if (((uVar1 & 1) != 0) &&
               (((*(byte *)((longlong)pfVar9 + 0xe) & 0x10) == 0 ||
                (FUN_180269580(param_3," Weight=%.4f",(double)*pfVar9),
                (*(byte *)((longlong)pfVar9 + 0xe) & 0x10) == 0)))) {
              FUN_180269580(param_3," Width=%d",(int)*pfVar9);
            }
            if ((uVar1 & 4) != 0) {
              FUN_180269580(param_3," Visible=%d",
                            (int)(char)(*(char *)((longlong)pfVar9 + 0xe) << 4) >> 6);
            }
            if ((uVar1 & 2) != 0) {
              FUN_180269580(param_3," Order=%d",(int)*(short *)((longlong)pfVar9 + 10));
            }
            if (((uVar1 & 8) != 0) && (*(short *)(pfVar9 + 3) != -1)) {
              uVar11 = 0x5e;
              if ((*(byte *)((longlong)pfVar9 + 0xe) & 3) == 1) {
                uVar11 = 0x76;
              }
              FUN_180269580(param_3," Sort=%d%c",(int)*(short *)(pfVar9 + 3),uVar11);
            }
            iVar5 = 1;
            if (*param_3 != 0) {
              iVar5 = *param_3;
            }
            iVar8 = param_3[1];
            iVar2 = iVar5 + 1;
            if (iVar8 <= iVar2) {
              iVar7 = iVar8 * 2;
              if (iVar8 * 2 < iVar2) {
                iVar7 = iVar2;
              }
              if (iVar8 < iVar7) {
                pvVar4 = (void *)FUN_18026f580((longlong)iVar7);
                if (*(void **)(param_3 + 2) != (void *)0x0) {
                  memcpy(pvVar4,*(void **)(param_3 + 2),(longlong)*param_3);
                  FUN_18026f680(*(undefined8 *)(param_3 + 2));
                }
                *(void **)(param_3 + 2) = pvVar4;
                param_3[1] = iVar7;
              }
            }
            FUN_18028a8d0(param_3,iVar2);
            *(undefined1 *)((longlong)iVar5 + -1 + *(longlong *)(param_3 + 2)) = 10;
            *(undefined1 *)((longlong)iVar5 + *(longlong *)(param_3 + 2)) = 0;
          }
          iVar6 = iVar6 + 1;
          pfVar9 = pfVar9 + 4;
        } while (iVar6 < (short)piVar3[3]);
      }
      iVar6 = 1;
      if (*param_3 != 0) {
        iVar6 = *param_3;
      }
      iVar2 = param_3[1];
      iVar5 = iVar6 + 1;
      if (iVar2 <= iVar5) {
        iVar8 = iVar2 * 2;
        if (iVar2 * 2 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar2 < iVar8) {
          pvVar4 = (void *)FUN_18026f580((longlong)iVar8);
          if (*(void **)(param_3 + 2) != (void *)0x0) {
            memcpy(pvVar4,*(void **)(param_3 + 2),(longlong)*param_3);
            FUN_18026f680(*(undefined8 *)(param_3 + 2));
          }
          *(void **)(param_3 + 2) = pvVar4;
          param_3[1] = iVar8;
        }
      }
      FUN_18028a8d0(param_3,iVar5);
      *(undefined1 *)((longlong)iVar6 + -1 + *(longlong *)(param_3 + 2)) = 10;
      *(undefined1 *)((longlong)iVar6 + *(longlong *)(param_3 + 2)) = 0;
    }
    piVar10 = (int *)((longlong)piVar3[-1] + (longlong)piVar3);
    piVar3 = (int *)0x0;
    if (piVar10 !=
        (int *)(*(longlong *)(param_1 + 0x27e0) + 4 + (longlong)*(int *)(param_1 + 0x27d8))) {
      piVar3 = piVar10;
    }
  }
  return;
}



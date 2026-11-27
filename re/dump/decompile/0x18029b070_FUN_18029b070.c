// 0x18029b070  FUN_18029b070
// size=353 thunk=false
// signature: undefined FUN_18029b070()
// status: ok


void FUN_18029b070(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  float fVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  
  fVar9 = DAT_180380bb0;
  lVar5 = *(longlong *)(param_1 + 0x28);
  lVar6 = *(longlong *)(param_1 + 0x30);
  *(longlong *)(param_1 + 0x38) = param_2;
  iVar3 = *(int *)(param_2 + 0x20);
  iVar4 = *(int *)(param_2 + 0x1c);
  *(longlong *)(param_1 + 0x28) = param_2;
  *(float *)(param_1 + 0x58) = fVar9 / (float)iVar3;
  *(float *)(param_1 + 0x54) = fVar9 / (float)iVar4;
  plVar12 = *(longlong **)(param_1 + 0x2a8);
  plVar1 = plVar12 + *(int *)(param_1 + 0x2a0);
  for (; plVar12 != plVar1; plVar12 = plVar12 + 1) {
    lVar7 = *plVar12;
    if ((*(longlong *)(lVar7 + 0x68) == 0) || (*(char *)(*(longlong *)(lVar7 + 0x68) + 1) != '\0'))
    {
      puVar13 = *(undefined8 **)(lVar7 + 0x60);
      puVar2 = puVar13 + *(int *)(lVar7 + 0x58);
      for (; puVar13 != puVar2; puVar13 = puVar13 + 1) {
        piVar8 = (int *)*puVar13;
        if ((((0 < *piVar8) && (*(longlong *)(piVar8 + 0x1e) == lVar6)) &&
            (*(longlong *)(piVar8 + 0x1c) == lVar5)) && (*(longlong *)(piVar8 + 0x1c) != param_2)) {
          *(longlong *)(piVar8 + 0x1c) = param_2;
          *(longlong *)(piVar8 + 0x1e) = lVar6;
          iVar3 = piVar8[0x2c];
          lVar7 = *(longlong *)(piVar8 + 0x2e);
          *(longlong *)(lVar7 + -0x10 + (longlong)iVar3 * 0x10) = param_2;
          *(longlong *)(lVar7 + -8 + (longlong)iVar3 * 0x10) = lVar6;
          FUN_180292400(piVar8);
        }
        plVar10 = *(longlong **)(piVar8 + 0x2e);
        plVar11 = plVar10 + (longlong)piVar8[0x2c] * 2;
        for (; plVar10 != plVar11; plVar10 = plVar10 + 2) {
          if ((plVar10[1] == lVar6) && (*plVar10 == lVar5)) {
            *plVar10 = param_2;
            plVar10[1] = lVar6;
          }
        }
      }
    }
  }
  return;
}



// 0x18015f290  FUN_18015f290
// size=612 thunk=false
// signature: undefined FUN_18015f290()
// status: ok


undefined8 FUN_18015f290(ulonglong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int *piVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  char *_Dst;
  int iVar12;
  void *_Dst_00;
  longlong lVar13;
  ulonglong uVar14;
  char *_Src;
  
  piVar3 = (int *)*param_1;
  if (((param_1[1] - (longlong)piVar3 < 0x200) || (*piVar3 != 0x54534449)) ||
     (uVar14 = (ulonglong)piVar3[0x27], 0x1ff < piVar3[0x27] - 1U)) {
    return 0;
  }
  _Dst_00 = (void *)param_2[1];
  lVar13 = *param_2;
  lVar10 = (longlong)_Dst_00 - lVar13 >> 3;
  uVar11 = lVar10 * -0x2c8590b21642c859;
  if (uVar14 < uVar11) {
    param_2[1] = uVar14 * 0xb8 + lVar13;
  }
  else if (uVar11 < uVar14) {
    if ((ulonglong)((param_2[2] - lVar13 >> 3) * -0x2c8590b21642c859) < uVar14) {
      FUN_180223220(param_2,uVar14);
    }
    else {
      for (lVar13 = uVar14 + lVar10 * 0x2c8590b21642c859; lVar13 != 0; lVar13 = lVar13 + -1) {
        memset(_Dst_00,0,0xb8);
        *(undefined4 *)((longlong)_Dst_00 + 0x14) = 0x7fc00000;
        *(undefined4 *)((longlong)_Dst_00 + 0x10) = 0x7fc00000;
        *(undefined4 *)((longlong)_Dst_00 + 0xc) = 0x7fc00000;
        *(undefined4 *)((longlong)_Dst_00 + 8) = 0x7fc00000;
        _Dst_00 = (void *)((longlong)_Dst_00 + 0xb8);
      }
      param_2[1] = (longlong)_Dst_00;
    }
  }
  iVar12 = 0;
  if (0 < piVar3[0x27]) {
    do {
      piVar4 = (int *)*param_1;
      uVar14 = (longlong)iVar12 * 0xd8 + (longlong)piVar3[0x28];
      piVar1 = (int *)(uVar14 + (longlong)piVar4);
      if (piVar1 < piVar4) {
        return 0;
      }
      if (param_1[1] - (longlong)piVar4 < 0xd8) {
        return 0;
      }
      if ((param_1[1] - (longlong)piVar4) - 0xd8 < uVar14) {
        return 0;
      }
      lVar13 = *param_2;
      lVar10 = (longlong)iVar12 * 0xb8;
      *(int *)(lVar10 + lVar13) = piVar1[1];
      *(int *)(lVar10 + 4 + lVar13) = piVar1[0x28];
      uVar9 = *(undefined8 *)(piVar1 + 0xd);
      puVar2 = (undefined8 *)(lVar10 + 8 + lVar13);
      *puVar2 = *(undefined8 *)(piVar1 + 0xb);
      puVar2[1] = uVar9;
      *(int *)(lVar10 + 0x18 + lVar13) = piVar1[8];
      *(int *)(lVar10 + 0x1c + lVar13) = piVar1[9];
      *(int *)(lVar10 + 0x20 + lVar13) = piVar1[10];
      *(undefined8 *)(lVar10 + 0x24 + lVar13) = *(undefined8 *)(piVar1 + 0xf);
      *(int *)(lVar10 + 0x2c + lVar13) = piVar1[0x11];
      *(int *)(lVar10 + 0x30 + lVar13) = piVar1[0x12];
      *(int *)(lVar10 + 0x34 + lVar13) = piVar1[0x13];
      *(int *)(lVar10 + 0x38 + lVar13) = piVar1[0x14];
      *(int *)(lVar10 + 0x3c + lVar13) = piVar1[0x15];
      *(int *)(lVar10 + 0x40 + lVar13) = piVar1[0x16];
      *(int *)(lVar10 + 0x44 + lVar13) = piVar1[0x17];
      uVar9 = *(undefined8 *)(piVar1 + 0x1a);
      puVar2 = (undefined8 *)(lVar10 + 0x48 + lVar13);
      *puVar2 = *(undefined8 *)(piVar1 + 0x18);
      puVar2[1] = uVar9;
      iVar6 = piVar1[0x1d];
      iVar7 = piVar1[0x1e];
      iVar8 = piVar1[0x1f];
      piVar4 = (int *)(lVar10 + 0x58 + lVar13);
      *piVar4 = piVar1[0x1c];
      piVar4[1] = iVar6;
      piVar4[2] = iVar7;
      piVar4[3] = iVar8;
      iVar6 = piVar1[0x21];
      iVar7 = piVar1[0x22];
      iVar8 = piVar1[0x23];
      piVar4 = (int *)(lVar10 + 0x68 + lVar13);
      *piVar4 = piVar1[0x20];
      piVar4[1] = iVar6;
      piVar4[2] = iVar7;
      piVar4[3] = iVar8;
      _Dst = (char *)(lVar13 + 0x78 + lVar10);
      _Src = (char *)((longlong)piVar1 + (longlong)*piVar1);
      *_Dst = '\0';
      pcVar5 = (char *)*param_1;
      if (((pcVar5 <= _Src) && (param_1[1] - (longlong)pcVar5 != 0)) &&
         ((ulonglong)((longlong)_Src - (longlong)pcVar5) <= (param_1[1] - (longlong)pcVar5) - 1)) {
        strncpy_s(_Dst,0x40,_Src,0xffffffffffffffff);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < piVar3[0x27]);
  }
  return 1;
}



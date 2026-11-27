// 0x18023b780  FUN_18023b780
// size=1050 thunk=false
// signature: undefined FUN_18023b780()
// status: ok


char FUN_18023b780(longlong *param_1,longlong param_2,char param_3,int param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  
  plVar14 = (longlong *)((ulonglong)*(uint *)(param_2 + 0x30) * 0x10 + param_1[0x10]);
  lVar1 = *plVar14;
  lVar3 = plVar14[1];
  lVar6 = FUN_18023d1f0();
  if ((param_4 == 0) || (*(longlong *)(lVar1 * 0x40 + param_1[0x13]) != *param_1)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (param_4 < *(int *)(param_2 + 0x20)) {
    *plVar14 = lVar6;
    if (bVar2) {
      param_4 = param_4 + 1;
    }
    else {
      param_4 = *(int *)(param_2 + 0x20);
    }
    *(int *)(plVar14 + 1) = param_4;
    uVar13 = param_1[4];
    lVar8 = param_1[1];
    if (((longlong)uVar13 < 0) && (uVar13 != 0)) {
      puVar10 = (uint *)(lVar8 - ((~uVar13 >> 5) * 4 + 4));
    }
    else {
LAB_18023b9a4:
      puVar10 = (uint *)(lVar8 + (uVar13 >> 5) * 4);
    }
LAB_18023b9af:
    uVar12 = (uint)uVar13 & 0x1f;
    uVar7 = *(uint *)((longlong)plVar14 + 0xc) & 0x1f;
    puVar11 = (uint *)(lVar8 + (ulonglong)(*(uint *)((longlong)plVar14 + 0xc) >> 5) * 4);
    if ((puVar11 != puVar10) || (uVar7 != uVar12)) {
      uVar7 = ~(-1 << (sbyte)uVar7);
      cVar5 = (char)uVar12;
      if (puVar11 == puVar10) {
        *puVar11 = (~(0xffffffffU >> (0x20U - cVar5 & 0x1f)) | uVar7) & *puVar11;
      }
      else {
        *puVar11 = *puVar11 & uVar7;
        memset(puVar11 + 1,0,(longlong)puVar10 - (longlong)(puVar11 + 1));
        if ((uVar13 & 0x1f) != 0) {
          *puVar10 = *puVar10 & ~(0xffffffffU >> (0x20U - cVar5 & 0x1f));
        }
      }
    }
    cVar5 = FUN_180234420(param_1,*(undefined8 *)(param_2 + 0x10));
  }
  else {
    if ((param_4 == *(int *)(param_2 + 0x20)) || (bVar2)) {
      if ((*(int *)(param_2 + 0x24) < 0) || (param_4 < *(int *)(param_2 + 0x24))) {
        if ((char)param_1[0x1c] != '\0') {
          cVar5 = FUN_180234420(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10));
          plVar9 = (longlong *)(lVar6 * 0x40 + param_1[0x13]);
          *param_1 = *plVar9;
          FUN_18023ca00(param_1 + 1,plVar9 + 1);
          if (param_1 + 5 != plVar9 + 5) {
            lVar8 = plVar9[5];
            FUN_18023d0b0(param_1 + 5,lVar8,plVar9[6] - lVar8 >> 4);
          }
          *plVar14 = lVar6;
          *(int *)(plVar14 + 1) = param_4 + 1;
          cVar4 = FUN_180234420(param_1,*(undefined8 *)(param_2 + 0x10));
          if (cVar4 != '\0') {
            cVar5 = '\x01';
          }
          goto LAB_18023bb75;
        }
        if (param_3 != '\0') {
          *plVar14 = lVar6;
          *(int *)(plVar14 + 1) = param_4 + 1;
          uVar13 = param_1[4];
          if (((longlong)uVar13 < 0) && (uVar13 != 0)) {
            lVar8 = -((~uVar13 >> 5) * 4 + 4);
          }
          else {
            lVar8 = (uVar13 >> 5) * 4;
          }
          puVar11 = (uint *)(param_1[1] + lVar8);
          uVar12 = (uint)uVar13 & 0x1f;
          uVar7 = *(uint *)((longlong)plVar14 + 0xc) & 0x1f;
          puVar10 = (uint *)(param_1[1] + (ulonglong)(*(uint *)((longlong)plVar14 + 0xc) >> 5) * 4);
          if ((puVar10 != puVar11) || (uVar7 != uVar12)) {
            uVar7 = ~(-1 << (sbyte)uVar7);
            cVar5 = (char)uVar12;
            if (puVar10 == puVar11) {
              *puVar10 = (~(0xffffffffU >> (0x20U - cVar5 & 0x1f)) | uVar7) & *puVar10;
            }
            else {
              *puVar10 = *puVar10 & uVar7;
              memset(puVar10 + 1,0,(longlong)puVar11 - (longlong)(puVar10 + 1));
              if ((uVar13 & 0x1f) != 0) {
                *puVar11 = *puVar11 & ~(0xffffffffU >> (0x20U - cVar5 & 0x1f));
              }
            }
          }
          cVar5 = FUN_180234420(param_1,*(undefined8 *)(param_2 + 0x10));
          if (cVar5 == '\0') {
            *(int *)(plVar14 + 1) = (int)lVar3;
            *plVar14 = lVar1;
            plVar9 = (longlong *)(lVar6 * 0x40 + param_1[0x13]);
            *param_1 = *plVar9;
            FUN_18023ca00(param_1 + 1,plVar9 + 1);
            if (param_1 + 5 != plVar9 + 5) {
              lVar8 = plVar9[5];
              FUN_18023d0b0(param_1 + 5,lVar8,plVar9[6] - lVar8 >> 4);
            }
            cVar5 = FUN_180234420(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10));
          }
          goto LAB_18023bb75;
        }
        cVar5 = FUN_180234420(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10));
        if (cVar5 != '\0') goto LAB_18023bb75;
        plVar9 = (longlong *)(lVar6 * 0x40 + param_1[0x13]);
        *param_1 = *plVar9;
        FUN_18023ca00(param_1 + 1,plVar9 + 1);
        if (param_1 + 5 != plVar9 + 5) {
          lVar8 = plVar9[5];
          FUN_18023d0b0(param_1 + 5,lVar8,plVar9[6] - lVar8 >> 4);
        }
        *plVar14 = lVar6;
        *(int *)(plVar14 + 1) = param_4 + 1;
        uVar13 = param_1[4];
        lVar8 = param_1[1];
        if ((-1 < (longlong)uVar13) || (uVar13 == 0)) goto LAB_18023b9a4;
        puVar10 = (uint *)(lVar8 - ((~uVar13 >> 5) * 4 + 4));
        goto LAB_18023b9af;
      }
    }
    else {
      cVar5 = '\0';
      if ((param_4 != 1) || ((*(byte *)(param_1 + 0x1a) & 0x3e) == 0)) goto LAB_18023bb75;
    }
    cVar5 = FUN_180234420(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10));
  }
LAB_18023bb75:
  *(int *)(plVar14 + 1) = (int)lVar3;
  *plVar14 = lVar1;
  param_1[0x16] = lVar6;
  return cVar5;
}



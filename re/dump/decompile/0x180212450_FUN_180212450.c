// 0x180212450  FUN_180212450
// size=676 thunk=false
// signature: undefined FUN_180212450()
// status: ok


void FUN_180212450(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined1 param_4)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  uVar10 = (longlong)param_2 - (longlong)param_1;
  while( true ) {
    if ((longlong)(uVar10 & 0xffffffffffffffe0) < 0x401) {
      puVar11 = param_1;
      if (param_1 != param_2) {
        while (puVar9 = puVar11 + 4, puVar9 != param_2) {
          fVar1 = *(float *)(puVar9 + 2);
          uVar4 = *(undefined4 *)((longlong)puVar11 + 0x3c);
          uVar7 = *puVar9;
          uVar8 = puVar9[1];
          uVar3 = *(undefined8 *)((longlong)puVar11 + 0x34);
          puVar11 = puVar9;
          if (*(float *)(param_1 + 2) <= fVar1) {
            fVar2 = *(float *)(puVar9 + -2);
            while (fVar1 < fVar2) {
              *puVar9 = puVar9[-4];
              puVar9[1] = puVar9[-3];
              puVar9[2] = puVar9[-2];
              puVar9[3] = puVar9[-1];
              fVar2 = *(float *)(puVar9 + -6);
              puVar9 = puVar9 + -4;
            }
            *(undefined8 *)((longlong)puVar9 + 0x14) = uVar3;
            *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar4;
            *(float *)(puVar9 + 2) = fVar1;
            *puVar9 = uVar7;
            puVar9[1] = uVar8;
          }
          else {
            memmove((void *)((longlong)puVar9 + (0x20 - ((longlong)puVar9 - (longlong)param_1))),
                    param_1,(longlong)puVar9 - (longlong)param_1);
            *(undefined8 *)((longlong)param_1 + 0x14) = uVar3;
            *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
            *(float *)(param_1 + 2) = fVar1;
            *param_1 = uVar7;
            param_1[1] = uVar8;
          }
        }
      }
      return;
    }
    lVar12 = (longlong)param_2 - (longlong)param_1 >> 6;
    if (param_3 < 1) break;
    puVar11 = param_1 + lVar12 * 4;
    FUN_18022f920(param_1,puVar11,param_2 + -4,param_4);
    FUN_18022fbe0(&local_78,param_1,puVar11,param_2);
    puVar9 = puStack_70;
    puVar11 = local_78;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)((longlong)local_78 - (longlong)param_1 & 0xffffffffffffffe0U) <
        (longlong)((longlong)param_2 - (longlong)puStack_70 & 0xffffffffffffffe0U)) {
      FUN_180212450(param_1,local_78,param_3,param_4);
      param_1 = puVar9;
      puVar11 = param_2;
    }
    else {
      FUN_180212450(puStack_70,param_2,param_3,param_4);
    }
    uVar10 = (longlong)puVar11 - (longlong)param_1;
    param_2 = puVar11;
  }
  lVar13 = (longlong)param_2 - (longlong)param_1 >> 5;
  while (0 < lVar12) {
    lVar12 = lVar12 + -1;
    local_78 = (undefined8 *)param_1[lVar12 * 4];
    puStack_70 = (undefined8 *)(param_1 + lVar12 * 4)[1];
    local_68 = param_1[lVar12 * 4 + 2];
    uStack_60 = (param_1 + lVar12 * 4 + 2)[1];
    FUN_18022f7f0(param_1,lVar12,lVar13,&local_78,param_4);
  }
  if (lVar13 < 2) {
    return;
  }
  do {
    puVar11 = param_2 + -4;
    if (0x3f < (longlong)((longlong)param_2 - (longlong)param_1 & 0xffffffffffffffe0U)) {
      local_78 = (undefined8 *)*puVar11;
      puStack_70 = (undefined8 *)param_2[-3];
      local_68 = param_2[-2];
      uStack_60 = param_2[-1];
      uVar4 = *(undefined4 *)((longlong)param_1 + 4);
      uVar5 = *(undefined4 *)(param_1 + 1);
      uVar6 = *(undefined4 *)((longlong)param_1 + 0xc);
      *(undefined4 *)puVar11 = *(undefined4 *)param_1;
      *(undefined4 *)((longlong)param_2 + -0x1c) = uVar4;
      *(undefined4 *)(param_2 + -3) = uVar5;
      *(undefined4 *)((longlong)param_2 + -0x14) = uVar6;
      uVar4 = *(undefined4 *)((longlong)param_1 + 0x14);
      uVar5 = *(undefined4 *)(param_1 + 3);
      uVar6 = *(undefined4 *)((longlong)param_1 + 0x1c);
      *(undefined4 *)(param_2 + -2) = *(undefined4 *)(param_1 + 2);
      *(undefined4 *)((longlong)param_2 + -0xc) = uVar4;
      *(undefined4 *)(param_2 + -1) = uVar5;
      *(undefined4 *)((longlong)param_2 + -4) = uVar6;
      FUN_18022f7f0(param_1,0,(longlong)puVar11 - (longlong)param_1 >> 5,&local_78,param_4);
    }
    param_2 = puVar11;
  } while (0x3f < (longlong)((longlong)puVar11 - (longlong)param_1 & 0xffffffffffffffe0U));
  return;
}



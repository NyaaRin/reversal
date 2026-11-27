// 0x1800ff080  FUN_1800ff080
// size=257 thunk=false
// signature: undefined FUN_1800ff080()
// status: ok


int FUN_1800ff080(undefined8 *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  
  iVar10 = 0;
  lVar6 = DAT_1803e9c08;
  lVar9 = DAT_1803e9c10;
  if (0 < (int)(DAT_1803e9c10 - DAT_1803e9c08 >> 4) * -0x33333333) {
    do {
      puVar7 = (undefined8 *)((longlong)iVar10 * 0x50 + lVar6);
      if (puVar7[2] == param_1[2]) {
        uVar8 = 0;
        if (puVar7[2] == 0) {
          return iVar10;
        }
        while( true ) {
          puVar5 = puVar7;
          if (0xf < (ulonglong)puVar7[3]) {
            puVar5 = (undefined8 *)*puVar7;
          }
          puVar4 = param_1;
          if (0xf < (ulonglong)param_1[3]) {
            puVar4 = (undefined8 *)*param_1;
          }
          bVar1 = *(byte *)((longlong)puVar5 + uVar8);
          iVar2 = tolower((uint)*(byte *)((longlong)puVar4 + uVar8));
          iVar3 = tolower((uint)bVar1);
          lVar6 = DAT_1803e9c08;
          lVar9 = DAT_1803e9c10;
          if (iVar3 != iVar2) break;
          uVar8 = uVar8 + 1;
          if ((ulonglong)puVar7[2] <= uVar8) {
            return iVar10;
          }
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)(lVar9 - lVar6 >> 4) * -0x33333333);
  }
  return -1;
}



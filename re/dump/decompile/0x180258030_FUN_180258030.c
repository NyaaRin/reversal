// 0x180258030  FUN_180258030
// size=252 thunk=false
// signature: undefined FUN_180258030()
// status: ok


bool FUN_180258030(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  bool bVar8;
  bool bVar9;
  
  lVar1 = *(longlong *)(param_2 + 0x40);
  lVar2 = *param_1;
  if (lVar2 == lVar1) {
    if (*(char *)(param_3 + 3) != '\0') {
      puVar7 = (ulonglong *)*param_3;
      while (puVar7 < (ulonglong *)param_3[1]) {
        if ((char)puVar7[4] == '\0') {
LAB_18025811b:
          puVar7 = puVar7 + 0xc;
        }
        else {
          if (*param_1 == 0) {
            for (uVar5 = *puVar7; uVar5 < puVar7[1]; uVar5 = uVar5 + 0x10) {
              *(undefined1 *)(uVar5 + 2) = 0;
            }
            *(undefined2 *)(puVar7 + 4) = 0;
            goto LAB_18025811b;
          }
          cVar4 = FUN_1802572d0(param_1,puVar7);
          *(undefined1 *)(puVar7 + 4) = 0;
          if (((ulonglong *)param_3[1] <= puVar7 + 0xc) ||
             (*(char *)((longlong)puVar7 + 0x81) == cVar4)) goto LAB_18025811b;
          *(char *)((longlong)puVar7 + 0x81) = cVar4;
          *(undefined1 *)(puVar7 + 0x10) = 1;
          puVar7 = puVar7 + 0xc;
        }
      }
    }
  }
  else {
    *param_1 = lVar1;
    puVar7 = (ulonglong *)*param_3;
    if (lVar1 != 0) {
      do {
        bVar8 = puVar7 < (ulonglong *)param_3[1];
        bVar9 = puVar7 == (ulonglong *)param_3[1];
        do {
          puVar6 = puVar7;
          if (bVar9) {
            return true;
          }
          if (!bVar8) {
            return true;
          }
          uVar3 = FUN_1802572d0(param_1,puVar6);
          *(undefined1 *)(puVar6 + 4) = 0;
          puVar7 = puVar6 + 0xc;
          bVar8 = puVar7 < (ulonglong *)param_3[1];
          bVar9 = puVar7 == (ulonglong *)param_3[1];
        } while (!bVar8);
        *(undefined1 *)((longlong)puVar6 + 0x81) = uVar3;
      } while( true );
    }
    for (; puVar7 < (ulonglong *)param_3[1]; puVar7 = puVar7 + 0xc) {
      for (uVar5 = *puVar7; uVar5 < puVar7[1]; uVar5 = uVar5 + 0x10) {
        *(undefined1 *)(uVar5 + 2) = 0;
      }
      *(undefined2 *)(puVar7 + 4) = 0;
    }
  }
  return lVar2 != lVar1;
}



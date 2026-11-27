// 0x180152810  FUN_180152810
// size=638 thunk=false
// signature: undefined FUN_180152810()
// status: ok


longlong *
FUN_180152810(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  wchar_t wVar7;
  undefined8 *puVar8;
  
  puVar8 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar8 = (undefined8 *)*param_2;
  }
  uVar3 = param_2[2] * 2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 7;
  *(undefined2 *)param_1 = 0;
  uVar4 = ((uVar3 + 2) / 3) * 4;
  if ((ulonglong)param_1[3] < uVar4) {
    lVar1 = param_1[2];
    FUN_18021a2e0(param_1,uVar4 - lVar1,param_3,param_4,1,param_1);
    param_1[2] = lVar1;
  }
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      if (uVar4 + 1 < uVar3) {
        uVar5 = (ulonglong)*(byte *)((longlong)puVar8 + uVar4 + 1);
      }
      else {
        uVar5 = 0;
      }
      if (uVar4 + 2 < uVar3) {
        uVar6 = (ulonglong)*(byte *)((longlong)puVar8 + uVar4 + 2);
      }
      else {
        uVar6 = 0;
      }
      uVar5 = (ulonglong)*(byte *)((longlong)puVar8 + uVar4) << 8 | uVar5;
      uVar6 = uVar5 << 8 | uVar6;
      wVar7 = L"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
              [*(byte *)((longlong)puVar8 + uVar4) >> 2];
      uVar2 = param_1[2];
      if (uVar2 < (ulonglong)param_1[3]) {
        param_1[2] = uVar2 + 1;
        if ((ulonglong)param_1[3] < 8) {
          *(wchar_t *)((longlong)param_1 + uVar2 * 2) = wVar7;
          *(undefined2 *)((longlong)param_1 + uVar2 * 2 + 2) = 0;
        }
        else {
          lVar1 = *param_1;
          *(wchar_t *)(lVar1 + uVar2 * 2) = wVar7;
          *(undefined2 *)(lVar1 + 2 + uVar2 * 2) = 0;
        }
      }
      else {
        FUN_18021a440(param_1);
      }
      wVar7 = L"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
              [(uint)(uVar5 >> 4) & 0x3f];
      uVar5 = param_1[2];
      if (uVar5 < (ulonglong)param_1[3]) {
        param_1[2] = uVar5 + 1;
        if ((ulonglong)param_1[3] < 8) {
          *(wchar_t *)((longlong)param_1 + uVar5 * 2) = wVar7;
          *(undefined2 *)((longlong)param_1 + uVar5 * 2 + 2) = 0;
        }
        else {
          lVar1 = *param_1;
          *(wchar_t *)(lVar1 + uVar5 * 2) = wVar7;
          *(undefined2 *)(lVar1 + 2 + uVar5 * 2) = 0;
        }
      }
      else {
        FUN_18021a440(param_1);
      }
      if (uVar4 + 1 < uVar3) {
        wVar7 = L"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                [(uint)(uVar6 >> 6) & 0x3f];
      }
      else {
        wVar7 = L'=';
      }
      uVar5 = param_1[2];
      if (uVar5 < (ulonglong)param_1[3]) {
        param_1[2] = uVar5 + 1;
        if ((ulonglong)param_1[3] < 8) {
          *(wchar_t *)((longlong)param_1 + uVar5 * 2) = wVar7;
          *(undefined2 *)((longlong)param_1 + uVar5 * 2 + 2) = 0;
        }
        else {
          lVar1 = *param_1;
          *(wchar_t *)(lVar1 + uVar5 * 2) = wVar7;
          *(undefined2 *)(lVar1 + 2 + uVar5 * 2) = 0;
        }
      }
      else {
        FUN_18021a440(param_1);
      }
      if (uVar4 + 2 < uVar3) {
        wVar7 = L"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                [(uint)uVar6 & 0x3f];
      }
      else {
        wVar7 = L'=';
      }
      uVar5 = param_1[2];
      if (uVar5 < (ulonglong)param_1[3]) {
        param_1[2] = uVar5 + 1;
        if ((ulonglong)param_1[3] < 8) {
          *(wchar_t *)((longlong)param_1 + uVar5 * 2) = wVar7;
          *(undefined2 *)((longlong)param_1 + uVar5 * 2 + 2) = 0;
        }
        else {
          lVar1 = *param_1;
          *(wchar_t *)(lVar1 + uVar5 * 2) = wVar7;
          *(undefined2 *)(lVar1 + 2 + uVar5 * 2) = 0;
        }
      }
      else {
        FUN_18021a440();
      }
      uVar4 = uVar4 + 3;
    } while (uVar4 < uVar3);
  }
  return param_1;
}



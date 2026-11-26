// 0x1800c3d00  FUN_1800c3d00
// size=272 thunk=false
// signature: undefined FUN_1800c3d00()
// status: ok


longlong * FUN_1800c3d00(int param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint local_res10 [2];
  
  if ((DAT_1805c7b08 & 1) == 0) {
    DAT_1805c7b08 = DAT_1805c7b08 | 1;
    atexit((_func_5014 *)&LAB_1803099f0);
  }
  uVar5 = 0;
  if ((DAT_1803e97b0 != param_1) && (uVar5 = 1, DAT_1803e97b4 != param_1)) {
    lVar4 = (longlong)(int)DAT_1803fcf18;
    DAT_1803fcf18 = DAT_1803fcf18 ^ 1;
    (&DAT_1803e97b0)[lVar4] = param_1;
    lVar4 = lVar4 * 0x18;
    plVar1 = (longlong *)(&DAT_1804261e0 + lVar4);
    if (*plVar1 != *(longlong *)(&DAT_1804261e8 + lVar4)) {
      *(longlong *)(&DAT_1804261e8 + lVar4) = *plVar1;
    }
    local_res10[0] = 1;
    if (0 < param_1) {
      do {
        uVar3 = local_res10[0];
        if (param_1 % (int)local_res10[0] == 0) {
          puVar2 = *(undefined4 **)(&DAT_1804261e8 + lVar4);
          if (puVar2 == *(undefined4 **)(&DAT_1804261f0 + lVar4)) {
            FUN_180229d20(plVar1,puVar2,local_res10);
          }
          else {
            *puVar2 = (int)uVar5;
            *(longlong *)(&DAT_1804261e8 + lVar4) = *(longlong *)(&DAT_1804261e8 + lVar4) + 4;
          }
        }
        local_res10[0] = uVar3 + 1;
        uVar5 = (ulonglong)local_res10[0];
      } while ((int)local_res10[0] <= param_1);
    }
    return plVar1;
  }
  return (longlong *)(&DAT_1804261e0 + uVar5 * 0x18);
}



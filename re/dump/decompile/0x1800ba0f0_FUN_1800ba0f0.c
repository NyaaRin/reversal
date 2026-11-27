// 0x1800ba0f0  FUN_1800ba0f0
// size=343 thunk=false
// signature: undefined FUN_1800ba0f0()
// status: ok


ulonglong FUN_1800ba0f0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  ulonglong in_RAX;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  byte bStack_10;
  undefined7 uStack_f;
  
  if (param_1 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  lVar2 = 0;
  if (((((DAT_1803e70a0 != param_1) && (lVar2 = 1, DAT_1803e70c0 != param_1)) &&
       (lVar2 = 2, DAT_1803e70e0 != param_1)) &&
      ((lVar2 = 3, DAT_1803e7100 != param_1 && (lVar2 = 4, DAT_1803e7120 != param_1)))) &&
     ((lVar2 = 5, DAT_1803e7140 != param_1 &&
      ((lVar2 = 6, DAT_1803e7160 != param_1 && (lVar2 = 7, DAT_1803e7180 != param_1)))))) {
    bVar1 = 0;
    bStack_10 = 0;
    uStack_20 = 0xffffffff;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    local_28 = param_1;
    lVar2 = FUN_1800b9fe0();
    if (lVar2 != 0) {
      bVar1 = FUN_1800ba010(lVar2,&local_28);
      bStack_10 = bVar1;
    }
    lVar2 = (longlong)(int)DAT_180425f9c;
    lVar4 = lVar2 * 0x20;
    DAT_180425f9c = DAT_180425f9c + 1 & 7;
    (&DAT_1803e70a0)[lVar2 * 4] = local_28;
    *(longlong *)(lVar4 + 0x1803e70a8) = CONCAT44(uStack_1c,uStack_20);
    *(longlong *)(&DAT_1803e70b0 + lVar4) = CONCAT44(uStack_14,uStack_18);
    *(longlong *)(lVar4 + 0x1803e70b8) = CONCAT71(uStack_f,bStack_10);
    *param_2 = local_28;
    param_2[1] = CONCAT44(uStack_1c,uStack_20);
    param_2[2] = CONCAT44(uStack_14,uStack_18);
    param_2[3] = CONCAT71(uStack_f,bStack_10);
    return (ulonglong)bVar1;
  }
  lVar3 = lVar2 * 0x20;
  lVar4 = *(longlong *)(lVar3 + 0x1803e70a8);
  *param_2 = (&DAT_1803e70a0)[lVar2 * 4];
  param_2[1] = lVar4;
  lVar2 = *(longlong *)(lVar3 + 0x1803e70b8);
  param_2[2] = *(longlong *)(&DAT_1803e70b0 + lVar3);
  param_2[3] = lVar2;
  return (ulonglong)*(byte *)(param_2 + 3);
}



// 0x18028aac0  FUN_18028aac0
// size=303 thunk=false
// signature: undefined FUN_18028aac0()
// status: ok


void FUN_18028aac0(int *param_1,int param_2,byte *param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  byte *pbVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  byte *_Dst_00;
  
  iVar3 = param_1[1];
  if (iVar3 < param_2) {
    if (iVar3 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar3 / 2 + iVar3;
    }
    iVar7 = param_2;
    if (param_2 < iVar2) {
      iVar7 = iVar2;
    }
    if (iVar3 < iVar7) {
      _Dst = (void *)FUN_18026f580((longlong)iVar7);
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        memcpy(_Dst,*(void **)(param_1 + 2),(longlong)*param_1);
        FUN_18026f680(*(undefined8 *)(param_1 + 2));
      }
      *(void **)(param_1 + 2) = _Dst;
      param_1[1] = iVar7;
    }
  }
  iVar3 = *param_1;
  uVar6 = (ulonglong)iVar3;
  if (iVar3 < param_2) {
    if (0xf < (uint)(param_2 - iVar3)) {
      pbVar1 = (byte *)(param_1 + 2);
      _Dst_00 = (byte *)(uVar6 + *(longlong *)pbVar1);
      pbVar4 = (byte *)((longlong)(param_2 + -1) + *(longlong *)pbVar1);
      if (((pbVar1 < _Dst_00) || (pbVar4 < pbVar1)) && ((param_3 < _Dst_00 || (pbVar4 < param_3))))
      {
        uVar8 = param_2 - iVar3 & 0x8000000f;
        if ((int)uVar8 < 0) {
          uVar8 = (uVar8 - 1 | 0xfffffff0) + 1;
        }
        do {
          uVar5 = (int)uVar6 + 0x10;
          uVar6 = (ulonglong)uVar5;
        } while ((int)uVar5 < (int)(param_2 - uVar8));
        iVar3 = ((param_2 - uVar8) - iVar3) + 0xf;
        memset(_Dst_00,(uint)*param_3,(longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0xfU)) >> 4) << 4);
        uVar6 = (ulonglong)uVar5;
        if (param_2 <= (int)uVar5) goto LAB_18028abe4;
      }
    }
    do {
      iVar3 = (int)uVar6;
      uVar8 = iVar3 + 1;
      uVar6 = (ulonglong)uVar8;
      *(byte *)((longlong)iVar3 + *(longlong *)(param_1 + 2)) = *param_3;
    } while ((int)uVar8 < param_2);
  }
LAB_18028abe4:
  *param_1 = param_2;
  return;
}



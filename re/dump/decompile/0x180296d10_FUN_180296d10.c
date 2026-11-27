// 0x180296d10  FUN_180296d10
// size=287 thunk=false
// signature: undefined FUN_180296d10()
// status: ok


void FUN_180296d10(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < param_3) {
    if (*(int *)(param_1 + 0xc) < param_3) {
      _Dst = (void *)FUN_18026f580((longlong)param_3 << 5);
      if (*(void **)(param_1 + 0x10) != (void *)0x0) {
        memcpy(_Dst,*(void **)(param_1 + 0x10),(longlong)*(int *)(param_1 + 8) << 5);
        FUN_18026f680(*(undefined8 *)(param_1 + 0x10));
      }
      *(void **)(param_1 + 0x10) = _Dst;
      *(int *)(param_1 + 0xc) = param_3;
    }
    FUN_1802a0920(param_1 + 8,param_3);
  }
  *(int *)(param_1 + 4) = param_3;
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  uVar8 = 1;
  if (1 < param_3) {
    do {
      lVar6 = uVar8 * 0x20;
      if ((int)uVar8 < iVar2) {
        puVar1 = (undefined4 *)(lVar6 + *(longlong *)(param_1 + 0x10));
        iVar3 = puVar1[1];
        if (iVar3 < 0) {
          iVar3 = iVar3 + (iVar3 + 1 >> 1);
          iVar5 = 0;
          if (0 < iVar3) {
            iVar5 = iVar3;
          }
          FUN_18028ad40(puVar1,iVar5);
        }
        *puVar1 = 0;
        FUN_180260a20(*(longlong *)(param_1 + 0x10) + 0x10 + lVar6,0);
      }
      else {
        puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar6);
        if (puVar4 != (undefined8 *)0x0) {
          puVar4[2] = 0;
          puVar4[3] = 0;
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          puVar4[3] = 0;
        }
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < param_3);
  }
  return;
}



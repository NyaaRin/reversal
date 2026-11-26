// 0x180147c60  FUN_180147c60
// size=275 thunk=false
// signature: undefined FUN_180147c60()
// status: ok


longlong FUN_180147c60(longlong *param_1,int param_2,longlong *param_3,int *param_4,
                      undefined8 *param_5)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  *param_5 = 0;
  if ((-1 < param_2) && (param_2 < (int)param_1[2])) {
    lVar2 = param_1[1];
    if (lVar2 == 0) {
      *param_3 = *param_1;
      *param_4 = param_2;
      lVar2 = *param_1;
      iVar1 = 0;
      if (param_2 < *(int *)(lVar2 + 0xbc)) {
        iVar1 = param_2;
      }
      return (longlong)*(int *)(lVar2 + 0xc0) + (longlong)iVar1 * 0xd4 + lVar2;
    }
    lVar4 = (longlong)param_2 * 0x10 + *(longlong *)(lVar2 + 8);
    iVar1 = *(int *)(lVar4 + 8);
    if ((-1 < iVar1) && (iVar1 < *(int *)(lVar2 + 0x98))) {
      puVar5 = (undefined8 *)((longlong)iVar1 * 0xe8 + *(longlong *)(lVar2 + 0x88));
      lVar2 = (**(code **)(*DAT_1803f9250 + 0xa8))(DAT_1803f9250,*puVar5);
      if (lVar2 != 0) {
        *param_5 = puVar5;
        *param_3 = lVar2;
        *param_4 = *(int *)(lVar4 + 0xc);
        uVar3 = *(uint *)(lVar4 + 0xc);
        if (((int)uVar3 < 0) || (*(int *)(lVar2 + 0xbc) <= (int)uVar3)) {
          uVar3 = 0;
        }
        return (longlong)*(int *)(lVar2 + 0xc0) + (ulonglong)uVar3 * 0xd4 + lVar2;
      }
    }
  }
  return 0;
}



// 0x180148720  FUN_180148720
// size=365 thunk=false
// signature: undefined FUN_180148720()
// status: ok


int FUN_180148720(longlong *param_1,undefined4 param_2,code *param_3)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 local_res20 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [16];
  
  iVar4 = 0;
  iVar6 = 0;
  iVar7 = 0;
  iVar5 = 0;
  while (iVar5 < (int)param_1[2]) {
    lVar2 = FUN_180147c60(param_1,iVar5,local_38,local_res20,local_40);
    if (lVar2 == 0) {
      iVar5 = iVar5 + 1;
    }
    else {
      pcVar3 = (char *)(*(int *)(lVar2 + 8) + lVar2);
      if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
        iVar5 = iVar5 + 1;
      }
      else {
        iVar1 = (*param_3)();
        if (iVar1 < 1) {
          *(undefined4 *)(lVar2 + 0x10) = 0xffffffff;
          iVar7 = iVar7 + 1;
        }
        else {
          if ((0 < *(int *)(lVar2 + 0x10)) && (*(int *)(lVar2 + 0x10) != iVar1)) {
            iVar6 = iVar6 + 1;
          }
          *(int *)(lVar2 + 0x10) = iVar1;
          if (*(int *)(lVar2 + 0x14) < 1) {
            *(undefined4 *)(lVar2 + 0x14) = 1;
          }
          iVar4 = iVar4 + 1;
        }
        iVar5 = iVar5 + 1;
      }
    }
  }
  if ((0 < iVar4) && (*(undefined4 *)(*param_1 + 0xc4) = param_2, param_1[1] != 0)) {
    iVar5 = 0;
    while( true ) {
      if (*(int *)(param_1[1] + 0x98) <= iVar5) break;
      lVar2 = (**(code **)(*DAT_1803f9250 + 0xa8))
                        (DAT_1803f9250,
                         *(undefined8 *)((longlong)iVar5 * 0xe8 + *(longlong *)(param_1[1] + 0x88)))
      ;
      if (lVar2 != 0) {
        *(undefined4 *)(lVar2 + 0xc4) = param_2;
      }
      iVar5 = iVar5 + 1;
    }
  }
  FUN_180014410("[Toolbox-anim] native activity resolve: resolved=%d (stale rewritten=%d) unknown=%d dstSeqs=%d\n"
                ,iVar4,iVar6,iVar7,(int)param_1[2]);
  return iVar4;
}



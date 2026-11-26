// 0x180020280  FUN_180020280
// size=353 thunk=false
// signature: undefined FUN_180020280()
// status: ok


longlong FUN_180020280(char *param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char *pcVar5;
  
  plVar3 = DAT_1803fa640;
  if (((DAT_1803fa640 != (longlong *)0x0) && (param_1 != (char *)0x0)) && (*param_1 != '\0')) {
    pcVar5 = &DAT_1803fe7b0;
    do {
      lVar4 = *(longlong *)(pcVar5 + 0x80);
      if (lVar4 != 0) {
        iVar2 = strcmp(pcVar5,param_1);
        if (iVar2 == 0) {
          return lVar4;
        }
      }
      pcVar5 = pcVar5 + 0x88;
    } while (pcVar5 != &DAT_1803fe9d0);
    plVar3 = (longlong *)(**(code **)(*plVar3 + 600))(plVar3,param_1,"Model textures",1,0);
    if (plVar3 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar3 + 0x150))(plVar3);
      if (cVar1 == '\0') {
        (**(code **)(*plVar3 + 0x60))(plVar3);
        pcVar5 = &DAT_1803fe7b0;
        do {
          if (*(longlong *)(pcVar5 + 0x80) == 0) goto LAB_180020390;
          pcVar5 = pcVar5 + 0x88;
        } while (pcVar5 != &DAT_1803fe9d0);
        lVar4 = (longlong)(int)DAT_1803fe7a0;
        pcVar5 = &DAT_1803fe7b0 + lVar4 * 0x88;
        DAT_1803fe7a0 = DAT_1803fe7a0 + 1 & 0x80000003;
        if ((int)DAT_1803fe7a0 < 0) {
          DAT_1803fe7a0 = (DAT_1803fe7a0 - 1 | 0xfffffffc) + 1;
        }
        if ((longlong *)(&DAT_1803fe830)[lVar4 * 0x11] != (longlong *)0x0) {
          (**(code **)(*(longlong *)(&DAT_1803fe830)[lVar4 * 0x11] + 0x68))();
        }
LAB_180020390:
        *(longlong **)(pcVar5 + 0x80) = plVar3;
        strncpy_s(pcVar5,0x80,param_1,0x7f);
        return *(longlong *)(pcVar5 + 0x80);
      }
    }
  }
  return 0;
}



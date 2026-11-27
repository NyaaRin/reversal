// 0x18001bdf0  FUN_18001bdf0
// size=247 thunk=false
// signature: undefined FUN_18001bdf0()
// status: ok


ulonglong FUN_18001bdf0(longlong *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x28))();
  lVar4 = (**(code **)(*plVar3 + 0x48))(plVar3);
  if ((lVar4 != 0) &&
     (lVar4 = (**(code **)(*DAT_1803f9250 + 0xe0))(DAT_1803f9250,lVar4), lVar4 != 0)) {
    iVar7 = 0;
    lVar9 = *(int *)(lVar4 + 0x16c) + lVar4;
    iVar1 = *(int *)(lVar4 + 0xa0);
    iVar6 = *(int *)(lVar4 + 0x9c) + -1;
    if (-1 < iVar6) {
      do {
        iVar8 = iVar6 + iVar7 >> 1;
        piVar5 = (int *)((ulonglong)*(byte *)(iVar8 + lVar9) * 0xd8 + iVar1 + lVar4);
        iVar2 = _stricmp((char *)((longlong)*piVar5 + (longlong)piVar5),param_2);
        if (iVar2 < 0) {
          iVar7 = iVar8 + 1;
        }
        else {
          if (iVar2 < 1) {
            return (ulonglong)*(byte *)(iVar8 + lVar9);
          }
          iVar6 = iVar8 + -1;
        }
      } while (iVar7 <= iVar6);
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}



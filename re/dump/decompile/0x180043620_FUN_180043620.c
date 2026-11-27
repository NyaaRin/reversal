// 0x180043620  FUN_180043620
// size=263 thunk=false
// signature: undefined FUN_180043620()
// status: ok


undefined8 FUN_180043620(longlong param_1)

{
  double dVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 uVar8;
  
  plVar5 = (longlong *)FUN_180039770();
  if ((plVar5 != (longlong *)0x0) && (plVar5[1] == param_1)) {
    dVar1 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);
    uVar6 = (uint)dVar1;
    if (((((int)uVar6 < 1) || (DAT_1803ff8a8 == 0)) || (uVar3 = uVar6 & 0xf, 7 < uVar3)) ||
       ((((&DAT_1803ff7e0)[(ulonglong)uVar3 * 0x18] == '\0' ||
         (*(uint *)(&DAT_1803ff7e4 + (ulonglong)uVar3 * 0x18) != uVar6 >> 4)) ||
        ((DAT_1803ff8a8 == 0 || (DAT_1803fb038 == (code *)0x0)))))) {
      lVar7 = *plVar5;
    }
    else {
      iVar4 = (*DAT_1803fb038)(DAT_1803ff8a8,2);
      pcVar2 = DAT_1803faed8;
      lVar7 = *plVar5;
      if (iVar4 != 0) {
        uVar8 = (**(code **)(lVar7 + 0x160))(plVar5,2);
        (*pcVar2)(DAT_1803ff8a8,uVar8);
        (**(code **)(*plVar5 + 0xf8))(plVar5,1);
        return 1;
      }
    }
    (**(code **)(lVar7 + 0xf8))(plVar5,0);
    return 1;
  }
  return 0;
}



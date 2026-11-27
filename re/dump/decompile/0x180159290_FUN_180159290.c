// 0x180159290  FUN_180159290
// size=268 thunk=false
// signature: undefined FUN_180159290()
// status: ok


undefined4 FUN_180159290(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  if ((param_1 == 0) || (DAT_1803f9250 == (longlong *)0x0)) {
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    uVar4 = DAT_18040a400;
  }
  else {
    lVar5 = FUN_1801475e0();
    if (lVar5 == 0) {
      pcVar2 = *(code **)(*DAT_1803f9250 + 8);
      puVar6 = (undefined4 *)FUN_18001c240(param_1);
      lVar5 = (*pcVar2)(DAT_1803f9250,*puVar6);
    }
    if ((lVar5 != 0) && (lVar5 = (**(code **)(*DAT_1803f9250 + 0xe0))(), lVar5 != 0)) {
      LOCK();
      UNLOCK();
      iVar7 = 0;
      for (iVar8 = 1; (iVar7 < *(int *)(lVar5 + 0xe8) && (iVar8 < 0x100000)); iVar8 = iVar8 * iVar3)
      {
        iVar1 = *(int *)(*(int *)(lVar5 + 0xec) + lVar5 + 4 + (longlong)iVar7 * 0x10);
        iVar3 = 1;
        if (1 < iVar1) {
          iVar3 = iVar1;
        }
        iVar7 = iVar7 + 1;
      }
      LOCK();
      UNLOCK();
      uVar4 = DAT_18040a3fc;
      DAT_18040a3fc = iVar8 + -1;
      DAT_18040a400 = *(undefined4 *)(lVar5 + 0xe0);
      return uVar4;
    }
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    uVar4 = DAT_18040a400;
  }
  DAT_18040a400 = 0;
  DAT_18040a3fc = 0;
  return uVar4;
}



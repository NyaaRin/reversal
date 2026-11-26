// 0x18002e990  FUN_18002e990
// size=363 thunk=false
// signature: undefined FUN_18002e990()
// status: ok


undefined8 FUN_18002e990(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  cVar1 = FUN_18002e100();
  if ((cVar1 != '\0') && (DAT_1803fa678 != (longlong *)0x0)) {
    lVar4 = (**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
    if ((((lVar4 != 0) &&
         (((lVar4 = *(longlong *)(lVar4 + 8), lVar4 != 0 && (DAT_1803fafa0 != (code *)0x0)) &&
          (DAT_1803faef0 != (code *)0x0)))) &&
        (((DAT_1803faff8 != (code *)0x0 && (DAT_1803faf18 != (code *)0x0)) &&
         (DAT_1803fb088 != (code *)0x0)))) && (DAT_1803faf10 != (code *)0x0)) {
      uVar2 = (*DAT_1803fb088)(lVar4);
      uVar5 = 0;
      (*DAT_1803fafa0)(lVar4,param_1);
      (*DAT_1803faef0)(lVar4,0xffffd8ee);
      iVar3 = (*DAT_1803faff8)(lVar4,0xffffffff);
      if (iVar3 == 5) {
        (*DAT_1803fafa0)(lVar4,param_2);
        (*DAT_1803faef0)(lVar4,0xfffffffe);
        iVar3 = (*DAT_1803faff8)(lVar4,0xffffffff);
        if (iVar3 == 6) {
          uVar5 = (*DAT_1803faf18)(lVar4,0xffffffff);
        }
      }
      (*DAT_1803faf10)(lVar4,uVar2);
      return uVar5;
    }
  }
  return 0;
}



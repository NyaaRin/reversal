// 0x1801f7190  FUN_1801f7190
// size=252 thunk=false
// signature: undefined FUN_1801f7190()
// status: ok


void FUN_1801f7190(undefined8 param_1,char param_2,char param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  if ((((DAT_1803fa3b8 != (code *)0x0) && ((*DAT_1803fa3b8)(), DAT_1803ff270 != '\0')) &&
      (param_2 == '\0')) &&
     (((param_3 == '\0' && (DAT_1803fa668 != (longlong *)0x0)) &&
      (cVar3 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar3 != '\0')))) {
    pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar4 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar5 = (*pcVar1)(DAT_1803fa360,uVar4);
    puVar2 = DAT_1803fcc70;
    if (((lVar5 != 0) && (DAT_1803fa452 != '\0')) &&
       ((DAT_1804236a5 == '\0' &&
        (((DAT_180423650 == 0 && (DAT_1804236a0 == 0)) &&
         (puVar6 = DAT_1803fcc68, DAT_1803fa46f == '\0')))))) {
      for (; puVar6 != puVar2; puVar6 = puVar6 + 1) {
        (**(code **)(*(longlong *)*puVar6 + 0x48))();
      }
      FUN_18010c040();
    }
  }
  return;
}



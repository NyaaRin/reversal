// 0x180052340  FUN_180052340
// size=401 thunk=false
// signature: undefined FUN_180052340()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180052340(void)

{
  double *pdVar1;
  longlong lVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined8 in_R9;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  ulonglong local_28;
  undefined8 uStack_20;
  
  if (DAT_1803eb490 != '\0') {
    cVar4 = FUN_180051c50();
    lVar2 = DAT_1803fa608;
    if (cVar4 != '\0') {
      if (DAT_1803eb4a0 < 0x40) {
        if (DAT_1803fa608 != 0) {
          pdVar1 = (double *)(DAT_1803fa608 + 0x28);
          *(double *)(DAT_1803fa608 + 0x10) = (double)(DAT_1803eb4a0 + 1) * *pdVar1 + _DAT_1803eb788
          ;
          *(float *)(lVar2 + 0x18) = (float)*pdVar1;
        }
        local_28 = 0;
        uStack_20 = 0;
        FUN_180024b50(&local_28);
        lVar2 = DAT_1803eb498;
        if ((char)uStack_20 == '\0') {
          return 0;
        }
        puVar5 = (undefined4 *)0x0;
        puVar7 = (undefined4 *)0x0;
        uVar6 = 0;
        uVar8 = 0;
        FUN_180024cd0();
        if ((lVar2 != 0) && (-1 < DAT_1803e6ed0)) {
          puVar5 = (undefined4 *)(lVar2 + DAT_1803e6ed0);
          uVar6 = *puVar5;
          *puVar5 = 0x4e6e6b28;
          puVar7 = puVar5;
          uVar8 = uVar6;
        }
        uVar3 = DAT_1803fe4ac;
        DAT_1803fe4ac = 1;
        (**(code **)(*DAT_1803fa658 + 8))
                  (DAT_1803fa658,DAT_1803eb498,&DAT_1803eb4a4,in_R9,puVar7,uVar8);
        DAT_1803eb4a0 = DAT_1803eb4a0 + 1;
        DAT_1803fe4ac = uVar3;
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = uVar6;
        }
        if ((longlong)DAT_1803fa368 - 1U < 0xfffffffffffffffe) {
          *DAT_1803fa368 = local_28;
        }
        return 1;
      }
      if (DAT_1803fe68a == '\0') {
        DAT_1803fe68a = 1;
        FUN_180014410("[LUAMOVESIM] tick budget (%d) exhausted in one transaction -- extra RunTick calls ignored\n"
                      ,0x40);
        return 0;
      }
    }
  }
  return 0;
}



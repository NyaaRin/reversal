// 0x18012da80  FUN_18012da80
// size=425 thunk=false
// signature: undefined FUN_18012da80()
// status: ok


void FUN_18012da80(char param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  void *pvVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  void *pvVar7;
  longlong *plVar8;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  longlong *local_58;
  void *local_50;
  ulonglong local_48;
  
  puVar6 = auStack_78;
  FUN_18012c6f0(1);
  plVar8 = &DAT_1803ea170;
  do {
    pvVar7 = (void *)*plVar8;
    pvVar4 = (void *)plVar8[1];
    if (pvVar7 != (void *)plVar8[1]) {
      plVar8[1] = (longlong)pvVar7;
      pvVar4 = pvVar7;
    }
    if (pvVar4 != (void *)plVar8[2]) {
      if (pvVar7 == pvVar4) {
        if (pvVar7 != (void *)0x0) {
          pvVar4 = pvVar7;
          if ((0xfff < (ulonglong)(plVar8[2] - (longlong)pvVar7)) &&
             (pvVar4 = *(void **)((longlong)pvVar7 + -8),
             0x1f < (ulonglong)((longlong)pvVar7 + (-8 - (longlong)pvVar4)))) {
LAB_18012dc1d:
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            puVar6 = auStack_70;
LAB_18012dc24:
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar6 + -8) = &UNK_18012dc29;
            FUN_180012fe0();
          }
          free(pvVar4);
          *plVar8 = 0;
          plVar8[1] = 0;
          plVar8[2] = 0;
        }
      }
      else {
        uVar5 = (longlong)pvVar4 - (longlong)pvVar7;
        pvVar7 = (void *)0x0;
        if (uVar5 != 0) {
          if (uVar5 < 0x1000) {
            pvVar7 = (void *)FUN_1802d8350(uVar5);
          }
          else {
            if (uVar5 + 0x27 <= uVar5) goto LAB_18012dc24;
            lVar2 = FUN_1802d8350();
            if (lVar2 == 0) goto LAB_18012dc1d;
            pvVar7 = (void *)(lVar2 + 0x27U & 0xffffffffffffffe0);
            *(longlong *)((longlong)pvVar7 - 8) = lVar2;
          }
        }
        local_58 = plVar8;
        local_50 = pvVar7;
        local_48 = uVar5;
        memmove(pvVar7,(void *)*plVar8,plVar8[1] - *plVar8);
        local_50 = (void *)0x0;
        FUN_18022c3f0(plVar8,pvVar7,uVar5,uVar5);
      }
    }
    plVar8 = plVar8 + 3;
    if (plVar8 == &DAT_1803ea200) {
      puVar3 = &DAT_1804011d0;
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 0xa0;
      } while (puVar3 != &DAT_180401590);
      DAT_180400b74 = 0;
      DAT_180400b70 = 0;
      DAT_180400eb4 = 0;
      DAT_180400eac = 0;
      DAT_180400c04 = 0;
      DAT_180401111 = 0;
      DAT_180400e51 = 0;
      if (param_1 != '\0') {
        FUN_18012ab30("No custom VTF loaded.");
      }
      return;
    }
  } while( true );
}



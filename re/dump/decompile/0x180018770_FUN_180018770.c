// 0x180018770  FUN_180018770
// size=538 thunk=false
// signature: undefined FUN_180018770()
// status: ok


undefined8
FUN_180018770(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  void *lp;
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  BOOL BVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if ((undefined8 *)0xffff < param_2) {
    BVar5 = IsBadReadPtr(param_2,8);
    if ((((BVar5 == 0) && (lp = (void *)*param_2, lp != (void *)0x0)) && (*(void **)*param_1 <= lp))
       && ((longlong)lp + 0x130U <= *(ulonglong *)param_1[1])) {
      BVar5 = IsBadReadPtr(lp,0x130);
      if (BVar5 == 0) {
        cVar4 = FUN_1800186d0(param_1[2],*(undefined8 *)((longlong)lp + 0x28));
        if (cVar4 != '\0') {
          cVar4 = FUN_1800186d0(param_1[2],*(undefined8 *)((longlong)lp + 0x30));
          if (cVar4 != '\0') {
            cVar4 = FUN_1800186d0(param_1[2],*(undefined8 *)((longlong)lp + 0x128));
            if (cVar4 != '\0') {
              puVar1 = (undefined8 *)param_1[3];
              if (((void *)(*(longlong *)*puVar1 + 8) <= lp) && (lp < *(void **)puVar1[1])) {
                BVar5 = IsBadReadPtr((void *)((longlong)lp + -8),8);
                if (BVar5 == 0) {
                  plVar7 = *(longlong **)((longlong)lp + -8);
                  plVar2 = *(longlong **)*puVar1;
                  if (plVar2 <= plVar7) {
                    plVar3 = *(longlong **)puVar1[1];
                    if (((plVar7 + 3 <= plVar3) && ((int)*plVar7 == 1)) &&
                       ((0 < (int)*(uint *)((longlong)plVar7 + 0xc) &&
                        (((((longlong *)
                            ((ulonglong)*(uint *)((longlong)plVar7 + 0x14) + (longlong)plVar2) ==
                            plVar7 && (*(int *)((longlong)plVar7 + 4) == 0)) &&
                          (plVar7 = (longlong *)
                                    ((ulonglong)*(uint *)((longlong)plVar7 + 0xc) + 0x10 +
                                    (longlong)plVar2), plVar2 <= plVar7)) &&
                         ((plVar7 < plVar3 &&
                          (0x11 < (ulonglong)((longlong)plVar3 - (longlong)plVar7))))))))) {
                      lVar6 = *plVar7 - s___AVCViewRender___180310118._0_8_;
                      if ((lVar6 == 0) &&
                         (lVar6 = plVar7[1] - s___AVCViewRender___180310118._8_8_, lVar6 == 0)) {
                        lVar6 = (ulonglong)*(ushort *)(plVar7 + 2) -
                                (ulonglong)(ushort)s___AVCViewRender___180310118._16_2_;
                      }
                      if (lVar6 == 0) {
                        lVar6 = *(longlong *)*param_1;
                        DAT_1803f9258 = 1;
                        DAT_1803fa680 = param_2;
                        FUN_180014410("[IFACE] g_pViewrender verified via %s 0x%llX -> %p (vt=%p Render=client+0x%llX RenderView=client+0x%llX PreHUD=client+0x%llX)\n"
                                      ,param_3,param_4,param_2,lp,
                                      *(longlong *)((longlong)lp + 0x28) - lVar6,
                                      *(longlong *)((longlong)lp + 0x30) - lVar6,
                                      *(longlong *)((longlong)lp + 0x128) - lVar6);
                        return 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



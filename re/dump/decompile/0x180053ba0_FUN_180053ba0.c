// 0x180053ba0  FUN_180053ba0
// size=534 thunk=false
// signature: undefined FUN_180053ba0()
// status: ok


undefined8 FUN_180053ba0(void *param_1,char *param_2)

{
  longlong *lp;
  ulonglong uVar1;
  longlong lVar2;
  char *_Str1;
  undefined8 *puVar3;
  BOOL BVar4;
  int iVar5;
  undefined8 uVar6;
  size_t sVar7;
  longlong *plVar8;
  void *lp_00;
  
  if (param_1 == (void *)0x0) {
    return 0;
  }
  if (param_2 != (char *)0x0) {
    lp_00 = *(void **)((longlong)param_1 + 0x38);
    if (((lp_00 == (void *)0x0) || (lp_00 == param_1)) ||
       (BVar4 = IsBadReadPtr(lp_00,0x60), BVar4 != 0)) {
      lp_00 = param_1;
    }
    lp = (longlong *)((longlong)lp_00 + 0x40);
    BVar4 = IsBadReadPtr(lp,8);
    if (((BVar4 == 0) && (_Str1 = (char *)*lp, _Str1 != (char *)0x0)) &&
       (BVar4 = IsBadReadPtr(_Str1,1), BVar4 == 0)) {
      iVar5 = strcmp(_Str1,param_2);
      if (iVar5 != 0) {
        if ((DAT_1805b8820 & 1) == 0) {
          DAT_1805b8820 = DAT_1805b8820 | 1;
          DAT_180427808 = (undefined8 *)0x0;
          DAT_180427810 = 0;
          DAT_180427818 = 0;
          DAT_180427820 = 0;
          DAT_180427828 = 0;
          DAT_180427808 = (undefined8 *)FUN_1802d8350(0x10);
          DAT_180427808[1] = 0;
          *DAT_180427808 = &DAT_180427808;
          atexit(FUN_1803091d0);
        }
        if (DAT_180427818 <= DAT_180427828 + 1U) {
          FUN_18022ddb0(&DAT_180427808);
        }
        DAT_180427820 = DAT_180427818 - 1 & DAT_180427820;
        uVar1 = DAT_180427820 + DAT_180427828;
        lVar2 = (DAT_180427818 - 1 & uVar1) * 8;
        if (*(longlong *)(lVar2 + DAT_180427810) == 0) {
          uVar6 = FUN_1802d8350(0x20);
          *(undefined8 *)(lVar2 + DAT_180427810) = uVar6;
        }
        puVar3 = *(undefined8 **)(DAT_180427810 + (DAT_180427818 - 1 & uVar1) * 8);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        sVar7 = strlen(param_2);
        FUN_18001d080(puVar3,param_2,sVar7);
        DAT_180427828 = DAT_180427828 + 1;
        plVar8 = *(longlong **)
                  (DAT_180427810 + ((DAT_180427820 - 1) + DAT_180427828 & DAT_180427818 - 1) * 8);
        if (0xf < (ulonglong)plVar8[3]) {
          plVar8 = (longlong *)*plVar8;
        }
        *lp = (longlong)plVar8;
      }
      return 1;
    }
    return 0;
  }
  return 0;
}



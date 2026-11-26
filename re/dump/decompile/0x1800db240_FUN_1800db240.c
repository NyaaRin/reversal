// 0x1800db240  FUN_1800db240
// size=188 thunk=false
// signature: undefined FUN_1800db240()
// status: ok


void FUN_1800db240(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  BOOL BVar1;
  longlong *lp;
  void *lp_00;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  if (DAT_1803fd110 == '\0') {
    DAT_1803fd110 = '\x01';
    puVar3 = &DAT_18033e9cc;
    puVar2 = &DAT_18033e9cc;
    if ((((DAT_1803fa360 != (longlong *)0x0) &&
         (lp = (longlong *)
               (**(code **)(*DAT_1803fa360 + 0x18))
                         (DAT_1803fa360,param_1,param_3,param_4,&DAT_18033e9cc),
         lp != (longlong *)0x0)) && (BVar1 = IsBadReadPtr(lp,8), BVar1 == 0)) &&
       (((lp_00 = (void *)(**(code **)(*lp + 0x78))(lp), lp_00 != (void *)0x0 &&
         (BVar1 = IsBadReadPtr(lp_00,8), BVar1 == 0)) &&
        (puVar3 = &DAT_18033e9cc, 0x10000 < *(ulonglong *)((longlong)lp_00 + 0x10))))) {
      puVar2 = *(undefined1 **)((longlong)lp_00 + 0x10);
      puVar3 = *(undefined1 **)((longlong)lp_00 + 0x10);
    }
    FUN_180014410("[ZCITY-RAGDOLL] resolved body idx=%d networkName=\'%s\'\n",param_1,puVar2,param_4
                  ,puVar3);
  }
  return;
}



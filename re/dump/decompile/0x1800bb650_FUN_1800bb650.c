// 0x1800bb650  FUN_1800bb650
// size=322 thunk=false
// signature: undefined FUN_1800bb650()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_1800bb650(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  BOOL BVar2;
  longlong *lp;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_28 [12];
  undefined1 local_1c [20];
  
  if (((*(int *)(param_1 + 0x38) - 4U < 4) && (1 < *(int *)(param_1 + 0x3c))) &&
     (*(int *)(param_1 + 0x3c) <= *(int *)(param_1 + 0x40))) {
    return "every hypothesis covered the aim point";
  }
  if (((((param_3 == '\0') && (*(char *)(param_1 + 0x4c) != '\0')) &&
       ((lp = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(), lp != (longlong *)0x0 &&
        ((BVar2 = IsBadReadPtr(lp,8), BVar2 == 0 &&
         (BVar2 = IsBadReadPtr((void *)*lp,8), BVar2 == 0)))))) &&
      (plVar3 = (longlong *)(**(code **)(*lp + 0x20))(lp), plVar3 != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*plVar3 + 0x40))(plVar3), cVar1 == '\0')) {
    lVar4 = FUN_18001bfe0(lp);
    if (DAT_180380e9c <
        (float)((uint)(*(float *)(lVar4 + 8) - *(float *)(param_1 + 0x44)) & _DAT_1803817c0)) {
      return "collision box changed (crouch transition)";
    }
    lVar4 = FUN_18001c430(lp,local_28);
    lVar5 = FUN_18001daf0(lp,local_1c);
    if (DAT_180380e9c <
        (float)((uint)((*(float *)(lVar4 + 8) - *(float *)(lVar5 + 8)) - *(float *)(param_1 + 0x48))
               & _DAT_1803817c0)) {
      return "view offset changed (crouch transition)";
    }
  }
  return (char *)0x0;
}



// 0x180121200  FUN_180121200
// size=338 thunk=false
// signature: undefined FUN_180121200()
// status: ok


undefined8 FUN_180121200(longlong param_1)

{
  char cVar1;
  BOOL BVar2;
  char *pcVar3;
  char *pcVar4;
  longlong *lp;
  longlong lVar5;
  undefined8 uVar6;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0xf6f) != '\0') {
    return 1;
  }
  if (((*(longlong *)(param_1 + 0x20) != 0) && (DAT_1803f9250 != (longlong *)0x0)) &&
     (pcVar3 = (char *)(**(code **)(*DAT_1803f9250 + 0x18))(), (char *)0x10000 < pcVar3)) {
    pcVar4 = strstr(pcVar3,"models/weapons/v_");
    if ((pcVar4 != (char *)0x0) || (pcVar4 = strstr(pcVar3,"_arms"), pcVar4 != (char *)0x0)) {
      return 1;
    }
    pcVar3 = strstr(pcVar3,"models/weapons/c_");
    if ((pcVar3 != (char *)0x0) &&
       (cVar1 = FUN_180121180(*(undefined4 *)(param_1 + 0x44)), cVar1 != '\0')) {
      return 1;
    }
  }
  if (((0 < *(int *)(param_1 + 0x44)) && (DAT_1803fa360 != (longlong *)0x0)) &&
     ((lp = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(), lp != (longlong *)0x0 &&
      ((BVar2 = IsBadReadPtr(lp,8), BVar2 == 0 && (BVar2 = IsBadReadPtr((void *)*lp,8), BVar2 == 0))
      )))) {
    pcVar3 = (char *)FUN_18001e410(lp);
    if (((pcVar3 < (char *)0x10001) || (*pcVar3 == '\0')) &&
       ((lVar5 = (**(code **)(*lp + 0x78))(lp), lVar5 == 0 ||
        (pcVar3 = *(char **)(lVar5 + 0x10), pcVar3 < (char *)0x10001)))) {
      pcVar3 = (char *)0x0;
    }
    uVar6 = FUN_180121100(pcVar3);
    return uVar6;
  }
  return 0;
}



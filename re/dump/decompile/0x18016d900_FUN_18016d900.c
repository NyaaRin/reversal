// 0x18016d900  FUN_18016d900
// size=116 thunk=false
// signature: undefined FUN_18016d900()
// status: ok


ulonglong FUN_18016d900(undefined8 *param_1,char *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  char *_Str2;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar3 = *(ulonglong *)(param_2 + 0x10);
  if ((uVar3 != 0) && (uVar3 <= (ulonglong)param_1[2])) {
    uVar4 = param_1[2] - uVar3;
    uVar5 = 0;
    do {
      _Str2 = param_2;
      if (0xf < *(ulonglong *)(param_2 + 0x18)) {
        _Str2 = *(char **)param_2;
      }
      puVar2 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar2 = (undefined8 *)*param_1;
      }
      iVar1 = _strnicmp((char *)((longlong)puVar2 + uVar5),_Str2,*(size_t *)(param_2 + 0x10));
      uVar3 = CONCAT44(extraout_var,iVar1);
      if (iVar1 == 0) {
        return CONCAT71((int7)(uVar3 >> 8),1);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 <= uVar4);
  }
  return uVar3 & 0xffffffffffffff00;
}



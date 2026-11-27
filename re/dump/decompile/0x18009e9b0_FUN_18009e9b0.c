// 0x18009e9b0  FUN_18009e9b0
// size=101 thunk=false
// signature: undefined FUN_18009e9b0()
// status: ok


bool FUN_18009e9b0(undefined8 *param_1,char *param_2)

{
  size_t _Size;
  int iVar1;
  size_t sVar2;
  
  sVar2 = strlen(param_2);
  _Size = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (_Size != sVar2) {
    return false;
  }
  if (_Size == 0) {
    return true;
  }
  iVar1 = memcmp(param_1,param_2,_Size);
  return iVar1 == 0;
}



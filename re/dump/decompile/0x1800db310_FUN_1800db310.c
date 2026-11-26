// 0x1800db310  FUN_1800db310
// size=331 thunk=false
// signature: undefined FUN_1800db310()
// status: ok


int FUN_1800db310(longlong *param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  *param_2 = 0;
  if ((param_1 == (longlong *)0x0) || (DAT_1803fb020 == (code *)0x0)) {
    *param_2 = 1;
  }
  else {
    cVar3 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,9);
    if (cVar3 == '\0') {
      *param_2 = 2;
    }
    else {
      if (0 < param_4) {
        iVar8 = 0;
        uVar4 = (**(code **)*param_1)(param_1);
        iVar7 = 0;
        while( true ) {
          if (param_4 <= iVar7) {
            if (iVar8 == 0) {
              *param_2 = 7;
            }
            return iVar8;
          }
          if (iVar8 != 0) break;
          iVar1 = *(int *)(param_3 + (longlong)iVar7 * 4);
          cVar3 = FUN_18002eb00(param_1[1],param_1,iVar1);
          pcVar2 = DAT_1803fb020;
          if (cVar3 == '\0') {
            iVar7 = iVar7 + 1;
          }
          else {
            uVar5 = (**(code **)*param_1)(param_1);
            iVar6 = (*pcVar2)(param_1[1],uVar4,uVar5);
            (**(code **)(*param_1 + 0x10))(param_1,1);
            if (iVar6 != 0) {
              iVar8 = iVar1;
            }
            iVar7 = iVar7 + 1;
          }
        }
        return iVar8;
      }
      *param_2 = 6;
    }
  }
  return 0;
}



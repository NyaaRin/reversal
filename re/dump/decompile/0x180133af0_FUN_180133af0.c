// 0x180133af0  FUN_180133af0
// size=249 thunk=false
// signature: undefined FUN_180133af0()
// status: ok


ulonglong FUN_180133af0(undefined8 *param_1,ulonglong *param_2)

{
  char cVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  int iVar3;
  int iVar5;
  ulonglong uVar6;
  undefined8 *puVar4;
  
  uVar2 = param_1[2];
  if ((uVar2 != 0) && ((uVar2 & 1) == 0)) {
    FUN_180218360(param_2,uVar2 >> 1);
    uVar2 = param_2[1];
    uVar6 = 0;
    if (uVar2 != *param_2) {
      do {
        puVar4 = param_1;
        if (0xf < (ulonglong)param_1[3]) {
          puVar4 = (undefined8 *)*param_1;
        }
        cVar1 = *(char *)((longlong)puVar4 + uVar6 * 2);
        iVar3 = (int)cVar1;
        if ((byte)(cVar1 - 0x30U) < 10) {
          iVar3 = iVar3 + -0x30;
        }
        else if ((byte)(cVar1 + 0x9fU) < 6) {
          iVar3 = iVar3 + -0x57;
        }
        else if ((byte)(cVar1 + 0xbfU) < 6) {
          iVar3 = iVar3 + -0x37;
        }
        else {
          iVar3 = -1;
        }
        puVar4 = param_1;
        if (0xf < (ulonglong)param_1[3]) {
          puVar4 = (undefined8 *)*param_1;
        }
        cVar1 = *(char *)((longlong)puVar4 + uVar6 * 2 + 1);
        iVar5 = (int)cVar1;
        if ((byte)(cVar1 - 0x30U) < 10) {
          in_RAX = (ulonglong)(iVar5 - 0x30);
        }
        else if ((byte)(cVar1 + 0x9fU) < 6) {
          in_RAX = (ulonglong)(iVar5 - 0x57);
        }
        else {
          in_RAX = (ulonglong)(iVar5 - 0x37);
          if (5 < (byte)(cVar1 + 0xbfU)) {
            in_RAX = 0xffffffff;
          }
        }
        if ((iVar3 < 0) || ((int)in_RAX < 0)) goto LAB_180133bdc;
        *(byte *)(uVar6 + *param_2) = (char)iVar3 << 4 | (byte)in_RAX;
        uVar6 = uVar6 + 1;
        uVar2 = param_2[1] - *param_2;
      } while (uVar6 < uVar2);
    }
    return CONCAT71((int7)(uVar2 >> 8),1);
  }
LAB_180133bdc:
  return in_RAX & 0xffffffffffffff00;
}



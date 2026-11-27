// 180086e00  FUN_180086e00
// signature: undefined FUN_180086e00()
// status: ok


void FUN_180086e00(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  
  if ((param_2 != (longlong *)0x0) && (DAT_1803faf80 != (code *)0x0)) {
    iVar2 = (**(code **)*param_2)(param_2);
    FUN_18002d9c0(param_2[1],0xffffffff,"DoProjectileAttack");
    cVar1 = (**(code **)(*param_2 + 0x138))(param_2,0xffffffff,6);
    if (cVar1 != '\0') {
      uVar3 = (**(code **)*param_2)(param_2);
      cVar6 = '\0';
      cVar1 = '\0';
      iVar7 = 1;
      while( true ) {
        iVar4 = 0;
        if ((0x20 < iVar7) ||
           (pcVar5 = (char *)(*DAT_1803faf80)(param_2[1],uVar3,iVar7,DAT_1803faf80,cVar1,iVar7),
           iVar4 = 0, pcVar5 == (char *)0x0)) goto LAB_180086efc;
        (**(code **)(*param_2 + 0x10))(param_2,1);
        if (*pcVar5 != '\0') {
          cVar6 = '\x01';
        }
        cVar1 = cVar6;
        iVar4 = strcmp(pcVar5,"CalcSpreadDir");
        if (iVar4 == 0) break;
        iVar7 = iVar7 + 1;
      }
      iVar4 = 1;
LAB_180086efc:
      if (cVar6 == '\0') {
        iVar4 = -1;
      }
      if (iVar4 != *(int *)(param_1 + 0x48)) {
        *(int *)(param_1 + 0x48) = iVar4;
        if (iVar4 == 1) {
          FUN_180014410("[ARC9-NS] spread path = %s\n","LUA CalcSpreadDir (current ARC9)");
        }
        else {
          pcVar5 = "UNKNOWN (upvalue names stripped)";
          if (iVar4 == 0) {
            pcVar5 = "engine FireBullets cone (legacy ARC9)";
          }
          FUN_180014410("[ARC9-NS] spread path = %s\n",pcVar5);
        }
      }
    }
    iVar7 = (**(code **)*param_2)(param_2);
    while (iVar2 < iVar7) {
      (**(code **)(*param_2 + 0x10))(param_2,1);
      iVar7 = (**(code **)*param_2)(param_2);
    }
  }
  return;
}



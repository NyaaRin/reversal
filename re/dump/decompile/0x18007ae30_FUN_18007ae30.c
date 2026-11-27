// 0x18007ae30  FUN_18007ae30
// size=261 thunk=false
// signature: undefined FUN_18007ae30()
// status: ok


char FUN_18007ae30(longlong *param_1,undefined8 param_2,undefined8 param_3,float *param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  char local_40;
  
  iVar3 = 0;
  while( true ) {
    uVar4 = param_3;
    if (iVar3 == 0) {
      uVar4 = param_2;
    }
    if (DAT_1803faee8 != (code *)0x0) {
      lVar1 = param_1[1];
      FUN_180023010(&local_58,lVar1);
      (*DAT_1803faee8)(lVar1,0xffffffff,uVar4);
      if ((local_40 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
        (*DAT_1803fae90)(local_58,local_50,local_48,local_44);
      }
    }
    cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3);
    if (cVar2 != '\0') break;
    (**(code **)(*param_1 + 0x10))(param_1,1);
    iVar3 = iVar3 + 1;
    if (1 < iVar3) {
      return '\0';
    }
  }
  dVar5 = (double)(**(code **)(*param_1 + 0xc0))(param_1,0xffffffff);
  *param_4 = (float)dVar5;
  (**(code **)(*param_1 + 0x10))(param_1,1);
  return (iVar3 != 0) + '\x01';
}



// 0x180098e60  FUN_180098e60
// size=652 thunk=false
// signature: undefined FUN_180098e60()
// status: ok


ulonglong FUN_180098e60(longlong *param_1,undefined8 param_2,undefined4 param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong in_RAX;
  uint *puVar8;
  byte bVar9;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  char local_40;
  
  if ((((param_1 != (longlong *)0x0) && (param_1[1] != 0)) && (DAT_1803fafa0 != 0)) &&
     (DAT_1803faef0 != 0)) {
    iVar5 = (**(code **)*param_1)();
    bVar9 = 0;
    if (DAT_1803faee8 != (code *)0x0) {
      lVar3 = param_1[1];
      FUN_180023010(&local_58,lVar3);
      (*DAT_1803faee8)(lVar3,param_3,"GetOwner");
      if ((local_40 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
        (*DAT_1803fae90)(local_58,local_50,local_48,local_44);
      }
    }
    cVar4 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
    if (cVar4 != '\0') {
      cVar4 = FUN_18001e2b0(param_2,param_1);
      if (cVar4 != '\0') {
        iVar6 = FUN_180023180(param_1[1],1,1);
        if (iVar6 == 0) {
          cVar4 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,9);
          if (cVar4 != '\0') {
            uVar7 = (**(code **)*param_1)(param_1);
            FUN_180023e60(param_1,0);
            FUN_18002db10(param_1[1],0xffffffff,&DAT_180349348);
            cVar4 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);
            if (cVar4 != '\0') {
              FUN_18002db10(param_1[1],0xffffffff,&DAT_18034934c);
              cVar4 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
              if (cVar4 != '\0') {
                (**(code **)(*param_1 + 8))(param_1,uVar7);
                (**(code **)(*param_1 + 0xf0))(param_1,(int)DAT_180380e50);
                iVar6 = FUN_180023180(param_1[1],2,1);
                if (iVar6 == 0) {
                  cVar4 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,10);
                  if (cVar4 != '\0') {
                    puVar8 = (uint *)(**(code **)(*param_1 + 0x178))(param_1,0xffffffff);
                    if ((((*puVar8 & 0x7f800000) != 0x7f800000) &&
                        (uVar1 = puVar8[1], (uVar1 & 0x7f800000) != 0x7f800000)) &&
                       (uVar2 = puVar8[2], (uVar2 & 0x7f800000) != 0x7f800000)) {
                      *param_4 = *puVar8;
                      param_4[1] = uVar1;
                      param_4[2] = uVar2;
                      bVar9 = 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    iVar6 = (**(code **)*param_1)(param_1);
    if (iVar5 < iVar6) {
      (**(code **)(*param_1 + 0x10))(param_1,iVar6 - iVar5);
    }
    return (ulonglong)bVar9;
  }
  return in_RAX & 0xffffffffffffff00;
}



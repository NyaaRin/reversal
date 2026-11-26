// 0x180295680  FUN_180295680
// size=243 thunk=false
// signature: undefined FUN_180295680()
// status: ok


void FUN_180295680(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if ((param_7 & 0xff000000) != 0) {
    if ((param_2[1] == *(longlong *)(param_1 + 0x78)) && (*param_2 == *(longlong *)(param_1 + 0x70))
       ) {
      bVar3 = false;
    }
    else {
      local_38 = *param_2;
      uStack_30 = param_2[1];
      bVar3 = true;
      FUN_1802926d0((int)*param_2,&local_38);
    }
    FUN_1802927a0(param_1,6,4);
    FUN_180292880(param_1,param_3,param_4,param_5,param_6,param_7);
    if (bVar3) {
      iVar2 = *(int *)(param_1 + 0xb0);
      iVar4 = iVar2 + -1;
      *(int *)(param_1 + 0xb0) = iVar4;
      if (iVar4 == 0) {
        local_38 = 0;
        uStack_30 = 0;
      }
      else {
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0xb8) + ((longlong)iVar2 + -2) * 0x10);
        local_38 = *puVar1;
        uStack_30 = puVar1[1];
      }
      *(undefined4 *)(param_1 + 0x70) = (undefined4)local_38;
      *(undefined4 *)(param_1 + 0x74) = local_38._4_4_;
      *(undefined4 *)(param_1 + 0x78) = (undefined4)uStack_30;
      *(undefined4 *)(param_1 + 0x7c) = uStack_30._4_4_;
      FUN_180292400(param_1);
    }
  }
  return;
}



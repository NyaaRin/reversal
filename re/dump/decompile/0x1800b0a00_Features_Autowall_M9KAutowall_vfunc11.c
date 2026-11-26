// 0x1800b0a00  Features_Autowall_M9KAutowall_vfunc11
// size=354 thunk=false
// signature: undefined Features_Autowall_M9KAutowall_vfunc11()
// status: ok


undefined1 *
Features_Autowall_M9KAutowall_vfunc11(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  float fVar3;
  undefined1 local_res8 [32];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  *param_2 = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xbf800000;
  cVar1 = (**(code **)(*param_1 + 0x20))();
  if (cVar1 != '\0') {
    iVar2 = FUN_1800aa2b0(param_3);
    if ((iVar2 == 0x4d) && (*(char *)((longlong)param_1 + 0x13) != '\0')) {
      if (*(char *)((longlong)param_1 + 0x14) == '\0') {
        return param_2;
      }
      fVar3 = *(float *)(param_1 + 1);
    }
    else {
      fVar3 = *(float *)(param_1 + 1);
      if ((iVar2 - 0x46U < 0x14) && ((0xa0045U >> (iVar2 - 0x46U & 0x1f) & 1) != 0)) {
        fVar3 = fVar3 + fVar3;
      }
    }
    cVar1 = FUN_1800acb50(param_3 + 0xc,param_3 + 0x68,DAT_180380d30,fVar3,&local_38,local_res8,
                          *(undefined8 *)(param_3 + 0x88),0x46004003);
    if (cVar1 != '\0') {
      *(undefined4 *)(param_2 + 4) = local_38;
      *(undefined4 *)(param_2 + 0xc) = local_30;
      *(undefined4 *)(param_2 + 8) = local_34;
      *param_2 = 1;
      *(int *)(param_2 + 0x14) = (int)param_1[1];
      fVar3 = DAT_180380bb0;
      if ((((*(char *)((longlong)param_1 + 0x14) == '\0') && (fVar3 = DAT_180380a6c, iVar2 != 0x43))
          && (iVar2 != 0x4d)) &&
         (((0xd < iVar2 - 0x4cU ||
           (fVar3 = DAT_180380b3c, (0x2801U >> (iVar2 - 0x4cU & 0x1f) & 1) == 0)) &&
          (fVar3 = DAT_180380b68, (iVar2 - 0x46U & 0xfffffffd) != 0)))) {
        fVar3 = DAT_180380ac0;
      }
      *(float *)(param_2 + 0x10) = fVar3 * *(float *)(param_3 + 0x74);
    }
  }
  return param_2;
}



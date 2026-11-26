// 0x180182850  FUN_180182850
// size=392 thunk=false
// signature: undefined FUN_180182850()
// status: ok


void FUN_180182850(undefined8 *param_1,int param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  
  FUN_18027ae00(param_2 + 1000);
  plVar1 = DAT_1803fb108;
  for (plVar5 = DAT_1803fb100; plVar5 != plVar1; plVar5 = plVar5 + 1) {
    iVar3 = (**(code **)(*(longlong *)*plVar5 + 8))();
    if ((iVar3 == 6) && (lVar6 = *plVar5, *(int *)(lVar6 + 200) == param_2)) goto LAB_1801828ab;
  }
  lVar6 = 0;
LAB_1801828ab:
  puVar4 = (undefined8 *)((longlong)param_2 * 0x20 + DAT_1803fa808);
  if (0xf < (ulonglong)puVar4[3]) {
    puVar4 = (undefined8 *)*puVar4;
  }
  uVar2 = FUN_18017ddb0("##chip_dyn",puVar4,lVar6 != 0,param_3,lVar6 != 0);
  if ((char)uVar2 == '\0') {
    if (((char)((ushort)uVar2 >> 8) != '\0') && (lVar6 != 0)) {
      DAT_1803fb0f0 = lVar6;
      **(undefined1 **)*param_1 = 1;
    }
  }
  else {
    FUN_18017a2c0();
    if (lVar6 == 0) {
      DAT_1803fa5f8 = FUN_180207580();
      *(int *)(DAT_1803fa5f8 + 200) = param_2;
      switch(param_2) {
      case 0:
      case 9:
        *(undefined4 *)(DAT_1803fa5f8 + 8) = 0;
        break;
      default:
        *(undefined4 *)(DAT_1803fa5f8 + 8) = 0xb;
        break;
      case 3:
      case 4:
      case 5:
      case 0xc:
        *(undefined4 *)(DAT_1803fa5f8 + 8) = 1;
      }
    }
    else {
      FUN_18017dca0(lVar6);
    }
  }
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar6 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0xec0) + 0x1520);
  iVar3 = *(int *)(lVar6 + 0x108);
  if (1 < iVar3) {
    *(int *)(lVar6 + 0x108) = iVar3 + -1;
    return;
  }
  FUN_18027e9c0("Calling PopID() too many times!");
  return;
}



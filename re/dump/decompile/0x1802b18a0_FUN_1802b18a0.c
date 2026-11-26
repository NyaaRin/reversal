// 0x1802b18a0  FUN_1802b18a0
// size=1415 thunk=false
// signature: undefined FUN_1802b18a0()
// status: ok


ulonglong FUN_1802b18a0(int param_1,undefined4 param_2,ushort *param_3,undefined4 param_4,
                       short *param_5,short *param_6,undefined8 param_7,uint param_8)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  char cVar4;
  short sVar5;
  char cVar6;
  short sVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  uint local_res8 [8];
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar3 = 0xec0;
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  if (*(int *)(lVar1 + 0x1594) != param_1) goto switchD_1802b1972_default;
  if (*(int *)(lVar1 + 0x15b4) == 1) {
    if (*(char *)(lVar1 + 0x108) == '\0') {
LAB_1802b1921:
      uVar3 = FUN_18026ea90(0,0);
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar2 = *(int *)(lVar1 + 0x15b4) - 2;
    uVar3 = (ulonglong)uVar2;
    if (((uVar2 < 2) && (*(int *)(lVar1 + 0x208c) == param_1)) &&
       (*(char *)(lVar1 + 0x15a0) == '\0')) goto LAB_1802b1921;
  }
  if (((*(int *)(lVar1 + 0x1594) == param_1) && ((*(uint *)(lVar1 + 0x1efc) & 0x800) == 0)) &&
     ((param_8 >> 0x15 & 1) == 0)) {
    switch(param_2) {
    case 0:
      local_res8[0] = (uint)(char)(byte)*param_3;
      if (param_6 == (short *)0x0) {
        cVar4 = '\x7f';
      }
      else {
        cVar4 = (char)*param_6;
      }
      if (param_5 == (short *)0x0) {
        cVar6 = -0x80;
      }
      else {
        cVar6 = (char)*param_5;
      }
      uVar3 = FUN_1802c7d60(4,local_res8,param_4,(int)cVar6,(int)cVar4,param_7,param_8);
      if ((char)uVar3 == '\0') {
        return uVar3;
      }
      *(byte *)param_3 = (byte)local_res8[0];
      return uVar3;
    case 1:
      local_res8[0] = (uint)(byte)*param_3;
      if (param_6 == (short *)0x0) {
        cVar4 = -1;
      }
      else {
        cVar4 = (char)*param_6;
      }
      if (param_5 == (short *)0x0) {
        cVar6 = '\0';
      }
      else {
        cVar6 = (char)*param_5;
      }
      uVar3 = FUN_1802c8340(5,local_res8,param_4,cVar6,cVar4,param_7,param_8);
      if ((char)uVar3 == '\0') {
        return uVar3;
      }
      *(byte *)param_3 = (byte)local_res8[0];
      return uVar3;
    case 2:
      local_res8[0] = (uint)(short)*param_3;
      if (param_6 == (short *)0x0) {
        sVar5 = 0x7fff;
      }
      else {
        sVar5 = *param_6;
      }
      if (param_5 == (short *)0x0) {
        sVar7 = -0x8000;
      }
      else {
        sVar7 = *param_5;
      }
      uVar3 = FUN_1802c7d60(4,local_res8,param_4,(int)sVar7,(int)sVar5,param_7,param_8);
      if ((char)uVar3 == '\0') {
        return uVar3;
      }
      *param_3 = (ushort)local_res8[0];
      return uVar3;
    case 3:
      local_res8[0] = (uint)*param_3;
      if (param_6 == (short *)0x0) {
        sVar5 = -1;
      }
      else {
        sVar5 = *param_6;
      }
      sVar7 = 0;
      if (param_5 != (short *)0x0) {
        sVar7 = *param_5;
      }
      uVar3 = FUN_1802c8340(5,local_res8,param_4,sVar7,sVar5,param_7,param_8);
      if ((char)uVar3 == '\0') {
        return uVar3;
      }
      *param_3 = (ushort)local_res8[0];
      return uVar3;
    case 4:
      if (param_5 == (short *)0x0) {
        uVar8 = 0x80000000;
      }
      else {
        uVar8 = *(undefined4 *)param_5;
      }
      uVar3 = FUN_1802c7d60(4,param_3,param_4,uVar8);
      return uVar3;
    case 5:
      uVar8 = 0;
      if (param_5 != (short *)0x0) {
        uVar8 = *(undefined4 *)param_5;
      }
      uVar3 = FUN_1802c8340(5,param_3,param_4,uVar8);
      return uVar3;
    case 6:
      if (param_5 == (short *)0x0) {
        uVar9 = 0x8000000000000000;
      }
      else {
        uVar9 = *(undefined8 *)param_5;
      }
      uVar3 = FUN_1802c8920(6,param_3,param_4,uVar9);
      return uVar3;
    case 7:
      uVar9 = 0;
      if (param_5 != (short *)0x0) {
        uVar9 = *(undefined8 *)param_5;
      }
      uVar3 = FUN_1802c8f50(7,param_3,param_4,uVar9);
      return uVar3;
    case 8:
      uVar8 = DAT_180381454;
      if (param_5 != (short *)0x0) {
        uVar8 = *(undefined4 *)param_5;
      }
      uVar3 = FUN_1802c95d0(8,param_3,param_4,uVar8);
      return uVar3;
    case 9:
      uVar9 = DAT_180381458;
      if (param_5 != (short *)0x0) {
        uVar9 = *(undefined8 *)param_5;
      }
      uVar3 = FUN_1802c9c10(9,param_3,param_4,uVar9);
      return uVar3;
    }
  }
switchD_1802b1972_default:
  return uVar3 & 0xffffffffffffff00;
}



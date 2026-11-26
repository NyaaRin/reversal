// 0x1801aa170  FUN_1801aa170
// size=205 thunk=false
// signature: undefined FUN_1801aa170()
// status: ok


undefined1 FUN_1801aa170(ushort *param_1,undefined1 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 uVar3;
  ushort *puVar4;
  int iVar5;
  
  uVar1 = *(ulonglong *)(param_1 + 0xc);
  lVar2 = *(longlong *)(param_1 + 8);
  puVar4 = param_1;
  if (0xf < uVar1) {
    puVar4 = *(ushort **)param_1;
  }
  if ((lVar2 != 1) || ((char)*puVar4 != '1')) {
    puVar4 = param_1;
    if (0xf < uVar1) {
      puVar4 = *(ushort **)param_1;
    }
    if ((lVar2 != 4) || (*(int *)puVar4 != 0x65757274)) {
      puVar4 = param_1;
      if (0xf < uVar1) {
        puVar4 = *(ushort **)param_1;
      }
      if ((lVar2 != 2) || (*puVar4 != 0x6e6f)) {
        puVar4 = param_1;
        if (0xf < uVar1) {
          puVar4 = *(ushort **)param_1;
        }
        if ((lVar2 == 1) && ((char)*puVar4 == '0')) {
          return 0;
        }
        puVar4 = param_1;
        if (0xf < uVar1) {
          puVar4 = *(ushort **)param_1;
        }
        if (lVar2 == 5) {
          iVar5 = *(int *)puVar4 + -0x736c6166;
          if (iVar5 == 0) {
            iVar5 = (byte)puVar4[2] - 0x65;
          }
          if (iVar5 == 0) {
            return 0;
          }
        }
        if (0xf < uVar1) {
          param_1 = *(ushort **)param_1;
        }
        if (lVar2 != 3) {
          return param_2;
        }
        iVar5 = *param_1 - 0x666f;
        if (iVar5 == 0) {
          iVar5 = (byte)param_1[1] - 0x66;
        }
        uVar3 = 0;
        if (iVar5 != 0) {
          uVar3 = param_2;
        }
        return uVar3;
      }
    }
  }
  return 1;
}



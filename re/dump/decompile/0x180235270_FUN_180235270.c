// 0x180235270  FUN_180235270
// size=386 thunk=false
// signature: undefined FUN_180235270()
// status: ok


void FUN_180235270(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  if (param_2 != param_3) {
    do {
      if (param_2 == 0) {
        return;
      }
      lVar2 = param_4;
      switch(*(undefined4 *)(param_2 + 8)) {
      case 7:
        if (param_4 != 0) {
          if (((*(longlong *)(param_2 + 0x20) == 0) ||
              ((((*(longlong *)(param_2 + 0x28) == 0 && (*(longlong *)(param_2 + 0x30) == 0)) &&
                (*(longlong *)(param_2 + 0x38) == 0)) &&
               ((*(short *)(param_2 + 0x40) == 0 &&
                (*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x18) == 0)))))) &&
             (*(longlong *)(param_2 + 0x48) == 0)) {
            if ((*(uint *)(param_1 + 0x68) & 0x800) == 0) break;
            if (*(longlong *)(param_2 + 0x38) == 0) {
              bVar3 = (*(byte *)(param_2 + 0xc) & 1) == 0;
              goto LAB_1802353c2;
            }
          }
LAB_1802353c4:
          *(undefined4 *)(param_4 + 0x34) = 0;
        }
        break;
      case 8:
      case 0xd:
        bVar3 = param_4 == 0;
LAB_1802353c2:
        if (!bVar3) goto LAB_1802353c4;
        break;
      case 10:
      case 0xb:
        FUN_180235270(param_1,*(undefined8 *)(param_2 + 0x20),0,0);
        break;
      case 0x10:
        if (param_4 != 0) {
          *(undefined4 *)(param_4 + 0x34) = 0;
        }
        for (lVar1 = *(longlong *)(param_2 + 0x28); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x28))
        {
          FUN_180235270(param_1,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x20),param_4)
          ;
        }
        break;
      case 0x12:
        lVar2 = param_2;
        if (param_4 != 0) {
          *(undefined4 *)(param_4 + 0x34) = 0;
          if (*(uint *)(param_4 + 0x24) < 2) {
            FUN_180235270(param_1,*(undefined8 *)(param_2 + 0x10),
                          *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10),param_2);
            param_2 = *(longlong *)(param_2 + 0x28);
            lVar2 = param_4;
          }
          else {
            *(undefined4 *)(param_2 + 0x34) = 0;
            lVar2 = param_4;
          }
        }
        break;
      case 0x13:
        if ((param_4 == *(longlong *)(param_2 + 0x20)) &&
           (lVar2 = 0, *(int *)(param_4 + 0x34) == -1)) {
          *(undefined4 *)(param_4 + 0x34) = 1;
        }
      }
      param_2 = *(longlong *)(param_2 + 0x10);
      param_4 = lVar2;
    } while (param_2 != param_3);
  }
  return;
}



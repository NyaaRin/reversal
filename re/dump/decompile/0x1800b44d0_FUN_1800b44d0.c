// 0x1800b44d0  FUN_1800b44d0
// size=673 thunk=false
// signature: undefined FUN_1800b44d0()
// status: ok


void FUN_1800b44d0(void *param_1,int param_2,longlong param_3,int *param_4,int param_5)

{
  char cVar1;
  BOOL BVar2;
  ulonglong uVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  uint local_58;
  int local_54;
  int local_50;
  int local_4c;
  void *local_48;
  void *local_40;
  
  if ((((param_1 != (void *)0x0) && (param_5 < 7)) && (*param_4 < 0x180)) &&
     (BVar2 = IsBadReadPtr(param_1,0x30), BVar2 == 0)) {
    iVar5 = 0;
    local_40 = (void *)0x0;
    cVar1 = FUN_1800b4440((longlong)param_1 + 0x18,&local_40);
    if (((cVar1 != '\0') && (local_40 != (void *)0x0)) && (local_40 != param_1)) {
      FUN_1800b44d0(local_40,param_2,param_3,param_4,param_5 + 1);
    }
    local_40 = (void *)0x0;
    local_58 = 0;
    cVar1 = FUN_1800b4440(param_1,&local_40);
    pvVar4 = local_40;
    if (((cVar1 != '\0') && (local_40 != (void *)0x0)) &&
       ((cVar1 = FUN_1800b2030((longlong)param_1 + 8,&local_58), cVar1 != '\0' &&
        ((uVar3 = (ulonglong)(int)local_58, local_58 - 1 < 0x1000 &&
         (BVar2 = IsBadReadPtr(pvVar4,uVar3 * 0x60), BVar2 == 0)))))) {
      while( true ) {
        local_48 = (void *)CONCAT44(local_48._4_4_,iVar5);
        if (((int)uVar3 <= iVar5) || (0x17f < *param_4)) break;
        pvVar4 = (void *)((longlong)iVar5 * 0x60 + (longlong)local_40);
        local_50 = 0;
        local_54 = 0;
        local_4c = 0;
        cVar1 = FUN_1800b2030(pvVar4,&local_50);
        if (cVar1 == '\0') {
          return;
        }
        cVar1 = FUN_1800b2030((longlong)pvVar4 + 0x10,&local_54);
        if (cVar1 == '\0') {
          return;
        }
        cVar1 = FUN_1800b2030((longlong)pvVar4 + 0x38,&local_4c);
        if (cVar1 == '\0') {
          return;
        }
        uVar6 = param_2 + local_54;
        if (uVar6 < 0x20001) {
          if (local_50 != 10) {
            if ((local_50 != 0) && (local_4c - 1U < 0x40)) {
              *(uint *)(param_3 + (longlong)*param_4 * 0x18) = uVar6;
              *(int *)(param_3 + 4 + (longlong)*param_4 * 0x18) = local_4c;
              *(int *)(param_3 + 8 + (longlong)*param_4 * 0x18) = local_50;
              *(undefined4 *)(param_3 + 0xc + (longlong)*param_4 * 0x18) = 0;
              *(undefined8 *)(param_3 + 0x10 + (longlong)*param_4 * 0x18) = 0;
              *(undefined4 *)(param_3 + 0xc + (longlong)*param_4 * 0x18) =
                   *(undefined4 *)((longlong)pvVar4 + 0x4c);
              *(undefined8 *)(param_3 + 0x10 + (longlong)*param_4 * 0x18) =
                   *(undefined8 *)((longlong)pvVar4 + 8);
              *param_4 = *param_4 + 1;
            }
            goto LAB_1800b476d;
          }
          local_48 = (void *)0x0;
          cVar1 = FUN_1800b4440((longlong)pvVar4 + 0x30,&local_48);
          if (((cVar1 == '\0') || (local_48 == (void *)0x0)) || (local_48 == param_1))
          goto LAB_1800b476d;
          FUN_1800b44d0(local_48,uVar6,param_3,param_4,param_5 + 1);
          iVar5 = iVar5 + 1;
          uVar3 = (ulonglong)local_58;
        }
        else {
LAB_1800b476d:
          iVar5 = iVar5 + 1;
          uVar3 = (ulonglong)local_58;
        }
      }
    }
  }
  return;
}



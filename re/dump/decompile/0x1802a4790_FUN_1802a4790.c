// 0x1802a4790  FUN_1802a4790
// size=446 thunk=false
// signature: undefined FUN_1802a4790()
// status: ok


void FUN_1802a4790(char *param_1,uint param_2,float param_3)

{
  longlong lVar1;
  uint uVar2;
  size_t sVar3;
  longlong lVar4;
  short sVar5;
  uint uVar6;
  float fVar7;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xec0) + 0x2368);
  if (lVar1 == 0) {
    FUN_18027e9c0("Call should only be done while in BeginTable() scope!");
  }
  else {
    sVar5 = *(short *)(lVar1 + 0x206);
    if ((int)sVar5 < *(int *)(lVar1 + 0x6c)) {
      if (*(char *)(lVar1 + 0x239) == '\0') {
        *(short *)(lVar1 + 0x206) = sVar5 + 1;
        if (((*(char *)(lVar1 + 0x246) == '\0') || ((param_2 & 0x1000018) != 0)) || (param_3 <= 0.0)
           ) {
          lVar4 = (longlong)sVar5 * 0x74 + *(longlong *)(lVar1 + 0x18);
          if ((((param_2 & 0x18) == 0) && (0.0 < param_3)) &&
             (((*(uint *)(lVar1 + 4) & 0xe000) - 0x2000 & 0xffffdfff) == 0)) {
            param_2 = param_2 | 0x10;
          }
          if ((param_2 >> 0x12 & 1) != 0) {
            param_2 = param_2 | 0x1000;
            *(short *)(lVar1 + 0x208) = *(short *)(lVar1 + 0x208) + 1;
          }
          fVar7 = (float)FUN_1802a22b0(lVar1,lVar4,param_2);
          *(float *)(lVar4 + 0x20) = param_3;
          *(undefined4 *)(lVar4 + 0x34) = 0;
          if (*(char *)(lVar1 + 0x23b) != '\0') {
            uVar2 = ~*(uint *)(lVar1 + 0x60);
            uVar6 = uVar2;
            if ((*(float *)(lVar4 + 0x10) <= fVar7 && fVar7 != *(float *)(lVar4 + 0x10)) &&
               (uVar6 = uVar2 | 1,
               fVar7 < *(float *)(lVar4 + 0x1c) || fVar7 == *(float *)(lVar4 + 0x1c))) {
              uVar6 = uVar2;
            }
            FUN_1802a46b0(lVar1,lVar4,uVar6);
          }
          *(undefined2 *)(lVar4 + 0x54) = 0xffff;
          if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
            sVar5 = (short)*(int *)(lVar1 + 400) + -1;
            if (*(int *)(lVar1 + 400) == 0) {
              sVar5 = 0;
            }
            *(short *)(lVar4 + 0x54) = sVar5;
            sVar3 = strlen(param_1);
            FUN_1802694a0(lVar1 + 400,param_1,param_1 + sVar3 + 1);
          }
        }
        else {
          FUN_18027e9c0(
                       "TableSetupColumn(): can only specify width/weight if sizing policy is set explicitly in either Table or Column."
                       );
        }
      }
      else {
        FUN_18027e9c0("TableSetupColumn(): need to call before first row!");
      }
    }
    else {
      FUN_18027e9c0("TableSetupColumn(): called too many times!");
    }
  }
  return;
}



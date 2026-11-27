// 0x1801a5660  FUN_1801a5660
// size=561 thunk=false
// signature: undefined FUN_1801a5660()
// status: ok


undefined8 FUN_1801a5660(char *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  
  if (*param_1 != '\0') {
    return 1;
  }
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar4 + 0xec0);
  if ((*(char *)(lVar5 + 0x108) != '\0') && (*(char *)(lVar5 + 0xb30) != '\0')) {
    if (*(char *)(lVar4 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar6 = *(longlong *)(lVar4 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar6 + 0x1520) + 0xce) = 1;
    lVar6 = *(longlong *)(lVar6 + 0x1520);
    if ((lVar6 != 0) && (cVar7 = FUN_180279410(0xb), cVar7 != '\0')) {
      fVar1 = *(float *)(lVar5 + 0xae0);
      if (*(float *)(lVar6 + 0x28) <= fVar1) {
        fVar2 = *(float *)(lVar5 + 0xae4);
        if (((((*(float *)(lVar6 + 0x2c) <= fVar2) &&
              (fVar1 < *(float *)(lVar6 + 0x28) + *(float *)(lVar6 + 0x30))) &&
             (fVar2 < *(float *)(lVar6 + 0x2c) + *(float *)(lVar6 + 0x34))) &&
            (((param_3 == (float *)0x0 || (fVar1 < *param_3)) ||
             ((fVar2 < param_3[1] || ((param_3[2] <= fVar1 || (param_3[3] <= fVar2)))))))) &&
           ((param_4 == (float *)0x0 ||
            ((((fVar1 < *param_4 || (fVar2 < param_4[1])) || (param_4[2] <= fVar1)) ||
             (param_4[3] <= fVar2)))))) {
          if (*(char *)(lVar4 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          if ((*(int *)(*(longlong *)(lVar4 + 0xec0) + 0x157c) == 0) &&
             (*(int *)(*(longlong *)(lVar4 + 0xec0) + 0x1580) == 0)) {
            if (*(char *)(lVar4 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            if (*(int *)(*(longlong *)(lVar4 + 0xec0) + 0x1594) == 0) {
              cVar7 = *(char *)(lVar4 + 0x10);
              *param_1 = '\x01';
              if (cVar7 == '\0') {
                __dyn_tls_on_demand_init();
              }
              cVar7 = *(char *)(lVar4 + 0x10);
              lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x1520);
              fVar3 = *(float *)(lVar5 + 0x28);
              param_2[1] = fVar2 - *(float *)(lVar5 + 0x2c);
              *param_2 = fVar1 - fVar3;
              if (cVar7 == '\0') {
                __dyn_tls_on_demand_init();
              }
              FUN_1802827b0(*(undefined8 *)(*(longlong *)(lVar4 + 0xec0) + 0x1520),0);
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}



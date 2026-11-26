// 0x18027f160  FUN_18027f160
// size=660 thunk=false
// signature: undefined FUN_18027f160()
// status: ok


undefined8 FUN_18027f160(float *param_1,int param_2,float *param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  bool bVar10;
  char cVar11;
  float *pfVar12;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xec0);
  pfVar12 = param_1;
  if (param_3 != (float *)0x0) {
    pfVar12 = param_3;
  }
  lVar3 = *(longlong *)(lVar2 + 0x1520);
  *(int *)(lVar2 + 0x1ef8) = param_2;
  uVar9 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(lVar2 + 0x1f04) = *(undefined8 *)param_1;
  *(undefined8 *)(lVar2 + 0x1f0c) = uVar9;
  fVar5 = *pfVar12;
  fVar6 = pfVar12[1];
  fVar7 = pfVar12[2];
  fVar8 = pfVar12[3];
  *(undefined4 *)(lVar2 + 0x1f00) = 0;
  *(uint *)(lVar2 + 0x1efc) = *(uint *)(lVar2 + 0x1eb8) | *(uint *)(lVar2 + 0x1ec4) | param_4;
  *(float *)(lVar2 + 0x1f14) = fVar5;
  *(float *)(lVar2 + 0x1f18) = fVar6;
  *(float *)(lVar2 + 0x1f1c) = fVar7;
  *(float *)(lVar2 + 0x1f20) = fVar8;
  if (param_2 != 0) {
    FUN_18027f100(param_2);
    if ((*(byte *)(lVar2 + 0x1efc) & 2) == 0) {
      *(ushort *)(lVar3 + 0x176) =
           *(ushort *)(lVar3 + 0x176) | (ushort)(1 << (*(uint *)(lVar3 + 0x170) & 0x1f));
      if ((*(int *)(lVar2 + 0x206c) == param_2) || (*(char *)(lVar2 + 0x20d1) != '\0')) {
        lVar4 = *(longlong *)(lVar2 + 0x2070);
        if ((*(longlong *)(lVar4 + 0x3d8) == *(longlong *)(lVar3 + 0x3d8)) &&
           ((lVar3 == lVar4 || (((*(uint *)(lVar4 + 0x18) | *(uint *)(lVar3 + 0x18)) >> 8 & 1) != 0)
            ))) {
          FUN_180283530();
        }
      }
    }
    if ((*(byte *)(lVar2 + 0x1ec0) & 4) != 0) {
      if (*(char *)(lVar1 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar4 = *(longlong *)(lVar1 + 0xec0);
      if ((*(byte *)(lVar4 + 0x1efc) & 0x40) == 0) {
        if ((*(uint *)(lVar4 + 0x1ee0) >> 0x12 & 1) != 0) {
          *(uint *)(lVar4 + 0x1f00) = *(uint *)(lVar4 + 0x1f00) | 0x400;
          *(undefined4 *)(lVar4 + 0x1f44) = *(undefined4 *)(lVar4 + 0x1edc);
        }
        cVar11 = FUN_18027e2e0(*(undefined4 *)(lVar4 + 0x1edc),*(uint *)(lVar4 + 0x1ee0) & 0x3fcff,
                               param_2);
        if ((cVar11 != '\0') && (*(int *)(lVar4 + 0x2084) == 0)) {
          cVar11 = *(char *)(lVar1 + 0x10);
          *(int *)(lVar4 + 0x2084) = param_2;
          *(undefined4 *)(lVar4 + 0x2090) = 0x11;
          *(int *)(lVar4 + 0x208c) = param_2;
          *(int *)(lVar4 + 0x2088) = param_2;
          if (cVar11 == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar1 = *(longlong *)(lVar1 + 0xec0);
          *(int *)(lVar1 + 0x20a8) = param_2;
          *(undefined4 *)(lVar1 + 0x20ac) = 0x3dcccccd;
        }
      }
    }
  }
  *(undefined8 *)(lVar2 + 0x1ec0) = 0;
  if ((((param_1[3] < *(float *)(lVar3 + 0x26c) || param_1[3] == *(float *)(lVar3 + 0x26c)) ||
       (*(float *)(lVar3 + 0x274) < param_1[1] || *(float *)(lVar3 + 0x274) == param_1[1])) ||
      (param_1[2] < *(float *)(lVar3 + 0x268) || param_1[2] == *(float *)(lVar3 + 0x268))) ||
     (*(float *)(lVar3 + 0x270) < *param_1 || *(float *)(lVar3 + 0x270) == *param_1)) {
    bVar10 = false;
    if ((param_2 == 0) ||
       (((param_2 != *(int *)(lVar2 + 0x1594) && (param_2 != *(int *)(lVar2 + 0x15c0))) &&
        ((param_2 != *(int *)(lVar2 + 0x206c) && (param_2 != *(int *)(lVar2 + 0x2084))))))) {
      if (*(char *)(lVar2 + 0x1592) == '\0') {
        return 0;
      }
      goto LAB_18027f35a;
    }
  }
  else {
    bVar10 = true;
LAB_18027f35a:
    if (param_2 == 0) goto LAB_18027f37c;
  }
  if (param_2 == *(int *)(lVar2 + 0x1ebc)) {
    FUN_180289430();
  }
  if (*(int *)(lVar2 + 0x15c4) == param_2) {
    *(undefined4 *)(lVar2 + 0x15c8) = *(undefined4 *)(lVar2 + 4);
  }
LAB_18027f37c:
  if (bVar10) {
    *(uint *)(lVar2 + 0x1f00) = *(uint *)(lVar2 + 0x1f00) | 0x100;
  }
  cVar11 = FUN_18027bdd0(param_1,param_1 + 2,1);
  if (cVar11 != '\0') {
    *(uint *)(lVar2 + 0x1f00) = *(uint *)(lVar2 + 0x1f00) | 1;
  }
  return 1;
}



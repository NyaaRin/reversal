// 0x18026b160  FUN_18026b160
// size=783 thunk=false
// signature: undefined FUN_18026b160()
// status: ok


void FUN_18026b160(undefined8 param_1,char *param_2,char *param_3,char param_4)

{
  char *pcVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  size_t sVar9;
  char *pcVar10;
  longlong lVar11;
  int iVar12;
  char *pcVar13;
  float fVar14;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar15;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_48 = param_1;
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (param_4 == '\0') {
    if (param_3 == (char *)0x0) {
      sVar9 = strlen(param_2);
      param_3 = param_2 + sVar9;
    }
  }
  else {
    pcVar13 = (char *)0xffffffffffffffff;
    if (param_3 != (char *)0x0) {
      pcVar13 = param_3;
    }
    param_3 = param_2;
    if (param_2 < pcVar13) {
      while (*param_3 != '\0') {
        pcVar1 = param_3 + 1;
        if (((*param_3 == '#') && (*pcVar1 == '#')) || (param_3 = pcVar1, pcVar13 <= pcVar1)) break;
      }
    }
  }
  if (param_2 != param_3) {
    lVar5 = *(longlong *)(lVar4 + 0xec0);
    lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x1520) + 0x2c8);
    uVar7 = FUN_18026a6a0(0);
    if (((uVar7 & 0xff000000) != 0) && (*param_2 != '\0')) {
      lVar11 = *(longlong *)(lVar5 + 0x1228);
      fVar14 = *(float *)(lVar5 + 0x1238);
      if (lVar11 == 0) {
        lVar11 = *(longlong *)(*(longlong *)(lVar6 + 0x38) + 0x18);
      }
      if (fVar14 == 0.0) {
        fVar14 = *(float *)(*(longlong *)(lVar6 + 0x38) + 0x20);
      }
      local_58 = *(undefined4 *)(lVar6 + 0x60);
      uStack_54 = *(undefined4 *)(lVar6 + 100);
      uStack_50 = *(undefined4 *)(lVar6 + 0x68);
      uStack_4c = *(undefined4 *)(lVar6 + 0x6c);
      FUN_18029e990(lVar11,lVar6,fVar14,&local_48,CONCAT44(uVar15,uVar7),&local_58,param_2,param_3,0
                    ,0);
    }
    if (*(char *)(lVar5 + 0x2858) != '\0') {
      if (*(char *)(lVar4 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar4 = *(longlong *)(lVar4 + 0xec0);
      pcVar13 = *(char **)(lVar4 + 0x2880);
      pcVar1 = *(char **)(lVar4 + 0x2888);
      lVar5 = *(longlong *)(lVar4 + 0x1520);
      *(undefined8 *)(lVar4 + 0x2888) = 0;
      *(undefined8 *)(lVar4 + 0x2880) = 0;
      if ((param_3 == (char *)0x0) && (param_3 = param_2, param_2 != (char *)0xffffffffffffffff)) {
        while (*param_3 != '\0') {
          pcVar10 = param_3 + 1;
          if (((*param_3 == '#') && (*pcVar10 == '#')) ||
             (param_3 = pcVar10, pcVar10 == (char *)0xffffffffffffffff)) break;
        }
      }
      fVar14 = *(float *)(lVar4 + 0xcc8);
      if (*(float *)(lVar4 + 0xcc8) <= *(float *)(lVar4 + 0xcd8)) {
        fVar14 = *(float *)(lVar4 + 0xcd8);
      }
      fVar2 = *(float *)(lVar4 + 0x2890);
      *(float *)(lVar4 + 0x2890) = local_48._4_4_;
      if (fVar14 + fVar2 + DAT_180380bb0 < local_48._4_4_) {
        FUN_180287bb0(&DAT_18033f5ac);
        *(undefined1 *)(lVar4 + 0x2859) = 1;
      }
      if (pcVar13 != (char *)0x0) {
        sVar9 = strlen(pcVar13);
        FUN_180287c20(&local_48,pcVar13,pcVar13 + sVar9);
      }
      iVar3 = *(int *)(lVar5 + 0x1a0);
      iVar8 = *(int *)(lVar4 + 0x2894);
      if (iVar3 < iVar8) {
        *(int *)(lVar4 + 0x2894) = iVar3;
        iVar8 = iVar3;
      }
      iVar3 = *(int *)(lVar5 + 0x1a0);
      while( true ) {
        pcVar10 = memchr(param_2,10,(longlong)param_3 - (longlong)param_2);
        pcVar13 = param_3;
        if (pcVar10 != (char *)0x0) {
          pcVar13 = pcVar10;
        }
        if ((param_2 == pcVar13) && (pcVar13 == param_3)) break;
        iVar12 = (iVar3 - iVar8) * 4;
        if (*(char *)(lVar4 + 0x2859) == '\0') {
          iVar12 = 1;
        }
        FUN_180287bb0("%*s%.*s",iVar12,&DAT_18033e5ea,(int)pcVar13 - (int)param_2,param_2);
        *(undefined1 *)(lVar4 + 0x2859) = 0;
        if (*pcVar13 == '\n') {
          FUN_180287bb0(&DAT_18033f5ac);
          *(undefined1 *)(lVar4 + 0x2859) = 1;
        }
        if (pcVar13 == param_3) break;
        param_2 = pcVar13 + 1;
      }
      if (pcVar1 != (char *)0x0) {
        sVar9 = strlen(pcVar1);
        FUN_180287c20(&local_48,pcVar1,pcVar1 + sVar9);
      }
    }
  }
  return;
}



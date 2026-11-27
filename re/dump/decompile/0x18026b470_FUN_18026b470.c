// 0x18026b470  FUN_18026b470
// size=752 thunk=false
// signature: undefined FUN_18026b470()
// status: ok


void FUN_18026b470(undefined8 param_1,char *param_2,char *param_3,undefined4 param_4)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char *_Str;
  uint uVar6;
  int iVar7;
  size_t sVar8;
  char *pcVar9;
  longlong lVar10;
  int iVar11;
  char *pcVar12;
  float fVar13;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar14;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_58 = param_1;
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (param_3 == (char *)0x0) {
    sVar8 = strlen(param_2);
    param_3 = param_2 + sVar8;
  }
  if (param_2 != param_3) {
    lVar4 = *(longlong *)(lVar3 + 0xec0);
    lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x1520) + 0x2c8);
    uVar6 = FUN_18026a6a0(0,DAT_180380bb0);
    if (((uVar6 & 0xff000000) != 0) && (*param_2 != '\0')) {
      lVar10 = *(longlong *)(lVar4 + 0x1228);
      fVar13 = *(float *)(lVar4 + 0x1238);
      if (lVar10 == 0) {
        lVar10 = *(longlong *)(*(longlong *)(lVar5 + 0x38) + 0x18);
      }
      if (fVar13 == 0.0) {
        fVar13 = *(float *)(*(longlong *)(lVar5 + 0x38) + 0x20);
      }
      local_68 = *(undefined4 *)(lVar5 + 0x60);
      uStack_64 = *(undefined4 *)(lVar5 + 100);
      uStack_60 = *(undefined4 *)(lVar5 + 0x68);
      uStack_5c = *(undefined4 *)(lVar5 + 0x6c);
      FUN_18029e990(lVar10,lVar5,fVar13,&local_58,CONCAT44(uVar14,uVar6),&local_68,param_2,param_3,
                    param_4,0);
    }
    if (*(char *)(lVar4 + 0x2858) != '\0') {
      if (*(char *)(lVar3 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar3 = *(longlong *)(lVar3 + 0xec0);
      pcVar12 = *(char **)(lVar3 + 0x2880);
      _Str = *(char **)(lVar3 + 0x2888);
      lVar4 = *(longlong *)(lVar3 + 0x1520);
      *(undefined8 *)(lVar3 + 0x2888) = 0;
      *(undefined8 *)(lVar3 + 0x2880) = 0;
      if ((param_3 == (char *)0x0) && (param_3 = param_2, param_2 != (char *)0xffffffffffffffff)) {
        while (*param_3 != '\0') {
          pcVar9 = param_3 + 1;
          if (((*param_3 == '#') && (*pcVar9 == '#')) ||
             (param_3 = pcVar9, pcVar9 == (char *)0xffffffffffffffff)) break;
        }
      }
      fVar13 = *(float *)(lVar3 + 0xcc8);
      if (*(float *)(lVar3 + 0xcc8) <= *(float *)(lVar3 + 0xcd8)) {
        fVar13 = *(float *)(lVar3 + 0xcd8);
      }
      fVar1 = *(float *)(lVar3 + 0x2890);
      *(float *)(lVar3 + 0x2890) = local_58._4_4_;
      if (fVar13 + fVar1 + DAT_180380bb0 < local_58._4_4_) {
        FUN_180287bb0(&DAT_18033f5ac);
        *(undefined1 *)(lVar3 + 0x2859) = 1;
      }
      if (pcVar12 != (char *)0x0) {
        sVar8 = strlen(pcVar12);
        FUN_180287c20(&local_58,pcVar12,pcVar12 + sVar8);
      }
      iVar2 = *(int *)(lVar4 + 0x1a0);
      iVar7 = *(int *)(lVar3 + 0x2894);
      if (iVar2 < iVar7) {
        *(int *)(lVar3 + 0x2894) = iVar2;
        iVar7 = iVar2;
      }
      iVar2 = *(int *)(lVar4 + 0x1a0);
      while( true ) {
        pcVar9 = memchr(param_2,10,(longlong)param_3 - (longlong)param_2);
        pcVar12 = param_3;
        if (pcVar9 != (char *)0x0) {
          pcVar12 = pcVar9;
        }
        if ((param_2 == pcVar12) && (pcVar12 == param_3)) break;
        iVar11 = (iVar2 - iVar7) * 4;
        if (*(char *)(lVar3 + 0x2859) == '\0') {
          iVar11 = 1;
        }
        FUN_180287bb0("%*s%.*s",iVar11,&DAT_18033e5ea,(int)pcVar12 - (int)param_2,param_2);
        *(undefined1 *)(lVar3 + 0x2859) = 0;
        if (*pcVar12 == '\n') {
          FUN_180287bb0(&DAT_18033f5ac);
          *(undefined1 *)(lVar3 + 0x2859) = 1;
        }
        if (pcVar12 == param_3) break;
        param_2 = pcVar12 + 1;
      }
      if (_Str != (char *)0x0) {
        sVar8 = strlen(_Str);
        FUN_180287c20(&local_58,_Str,_Str + sVar8);
      }
    }
  }
  return;
}



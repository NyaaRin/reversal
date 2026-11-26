// 0x18026bd00  FUN_18026bd00
// size=788 thunk=false
// signature: undefined FUN_18026bd00()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18026bd00(longlong param_1,float *param_2,float *param_3,float param_4,char *param_5,
                  char *param_6,undefined8 *param_7)

{
  char *pcVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined2 uVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  int *piVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_f8 [32];
  char *local_d8;
  char *local_d0;
  char *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  float local_a8;
  float local_a4;
  longlong local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_a0 = *(longlong *)(lVar5 + 0xec0);
  if ((param_6 == (char *)0x0) && (param_6 = param_5, param_5 != (char *)0xffffffffffffffff)) {
    while (*param_6 != '\0') {
      pcVar1 = param_6 + 1;
      if (((*param_6 == '#') && (*pcVar1 == '#')) ||
         (param_6 = pcVar1, pcVar1 == (char *)0xffffffffffffffff)) break;
    }
  }
  if (param_7 == (undefined8 *)0x0) {
    local_d8 = (char *)((ulonglong)local_d8 & 0xffffffff00000000);
    puVar10 = (undefined8 *)FUN_180272ad0(&local_b0,param_5,param_6,0);
  }
  else {
    puVar10 = &local_b0;
    local_b0 = *param_7;
  }
  local_b0 = *puVar10;
  if ((float)local_b0 <= *param_3 - *param_2) {
    local_c0 = (undefined8 *)0x0;
    local_c8 = (char *)&local_98;
    local_d0 = (char *)&local_b0;
    local_98 = 0;
    local_d8 = param_6;
    FUN_18026b760(param_1,param_2,param_3,param_5);
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x38);
    lVar6 = *(longlong *)(lVar5 + 0x18);
    uVar2 = *(undefined4 *)(lVar5 + 0x20);
    fVar14 = *(float *)(lVar5 + 0x24);
    local_98 = 0;
    piVar11 = (int *)FUN_18029db30(lVar6,uVar2,DAT_180381384);
    uVar3 = *(ushort *)(lVar6 + 0x30);
    if ((*piVar11 <= (int)(uint)uVar3) ||
       (fVar13 = *(float *)(*(longlong *)(piVar11 + 2) + (ulonglong)uVar3 * 4), fVar13 < 0.0)) {
      fVar13 = (float)FUN_18029cb50(piVar11,(ulonglong)uVar3);
    }
    fVar8 = DAT_180380bb0;
    local_c0 = &local_98;
    fVar7 = *param_3;
    if (*param_3 <= param_4) {
      fVar7 = param_4;
    }
    local_d0 = param_5;
    local_d8 = (char *)((ulonglong)local_d8 & 0xffffffff00000000);
    fVar14 = (fVar7 - fVar14 * fVar13) - *param_2;
    if (fVar14 <= DAT_180380bb0) {
      fVar14 = DAT_180380bb0;
    }
    local_c8 = param_6;
    pfVar12 = (float *)FUN_18029e620(lVar6,&local_b8,uVar2,fVar14);
    local_c0 = (undefined8 *)0x0;
    fVar14 = *pfVar12;
    local_c8 = (char *)&local_b8;
    local_d0 = (char *)&local_b0;
    local_d8 = (char *)local_98;
    local_b8 = 0;
    FUN_18026b760(param_1,param_2,param_3,param_5);
    local_a8 = *param_3;
    local_b0 = *(undefined8 *)param_2;
    local_a4 = param_3[1];
    uVar4 = *(undefined2 *)(lVar6 + 0x30);
    local_b8 = CONCAT44((float)(int)param_2[1],(float)(int)(*param_2 + fVar14));
    uVar9 = FUN_18026a6a0(0,fVar8);
    local_c8 = (char *)&local_b0;
    local_d0 = (char *)CONCAT62(local_d0._2_6_,uVar4);
    local_d8 = (char *)CONCAT44(local_d8._4_4_,uVar9);
    FUN_18029e680(lVar6,param_1,uVar2,&local_b8);
  }
  if (*(char *)(local_a0 + 0x2858) != '\0') {
    FUN_180287c20(param_2,param_5,param_6);
  }
  return;
}



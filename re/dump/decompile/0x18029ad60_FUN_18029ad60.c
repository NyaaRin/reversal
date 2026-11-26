// 0x18029ad60  FUN_18029ad60
// size=438 thunk=false
// signature: undefined FUN_18029ad60()
// status: ok


void FUN_18029ad60(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  char *pcVar7;
  
  lVar3 = *(longlong *)(param_1 + 0x2b0);
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar6 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(lVar6 + 0xec0);
  if ((lVar6 != 0) && ((*(uint *)(lVar6 + 0x28e4) & 0x100) != 0)) {
    if (*(int *)(param_2 + 4) == 0) {
      pcVar7 = "<unknown>";
    }
    else {
      pcVar7 = *(char **)param_2[5];
    }
    FUN_180289170("[font] Discard baked %.2f for \"%s\"\n",
                  (double)*(float *)((longlong)param_3 + 0x14),pcVar7);
  }
  lVar6 = param_3[7];
  lVar4 = (longlong)*(int *)(param_3 + 6) * 0x2c + lVar6;
  for (; lVar6 != lVar4; lVar6 = lVar6 + 0x2c) {
    if (*(int *)(lVar6 + 0x28) != -1) {
      FUN_18029c250(param_1);
    }
  }
  plVar5 = (longlong *)param_2[5];
  lVar6 = param_3[0xc];
  plVar2 = plVar5 + *(int *)(param_2 + 4);
  for (; plVar5 != plVar2; plVar5 = plVar5 + 1) {
    lVar4 = *(longlong *)(*plVar5 + 0x88);
    if (lVar4 == 0) {
      lVar4 = *(longlong *)(param_1 + 0x2b8);
    }
    if (*(code **)(lVar4 + 0x38) != (code *)0x0) {
      (**(code **)(lVar4 + 0x38))(param_1,*plVar5,param_3,lVar6);
    }
    lVar6 = lVar6 + *(longlong *)(lVar4 + 0x48);
  }
  if (param_3[0xc] != 0) {
    FUN_18026f680();
    param_3[0xc] = 0;
  }
  FUN_1802693f0(lVar3 + 0xd8,*(undefined4 *)((longlong)param_3 + 0x54),0);
  piVar1 = (int *)(lVar3 + 0xe8);
  *piVar1 = *piVar1 + 1;
  *(undefined4 *)(param_3 + 2) = 0;
  if (param_3[7] != 0) {
    param_3[6] = 0;
    FUN_18026f680();
    param_3[7] = 0;
  }
  if (param_3[1] != 0) {
    *param_3 = 0;
    FUN_18026f680();
    param_3[1] = 0;
  }
  if (param_3[5] != 0) {
    param_3[4] = 0;
    FUN_18026f680();
    param_3[5] = 0;
  }
  *(uint *)((longlong)param_3 + 0x4c) = *(uint *)((longlong)param_3 + 0x4c) & 0xfc000000;
  *(uint *)((longlong)param_3 + 0x4c) = *(uint *)((longlong)param_3 + 0x4c) | 0x4000000;
  *(undefined4 *)(param_3 + 8) = 0xffffffff;
  *(undefined8 *)((longlong)param_3 + 0x44) = 0;
  *param_2 = 0;
  return;
}



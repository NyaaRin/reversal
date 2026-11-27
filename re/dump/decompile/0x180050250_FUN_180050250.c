// 0x180050250  FUN_180050250
// size=634 thunk=false
// signature: undefined FUN_180050250()
// status: ok


undefined8 FUN_180050250(undefined8 param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  char *pcVar7;
  int *piVar8;
  longlong lVar9;
  char *pcVar10;
  uint uVar11;
  float fVar12;
  double dVar13;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  plVar6 = (longlong *)FUN_180039770();
  if ((plVar6 != (longlong *)0x0) && (plVar6[1] == param_2)) {
    if (DAT_1803ff8ec == '\0') {
      (**(code **)(*plVar6 + 0xf8))(plVar6,0);
      return 1;
    }
    cVar4 = (**(code **)(*plVar6 + 0x138))(plVar6,2,3);
    if (cVar4 == '\0') {
      uVar11 = 0;
    }
    else {
      dVar13 = (double)(**(code **)(*plVar6 + 0xc0))(plVar6,2);
      uVar11 = (uint)dVar13;
    }
    cVar4 = (**(code **)(*plVar6 + 0x138))(plVar6,1,4);
    if (cVar4 == '\0') {
      pcVar10 = "##tabs";
    }
    else {
      pcVar7 = (char *)(**(code **)(*plVar6 + 0xb8))(plVar6,1,0);
      pcVar10 = "##tabs";
      if (pcVar7 != (char *)0x0) {
        pcVar10 = pcVar7;
      }
    }
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0xec0);
    plVar3 = *(longlong **)(lVar2 + 0x1520);
    if (*(char *)((longlong)plVar3 + 0xd1) == '\0') {
      iVar5 = FUN_180268980(pcVar10,0,
                            *(undefined4 *)(plVar3[0x22] + -4 + (longlong)(int)plVar3[0x21] * 4));
      if (*(int *)(*plVar3 + 0x1578) == iVar5) {
        FUN_1802899e0(iVar5,0xb,pcVar10);
      }
      piVar8 = (int *)FUN_180269290(lVar2 + 0x23e8,iVar5);
      if (*piVar8 == -1) {
        *piVar8 = *(int *)(lVar2 + 0x23f8);
        lVar9 = FUN_1802cf300(lVar2 + 0x23d8);
      }
      else {
        lVar9 = (longlong)*piVar8 * 0xb0 + *(longlong *)(lVar2 + 0x23e0);
      }
      local_24 = *(float *)((longlong)plVar3 + 0x11c);
      fVar12 = *(float *)(lVar2 + 0xcc8);
      local_28 = *(float *)(plVar3 + 0x23);
      local_20 = *(float *)(plVar3 + 0x4a);
      fVar1 = *(float *)(lVar2 + 0x1238);
      *(int *)(lVar9 + 0x1c) = iVar5;
      local_1c = local_24 + fVar1 + fVar12 + fVar12;
      *(float *)(lVar9 + 0x74) = local_28 - (float)(int)(*(float *)(plVar3 + 0xb) * DAT_180380ac0);
      fVar12 = (float)(int)(*(float *)(plVar3 + 0xb) * DAT_180380ac0) + local_20;
      *(float *)(lVar9 + 0x78) = fVar12;
      cVar4 = FUN_1802c49e0(fVar12,&local_28,uVar11 | 0x200000);
      if (cVar4 != '\0') {
        FUN_180049be0(4);
      }
    }
    else {
      cVar4 = '\0';
    }
    (**(code **)(*plVar6 + 0xf8))(plVar6,cVar4);
    return 1;
  }
  return 0;
}



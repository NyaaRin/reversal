// 0x180049490  FUN_180049490
// size=916 thunk=false
// signature: undefined FUN_180049490()
// status: ok


undefined8 FUN_180049490(undefined8 param_1,longlong param_2)

{
  double dVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  char *pcVar7;
  undefined8 uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_res8;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  local_res8 = param_1;
  plVar5 = (longlong *)FUN_180039770();
  if ((((plVar5 == (longlong *)0x0) || (plVar5[1] != param_2)) ||
      (lVar6 = FUN_18003a890(), lVar6 == 0)) ||
     (cVar2 = (**(code **)(*plVar5 + 0x138))(plVar5,1,4), cVar2 == '\0')) {
    return 0;
  }
  pcVar7 = (char *)(**(code **)(*plVar5 + 0xb8))(plVar5,1,0);
  if (pcVar7 == (char *)0x0) {
    return 0;
  }
  cVar2 = (**(code **)(*plVar5 + 0x138))(plVar5,2,4);
  if (cVar2 == '\0') {
    fVar10 = 0.0;
  }
  else {
    uVar8 = (**(code **)(*plVar5 + 0xb8))(plVar5,2,0);
    fVar10 = (float)FUN_1800474f0(uVar8);
  }
  cVar2 = (**(code **)(*plVar5 + 0x138))(plVar5,3,3);
  if (cVar2 == '\0') {
    fVar13 = 0.0;
  }
  else {
    dVar1 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,3);
    fVar13 = (float)dVar1;
  }
  cVar2 = (**(code **)(*plVar5 + 0x138))(plVar5,4,3);
  if (cVar2 == '\0') {
    fVar12 = 0.0;
  }
  else {
    dVar1 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,4);
    fVar12 = (float)dVar1;
  }
  uVar3 = FUN_1800477e0(plVar5,5);
  cVar2 = (**(code **)(*plVar5 + 0x138))(plVar5,6,3);
  if (cVar2 == '\0') {
    FUN_1800476f0(&local_res8,pcVar7,fVar10);
    iVar4 = 0;
  }
  else {
    dVar1 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,6);
    FUN_1800476f0(&local_res8,pcVar7,fVar10);
    iVar4 = (int)dVar1;
    if (iVar4 == 1) {
      fVar11 = (float)((uint)local_res8 ^ DAT_1803817f0) * DAT_180380ac0;
      goto LAB_1800496c0;
    }
  }
  if (iVar4 == 2) {
    fVar11 = (float)((uint)local_res8 ^ DAT_1803817f0);
  }
  else {
    fVar11 = 0.0;
  }
LAB_1800496c0:
  local_res8 = CONCAT44(fVar12 + 0.0,fVar11 + fVar13);
  if (fVar10 <= 0.0) {
    lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar9 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar10 = *(float *)(*(longlong *)(lVar9 + 0xec0) + 0x1238);
  }
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar9 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (((uVar3 & 0xff000000) != 0) && (*pcVar7 != '\0')) {
    lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0xec0) + 0x1228);
    if (lVar9 == 0) {
      lVar9 = *(longlong *)(*(longlong *)(lVar6 + 0x38) + 0x18);
    }
    if (fVar10 == 0.0) {
      fVar10 = *(float *)(*(longlong *)(lVar6 + 0x38) + 0x20);
    }
    local_78 = *(undefined4 *)(lVar6 + 0x60);
    uStack_74 = *(undefined4 *)(lVar6 + 100);
    uStack_70 = *(undefined4 *)(lVar6 + 0x68);
    uStack_6c = *(undefined4 *)(lVar6 + 0x6c);
    FUN_18029e990(lVar9,lVar6,fVar10,&local_res8,uVar3,&local_78,pcVar7,0,0,0);
  }
  return 0;
}



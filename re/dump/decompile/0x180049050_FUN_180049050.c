// 0x180049050  FUN_180049050
// size=1069 thunk=false
// signature: undefined FUN_180049050()
// status: ok


undefined8 FUN_180049050(undefined8 param_1,longlong param_2)

{
  double dVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  char *pcVar8;
  undefined8 uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_res8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  
  local_res8 = param_1;
  plVar6 = (longlong *)FUN_180039770();
  if ((((plVar6 == (longlong *)0x0) || (plVar6[1] != param_2)) ||
      (lVar7 = FUN_18003a890(), lVar7 == 0)) ||
     (cVar3 = (**(code **)(*plVar6 + 0x138))(plVar6,1,4), cVar3 == '\0')) {
    return 0;
  }
  pcVar8 = (char *)(**(code **)(*plVar6 + 0xb8))(plVar6,1,0);
  if (pcVar8 == (char *)0x0) {
    return 0;
  }
  cVar3 = (**(code **)(*plVar6 + 0x138))(plVar6,2,4);
  if (cVar3 == '\0') {
    fVar11 = 0.0;
  }
  else {
    uVar9 = (**(code **)(*plVar6 + 0xb8))(plVar6,2,0);
    fVar11 = (float)FUN_1800474f0(uVar9);
  }
  cVar3 = (**(code **)(*plVar6 + 0x138))(plVar6,3,3);
  if (cVar3 == '\0') {
    fVar15 = 0.0;
  }
  else {
    dVar1 = (double)(**(code **)(*plVar6 + 0xc0))(plVar6,3);
    fVar15 = (float)dVar1;
  }
  cVar3 = (**(code **)(*plVar6 + 0x138))(plVar6,4,3);
  if (cVar3 == '\0') {
    fVar14 = 0.0;
  }
  else {
    dVar1 = (double)(**(code **)(*plVar6 + 0xc0))(plVar6,4);
    fVar14 = (float)dVar1;
  }
  uVar4 = FUN_1800477e0(plVar6,5);
  cVar3 = (**(code **)(*plVar6 + 0x138))(plVar6,7,3);
  if (cVar3 == '\0') {
    fVar13 = 0.0;
  }
  else {
    dVar1 = (double)(**(code **)(*plVar6 + 0xc0))(plVar6,7);
    fVar13 = (float)dVar1;
  }
  cVar3 = (**(code **)(*plVar6 + 0x138))(plVar6,6,3);
  uVar2 = DAT_1803817f0;
  if (cVar3 == '\0') {
    FUN_1800476f0(&local_res8,pcVar8,fVar11);
    iVar5 = 0;
  }
  else {
    dVar1 = (double)(**(code **)(*plVar6 + 0xc0))(plVar6,6);
    FUN_1800476f0(&local_res8,pcVar8,fVar11);
    iVar5 = (int)dVar1;
    if (iVar5 == 1) {
      fVar12 = (float)((uint)local_res8 ^ uVar2) * DAT_180380ac0;
      goto LAB_1800492d0;
    }
  }
  if (iVar5 == 2) {
    fVar12 = (float)((uint)local_res8 ^ uVar2);
  }
  else {
    fVar12 = 0.0;
  }
LAB_1800492d0:
  if ((int)fVar13 == 1) {
    fVar13 = (float)(local_res8._4_4_ ^ uVar2) * DAT_180380ac0;
  }
  else if ((int)fVar13 == 4) {
    fVar13 = (float)(local_res8._4_4_ ^ uVar2);
  }
  else {
    fVar13 = 0.0;
  }
  local_res8 = CONCAT44(fVar13 + fVar14,fVar12 + fVar15);
  if (fVar11 <= 0.0) {
    lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar10 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar11 = *(float *)(*(longlong *)(lVar10 + 0xec0) + 0x1238);
  }
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (((uVar4 & 0xff000000) != 0) && (*pcVar8 != '\0')) {
    lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0xec0) + 0x1228);
    if (lVar10 == 0) {
      lVar10 = *(longlong *)(*(longlong *)(lVar7 + 0x38) + 0x18);
    }
    if (fVar11 == 0.0) {
      fVar11 = *(float *)(*(longlong *)(lVar7 + 0x38) + 0x20);
    }
    local_98 = *(undefined4 *)(lVar7 + 0x60);
    uStack_94 = *(undefined4 *)(lVar7 + 100);
    uStack_90 = *(undefined4 *)(lVar7 + 0x68);
    uStack_8c = *(undefined4 *)(lVar7 + 0x6c);
    FUN_18029e990(lVar10,lVar7,fVar11,&local_res8,uVar4,&local_98,pcVar8,0,0,0);
  }
  return 0;
}



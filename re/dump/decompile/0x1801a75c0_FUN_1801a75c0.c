// 0x1801a75c0  FUN_1801a75c0
// size=656 thunk=false
// signature: undefined FUN_1801a75c0()
// status: ok


void FUN_1801a75c0(undefined8 param_1,char *param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  uint uVar6;
  float *pfVar7;
  char cVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  ulonglong in_stack_ffffffffffffff38;
  float local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float local_98 [2];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  pfVar9 = local_98;
  if (-1 < (int)DAT_1803fb24c) {
    pfVar9 = &DAT_1803fb24c;
  }
  local_a8 = 5.60519e-45;
  local_98[0] = 0.0;
  pfVar7 = &local_a8;
  if ((int)DAT_1803fb24c < 5) {
    pfVar7 = pfVar9;
  }
  DAT_1803fb24c = *pfVar7;
  lVar11 = (longlong)(int)DAT_1803fb24c * 200;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar13 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar10 = *(longlong *)(*(longlong *)(lVar13 + 0xec0) + 0x1520);
  fVar1 = *(float *)(lVar10 + 0x118);
  uVar2 = *(undefined4 *)(lVar10 + 0x11c);
  cVar8 = *(char *)(lVar13 + 0x10);
  if (cVar8 == '\0') {
    __dyn_tls_on_demand_init();
    cVar8 = *(char *)(lVar13 + 0x10);
  }
  lVar10 = *(longlong *)(lVar13 + 0xec0);
  lVar5 = *(longlong *)(lVar10 + 0x1520);
  if ((*(longlong *)(lVar5 + 0x1c8) != 0) || (lVar12 = 0x280, *(longlong *)(lVar10 + 0x2368) != 0))
  {
    lVar12 = 0x250;
  }
  fVar3 = *(float *)(lVar5 + lVar12);
  fVar4 = *(float *)(lVar5 + 0x118);
  if (cVar8 == '\0') {
    __dyn_tls_on_demand_init();
    lVar10 = *(longlong *)(lVar13 + 0xec0);
  }
  if (param_2 == (char *)0x0) {
    fVar14 = 0.0;
  }
  else {
    in_stack_ffffffffffffff38 = 0;
    FUN_18029e350(&local_a8,*(undefined8 *)(lVar10 + 0x1228),*(undefined4 *)(lVar10 + 0x1238),
                  DAT_180381308,DAT_180381384,param_2,0,0,0);
    fVar14 = (float)(int)(local_a8 + DAT_180380ba8);
  }
  if (*(char *)(lVar13 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar13 = *(longlong *)(lVar13 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar13 + 0x1520) + 0xce) = 1;
  local_a8 = *(float *)(&DAT_1803dc9c8 + lVar11);
  uStack_a4 = *(undefined4 *)(&DAT_1803dc9cc + lVar11);
  uStack_a0 = *(undefined4 *)(&DAT_1803dc9d0 + lVar11);
  uStack_9c = *(undefined4 *)(&DAT_1803dc9d4 + lVar11);
  uVar6 = FUN_180268ed0(&local_a8);
  local_a8 = (fVar1 + (fVar3 - fVar4)) - fVar14;
  uStack_a4 = uVar2;
  if ((((uVar6 & 0xff000000) != 0) && (param_2 != (char *)0x0)) && (*param_2 != '\0')) {
    lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x1520) + 0x2c8);
    local_90 = *(undefined4 *)(lVar13 + 0x60);
    uStack_8c = *(undefined4 *)(lVar13 + 100);
    uStack_88 = *(undefined4 *)(lVar13 + 0x68);
    uStack_84 = *(undefined4 *)(lVar13 + 0x6c);
    FUN_18029e990(*(undefined8 *)(*(longlong *)(lVar13 + 0x38) + 0x18),lVar13,
                  *(undefined4 *)(*(longlong *)(lVar13 + 0x38) + 0x20),&local_a8,uVar6,&local_90,
                  param_2,0,in_stack_ffffffffffffff38 & 0xffffffff00000000,0);
  }
  FUN_1802aabb0(&DAT_1803dca28 + lVar11,&DAT_1803431ac,param_1);
  return;
}



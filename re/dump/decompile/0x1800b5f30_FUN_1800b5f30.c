// 0x1800b5f30  FUN_1800b5f30
// size=629 thunk=false
// signature: undefined FUN_1800b5f30()
// status: ok


undefined8 FUN_1800b5f30(void *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  short sVar4;
  BOOL BVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 *local_res18;
  undefined8 *local_res20;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68 [10];
  
  if (param_1 != (void *)0x0) {
    if ((((-1 < DAT_1803e7c84) && (BVar5 = IsBadReadPtr(param_1,8), BVar5 == 0)) &&
        (lVar7 = FUN_1800b58b0(), lVar7 != 0)) && (lVar7 = FUN_1800b5940(param_1,lVar7), lVar7 != 0)
       ) {
      local_res18 = (undefined8 *)((ulonglong)local_res18 & 0xffffffff00000000);
      cVar3 = FUN_1800b2030((longlong)DAT_1803e7c84 + 0xc + lVar7,&local_res18);
      if (cVar3 != '\0') {
        fVar10 = local_res18._0_4_;
        sVar4 = _fdclass(local_res18._0_4_);
        if (((sVar4 < 1) && (DAT_180381428 <= fVar10)) && (fVar10 <= DAT_180381210))
        goto LAB_1800b5ff6;
      }
    }
    fVar2 = DAT_180381428;
    fVar1 = DAT_180381210;
    if (DAT_1803fe9d0 == '\0') {
      DAT_1803fe9d0 = '\x01';
      local_res18 = &local_a8;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      FUN_18001d080(&local_a8,"DT_BaseEntity",0xd);
      local_res18 = &local_a8;
      local_res20 = local_68;
      uVar8 = FUN_18016d4c0(local_68,&local_a8);
      uVar8 = FUN_180018ef0(&DAT_1803fac80,uVar8);
      FUN_18020e450(&local_a8);
      local_res18 = &local_88;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_70 = 0;
      FUN_18001d080(&local_88,"m_angRotation",0xd);
      local_res20 = &local_88;
      local_res18 = local_68;
      uVar9 = FUN_18016d4c0(local_68,&local_88);
      iVar6 = FUN_180018c10(uVar8,uVar9);
      FUN_18020e450(&local_88);
      DAT_180425410 = (longlong)iVar6;
    }
    if (DAT_180425410 != 0) {
      local_res18 = (undefined8 *)((ulonglong)local_res18 & 0xffffffff00000000);
      cVar3 = FUN_1800b2030((longlong)param_1 + DAT_180425410 + 4,&local_res18);
      if (cVar3 != '\0') {
        fVar10 = local_res18._0_4_;
        sVar4 = _fdclass(local_res18._0_4_);
        if (((sVar4 < 1) && (fVar2 <= fVar10)) && (fVar10 <= fVar1)) {
LAB_1800b5ff6:
          *param_2 = fVar10;
          return 1;
        }
      }
    }
  }
  return 0;
}



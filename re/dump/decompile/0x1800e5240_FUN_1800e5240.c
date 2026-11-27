// 0x1800e5240  FUN_1800e5240
// size=442 thunk=false
// signature: undefined FUN_1800e5240()
// status: ok


undefined8 FUN_1800e5240(undefined8 param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  undefined1 local_90 [32];
  undefined1 local_70 [72];
  
  plVar5 = (longlong *)FUN_180039770();
  if ((plVar5 == (longlong *)0x0) || (plVar5[1] != param_2)) {
    uVar7 = 0;
  }
  else {
    dVar3 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);
    if (((0 < (int)dVar3) && (DAT_1803fa360 != (longlong *)0x0)) &&
       (lVar6 = (**(code **)(*DAT_1803fa360 + 0x18))(), lVar6 != 0)) {
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0;
      local_d0 = 0;
      FUN_18001d080(&local_e8,"DT_BaseEntity",0xd);
      uVar7 = FUN_18016d4c0(local_90,&local_e8);
      uVar7 = FUN_180018ef0(&DAT_1803fac80,uVar7);
      FUN_18020e450(&local_e8);
      local_a8 = &local_c8;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      FUN_18001d080(&local_c8,"m_vecMins",9);
      local_a0 = &local_c8;
      local_98 = local_70;
      uVar8 = FUN_18016d4c0(local_70,&local_c8);
      iVar4 = FUN_180018c10(uVar7,uVar8);
      lVar9 = (longlong)iVar4;
      FUN_18020e450(&local_c8);
      fVar1 = *(float *)(lVar9 + 4 + lVar6);
      fVar2 = *(float *)(lVar9 + 8 + lVar6);
      (**(code **)(*plVar5 + 0xf0))(plVar5,(double)*(float *)(lVar9 + lVar6));
      (**(code **)(*plVar5 + 0xf0))(plVar5,(double)fVar1);
      (**(code **)(*plVar5 + 0xf0))(plVar5,(double)fVar2);
      return 3;
    }
    (**(code **)(*plVar5 + 0xe0))(plVar5);
    uVar7 = 1;
  }
  return uVar7;
}



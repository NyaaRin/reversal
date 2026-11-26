// 0x18018e280  FUN_18018e280
// size=968 thunk=false
// signature: undefined FUN_18018e280()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_18018e280(float *param_1,longlong *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  BOOL BVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_168 [32];
  int local_148;
  int local_140;
  char local_138;
  undefined8 local_130;
  undefined4 local_128;
  float *local_120;
  longlong *local_118;
  undefined4 *local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 *local_f0;
  float *local_e8;
  int local_e0;
  int local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  ulonglong local_98;
  
  local_98 = DAT_1803da4c0 ^ (ulonglong)auStack_168;
  if ((((param_2 != (longlong *)0x0) &&
       (local_120 = param_1, local_118 = param_2, local_110 = param_3, local_f0 = param_3,
       local_e8 = param_1, BVar4 = IsBadReadPtr(param_2,8), BVar4 == 0)) &&
      (BVar4 = IsBadReadPtr((void *)*param_2,8), BVar4 == 0)) && (DAT_1803fa668 != (longlong *)0x0))
  {
    local_dc = 0;
    local_e0 = 0;
    (**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,&local_dc,&local_e0);
    if ((1 < local_dc) && (1 < local_e0)) {
      local_130 = 0;
      local_128 = 0;
      local_d8 = 0;
      local_d0 = 0;
      cVar3 = '\0';
      local_138 = '\0';
      plVar5 = (longlong *)(**(code **)(*param_2 + 0x18))(param_2);
      if (plVar5 != (longlong *)0x0) {
        puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x18))(plVar5);
        local_130 = *puVar6;
        local_128 = *(undefined4 *)(puVar6 + 1);
        puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x20))(plVar5);
        local_d8 = *puVar6;
        local_d0 = *(undefined4 *)(puVar6 + 1);
        cVar3 = FUN_18018c550(&local_130,&local_d8);
        local_138 = cVar3;
      }
      if (cVar3 == '\0') {
        puVar6 = (undefined8 *)FUN_18001bef0(param_2);
        local_130 = *puVar6;
        local_128 = *(undefined4 *)(puVar6 + 1);
        puVar6 = (undefined8 *)FUN_18001bfe0(param_2);
        local_d8 = *puVar6;
        local_d0 = *(undefined4 *)(puVar6 + 1);
        local_138 = FUN_18018c550(&local_130,&local_d8);
        if (local_138 == '\0') goto LAB_18018e633;
      }
      FUN_18018a830(&local_108,param_2);
      local_c4 = 0;
      local_b8 = 0;
      local_b4 = 0x3f800000;
      local_a8 = 0;
      local_a0 = 0x3f800000;
      local_c8 = 0x3f800000;
      local_bc = local_108;
      local_ac = local_104;
      local_9c = local_100;
      local_140 = local_e0;
      local_148 = local_dc;
      piVar7 = (int *)FUN_18018df20(&local_108,&local_130,&local_d8,&local_c8);
      fVar10 = (float)piVar7[1];
      fVar11 = (float)piVar7[2];
      fVar1 = (float)piVar7[3];
      fVar2 = (float)piVar7[4];
      if (*piVar7 == 3) {
        if (param_3 != (undefined4 *)0x0) {
          *local_f0 = (undefined4)local_130;
          param_3[1] = local_130._4_4_;
          param_3[2] = local_128;
          *(undefined8 *)(param_3 + 3) = local_d8;
          param_3[5] = local_d0;
          *(ulonglong *)(param_3 + 6) = CONCAT44(local_104,local_108);
          param_3[8] = local_100;
          *(undefined2 *)(param_3 + 9) = 0x100;
        }
        fVar9 = (fVar1 + fVar10) * DAT_180380ac0;
        fVar8 = (fVar2 + fVar11) * DAT_180380ac0;
        fVar10 = (fVar1 - fVar10) * DAT_180380b20;
        if (fVar10 <= DAT_180380fc4) {
          fVar10 = DAT_180380fc4;
        }
        fVar10 = fVar10 * DAT_180380ac0;
        fVar11 = (fVar2 - fVar11) * DAT_180380b74;
        if (fVar11 <= DAT_180381004) {
          fVar11 = DAT_180381004;
        }
        fVar11 = fVar11 * DAT_180380ac0;
        *param_1 = fVar9 - fVar10;
        param_1[1] = fVar8 - fVar11;
        local_e8[2] = fVar10 + fVar9;
        local_e8[3] = fVar11 + fVar8;
        *(undefined1 *)(param_1 + 4) = 1;
        return param_1;
      }
    }
  }
LAB_18018e633:
  *(undefined1 *)(param_1 + 4) = 0;
  return param_1;
}



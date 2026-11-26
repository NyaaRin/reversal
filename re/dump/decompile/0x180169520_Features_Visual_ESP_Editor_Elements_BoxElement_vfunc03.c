// 0x180169520  Features_Visual_ESP_Editor_Elements_BoxElement_vfunc03
// size=571 thunk=false
// signature: undefined Features_Visual_ESP_Editor_Elements_BoxElement_vfunc03()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_Visual_ESP_Editor_Elements_BoxElement_vfunc03
               (longlong param_1,longlong param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_res8;
  float local_res20;
  float local_res24;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  float local_8c;
  
  fVar5 = DAT_180380ac0;
  local_res8._4_4_ = (float)((ulonglong)param_3 >> 0x20);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  fVar9 = *(float *)(param_1 + 0x40) * DAT_180380ac0;
  fVar7 = *(float *)(param_1 + 0x44) * DAT_180380ac0;
  fVar10 = fVar9 + (float)param_3;
  fVar9 = (float)param_3 - fVar9;
  fVar11 = fVar7 + local_res8._4_4_;
  fVar7 = local_res8._4_4_ - fVar7;
  local_res8 = param_3;
  local_a8 = fVar9;
  local_a4 = fVar7;
  local_a0 = fVar10;
  local_9c = fVar11;
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar1 = *(float *)(param_1 + 0x54);
  fVar2 = *(float *)(*(longlong *)(lVar4 + 0xec0) + 0xc84);
  fVar8 = (float)FUN_1801691d0(param_1);
  local_98 = *(undefined4 *)(param_1 + 0x48);
  local_94 = *(undefined4 *)(param_1 + 0x4c);
  local_90 = *(undefined4 *)(param_1 + 0x50);
  local_8c = fVar8 * fVar1 * fVar2;
  uVar6 = FUN_180268ed0(&local_98);
  if (*(char *)(param_1 + 0x60) == '\0') {
    if ((uVar6 & 0xff000000) != 0) {
      local_res20 = fVar9 + fVar5;
      iVar3 = *(int *)(param_1 + 0x5c);
      local_res24 = fVar7 + fVar5;
      fVar7 = _DAT_180380abc;
      if ((*(byte *)(param_2 + 0x30) & 1) != 0) {
        fVar7 = fVar5;
      }
      local_res8 = CONCAT44(fVar11 - fVar7,fVar10 - fVar7);
      FUN_180294990(param_2,&local_res20,&local_res8,*(undefined4 *)(param_1 + 0x58),0xf0);
      FUN_1802929d0(param_2,*(undefined8 *)(param_2 + 0x58),*(undefined4 *)(param_2 + 0x50),uVar6,
                    (float)iVar3,0x200);
      *(undefined4 *)(param_2 + 0x50) = 0;
    }
  }
  else {
    FUN_180295000(param_2,&local_a8,&local_a0,uVar6,*(undefined4 *)(param_1 + 0x58),0xf0);
  }
  return;
}



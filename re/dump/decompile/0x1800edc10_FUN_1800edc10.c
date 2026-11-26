// 0x1800edc10  FUN_1800edc10
// size=364 thunk=false
// signature: undefined FUN_1800edc10()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800edc10(longlong param_1)

{
  double dVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  TypeDescriptor *pTVar7;
  TypeDescriptor *pTVar8;
  ulonglong *puVar9;
  undefined1 auStack_98 [32];
  float *local_78;
  float local_70 [14];
  TypeDescriptor *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28 [4];
  
  local_28[0] = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  if (param_1 != 0) {
    local_30 = 0;
    local_2c = 2;
    puVar9 = (ulonglong *)&local_30;
    do {
      plVar3 = (longlong *)FUN_1800ebf80((int)*puVar9);
      if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
        uVar4 = (**(code **)(*plVar3 + 0x158))(plVar3,2);
        uVar5 = (**(code **)(*plVar3 + 0x158))(plVar3,1);
        lVar6 = FUN_1800e77b0(uVar5,uVar4);
        if (lVar6 == 0) {
          return 0;
        }
        dVar1 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);
        pTVar7 = (TypeDescriptor *)(*(ulonglong *)(lVar6 + 0x48) & 0xfffffffffffffffc);
        pTVar8 = &.X::RTTI_Type_Descriptor;
        if (pTVar7 != (TypeDescriptor *)0x0) {
          pTVar8 = pTVar7;
        }
        iVar2 = __std_type_info_compare(&pTVar8->spare,0x1803ede50);
        if (iVar2 != 0) {
          return 0;
        }
        local_78 = local_70;
        local_70[1] = 0.0;
        local_70[2] = 0.0;
        local_70[3] = 0.0;
        local_70[4] = 0.0;
        local_70[5] = 0.0;
        local_70[6] = 0.0;
        local_70[7] = 0.0;
        local_70[8] = 0.0;
        local_70[9] = 0.0;
        local_70[10] = 0.0;
        local_70[0xb] = 0.0;
        local_70[0xc] = 0.0;
        local_70[0xd] = 0.0;
        local_70[0] = (float)dVar1;
        local_38 = &.M::RTTI_Type_Descriptor;
        FUN_180014200(lVar6 + 0x10,local_70);
        return 0;
      }
      puVar9 = (ulonglong *)((longlong)puVar9 + 4);
    } while (puVar9 != local_28);
  }
  return 0;
}



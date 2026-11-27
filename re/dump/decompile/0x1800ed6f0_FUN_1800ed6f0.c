// 0x1800ed6f0  FUN_1800ed6f0
// size=324 thunk=false
// signature: undefined FUN_1800ed6f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800ed6f0(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  TypeDescriptor *pTVar7;
  TypeDescriptor *pTVar8;
  ulonglong *puVar9;
  undefined1 auStack_88 [32];
  ulonglong *local_68;
  ulonglong local_60 [7];
  TypeDescriptor *pTStack_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18 [2];
  
  local_18[0] = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  if (param_1 != 0) {
    local_20 = 0;
    local_1c = 2;
    puVar9 = (ulonglong *)&local_20;
    do {
      plVar3 = (longlong *)FUN_1800ebf80((int)*puVar9);
      if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
        uVar4 = (**(code **)(*plVar3 + 0x158))(plVar3,2);
        uVar5 = (**(code **)(*plVar3 + 0x158))(plVar3,1);
        lVar6 = FUN_1800e77b0(uVar5,uVar4);
        if (lVar6 == 0) {
          return 0;
        }
        bVar1 = (**(code **)(*plVar3 + 200))(plVar3,3);
        pTVar8 = (TypeDescriptor *)(*(ulonglong *)(lVar6 + 0x48) & 0xfffffffffffffffc);
        pTVar7 = &.X::RTTI_Type_Descriptor;
        if (pTVar8 != (TypeDescriptor *)0x0) {
          pTVar7 = pTVar8;
        }
        iVar2 = __std_type_info_compare(&pTVar7->spare,0x1803eddb8);
        if (iVar2 != 0) {
          return 0;
        }
        local_68 = local_60;
        local_60[1] = 0;
        local_60[2] = 0;
        local_60[3] = 0;
        local_60[4] = 0;
        local_60[5] = 0;
        local_60[6] = 0;
        local_60[0] = (ulonglong)bVar1;
        pTStack_28 = &._N::RTTI_Type_Descriptor;
        FUN_180014200(lVar6 + 0x10,local_60);
        return 0;
      }
      puVar9 = (ulonglong *)((longlong)puVar9 + 4);
    } while (puVar9 != local_18);
  }
  return 0;
}



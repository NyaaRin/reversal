// 0x1800edae0  FUN_1800edae0
// size=301 thunk=false
// signature: undefined FUN_1800edae0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800edae0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  TypeDescriptor *pTVar6;
  ulonglong uVar7;
  TypeDescriptor *pTVar8;
  ulonglong *puVar9;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  if (param_1 != 0) {
    local_18 = 0;
    puVar9 = (ulonglong *)&local_18;
    local_14 = 2;
    do {
      plVar2 = (longlong *)FUN_1800ebf80((int)*puVar9);
      if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
        uVar3 = (**(code **)(*plVar2 + 0x158))(plVar2,2);
        uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,1);
        lVar5 = FUN_1800e77b0(uVar4,uVar3);
        if (lVar5 == 0) {
          return 0;
        }
        pTVar8 = (TypeDescriptor *)(*(ulonglong *)(lVar5 + 0x48) & 0xfffffffffffffffc);
        pTVar6 = &.X::RTTI_Type_Descriptor;
        if (pTVar8 != (TypeDescriptor *)0x0) {
          pTVar6 = pTVar8;
        }
        iVar1 = __std_type_info_compare(&pTVar6->spare,0x1803ede50);
        if (iVar1 != 0) {
          return 0;
        }
        if ((((float *)(lVar5 + 0x10) != (float *)0x0) &&
            (uVar7 = *(ulonglong *)(lVar5 + 0x48) & 0xfffffffffffffffc, uVar7 != 0)) &&
           (iVar1 = __std_type_info_compare(uVar7 + 8,0x1803ede50), iVar1 == 0)) {
          (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(lVar5 + 0x10));
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_180014070();
      }
      puVar9 = (ulonglong *)((longlong)puVar9 + 4);
    } while (puVar9 != &local_10);
  }
  return 0;
}



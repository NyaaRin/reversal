// 0x1800edd80  FUN_1800edd80
// size=401 thunk=false
// signature: undefined FUN_1800edd80()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1800edd80(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  TypeDescriptor *pTVar6;
  TypeDescriptor *pTVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  undefined8 ****ppppuVar10;
  undefined4 uVar11;
  undefined1 auStack_58 [32];
  undefined8 ***local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    local_18 = 0;
    local_14 = 2;
    puVar9 = (ulonglong *)&local_18;
    do {
      plVar2 = (longlong *)FUN_1800ebf80((int)*puVar9);
      if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_2)) {
        uVar3 = (**(code **)(*plVar2 + 0x158))(plVar2,2);
        uVar11 = 1;
        uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,1);
        lVar5 = FUN_1800e77b0(uVar4,uVar3);
        uStack_30 = 0;
        local_28 = _DAT_1803814b0;
        uStack_20 = _UNK_1803814b8;
        local_38 = (undefined8 ****)0x0;
        if (lVar5 != 0) {
          pTVar6 = (TypeDescriptor *)(*(ulonglong *)(lVar5 + 0x48) & 0xfffffffffffffffc);
          pTVar7 = &.X::RTTI_Type_Descriptor;
          if (pTVar6 != (TypeDescriptor *)0x0) {
            pTVar7 = pTVar6;
          }
          iVar1 = __std_type_info_compare(&pTVar7->spare,0x1803ee0d8);
          if (iVar1 == 0) {
            ppppuVar10 = (undefined8 ****)(lVar5 + 0x10);
            if (((ppppuVar10 == (undefined8 ****)0x0) ||
                (uVar8 = *(ulonglong *)(lVar5 + 0x48) & 0xfffffffffffffffc, uVar8 == 0)) ||
               (iVar1 = __std_type_info_compare(uVar8 + 8,0x1803ee0d8), iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
              FUN_180014070();
            }
            if (&local_38 != ppppuVar10) {
              if (0xf < *(ulonglong *)(lVar5 + 0x28)) {
                ppppuVar10 = (undefined8 ****)*ppppuVar10;
              }
              FUN_180212700(&local_38,ppppuVar10,*(undefined8 *)(lVar5 + 0x20));
            }
            ppppuVar10 = &local_38;
            if (0xf < uStack_20) {
              ppppuVar10 = (undefined8 ****)local_38;
            }
            (**(code **)(*plVar2 + 0xe8))(plVar2,ppppuVar10,0);
            goto LAB_1800edefb;
          }
        }
        uVar11 = 0;
LAB_1800edefb:
        FUN_18020e450(&local_38);
        return uVar11;
      }
      puVar9 = (ulonglong *)((longlong)puVar9 + 4);
    } while (puVar9 != &local_10);
  }
  return 0;
}



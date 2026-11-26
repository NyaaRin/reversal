// 1801fcfc0  FUN_1801fcfc0
// signature: undefined FUN_1801fcfc0()
// status: ok


longlong FUN_1801fcfc0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  TypeDescriptor *pTVar3;
  TypeDescriptor *pTVar4;
  ulonglong uVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  TypeDescriptor *pTStack_10;
  
  lVar1 = param_1 + 0x10;
  pTVar3 = (TypeDescriptor *)(*(ulonglong *)(param_1 + 0x48) & 0xfffffffffffffffc);
  pTVar4 = &.X::RTTI_Type_Descriptor;
  if (pTVar3 != (TypeDescriptor *)0x0) {
    pTVar4 = pTVar3;
  }
  iVar2 = __std_type_info_compare(&pTVar4->spare,0x1803eddb8);
  if (iVar2 != 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    pTStack_10 = &._N::RTTI_Type_Descriptor;
    FUN_180014200(lVar1,&local_48);
  }
  if ((lVar1 != 0) && (uVar5 = *(ulonglong *)(param_1 + 0x48) & 0xfffffffffffffffc, uVar5 != 0)) {
    iVar2 = __std_type_info_compare(uVar5 + 8,0x1803eddb8);
    if (iVar2 == 0) {
      return lVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_180014070();
}



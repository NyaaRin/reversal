// 1802028c0  FUN_1802028c0
// signature: undefined FUN_1802028c0()
// status: ok


longlong FUN_1802028c0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  TypeDescriptor *pTVar3;
  TypeDescriptor *pTVar4;
  ulonglong uVar5;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined **local_18;
  undefined8 local_10;
  
  lVar1 = param_1 + 0x10;
  pTVar3 = (TypeDescriptor *)(*(ulonglong *)(param_1 + 0x48) & 0xfffffffffffffffc);
  pTVar4 = &.X::RTTI_Type_Descriptor;
  if (pTVar3 != (TypeDescriptor *)0x0) {
    pTVar4 = pTVar3;
  }
  iVar2 = __std_type_info_compare(&pTVar4->spare,0x1803ee0d8);
  if (iVar2 != 0) {
    uStack_60 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    uStack_30 = 0xf;
    local_58 = 0;
    uStack_50 = 0xf;
    local_68 = 0;
    local_18 = &PTR_Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09_18033daa8;
    local_10 = 0x1803ee0d2;
    FUN_180014200(lVar1,&local_48);
    FUN_18020e450(&local_68);
  }
  if ((lVar1 != 0) && (uVar5 = *(ulonglong *)(param_1 + 0x48) & 0xfffffffffffffffc, uVar5 != 0)) {
    iVar2 = __std_type_info_compare(uVar5 + 8,0x1803ee0d8);
    if (iVar2 == 0) {
      return lVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_180014070();
}



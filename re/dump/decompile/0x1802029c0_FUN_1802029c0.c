// 0x1802029c0  FUN_1802029c0
// size=169 thunk=false
// signature: undefined FUN_1802029c0()
// status: ok


longlong FUN_1802029c0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  TypeDescriptor *pTVar3;
  TypeDescriptor *pTVar4;
  ulonglong uVar5;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined8 local_24;
  undefined8 uStack_1c;
  undefined4 local_14;
  TypeDescriptor *local_10;
  
  lVar1 = param_1 + 0x10;
  pTVar3 = (TypeDescriptor *)(*(ulonglong *)(param_1 + 0x48) & 0xfffffffffffffffc);
  pTVar4 = &.X::RTTI_Type_Descriptor;
  if (pTVar3 != (TypeDescriptor *)0x0) {
    pTVar4 = pTVar3;
  }
  iVar2 = __std_type_info_compare(&pTVar4->spare,0x1803edf28);
  if (iVar2 != 0) {
    local_44 = 0;
    uStack_3c = 0;
    local_34 = 0;
    uStack_2c = 0;
    local_24 = 0;
    uStack_1c = 0;
    local_14 = 0;
    local_48 = 0;
    local_10 = &.H::RTTI_Type_Descriptor;
    FUN_180014200(lVar1,&local_48);
  }
  if ((lVar1 != 0) && (uVar5 = *(ulonglong *)(param_1 + 0x48) & 0xfffffffffffffffc, uVar5 != 0)) {
    iVar2 = __std_type_info_compare(uVar5 + 8,0x1803edf28);
    if (iVar2 == 0) {
      return lVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_180014070();
}



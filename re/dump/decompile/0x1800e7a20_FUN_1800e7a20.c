// 0x1800e7a20  FUN_1800e7a20
// size=171 thunk=false
// signature: undefined FUN_1800e7a20()
// status: ok


undefined8 FUN_1800e7a20(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  TypeDescriptor *pTVar3;
  TypeDescriptor *pTVar4;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined8 local_24;
  undefined8 uStack_1c;
  undefined4 local_14;
  TypeDescriptor *local_10;
  
  lVar2 = FUN_1800e77b0();
  if (lVar2 != 0) {
    pTVar3 = (TypeDescriptor *)(*(ulonglong *)(lVar2 + 0x48) & 0xfffffffffffffffc);
    pTVar4 = &.X::RTTI_Type_Descriptor;
    if (pTVar3 != (TypeDescriptor *)0x0) {
      pTVar4 = pTVar3;
    }
    iVar1 = __std_type_info_compare(&pTVar4->spare,0x1803edf28);
    if (iVar1 == 0) {
      local_44 = 0;
      uStack_3c = 0;
      local_34 = 0;
      uStack_2c = 0;
      local_24 = 0;
      uStack_1c = 0;
      local_14 = 0;
      local_10 = &.H::RTTI_Type_Descriptor;
      local_48 = param_3;
      FUN_180014200(lVar2 + 0x10,&local_48);
      return 1;
    }
  }
  return 0;
}



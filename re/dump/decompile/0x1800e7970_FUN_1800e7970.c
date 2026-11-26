// 0x1800e7970  FUN_1800e7970
// size=169 thunk=false
// signature: undefined FUN_1800e7970()
// status: ok


undefined8 FUN_1800e7970(undefined8 param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  longlong lVar2;
  TypeDescriptor *pTVar3;
  TypeDescriptor *pTVar4;
  ulonglong local_48 [7];
  TypeDescriptor *pTStack_10;
  
  lVar2 = FUN_1800e77b0(param_1,"enabled");
  if (lVar2 != 0) {
    pTVar3 = (TypeDescriptor *)(*(ulonglong *)(lVar2 + 0x48) & 0xfffffffffffffffc);
    pTVar4 = &.X::RTTI_Type_Descriptor;
    if (pTVar3 != (TypeDescriptor *)0x0) {
      pTVar4 = pTVar3;
    }
    iVar1 = __std_type_info_compare(&pTVar4->spare,0x1803eddb8);
    if (iVar1 == 0) {
      local_48[1] = 0;
      local_48[2] = 0;
      local_48[3] = 0;
      local_48[4] = 0;
      local_48[5] = 0;
      local_48[6] = 0;
      local_48[0] = (ulonglong)param_3;
      pTStack_10 = &._N::RTTI_Type_Descriptor;
      FUN_180014200(lVar2 + 0x10,local_48);
      return 1;
    }
  }
  return 0;
}



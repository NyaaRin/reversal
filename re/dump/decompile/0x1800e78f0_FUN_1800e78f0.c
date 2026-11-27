// 0x1800e78f0  FUN_1800e78f0
// size=125 thunk=false
// signature: undefined FUN_1800e78f0()
// status: ok


undefined1 FUN_1800e78f0(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  TypeDescriptor *pTVar3;
  ulonglong uVar4;
  TypeDescriptor *pTVar5;
  
  lVar2 = FUN_1800e77b0(param_1,"enabled");
  if (lVar2 != 0) {
    pTVar5 = (TypeDescriptor *)(*(ulonglong *)(lVar2 + 0x48) & 0xfffffffffffffffc);
    pTVar3 = &.X::RTTI_Type_Descriptor;
    if (pTVar5 != (TypeDescriptor *)0x0) {
      pTVar3 = pTVar5;
    }
    iVar1 = __std_type_info_compare(&pTVar3->spare,0x1803eddb8);
    if (iVar1 == 0) {
      if (((undefined1 *)(lVar2 + 0x10) != (undefined1 *)0x0) &&
         (uVar4 = *(ulonglong *)(lVar2 + 0x48) & 0xfffffffffffffffc, uVar4 != 0)) {
        iVar1 = __std_type_info_compare(uVar4 + 8,0x1803eddb8);
        if (iVar1 == 0) {
          return *(undefined1 *)(lVar2 + 0x10);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_180014070();
    }
  }
  return 0;
}



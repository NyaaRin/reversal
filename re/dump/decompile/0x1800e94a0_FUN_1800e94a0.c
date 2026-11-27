// 0x1800e94a0  FUN_1800e94a0
// size=219 thunk=false
// signature: undefined FUN_1800e94a0()
// status: ok


undefined8 FUN_1800e94a0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  TypeDescriptor *pTVar5;
  ulonglong uVar6;
  TypeDescriptor *pTVar7;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    return 0;
  }
  lVar1 = *plVar3;
  lVar4 = FUN_1800e77b0("thirdperson",&DAT_18034eee4);
  if (lVar4 != 0) {
    pTVar7 = (TypeDescriptor *)(*(ulonglong *)(lVar4 + 0x48) & 0xfffffffffffffffc);
    pTVar5 = &.X::RTTI_Type_Descriptor;
    if (pTVar7 != (TypeDescriptor *)0x0) {
      pTVar5 = pTVar7;
    }
    iVar2 = __std_type_info_compare(&pTVar5->spare,0x1803edf28);
    if (iVar2 == 0) {
      if (((int *)(lVar4 + 0x10) == (int *)0x0) ||
         (uVar6 = *(ulonglong *)(lVar4 + 0x48) & 0xfffffffffffffffc, uVar6 == 0)) {
LAB_1800e9576:
                    /* WARNING: Subroutine does not return */
        FUN_180014070();
      }
      iVar2 = __std_type_info_compare(uVar6 + 8,0x1803edf28);
      if (iVar2 != 0) goto LAB_1800e9576;
      iVar2 = *(int *)(lVar4 + 0x10);
      goto LAB_1800e953e;
    }
  }
  iVar2 = 0;
LAB_1800e953e:
  (**(code **)(lVar1 + 0xf0))(plVar3,(double)iVar2);
  return 1;
}



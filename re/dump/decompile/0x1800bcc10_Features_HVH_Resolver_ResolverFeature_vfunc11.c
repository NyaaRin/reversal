// 0x1800bcc10  Features_HVH_Resolver_ResolverFeature_vfunc11
// size=108 thunk=false
// signature: undefined Features_HVH_Resolver_ResolverFeature_vfunc11()
// status: ok


void Features_HVH_Resolver_ResolverFeature_vfunc11
               (undefined8 param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar3 = (*pcVar1)(DAT_1803fa360,uVar2);
  if (param_2 == lVar3) {
    FUN_1800bace0(param_3 + 4,param_3 + 0x10);
    return;
  }
  return;
}



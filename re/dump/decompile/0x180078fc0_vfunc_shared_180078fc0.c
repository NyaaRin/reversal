// 0x180078fc0  vfunc_shared_180078fc0
// size=121 thunk=false
// signature: undefined vfunc_shared_180078fc0()
// status: ok


undefined8 * vfunc_shared_180078fc0(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_18;
  undefined4 local_10;
  
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar3 = (*pcVar1)(DAT_1803fa360,uVar2);
  if (lVar3 == 0) {
    local_18 = 0;
    puVar4 = &local_18;
    local_10 = 0;
  }
  else {
    puVar4 = (undefined8 *)FUN_18001f9d0(lVar3,&local_18);
  }
  uVar2 = *(undefined4 *)(puVar4 + 1);
  *param_2 = *puVar4;
  *(undefined4 *)(param_2 + 1) = uVar2;
  return param_2;
}



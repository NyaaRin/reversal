// 0x18010f600  Features_BulletTracers_BulletTracersFeature_vfunc12
// size=120 thunk=false
// signature: undefined Features_BulletTracers_BulletTracersFeature_vfunc12()
// status: ok


void Features_BulletTracers_BulletTracersFeature_vfunc12
               (longlong param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar3 = (*pcVar1)(DAT_1803fa360,uVar2);
    if (param_2 == lVar3) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_3 + 0x14);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_3 + 0x18);
      *(undefined1 *)(param_1 + 0x2c) = 1;
    }
  }
  return;
}



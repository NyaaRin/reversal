// 0x1800d64c0  Features_RageAim_RageAimFeature_vfunc16
// size=132 thunk=false
// signature: undefined Features_RageAim_RageAimFeature_vfunc16()
// status: ok


void Features_RageAim_RageAimFeature_vfunc16(void)

{
  undefined8 uVar1;
  bool bVar2;
  
  if (-1 < DAT_1803e7c74) {
    bVar2 = DAT_1803e7c74 != 0;
    uVar1 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
    uVar1 = FUN_180241610(uVar1,0x9653fa4f0c4e1755);
    uVar1 = FUN_1801fcfc0(uVar1);
    *(bool *)uVar1 = bVar2;
    DAT_1803e7c74 = -1;
  }
  if (DAT_1804096bc != '\0') {
    FUN_180017040("cl_lagcompensation 1");
    DAT_1804096bc = 0;
    FUN_180014410("[EXPLOIT] cl_lagcompensation restored on teardown\n");
    return;
  }
  return;
}



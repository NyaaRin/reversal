// 0x1800cb010  Features_Aimbot_AimbotFeature_vfunc16
// size=196 thunk=false
// signature: undefined Features_Aimbot_AimbotFeature_vfunc16()
// status: ok


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void Features_Aimbot_AimbotFeature_vfunc16(void)

{
  undefined8 *puVar1;
  undefined1 local_1818 [6160];
  
  puVar1 = &DAT_1804f6cf0;
  do {
    memset(local_1818,0,0x1800);
    FUN_180202a70(local_1818);
    FUN_1800a2ba0(puVar1);
    puVar1 = puVar1 + 0x30a;
  } while (puVar1 != (undefined8 *)&DAT_1805580f0);
  return;
}



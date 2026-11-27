// 0x18015a3a0  Features_DamageLogger_DamageLoggerFeature_vfunc16
// size=87 thunk=false
// signature: undefined Features_DamageLogger_DamageLoggerFeature_vfunc16()
// status: ok


void Features_DamageLogger_DamageLoggerFeature_vfunc16(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_18020a670(param_1 + 0x30);
  FUN_18021c260(param_1 + 8);
  puVar1 = &DAT_1803e7d00;
  do {
    *puVar1 = 0xc47a0000ffffffff;
    puVar1 = puVar1 + 1;
  } while (puVar1 != (undefined8 *)&DAT_1803e8110);
  return;
}



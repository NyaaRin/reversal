// 0x180066f30  FUN_180066f30
// size=88 thunk=false
// signature: undefined FUN_180066f30()
// status: ok


void FUN_180066f30(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [32];
  undefined1 local_a8 [168];
  
  puVar3 = (undefined8 *)FUN_1800138e0(local_d8);
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  FUN_18001d010(local_c8,"directory_iterator::operator++");
  local_e8 = uVar1;
  uStack_e0 = uVar2;
  FUN_180066ad0(local_a8,local_c8,&local_e8);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_a8,(ThrowInfo *)&DAT_1803d5ab8);
}



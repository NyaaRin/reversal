// 1801996a0  FUN_1801996a0
// signature: undefined FUN_1801996a0()
// status: ok


void FUN_1801996a0(void)

{
  code *pcVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  void *_Memory;
  undefined1 *puVar6;
  bool bVar7;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [24];
  undefined4 local_e8;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined7 uStack_c7;
  undefined8 local_b8;
  ulonglong local_b0;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [40];
  
  puVar6 = auStack_108;
  local_e8 = 0;
  LOCK();
  bVar7 = DAT_1804096e7 == '\0';
  if (bVar7) {
    DAT_1804096e7 = '\x01';
  }
  UNLOCK();
  if (bVar7) {
    DAT_18040975c = 0;
    DAT_180409700 = 0;
    DAT_180409764 = 0;
    DAT_1804096f1 = 0;
    FUN_180197c80();
    FUN_180198080();
    FUN_180198f40();
    local_d8 = (undefined8 *)FUN_180197fc0(local_48);
    local_d0 = local_d8[2];
    if (0xf < (ulonglong)local_d8[3]) {
      local_d8 = (undefined8 *)*local_d8;
    }
    uVar3 = FUN_1802d75e4();
    FUN_1800650e0(local_a8,uVar3,&local_d8);
    local_e8 = 0;
    uVar4 = FUN_1801968e0(local_68);
    FUN_180066720(local_88,uVar4,local_a8);
    local_e8 = 1;
    FUN_18021e290(local_68);
    FUN_18021e290(local_a8);
    FUN_18020e450(local_48);
    puVar5 = (undefined8 *)FUN_180065350(local_88,&local_c8);
    if (0xf < (ulonglong)puVar5[3]) {
      puVar5 = (undefined8 *)*puVar5;
    }
    FUN_180014410("[DUMP] Lua dumper enabled -> %s\n",puVar5);
    if (0xf < local_b0) {
      pvVar2 = (void *)CONCAT71(uStack_c7,local_c8);
      _Memory = pvVar2;
      puVar6 = auStack_108;
      if ((0xfff < local_b0 + 1) &&
         (_Memory = *(void **)((longlong)pvVar2 + -8), puVar6 = auStack_108,
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
        pcVar1 = (code *)swi(0x29);
        _Memory = (void *)(*pcVar1)(5);
        puVar6 = auStack_100;
      }
      *(undefined8 *)(puVar6 + -8) = 0x180199814;
      free(_Memory);
    }
    local_b8 = 0;
    local_b0 = 0xf;
    local_c8 = 0;
    *(undefined4 *)(puVar6 + 0x20) = 0;
    *(undefined8 *)(puVar6 + -8) = 0x180199834;
    FUN_18021e290(local_88);
    return;
  }
  DAT_1804096f1 = 0;
  FUN_180197c80();
  FUN_180198080();
  FUN_180198f40();
  return;
}



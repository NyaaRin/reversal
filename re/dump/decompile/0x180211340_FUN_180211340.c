// 0x180211340  FUN_180211340
// size=450 thunk=false
// signature: undefined FUN_180211340()
// status: ok


undefined8 *
FUN_180211340(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  char *_Str;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 *_Memory;
  size_t sVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *local_68;
  uint local_60;
  undefined8 *local_48;
  
  puVar11 = DAT_18042bcf0;
  _Memory = (undefined8 *)FUN_1802d8350(0x60);
  puVar1 = _Memory + 4;
  _Str = (char *)*param_3;
  *puVar1 = 0;
  _Memory[5] = 0;
  _Memory[6] = 0;
  _Memory[7] = 0;
  local_48 = puVar1;
  sVar6 = strlen(_Str);
  FUN_18001d080(puVar1,_Str,sVar6);
  _Memory[8] = 0;
  _Memory[9] = 0;
  _Memory[10] = 0;
  _Memory[0xb] = 0;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *(undefined4 *)(_Memory + 8) = *param_4;
  *(undefined4 *)((longlong)_Memory + 0x44) = uVar2;
  *(undefined4 *)(_Memory + 9) = uVar3;
  *(undefined4 *)((longlong)_Memory + 0x4c) = uVar4;
  uVar7 = *(undefined8 *)(param_4 + 6);
  _Memory[10] = *(undefined8 *)(param_4 + 4);
  _Memory[0xb] = uVar7;
  *(undefined8 *)(param_4 + 4) = 0;
  *(undefined8 *)(param_4 + 6) = 0xf;
  *(undefined1 *)param_4 = 0;
  *_Memory = puVar11;
  _Memory[1] = puVar11;
  _Memory[2] = puVar11;
  *(undefined2 *)(_Memory + 3) = 0;
  puVar11 = (undefined8 *)DAT_18042bcf0[1];
  puVar8 = puVar11;
  puVar9 = DAT_18042bcf0;
  if (*(char *)((longlong)puVar11 + 0x19) == '\0') {
    do {
      puVar11 = puVar8;
      cVar5 = FUN_180201cf0(puVar11 + 4,puVar1);
      if (-1 < cVar5) {
        puVar8 = (undefined8 *)*puVar11;
        puVar9 = puVar11;
      }
      else {
        puVar8 = (undefined8 *)puVar11[2];
      }
      uVar10 = (uint)(-1 < cVar5);
    } while (*(char *)((longlong)puVar8 + 0x19) == '\0');
  }
  else {
    uVar10 = 0;
  }
  if ((*(char *)((longlong)puVar9 + 0x19) == '\0') &&
     (cVar5 = FUN_180201cf0(puVar1,puVar9 + 4), -1 < cVar5)) {
    *param_2 = puVar9;
    *(undefined1 *)(param_2 + 1) = 0;
    local_68 = puVar1;
    FUN_18020e450(_Memory + 8);
    FUN_18020e450(puVar1);
    free(_Memory);
  }
  else {
    if (DAT_18042bcf8 == 0x2aaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
      FUN_180013b80();
    }
    local_68 = puVar11;
    local_60 = uVar10;
    uVar7 = FUN_18022bb90(&DAT_18042bcf0,&local_68,_Memory);
    *param_2 = uVar7;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  return param_2;
}



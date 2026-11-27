// 0x180221a80  FUN_180221a80
// size=307 thunk=false
// signature: undefined FUN_180221a80()
// status: ok


undefined4 * FUN_180221a80(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  void *_Dst;
  size_t _Size;
  ulonglong uVar4;
  
  lVar2 = *param_1;
  uVar4 = param_1[1];
  do {
    if (param_2 == 0) {
      return param_3;
    }
    puVar3 = *(undefined4 **)
              (*(longlong *)(lVar2 + 8) + (*(longlong *)(lVar2 + 0x10) - 1U & uVar4) * 8);
    *param_3 = *puVar3;
    *(undefined1 *)(param_3 + 1) = *(undefined1 *)(puVar3 + 1);
    FUN_18016d4c0(param_3 + 2,puVar3 + 2);
    param_3[10] = puVar3[10];
    param_3[0xb] = puVar3[0xb];
    *(undefined8 *)(param_3 + 0xc) = *(undefined8 *)(puVar3 + 0xc);
    FUN_18020d910(param_3 + 0xe,puVar3 + 0xe);
    puVar1 = (undefined8 *)(param_3 + 0x14);
    *puVar1 = 0;
    *(undefined8 *)(param_3 + 0x16) = 0;
    *(undefined8 *)(param_3 + 0x18) = 0;
    if (*(longlong *)(puVar3 + 0x16) != *(longlong *)(puVar3 + 0x14)) {
      if (0x7fffffffffffffff <
          (ulonglong)(*(longlong *)(puVar3 + 0x16) - *(longlong *)(puVar3 + 0x14))) {
                    /* WARNING: Subroutine does not return */
        FUN_18020cc40();
      }
      FUN_180238590(puVar1);
      _Dst = (void *)*puVar1;
      _Size = *(longlong *)(puVar3 + 0x16) - (longlong)*(void **)(puVar3 + 0x14);
      memmove(_Dst,*(void **)(puVar3 + 0x14),_Size);
      *(size_t *)(param_3 + 0x16) = _Size + (longlong)_Dst;
    }
    param_3 = param_3 + 0x1a;
    uVar4 = uVar4 + 1;
    param_2 = param_2 + -1;
  } while( true );
}



// 0x18016d630  FUN_18016d630
// size=188 thunk=false
// signature: undefined FUN_18016d630()
// status: ok


longlong FUN_18016d630(longlong param_1)

{
  undefined8 *puVar1;
  size_t _Size;
  int iVar2;
  undefined8 uVar3;
  undefined8 *_Buf1;
  longlong *_Buf2;
  longlong *plVar4;
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  plVar4 = (longlong *)(param_1 + 0x180);
  puVar1 = (undefined8 *)(param_1 + 0x1e0);
  _Buf2 = plVar4;
  if (0xf < *(ulonglong *)(param_1 + 0x198)) {
    _Buf2 = (longlong *)*plVar4;
  }
  _Size = *(size_t *)(param_1 + 0x1f0);
  _Buf1 = puVar1;
  if (0xf < *(ulonglong *)(param_1 + 0x1f8)) {
    _Buf1 = (undefined8 *)*puVar1;
  }
  if ((_Size != *(size_t *)(param_1 + 400)) ||
     ((_Size != 0 && (iVar2 = memcmp(_Buf1,_Buf2,_Size), iVar2 != 0)))) {
    uVar3 = FUN_1800275b0(local_48,plVar4);
    FUN_180033410(param_1 + 0x1a0,uVar3);
    FUN_18020e450(local_28);
    FUN_18021d530(local_48);
    if (puVar1 != plVar4) {
      if (0xf < *(ulonglong *)(param_1 + 0x198)) {
        plVar4 = (longlong *)*plVar4;
      }
      FUN_180212700(puVar1,plVar4,*(undefined8 *)(param_1 + 400));
    }
  }
  return param_1 + 0x1a0;
}



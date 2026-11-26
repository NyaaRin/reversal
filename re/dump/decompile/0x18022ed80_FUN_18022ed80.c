// 0x18022ed80  FUN_18022ed80
// size=290 thunk=false
// signature: undefined FUN_18022ed80()
// status: ok


void FUN_18022ed80(longlong param_1,void *param_2,ulonglong param_3,uint param_4)

{
  void *pvVar1;
  code *pcVar2;
  longlong lVar3;
  void *pvVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  void *_Dst;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [32];
  
  puVar6 = auStack_48;
  puVar7 = auStack_48;
  if (0x7fffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  uVar5 = param_4 & 0xffffffdf;
  if ((param_3 == 0) || (((byte)uVar5 & 6) == 6)) {
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  else {
    if (param_3 < 0x1000) {
      _Dst = (void *)FUN_1802d8350(param_3);
    }
    else {
      if (param_3 + 0x27 <= param_3) {
                    /* WARNING: Subroutine does not return */
        FUN_180012fe0();
      }
      lVar3 = FUN_1802d8350();
      if (lVar3 == 0) {
        pcVar2 = (code *)swi(0x29);
        lVar3 = (*pcVar2)(5);
        puVar6 = auStack_40;
      }
      _Dst = (void *)(lVar3 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar3;
      puVar7 = puVar6;
    }
    *(undefined8 *)(puVar7 + -8) = 0x18022ee12;
    memcpy(_Dst,param_2,param_3);
    *(ulonglong *)(param_1 + 0x68) = (longlong)_Dst + param_3;
    if ((param_4 & 4) == 0) {
      **(undefined8 **)(param_1 + 0x18) = _Dst;
      **(undefined8 **)(param_1 + 0x38) = _Dst;
      **(int **)(param_1 + 0x50) = (int)((longlong)_Dst + param_3) - (int)_Dst;
    }
    if ((param_4 & 2) == 0) {
      pvVar1 = *(void **)(param_1 + 0x68);
      pvVar4 = _Dst;
      if ((param_4 & 0x18) != 0) {
        pvVar4 = pvVar1;
      }
      **(undefined8 **)(param_1 + 0x20) = _Dst;
      **(undefined8 **)(param_1 + 0x40) = pvVar4;
      **(int **)(param_1 + 0x58) = (int)pvVar1 - (int)pvVar4;
      if ((param_4 & 4) != 0) {
        **(undefined8 **)(param_1 + 0x18) = _Dst;
        **(undefined8 **)(param_1 + 0x38) = _Dst;
        **(undefined4 **)(param_1 + 0x50) = 0;
      }
    }
    uVar5 = uVar5 | 1;
  }
  *(uint *)(param_1 + 0x70) = uVar5;
  return;
}



// 0x18020fdc0  std_2_D_V?$allocator_std_D_DU?$char_traits_?$basic_stringbuf_vfunc03
// size=508 thunk=false
// signature: undefined std_2_D_V?$allocator_std_D_DU?$char_traits_?$basic_stringbuf_vfunc03()
// status: ok


int std_2_D_V__allocator_std_D_DU__char_traits___basic_stringbuf_vfunc03
              (longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulonglong uVar4;
  void *_Src;
  longlong lVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  void *pvVar8;
  ulonglong uVar9;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar6 = auStack_48;
  if ((*(byte *)(param_1 + 0x70) & 2) != 0) {
    return -1;
  }
  if (param_2 == -1) {
    return 0;
  }
  uVar7 = **(ulonglong **)(param_1 + 0x40);
  if (uVar7 == 0) {
    uVar9 = 0;
    _Src = (void *)**(longlong **)(param_1 + 0x18);
LAB_18020feb7:
    uVar7 = 0x20;
LAB_18020febc:
    pvVar8 = (void *)FUN_1802d8350(uVar7);
LAB_18020fec7:
    memcpy(pvVar8,_Src,uVar9);
    lVar5 = (longlong)pvVar8 + uVar9;
    *(longlong *)(param_1 + 0x68) = lVar5 + 1;
    **(undefined8 **)(param_1 + 0x20) = pvVar8;
    **(longlong **)(param_1 + 0x40) = lVar5;
    **(int **)(param_1 + 0x58) = ((int)pvVar8 - (int)lVar5) + (int)uVar7;
    if ((*(byte *)(param_1 + 0x70) & 4) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x68);
      lVar5 = (**(longlong **)(param_1 + 0x38) - (longlong)_Src) + (longlong)pvVar8;
      **(undefined8 **)(param_1 + 0x18) = pvVar8;
      **(longlong **)(param_1 + 0x38) = lVar5;
      **(int **)(param_1 + 0x50) = (int)uVar2 - (int)lVar5;
    }
    else {
      **(undefined8 **)(param_1 + 0x18) = pvVar8;
      **(undefined8 **)(param_1 + 0x38) = pvVar8;
      **(undefined4 **)(param_1 + 0x50) = 0;
    }
    if ((*(byte *)(param_1 + 0x70) & 1) == 0) goto LAB_18020ff7b;
    if (0xfff < uVar9) {
      pvVar8 = (void *)((longlong)_Src + (-8 - (longlong)*(void **)((longlong)_Src + -8)));
      _Src = *(void **)((longlong)_Src + -8);
      puVar6 = auStack_48;
      if ((void *)0x1f < pvVar8) goto LAB_18020ff69;
    }
  }
  else {
    iVar1 = **(int **)(param_1 + 0x58);
    uVar9 = uVar7 + (longlong)iVar1;
    if (uVar7 < uVar9) {
      **(int **)(param_1 + 0x58) = iVar1 + -1;
      puVar6 = (undefined1 *)**(longlong **)(param_1 + 0x40);
      **(longlong **)(param_1 + 0x40) = (longlong)(puVar6 + 1);
      *puVar6 = (char)param_2;
      *(ulonglong *)(param_1 + 0x68) = uVar7 + 1;
      return param_2;
    }
    _Src = (void *)**(longlong **)(param_1 + 0x18);
    uVar9 = uVar9 - (longlong)_Src;
    if (uVar9 < 0x20) goto LAB_18020feb7;
    if (uVar9 < 0x3fffffff) {
      uVar7 = uVar9 * 2;
      if (uVar7 == 0) {
        pvVar8 = (void *)0x0;
        goto LAB_18020fec7;
      }
      if (0xfff < uVar7) {
        uVar4 = uVar7 + 0x27;
        if (uVar4 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_180012fe0();
        }
        goto LAB_18020fe8e;
      }
      goto LAB_18020febc;
    }
    uVar7 = 0x7fffffff;
    if (0x7ffffffe < uVar9) {
      return -1;
    }
    uVar4 = 0x80000026;
LAB_18020fe8e:
    lVar5 = FUN_1802d8350(uVar4);
    pvVar8 = _Src;
    if (lVar5 != 0) {
      pvVar8 = (void *)(lVar5 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)pvVar8 - 8) = lVar5;
      goto LAB_18020fec7;
    }
LAB_18020ff69:
    _Src = pvVar8;
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar6 = auStack_40;
  }
  *(undefined8 *)(puVar6 + -8) = 0x18020ff7b;
  free(_Src);
LAB_18020ff7b:
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 1;
  **(int **)(param_1 + 0x58) = **(int **)(param_1 + 0x58) + -1;
  puVar6 = (undefined1 *)**(longlong **)(param_1 + 0x40);
  **(longlong **)(param_1 + 0x40) = (longlong)(puVar6 + 1);
  *puVar6 = (char)param_2;
  return param_2;
}



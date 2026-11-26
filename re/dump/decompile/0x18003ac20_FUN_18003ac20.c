// 0x18003ac20  FUN_18003ac20
// size=540 thunk=false
// signature: undefined FUN_18003ac20()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18003ac20(void)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  int iVar6;
  void *pvVar7;
  void *pvVar8;
  undefined1 *puVar9;
  void *pvVar10;
  longlong *plVar11;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [24];
  undefined *local_98;
  undefined4 local_90;
  int local_8c;
  void *local_88;
  void *pvStack_80;
  longlong local_78;
  undefined1 local_70 [32];
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  puVar9 = auStack_b8;
  if (DAT_1803eb3b0 != DAT_1803eb3b8) {
    local_88 = (void *)0x0;
    pvStack_80 = (void *)0x0;
    local_78 = 0;
    local_98 = &DAT_1803e77b0;
    iVar6 = _Mtx_lock(&DAT_1803e77b0);
    if (iVar6 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (DAT_1803e77fc == 0x7fffffff) {
      DAT_1803e77fc = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    lVar5 = DAT_1803eb3c0;
    pvVar7 = DAT_1803eb3b8;
    pvVar10 = DAT_1803eb3b0;
    local_88 = DAT_1803eb3b0;
    DAT_1803eb3b0 = (void *)0x0;
    pvStack_80 = DAT_1803eb3b8;
    DAT_1803eb3b8 = (void *)0x0;
    local_78 = DAT_1803eb3c0;
    DAT_1803eb3c0 = 0;
    _Mtx_unlock(&DAT_1803e77b0);
    if (pvVar10 != pvVar7) {
      plVar11 = (longlong *)((longlong)pvVar10 + 0x28);
      pvVar8 = pvVar10;
      do {
        FUN_18016d4c0(local_70,pvVar8);
        uVar1 = *(undefined4 *)((longlong)pvVar8 + 0x20);
        lVar2 = *plVar11;
        lVar3 = plVar11[1];
        if ((lVar2 == lVar3) || (DAT_1803ff968 == (code *)0x0)) {
          local_98 = local_70;
          local_8c = 0;
          local_90 = uVar1;
          FUN_1801fd890(lVar2,lVar3,&local_98);
        }
        else {
          iVar6 = (*DAT_1803ff968)(*(undefined8 *)((longlong)pvVar8 + 0x28),(int)lVar3 - (int)lVar2,
                                   *(undefined4 *)((longlong)pvVar8 + 0x24));
          local_98 = local_70;
          local_90 = uVar1;
          local_8c = iVar6;
          FUN_1801fd890();
          if ((iVar6 != 0) && (DAT_1803ff970 != (code *)0x0)) {
            (*DAT_1803ff970)(iVar6);
          }
        }
        FUN_18020e450(local_70);
        pvVar8 = (void *)((longlong)pvVar8 + 0x40);
        plVar11 = plVar11 + 8;
      } while (pvVar8 != pvVar7);
    }
    puVar9 = auStack_b8;
    pvVar8 = pvVar10;
    if (pvVar10 != (void *)0x0) {
      for (; pvVar8 != pvVar7; pvVar8 = (void *)((longlong)pvVar8 + 0x40)) {
        FUN_18003abb0(pvVar8);
      }
      pvVar7 = pvVar10;
      puVar9 = auStack_b8;
      if (0xfff < (lVar5 - (longlong)pvVar10 & 0xffffffffffffffc0U)) {
        pvVar7 = *(void **)((longlong)pvVar10 + -8);
        pvVar10 = (void *)((longlong)pvVar10 + (-8 - (longlong)pvVar7));
        puVar9 = auStack_b8;
        if ((void *)0x1f < pvVar10) {
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)(5);
          pvVar7 = pvVar10;
          puVar9 = auStack_b0;
        }
      }
      *(undefined8 *)(puVar9 + -8) = 0x18003ae10;
      free(pvVar7);
      *(undefined8 *)(puVar9 + 0x30) = 0;
      *(undefined8 *)(puVar9 + 0x38) = 0;
      *(undefined8 *)(puVar9 + 0x40) = 0;
    }
  }
  *(undefined8 *)(puVar9 + -8) = 0x18003ae2b;
  return;
}



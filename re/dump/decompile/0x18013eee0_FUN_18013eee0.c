// 0x18013eee0  FUN_18013eee0
// size=470 thunk=false
// signature: undefined FUN_18013eee0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18013eee0(void)

{
  longlong *plVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined *unaff_RBX;
  undefined8 *puVar8;
  undefined8 unaff_RBP;
  
  FUN_180138c70();
  FUN_180138480();
  iVar4 = _Mtx_lock(&DAT_1803e8610);
  puVar5 = DAT_1803e9e50;
  if (iVar4 != 0) {
LAB_18013f0aa:
    std::_Throw_Cpp_error(5);
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return uVar6;
  }
  if (DAT_1803e865c == 0x7fffffff) {
    DAT_1803e865c = 0x7ffffffe;
  }
  else {
    unaff_RBP = 0;
    for (puVar8 = DAT_1803e9e48; puVar8 != puVar5; puVar8 = puVar8 + 7) {
      plVar1 = (longlong *)puVar8[5];
      if (plVar1 != (longlong *)0x0) {
        iVar4 = FUN_1801318c0(plVar1);
        if (-1 < iVar4) {
          (**(code **)(*plVar1 + (longlong)iVar4 * 8))(plVar1);
        }
        plVar1 = (longlong *)puVar8[5];
        iVar4 = FUN_1801318c0(plVar1);
        if (-1 < iVar4) {
          (**(code **)(*plVar1 + (longlong)iVar4 * 8))(plVar1);
        }
        puVar8[6] = 0;
        if (puVar8[2] == 0) {
          puVar7 = (undefined8 *)&DAT_18033e9cc;
        }
        else {
          puVar7 = puVar8;
          if (0xf < (ulonglong)puVar8[3]) {
            puVar7 = (undefined8 *)*puVar8;
          }
        }
        FUN_180014410("[AS] signed \'%s\' out of local user %d (pipe %d) - the user itself is KEPT\n"
                      ,puVar7,*(undefined4 *)(puVar8 + 4),*(undefined4 *)((longlong)puVar8 + 0x24));
      }
    }
    _Mtx_unlock(&DAT_1803e8610);
    DAT_180409c80 = 0;
    DAT_1803e85b4 = 0xffffffff;
    LOCK();
    DAT_180409c30 = 0;
    UNLOCK();
    unaff_RBX = &DAT_1803e85c0;
    iVar4 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar4 != 0) goto LAB_18013f0aa;
    if (DAT_1803e860c != 0x7fffffff) goto LAB_18013f043;
    DAT_1803e860c = 0x7ffffffe;
  }
  std::_Throw_Cpp_error(6);
LAB_18013f043:
  puVar5 = &DAT_1803eb340;
  if (0xf < DAT_1803eb358) {
    puVar5 = DAT_1803eb340;
  }
  _DAT_1803eb350 = unaff_RBP;
  *(undefined1 *)puVar5 = 0;
  FUN_180212700(&DAT_1803e9e20,"logged off",10);
  _Mtx_unlock(unaff_RBX);
  uVar3 = DAT_180409c24;
  LOCK();
  DAT_180409c24 = (int)unaff_RBP;
  UNLOCK();
  LOCK();
  DAT_180409c59 = (char)unaff_RBP;
  UNLOCK();
  return (ulonglong)uVar3;
}



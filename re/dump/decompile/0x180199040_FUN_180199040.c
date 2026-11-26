// 0x180199040  FUN_180199040
// size=856 thunk=false
// signature: undefined FUN_180199040()
// status: ok


longlong FUN_180199040(ulonglong *param_1,ulonglong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong *puVar11;
  bool bVar12;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_68;
  ulonglong local_60;
  char local_58;
  undefined *local_50;
  ulonglong uStack_48;
  ulonglong *local_40;
  
  uVar2 = param_2[2];
  if ((9999 < DAT_18040975c) || (0x2000000 < DAT_180409708 + uVar2)) {
    LOCK();
    DAT_180409700 = DAT_180409700 + 1;
    UNLOCK();
    return (ulonglong)(uint3)((uint)DAT_18040975c >> 8) << 8;
  }
  uStack_48 = 0;
  local_50 = &DAT_1803e7bc0;
  local_c0 = param_3;
  iVar6 = _Mtx_trylock(&DAT_1803e7bc0);
  bVar12 = iVar6 == 0;
  uStack_48 = CONCAT71(uStack_48._1_7_,bVar12);
  if (((iVar6 == 0) && (DAT_18056df30 < 0x200)) && (DAT_180409708 + uVar2 < 0x2000001)) {
    if (20000 < DAT_18056dee0) {
      FUN_1802097d0(&DAT_18056ded0);
    }
    puVar11 = param_1;
    if (0xf < param_1[3]) {
      puVar11 = (ulonglong *)*param_1;
    }
    local_c8 = 0xcbf29ce484222325;
    uVar9 = 0;
    if (param_1[2] != 0) {
      do {
        local_c8 = (local_c8 ^ *(byte *)((longlong)puVar11 + uVar9)) * 0x100000001b3;
        uVar9 = uVar9 + 1;
      } while (uVar9 < param_1[2]);
    }
    local_c8 = local_c8 * 0x40 + param_3 + (local_c8 >> 2) + 0x9e3779b97f4a7c15 ^ local_c8;
    FUN_180214d90(&DAT_18056ded0,&local_60,&local_c8);
    if (local_58 != '\0') {
      LOCK();
      DAT_180409708 = DAT_180409708 + uVar2;
      UNLOCK();
      uVar2 = *param_1;
      uVar9 = param_1[1];
      uVar3 = param_1[2];
      uVar4 = param_1[3];
      param_1[2] = 0;
      param_1[3] = 0xf;
      *(undefined1 *)param_1 = 0;
      local_c8 = *param_2;
      uVar5 = param_2[1];
      local_88 = param_2[2];
      local_80 = param_2[3];
      param_2[2] = 0;
      param_2[3] = 0xf;
      *(undefined1 *)param_2 = 0;
      local_78 = local_c0;
      local_b8 = uVar2;
      uStack_b0 = uVar9;
      local_a8 = uVar3;
      local_a0 = uVar4;
      local_98 = local_c8;
      uStack_90 = uVar5;
      local_68 = local_88;
      local_60 = local_80;
      if (DAT_18056df20 <= DAT_18056df30 + 1) {
        FUN_18022bf90();
      }
      DAT_18056df28 = DAT_18056df28 & DAT_18056df20 - 1;
      uVar1 = DAT_18056df28 + DAT_18056df30;
      lVar10 = (uVar1 & DAT_18056df20 - 1) * 8;
      if (*(longlong *)(lVar10 + DAT_18056df18) == 0) {
        uVar8 = FUN_1802d8350(0x48);
        *(undefined8 *)(lVar10 + DAT_18056df18) = uVar8;
      }
      local_40 = *(ulonglong **)(DAT_18056df18 + (DAT_18056df20 - 1 & uVar1) * 8);
      *local_40 = uVar2;
      local_40[1] = uVar9;
      local_40[2] = uVar3;
      local_40[3] = uVar4;
      local_a8 = 0;
      local_a0 = 0xf;
      local_b8 = local_b8 & 0xffffffffffffff00;
      local_40[4] = local_c8;
      local_40[5] = uVar5;
      local_40[6] = local_68;
      local_40[7] = local_60;
      local_88 = 0;
      local_80 = 0xf;
      local_98 = local_98 & 0xffffffffffffff00;
      local_40[8] = local_c0;
      DAT_18056df30 = DAT_18056df30 + 1;
      FUN_18020e450(&local_98);
      FUN_18020e450(&local_b8);
      _Mtx_unlock(&DAT_1803e7bc0);
      bVar12 = false;
      uStack_48 = uStack_48 & 0xffffffffffffff00;
      _Cnd_signal(&DAT_180409710);
      lVar10 = 1;
      goto LAB_180199361;
    }
    piVar7 = &DAT_180409764;
  }
  else {
    piVar7 = &DAT_180409700;
  }
  LOCK();
  *piVar7 = *piVar7 + 1;
  UNLOCK();
  lVar10 = 0;
LAB_180199361:
  if (bVar12) {
    _Mtx_unlock(&DAT_1803e7bc0);
  }
  return lVar10;
}



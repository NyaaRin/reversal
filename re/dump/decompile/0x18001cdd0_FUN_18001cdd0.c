// 0x18001cdd0  FUN_18001cdd0
// size=570 thunk=false
// signature: undefined FUN_18001cdd0()
// status: ok


uint FUN_18001cdd0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  uint uVar5;
  DWORD DVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  undefined1 uVar13;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined1 *local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [40];
  
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x20))();
  if (plVar7 != (longlong *)0x0) {
    iVar2 = (**(code **)(*plVar7 + 0x48))(plVar7);
    if (iVar2 - 1U < 0x80) {
      DVar3 = GetTickCount();
      lVar1 = (longlong)iVar2 * 4;
      if ((*(int *)(&DAT_1803fd130 + lVar1) != 0) &&
         (DVar3 - *(int *)(&DAT_1803fd130 + lVar1) < 200)) {
        return *(uint *)(&DAT_180425560 + lVar1);
      }
      uVar13 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      FUN_18001d080(&local_d8,"DT_PlayerResource",0x11);
      uVar8 = FUN_18016d4c0(local_88,&local_d8);
      uVar8 = FUN_180018ef0(&DAT_1803fac80,uVar8);
      FUN_18020e450(&local_d8);
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      FUN_18001d080(&local_b8,"m_iArmor",8);
      local_98 = &local_b8;
      local_90 = local_68;
      uVar9 = FUN_18016d4c0(local_68,&local_b8);
      iVar4 = FUN_180018c10(uVar8,uVar9);
      FUN_18020e450(&local_b8);
      if (DAT_180400ae0 == '\0') {
        DAT_180400ae0 = '\x01';
        FUN_180014410("[ARMOR] DT_PlayerResource::m_iArmor offset = 0x%X\n",iVar4);
      }
      uVar11 = 0;
      if (((((iVar4 < 1) || (lVar10 = FUN_18001c860(), uVar11 = 0, lVar10 == 0)) ||
           (uVar12 = *(uint *)(lVar1 + iVar4 + lVar10), 1000 < uVar12)) ||
          (uVar13 = 1, uVar11 = uVar12, (int)uVar12 < 1)) &&
         (((uVar12 = uVar11, DAT_180426010 != (code *)0x0 &&
           (uVar5 = (*DAT_180426010)(iVar2,0xffffffff), -1 < (int)uVar5)) &&
          ((uVar12 = uVar5, DAT_1803fcf1c == '\0' && (0 < (int)uVar5)))))) {
        DAT_1803fcf1c = '\x01';
        FUN_180014410("[ARMOR] lua fallback hit: entIdx=%d netvar=%d(ok=%d) lua=%d\n",iVar2,uVar11,
                      uVar13,uVar5);
      }
      if ((DAT_1804253c8 == '\0') && (0 < (int)uVar12)) {
        DAT_1804253c8 = '\x01';
        FUN_180014410("[ARMOR] first non-zero armor: entIdx=%d armor=%d netvarOk=%d\n",iVar2,uVar12,
                      uVar13);
      }
      DVar6 = 1;
      if (DVar3 != 0) {
        DVar6 = DVar3;
      }
      *(DWORD *)(&DAT_1803fd130 + lVar1) = DVar6;
      *(uint *)(&DAT_180425560 + lVar1) = uVar12;
      return uVar12;
    }
  }
  return 0;
}



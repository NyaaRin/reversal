// 0x18026e050  FUN_18026e050
// size=1190 thunk=false
// signature: undefined FUN_18026e050()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18026e050(void)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  void *_Dst;
  char *pcVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  char *local_b8;
  uint local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined8 local_a0;
  code *local_98;
  code *local_90;
  code *local_88;
  code *local_80;
  undefined8 local_78;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_e8;
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar7 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  puVar2 = *(undefined1 **)(lVar7 + 0xec0);
  puVar9 = (undefined8 *)0x0;
  local_ac = 0;
  local_a0 = 0;
  local_78 = 0;
  local_b8 = "Window";
  uVar10 = 0xffffffff;
  pcVar6 = "Window";
  uVar11 = 0x57;
  do {
    pcVar6 = pcVar6 + 1;
    if ((((char)uVar11 == '#') && (*pcVar6 == 0x23)) && (pcVar6[1] == 0x23)) {
      uVar10 = 0xffffffff;
      pcVar6 = pcVar6 + 2;
    }
    else {
      uVar10 = (ulonglong)
               ((uint)(uVar10 >> 8) ^ *(uint *)(&DAT_180331380 + (uVar10 & 0xff ^ uVar11) * 4));
    }
    uVar11 = (ulonglong)(byte)*pcVar6;
  } while (*pcVar6 != 0);
  local_b0 = ~(uint)uVar10;
  local_a8 = FUN_1802886f0;
  local_98 = FUN_180288760;
  local_90 = FUN_180288800;
  local_88 = FUN_1802888f0;
  local_80 = FUN_1802889d0;
  FUN_180287f50(&local_b8);
  local_ac = 0;
  local_a0 = 0;
  local_78 = 0;
  local_b8 = "Table";
  uVar10 = 0xffffffff;
  pcVar6 = "Table";
  uVar11 = 0x54;
  do {
    pcVar6 = pcVar6 + 1;
    if ((((char)uVar11 == '#') && (*pcVar6 == 0x23)) && (pcVar6[1] == 0x23)) {
      uVar10 = 0xffffffff;
      pcVar6 = pcVar6 + 2;
    }
    else {
      uVar10 = (ulonglong)
               ((uint)(uVar10 >> 8) ^ *(uint *)(&DAT_180331380 + (uVar10 & 0xff ^ uVar11) * 4));
    }
    uVar11 = (ulonglong)(byte)*pcVar6;
  } while (*pcVar6 != 0);
  local_b0 = ~(uint)uVar10;
  local_a8 = FUN_1802a9070;
  local_98 = FUN_1802a9150;
  local_90 = FUN_1802a9210;
  local_88 = (code *)&LAB_1802a90f0;
  local_80 = FUN_1802a94c0;
  FUN_180287f50(&local_b8);
  if (*(char *)(lVar7 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar7 = *(longlong *)(lVar7 + 0xec0);
  *(undefined **)(lVar7 + 0x2808) = PTR_s_Dear_ImGui_1_92_8__19280__180331208;
  *(undefined **)(lVar7 + 0x2810) = PTR_s_Size_column_to_fit___SizeOne_180331218;
  *(undefined **)(lVar7 + 0x2818) = PTR_s_Size_all_columns_to_fit___SizeAl_180331228;
  *(undefined **)(lVar7 + 0x2820) = PTR_s_Size_all_columns_to_default___Si_180331238;
  *(undefined **)(lVar7 + 0x2828) = PTR_s_Reset_order___ResetOrder_180331248;
  *(undefined **)(lVar7 + 0x2830) = PTR_s__Main_menu_bar__180331258;
  *(undefined **)(lVar7 + 0x2838) = PTR_s__Popup__180331268;
  *(undefined **)(lVar7 + 0x2840) = PTR_s__Untitled__180331278;
  *(undefined **)(lVar7 + 0x2848) = PTR_s_Open___s__180331288;
  *(undefined **)(lVar7 + 0x2850) = PTR_s_Copy_Link___CopyLink_180331298;
  *(code **)(puVar2 + 0xc00) = FUN_180288cb0;
  *(code **)(puVar2 + 0xc08) = FUN_180288de0;
  *(code **)(puVar2 + 0xc18) = FUN_180288eb0;
  *(code **)(puVar2 + 0xc28) = FUN_180289020;
  puVar5 = (undefined8 *)FUN_18026f580(0xe0);
  local_60 = local_c8;
  local_68 = puVar5;
  local_58 = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    local_50 = puVar5 + 0xb;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    puVar5[0x10] = 0;
    puVar5[0x11] = 0;
    *(undefined1 *)local_50 = 0;
    puVar5[0xc] = 0;
    *(undefined4 *)((longlong)puVar5 + 0x5c) = 0;
    FUN_18028a820(puVar5 + 0xd,0);
    puVar5[0x11] = 0;
    puVar5[0x10] = 0;
    puVar5[0xf] = 0;
    puVar5[0x12] = 0;
    puVar5[0x13] = 0;
    local_48 = puVar5 + 0x14;
    puVar5[0x16] = 0;
    puVar5[0x17] = 0;
    *local_48 = 0;
    puVar5[0x15] = 0;
    puVar5[0x16] = 0;
    puVar5[0x17] = 0;
    puVar5[0x18] = 0;
    puVar5[0x19] = 0;
    puVar5[0x1a] = 0;
    puVar5[0x1b] = 0;
    *(undefined4 *)((longlong)puVar5 + 0x44) = 0xbf800000;
    *(undefined4 *)(puVar5 + 8) = 0xbf800000;
    puVar5[10] = 0;
    puVar5[9] = 0;
    puVar9 = puVar5;
  }
  *(undefined4 *)puVar9 = 0x11111111;
  iVar1 = *(int *)(puVar2 + 0x205c);
  if (*(int *)(puVar2 + 0x2058) == iVar1) {
    iVar8 = *(int *)(puVar2 + 0x2058) + 1;
    if (iVar1 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar1 / 2 + iVar1;
    }
    if (iVar8 < iVar4) {
      iVar8 = iVar4;
    }
    if (iVar1 < iVar8) {
      _Dst = (void *)FUN_18026f580((longlong)iVar8 << 3);
      if (*(void **)(puVar2 + 0x2060) != (void *)0x0) {
        memcpy(_Dst,*(void **)(puVar2 + 0x2060),(longlong)*(int *)(puVar2 + 0x2058) << 3);
        FUN_18026f680(*(undefined8 *)(puVar2 + 0x2060));
      }
      *(void **)(puVar2 + 0x2060) = _Dst;
      *(int *)(puVar2 + 0x205c) = iVar8;
    }
  }
  *(undefined8 **)(*(longlong *)(puVar2 + 0x2060) + (longlong)*(int *)(puVar2 + 0x2058) * 8) =
       puVar9;
  *(int *)(puVar2 + 0x2058) = *(int *)(puVar2 + 0x2058) + 1;
  local_c8[0] = 0;
  FUN_18028aac0(puVar2 + 0x2ae8,0xc01,local_c8);
  uVar10 = 0x200;
  do {
    uVar3 = (uint)uVar10;
    if (((uVar3 - 0x200 < 0x3c) &&
        ((0xfffffffff001001U >> ((ulonglong)(uVar3 - 0x200) & 0x3f) & 1) != 0)) ||
       ((uVar3 - 0x254 < 0x21 && ((0x17fff06ffU >> ((ulonglong)(uVar3 - 0x254) & 0x3f) & 1) != 0))))
    {
      lVar7 = (longlong)(uVar10 - 0x200) >> 5;
      *(uint *)(puVar2 + lVar7 * 4 + 0x15f8) =
           *(uint *)(puVar2 + lVar7 * 4 + 0x15f8) | 1 << (uVar3 & 0x1f);
    }
    uVar10 = (ulonglong)(uVar3 + 1);
  } while ((int)(uVar3 + 1) < 0x29b);
  *(undefined1 **)(puVar2 + 0x12b8) = puVar2;
  FUN_18027a430(*(undefined8 *)(puVar2 + 0x60));
  *puVar2 = 1;
  return;
}



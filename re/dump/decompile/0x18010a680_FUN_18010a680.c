// 0x18010a680  FUN_18010a680
// size=1287 thunk=false
// signature: undefined FUN_18010a680()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18010a680(longlong *param_1,code *param_2,undefined8 param_3,longlong *param_4,
                  undefined4 *param_5,void *param_6,undefined4 *param_7,undefined4 *param_8,
                  undefined1 param_9,int param_10)

{
  uint uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  char *pcVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined *_Dst;
  undefined1 auStack_b8 [32];
  undefined4 local_98 [2];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  if (DAT_1803fa608 == 0) {
    iVar8 = -1;
  }
  else {
    iVar8 = *(int *)(DAT_1803fa608 + 4);
  }
  if (DAT_1803e7b88 == iVar8) {
    if (0x17 < DAT_180409640) {
      return;
    }
  }
  else {
    DAT_1804096b0 = DAT_1804096b0 ^ 1;
    DAT_180401630 = 0;
    DAT_180409640 = 0;
    PTR_DAT_1803e7b90 = (undefined *)(&DAT_1805bef10 + (longlong)(int)DAT_1804096b0 * 0x420);
    DAT_1803e7b88 = iVar8;
  }
  local_68 = param_3;
  cVar7 = FUN_1801094c0();
  puVar6 = PTR_DAT_1803e7b90;
  if (cVar7 == '\0') goto LAB_18010a9e3;
  lVar12 = (longlong)DAT_180409640;
  lVar16 = lVar12 * 0x160;
  DAT_180409640 = DAT_180409640 + 1;
  *(code **)(PTR_DAT_1803e7b90 + lVar16) = param_2;
  *(undefined8 *)(puVar6 + lVar16 + 8) = param_3;
  lVar3 = param_4[1];
  *(longlong *)(puVar6 + lVar16 + 0x10) = *param_4;
  *(longlong *)((longlong)(puVar6 + lVar16 + 0x10) + 8) = lVar3;
  lVar3 = param_4[3];
  *(longlong *)(puVar6 + lVar16 + 0x20) = param_4[2];
  *(longlong *)((longlong)(puVar6 + lVar16 + 0x20) + 8) = lVar3;
  lVar3 = param_4[5];
  *(longlong *)(puVar6 + lVar16 + 0x30) = param_4[4];
  *(longlong *)((longlong)(puVar6 + lVar16 + 0x30) + 8) = lVar3;
  *(undefined4 *)(puVar6 + lVar16 + 0x40) = *param_5;
  *(undefined4 *)(puVar6 + lVar16 + 0x44) = param_5[1];
  *(undefined4 *)(puVar6 + lVar16 + 0x48) = param_5[2];
  *(undefined4 *)(puVar6 + lVar16 + 0x4c) = param_5[3];
  *(undefined4 *)(puVar6 + lVar16 + 0x50) = param_5[4];
  *(undefined4 *)(puVar6 + lVar16 + 0x54) = param_5[5];
  *(undefined8 *)(puVar6 + lVar16 + 0x58) = *(undefined8 *)(param_5 + 6);
  *(undefined8 *)(puVar6 + lVar16 + 0x60) = *(undefined8 *)(param_5 + 8);
  *(undefined8 *)(puVar6 + lVar16 + 0x68) = *(undefined8 *)(param_5 + 10);
  *(undefined8 *)(puVar6 + lVar16 + 0x70) = *(undefined8 *)(param_5 + 0xc);
  *(undefined8 *)(puVar6 + lVar16 + 0x78) = *(undefined8 *)(param_5 + 0xe);
  *(undefined4 *)(puVar6 + lVar16 + 0x80) = param_5[0x10];
  *(undefined4 *)(puVar6 + lVar16 + 0x84) = param_5[0x11];
  *(undefined4 *)(puVar6 + lVar16 + 0x88) = param_5[0x12];
  *(undefined4 *)(puVar6 + lVar16 + 0x8c) = param_5[0x13];
  *(undefined4 *)(puVar6 + lVar16 + 0x90) = param_5[0x14];
  *(undefined2 *)(puVar6 + lVar16 + 0x94) = *(undefined2 *)(param_5 + 0x15);
  puVar14 = *(undefined8 **)(param_5 + 10);
  if (puVar14 != (undefined8 *)0x0) {
    uVar4 = puVar14[1];
    puVar9 = (undefined8 *)(puVar6 + lVar16 + 0xa0);
    *puVar9 = *puVar14;
    puVar9[1] = uVar4;
    uVar4 = puVar14[3];
    puVar9[2] = puVar14[2];
    puVar9[3] = uVar4;
    uVar4 = puVar14[4];
    uVar5 = puVar14[5];
    *(undefined8 **)(puVar6 + lVar16 + 0x68) = puVar9;
    puVar9[4] = uVar4;
    puVar9[5] = uVar5;
  }
  puVar14 = *(undefined8 **)(param_5 + 0xc);
  if (puVar14 != (undefined8 *)0x0) {
    uVar4 = puVar14[1];
    puVar9 = (undefined8 *)(puVar6 + lVar16 + 0x100);
    *puVar9 = *puVar14;
    puVar9[1] = uVar4;
    uVar4 = puVar14[3];
    puVar9[2] = puVar14[2];
    puVar9[3] = uVar4;
    uVar4 = puVar14[4];
    uVar5 = puVar14[5];
    *(undefined8 **)(puVar6 + lVar16 + 0x70) = puVar9;
    puVar9[4] = uVar4;
    puVar9[5] = uVar5;
  }
  puVar2 = *(undefined4 **)(param_5 + 0xe);
  if (puVar2 != (undefined4 *)0x0) {
    puVar13 = (undefined4 *)(puVar6 + lVar16 + 0x130);
    *puVar13 = *puVar2;
    puVar13[1] = puVar2[1];
    puVar13[2] = puVar2[2];
    *(undefined4 **)(puVar6 + lVar16 + 0x78) = puVar13;
  }
  puVar14 = (undefined8 *)param_4[3];
  if (puVar14 != (undefined8 *)0x0) {
    uVar4 = puVar14[1];
    puVar9 = (undefined8 *)(puVar6 + lVar16 + 0xd0);
    *puVar9 = *puVar14;
    puVar9[1] = uVar4;
    uVar4 = puVar14[3];
    puVar9[2] = puVar14[2];
    puVar9[3] = uVar4;
    uVar4 = puVar14[4];
    uVar5 = puVar14[5];
    *(undefined8 **)(puVar6 + lVar16 + 0x28) = puVar9;
    puVar9[4] = uVar4;
    puVar9[5] = uVar5;
  }
  if ((param_6 == (void *)0x0) || (*param_4 == 0)) {
LAB_18010a92d:
    _Dst = (undefined *)0x0;
  }
  else {
    uVar1 = *(uint *)(*param_4 + 0x9c);
    uVar15 = 0x80;
    if (((int)uVar1 < 0x81) && (uVar15 = uVar1, (int)uVar1 < 1)) goto LAB_18010a92d;
    _Dst = &DAT_180570820 + (lVar12 + (longlong)(int)DAT_1804096b0 * 0x18) * 0x1800;
    memcpy(_Dst,param_6,(ulonglong)uVar15 * 0x30);
  }
  *(undefined **)(puVar6 + lVar16 + 0x98) = _Dst;
  *(undefined4 *)(puVar6 + lVar16 + 0x13c) = *param_7;
  *(undefined4 *)(puVar6 + lVar16 + 0x148) = *param_8;
  *(undefined4 *)(puVar6 + lVar16 + 0x140) = param_7[1];
  *(undefined4 *)(puVar6 + lVar16 + 0x14c) = param_8[1];
  *(undefined4 *)(puVar6 + lVar16 + 0x144) = param_7[2];
  *(undefined4 *)(puVar6 + lVar16 + 0x150) = param_8[2];
  puVar6[lVar16 + 0x154] = param_9;
  puVar14 = (undefined8 *)local_98;
  if (0 < param_10) {
    puVar14 = (undefined8 *)&param_10;
  }
  local_70 = CONCAT44(local_70._4_4_,10);
  local_98[0] = 1;
  puVar9 = &local_70;
  if (param_10 < 0xb) {
    puVar9 = puVar14;
  }
  *(undefined4 *)(puVar6 + lVar16 + 0x15c) = 0;
  *(undefined4 *)(puVar6 + lVar16 + 0x158) = *(undefined4 *)puVar9;
  param_3 = local_68;
LAB_18010a9e3:
  cVar7 = FUN_180109540();
  plVar10 = DAT_1803fa598;
  uVar17 = (ulonglong)_tls_index;
  if (cVar7 != '\0') {
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar17 * 8);
    lVar12 = *DAT_1803fa598;
    local_68 = 0x3f8000003f800000;
    local_60 = 0x3f800000;
    *(undefined1 *)(lVar3 + 0xf4a) = 1;
    (**(code **)(lVar12 + 8))(plVar10,0,0);
    (**(code **)(*DAT_1803f9280 + 0x20))(DAT_1803f9280,DAT_180380bb0);
    (**(code **)(*DAT_1803f9280 + 0x30))(DAT_1803f9280,&local_68);
    if (param_1 == (longlong *)0x0) {
      (*param_2)(param_3,param_4,param_5,param_6);
    }
    else {
      (**(code **)(*param_1 + 0x48))(param_1,0,DAT_180380980);
      (**(code **)(*param_1 + 0x240))(param_1,1,0);
      (*param_2)(param_3,param_4,param_5,param_6);
      (**(code **)(*param_1 + 0x240))(param_1,0,1);
      (**(code **)(*param_1 + 0x48))(param_1,0,DAT_180380bb0);
    }
    *(undefined1 *)(lVar3 + 0xf4a) = 0;
  }
  if (DAT_18040964c == '\0') {
    local_68 = 0x93fd561a96ab0c67;
    local_70 = 0xfd3d160b71592661;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_90,&local_68);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_80,&local_70);
    pcVar11 = (char *)FUN_1801fcfc0(*plVar10 + 0x28);
    if (*pcVar11 != '\0') {
      *(undefined1 *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar17 * 8) + 0xf6e) = 1;
    }
  }
  DAT_180401630 = DAT_180401630 + 1;
  DAT_180409660 = DAT_180409660 + 1;
  return;
}



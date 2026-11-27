// 180273060  FUN_180273060
// signature: undefined FUN_180273060()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_180273060(longlong param_1,uint param_2,undefined8 *param_3,uint param_4,uint param_5)

{
  undefined4 uVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 uVar7;
  longlong lVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_98 [32];
  longlong local_78;
  uint local_70;
  float local_68;
  float fStack_64;
  ulonglong local_60;
  
  local_60 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar3 + 0xec0);
  uVar11 = param_4 & 0xfffffffb;
  if ((param_4 & 0x10) == 0) {
    uVar11 = param_4;
  }
  lVar5 = *(longlong *)(lVar4 + 0x1520);
  uVar10 = uVar11 & 0xfffffff7;
  if ((uVar11 & 0x20) == 0) {
    uVar10 = uVar11;
  }
  uVar11 = 0x1000041;
  if ((uVar10 & 0x70) == 0) {
    uVar11 = 0x1000001;
  }
  param_5 = uVar11 | *(uint *)(lVar5 + 0x14) & 4 | param_5;
  if ((uVar10 & 0xc) == 0) {
    param_5 = param_5 | 0x102;
  }
  if ((char)uVar10 < '\0') {
    FUN_18026a810(3,lVar4 + 0xe20);
    FUN_18026a940(7,*(undefined4 *)(lVar4 + 0xccc));
    FUN_18026a940(8,*(undefined4 *)(lVar4 + 0xcd0));
    FUN_18026aad0(2,lVar4 + 0xcc4);
    uVar10 = uVar10 | 3;
    param_5 = param_5 | 4;
  }
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(*(longlong *)(lVar3 + 0xec0) + 0x1520);
  if ((*(longlong *)(lVar6 + 0x1c8) != 0) ||
     (lVar8 = 0x280, *(longlong *)(*(longlong *)(lVar3 + 0xec0) + 0x2368) != 0)) {
    lVar8 = 0x250;
  }
  if ((uVar10 & 0x20) == 0) {
    fVar14 = *(float *)(lVar6 + 4 + lVar8) - *(float *)(lVar6 + 0x11c);
  }
  else {
    fVar14 = 0.0;
  }
  if ((uVar10 & 0x10) == 0) {
    fVar13 = *(float *)(lVar6 + lVar8) - *(float *)(lVar6 + 0x118);
  }
  else {
    fVar13 = 0.0;
  }
  FUN_18027faa0(&local_68,*param_3,fVar13,fVar14);
  uVar11 = uVar10;
  if (((*(byte *)(lVar4 + 0x1f48) & 2) != 0) && ((*(byte *)(lVar4 + 0x1f50) & 1) != 0)) {
    fVar14 = *(float *)(lVar4 + 0x1f68);
    if (0.0 < fVar14) {
      local_68 = fVar14;
    }
    uVar11 = uVar10 & 0xfffffffb;
    if (fVar14 <= 0.0) {
      uVar11 = uVar10;
    }
    if (0.0 < *(float *)(lVar4 + 0x1f6c)) {
      uVar11 = uVar11 & 0xfffffff7;
      fStack_64 = *(float *)(lVar4 + 0x1f6c);
    }
  }
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar3 + 0xec0);
  *(uint *)(lVar3 + 0x1f48) = *(uint *)(lVar3 + 0x1f48) | 2;
  *(ulonglong *)(lVar3 + 0x1f68) = CONCAT44(fStack_64,local_68);
  *(undefined4 *)(lVar3 + 0x1f50) = 1;
  if ((*(uint *)(lVar4 + 0x1f48) >> 9 & 1) == 0) {
    *(uint *)(lVar4 + 0x1f84) = uVar11;
  }
  else {
    *(uint *)(lVar4 + 0x1f84) = *(uint *)(lVar4 + 0x1f84) | uVar11;
  }
  *(uint *)(lVar4 + 0x1f48) = *(uint *)(lVar4 + 0x1f48) | 0x200;
  if (param_1 == 0) {
    local_78 = CONCAT44(local_78._4_4_,param_2);
    FUN_1802687d0(&local_68,0,"%s/%08X",*(undefined8 *)(lVar5 + 8));
  }
  else {
    local_78 = param_1;
    local_70 = param_2;
    FUN_1802687d0(&local_68,0,"%s/%s_%08X",*(undefined8 *)(lVar5 + 8));
  }
  uVar1 = *(undefined4 *)(lVar4 + 0xcb8);
  if ((uVar11 & 1) == 0) {
    *(undefined4 *)(lVar4 + 0xcb8) = 0;
  }
  uVar7 = FUN_180276630(CONCAT44(fStack_64,local_68),0,param_5);
  *(undefined4 *)(lVar4 + 0xcb8) = uVar1;
  if ((char)uVar11 < '\0') {
    FUN_18026abb0(3);
    FUN_18026a890(1);
  }
  lVar3 = *(longlong *)(lVar4 + 0x1520);
  *(uint *)(lVar3 + 0x90) = param_2;
  if (*(short *)(lVar3 + 0xda) == 1) {
    *(undefined8 *)(lVar5 + 0x118) = *(undefined8 *)(lVar3 + 0x28);
  }
  pbVar9 = &DAT_18037e059;
  uVar12 = 0x23;
  uVar10 = ~param_2;
  do {
    if ((((char)uVar12 == '#') && (*pbVar9 == 0x23)) && (pbVar9[1] == 0x23)) {
      pbVar9 = pbVar9 + 2;
      uVar10 = ~param_2;
    }
    else {
      uVar10 = uVar10 >> 8 ^ *(uint *)(&DAT_180331380 + ((ulonglong)uVar10 & 0xff ^ uVar12) * 4);
    }
    bVar2 = *pbVar9;
    uVar12 = (ulonglong)bVar2;
    pbVar9 = pbVar9 + 1;
  } while (bVar2 != 0);
  if (*(uint *)(lVar4 + 0x1594) == ~uVar10) {
    FUN_18026ea90(0,0);
  }
  if (((*(uint *)(lVar4 + 0x2084) == param_2) && ((uVar11 >> 8 & 1) == 0)) &&
     ((*(short *)(lVar3 + 0x174) != 0 || (*(char *)(lVar3 + 0x17a) != '\0')))) {
    FUN_1802827b0(lVar3,0);
    FUN_180283e70(lVar3,0);
    FUN_18026ea90(~uVar10,lVar3);
    *(undefined4 *)(lVar4 + 0x15b4) = *(undefined4 *)(lVar4 + 0x20c0);
  }
  return uVar7;
}



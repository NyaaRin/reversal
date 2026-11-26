// 18026ee60  FUN_18026ee60
// signature: undefined FUN_18026ee60()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18026ee60(uint param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float *pfVar6;
  uint uVar7;
  float *pfVar8;
  float fVar9;
  undefined1 auStack_58 [32];
  float local_38;
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pfVar6 = ThreadLocalStoragePointer;
  if (*(char *)(lVar3 + 0x10) == '\0') {
    pfVar6 = (float *)__dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar3 + 0xec0);
  lVar5 = *(longlong *)(lVar4 + 0x1520);
  if ((param_1 & 0xfffc005f) != 0) {
    pfVar6 = (float *)FUN_18027e9c0("Invalid flags for IsItemHovered()!");
  }
  if (((*(char *)(lVar4 + 0x2069) == '\0') || (*(char *)(lVar4 + 0x2068) == '\0')) ||
     ((param_1 >> 0xb & 1) != 0)) {
    if ((*(uint *)(lVar4 + 0x1f00) & 1) == 0) goto LAB_18026f14c;
    if ((param_1 >> 0xc & 1) != 0) {
      uVar7 = *(uint *)(lVar4 + 0x1208) & 0xfffe3fff;
      if ((param_1 & 0x1c000) == 0) {
        uVar7 = *(uint *)(lVar4 + 0x1208);
      }
      pfVar6 = (float *)(ulonglong)uVar7;
      param_1 = param_1 | uVar7;
    }
    if (((*(longlong *)(lVar4 + 0x1528) != lVar5) && (-1 < (char)*(uint *)(lVar4 + 0x1f00))) &&
       ((param_1 >> 9 & 1) == 0)) goto LAB_18026f14c;
    uVar7 = *(uint *)(lVar4 + 0x1ef8);
    if (-1 < (char)param_1) {
      uVar2 = *(uint *)(lVar4 + 0x1594);
      pfVar6 = (float *)(ulonglong)uVar2;
      if ((((uVar2 != 0) && (uVar2 != uVar7)) &&
          ((*(char *)(lVar4 + 0x15a1) == '\0' && (*(char *)(lVar4 + 0x15a6) == '\0')))) &&
         ((uVar2 != *(uint *)(lVar5 + 0x8c) ||
          ((uVar7 != 0 && (*(uint *)(lVar4 + 0x15a8) != uVar7)))))) goto LAB_18026f14c;
    }
    pfVar6 = (float *)FUN_18026ed90(lVar5,param_1);
    if (((char)pfVar6 == '\0') && ((*(uint *)(lVar4 + 0x1efc) & 0x2000) == 0)) goto LAB_18026f14c;
    uVar2 = *(uint *)(lVar4 + 0x1efc);
    pfVar6 = (float *)(ulonglong)uVar2;
    if (((((uVar2 & 0x40) != 0) && ((param_1 >> 10 & 1) == 0)) ||
        ((uVar7 == *(uint *)(lVar5 + 0x8c) && (*(char *)(lVar5 + 0xce) != '\0')))) ||
       (((((uVar2 >> 0xe & 1) != 0 && (uVar7 != 0)) && ((param_1 >> 8 & 1) == 0)) &&
        (uVar7 = *(uint *)(lVar4 + 0x1ef8), pfVar6 = (float *)(ulonglong)uVar7,
        *(uint *)(lVar4 + 0x1580) != uVar7)))) goto LAB_18026f14c;
  }
  else {
    if (*(char *)(lVar3 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pfVar6 = *(float **)(lVar3 + 0xec0);
    if (((pfVar6[0x81b] != pfVar6[0x7be]) || (pfVar6[0x81b] == 0.0)) ||
       (((*(byte *)(lVar4 + 0x1efc) & 0x40) != 0 && ((param_1 >> 10 & 1) == 0))))
    goto LAB_18026f14c;
    if ((param_1 >> 0xc & 1) != 0) {
      uVar7 = *(uint *)(lVar4 + 0x120c) & 0xfffe3fff;
      if ((param_1 & 0x1c000) == 0) {
        uVar7 = *(uint *)(lVar4 + 0x120c);
      }
      param_1 = param_1 | uVar7;
    }
  }
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pfVar6 = *(float **)(lVar3 + 0xec0);
  if ((param_1 >> 0x10 & 1) == 0) {
    if ((param_1 >> 0xf & 1) != 0) {
      fVar9 = pfVar6[0x480];
      goto LAB_18026f07d;
    }
    fVar9 = 0.0;
LAB_18026f08a:
    if ((param_1 >> 0xd & 1) == 0) {
      return CONCAT71((int7)((ulonglong)pfVar6 >> 8),1);
    }
  }
  else {
    fVar9 = pfVar6[0x481];
LAB_18026f07d:
    if (fVar9 <= 0.0) goto LAB_18026f08a;
  }
  uVar7 = *(uint *)(lVar4 + 0x1ef8);
  if (uVar7 == 0) {
    pfVar8 = &local_38;
    uVar7 = ~*(uint *)(*(longlong *)(lVar5 + 0x110) + -4 + (longlong)*(int *)(lVar5 + 0x108) * 4);
    local_38 = *(float *)(lVar4 + 0x1f04) - *(float *)(lVar5 + 0x128);
    local_34 = *(float *)(lVar4 + 0x1f08) - *(float *)(lVar5 + 300);
    do {
      bVar1 = *(byte *)pfVar8;
      pfVar8 = (float *)((longlong)pfVar8 + 1);
      pfVar6 = (float *)&local_30;
      uVar7 = uVar7 >> 8 ^
              *(uint *)(&DAT_180331380 + ((ulonglong)(uVar7 & 0xff) ^ (ulonglong)bVar1) * 4);
    } while (pfVar8 < pfVar6);
    uVar7 = ~uVar7;
  }
  if (((param_1 >> 0x11 & 1) != 0) && (*(uint *)(lVar4 + 0x24f4) != uVar7)) {
    *(undefined4 *)(lVar4 + 0x24f8) = 0;
  }
  *(uint *)(lVar4 + 0x24f0) = uVar7;
  if (((param_1 >> 0xd & 1) == 0) || (*(uint *)(lVar4 + 0x2500) == uVar7)) {
    return CONCAT71((int7)((ulonglong)pfVar6 >> 8),
                    fVar9 < *(float *)(lVar4 + 0x24f8) || fVar9 == *(float *)(lVar4 + 0x24f8));
  }
LAB_18026f14c:
  return (ulonglong)pfVar6 & 0xffffffffffffff00;
}



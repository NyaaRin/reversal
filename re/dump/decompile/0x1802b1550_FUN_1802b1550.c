// 0x1802b1550  FUN_1802b1550
// size=528 thunk=false
// signature: undefined FUN_1802b1550()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1802b1550(char *param_1,int param_2,int *param_3,byte *param_4,void *param_5)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  byte *pbVar8;
  ulonglong uVar9;
  undefined4 extraout_var;
  int *piVar10;
  byte *pbVar11;
  size_t *psVar12;
  undefined1 auStack_98 [32];
  int local_78 [2];
  undefined1 local_70 [8];
  byte local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  psVar12 = (size_t *)(&DAT_180338970 + (longlong)param_2 * 0x20);
  memcpy(local_70,param_3,*psVar12);
  for (; (cVar1 = *param_1, cVar1 == ' ' || (cVar1 == '\t')); param_1 = param_1 + 1) {
  }
  if (cVar1 == '\0') {
    uVar9 = 0;
    if (param_5 != (void *)0x0) {
      memcpy(param_3,param_5,*psVar12);
      goto LAB_1802b172e;
    }
    goto LAB_1802b1695;
  }
  if (param_2 - 8U < 2) {
LAB_1802b1666:
    pbVar11 = (&PTR_DAT_180338988)[(longlong)param_2 * 4];
  }
  else {
    pbVar11 = local_68;
    pbVar8 = (byte *)FUN_1802b32c0(param_4);
    bVar3 = false;
    while (bVar5 = bVar3, param_4 < pbVar8) {
      bVar2 = *param_4;
      param_4 = param_4 + 1;
      if (((bVar5) || (0x39 < bVar2)) ||
         (bVar3 = false, (0x3ff480800000000U >> ((longlong)(char)bVar2 & 0x3fU) & 1) == 0)) {
        if (((byte)(bVar2 + 0x9f) < 0x1a) || ((byte)(bVar2 + 0xbf) < 0x1a)) {
          bVar4 = 1;
        }
        else {
          bVar4 = 0;
        }
        bVar3 = (bool)(bVar5 | bVar4);
        if ((0x3b < (byte)((int)(char)bVar2 - 0x24U)) ||
           ((0x800000000000009U >> ((ulonglong)((int)(char)bVar2 - 0x24U) & 0x3f) & 1) == 0)) {
          *pbVar11 = bVar2;
          pbVar11 = pbVar11 + 1;
        }
      }
    }
    *pbVar11 = 0;
    if (local_68[0] == 0) goto LAB_1802b1666;
    pbVar11 = local_68;
  }
  local_78[0] = 0;
  piVar10 = local_78;
  if (3 < *psVar12) {
    piVar10 = param_3;
  }
  uVar9 = FUN_1802671a0(param_1,pbVar11,piVar10);
  if ((int)uVar9 < 1) {
LAB_1802b1695:
    return uVar9 & 0xffffffffffffff00;
  }
  if (*psVar12 < 4) {
    uVar6 = (undefined1)local_78[0];
    if (param_2 == 0) {
      if (local_78[0] < -0x80) {
        *(undefined1 *)param_3 = 0x80;
      }
      else {
        if (0x7f < local_78[0]) {
          uVar6 = 0x7f;
        }
        *(undefined1 *)param_3 = uVar6;
      }
    }
    else if (param_2 == 1) {
      if (local_78[0] < 0) {
        *(undefined1 *)param_3 = 0;
      }
      else {
        if (0xff < local_78[0]) {
          uVar6 = 0xff;
        }
        *(undefined1 *)param_3 = uVar6;
      }
    }
    else {
      if (param_2 == 2) {
        iVar7 = -0x8000;
        if ((-0x8001 < local_78[0]) && (iVar7 = local_78[0], 0x7fff < local_78[0])) {
          iVar7 = 0x7fff;
        }
      }
      else {
        if (param_2 != 3) goto LAB_1802b172e;
        if (local_78[0] < 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = local_78[0];
          if (0xffff < local_78[0]) {
            iVar7 = 0xffff;
          }
        }
      }
      *(short *)param_3 = (short)iVar7;
    }
  }
LAB_1802b172e:
  iVar7 = memcmp(local_70,param_3,*psVar12);
  return CONCAT71((int7)(CONCAT44(extraout_var,iVar7) >> 8),iVar7 != 0);
}



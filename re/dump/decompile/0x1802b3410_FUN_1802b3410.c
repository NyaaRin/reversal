// 0x1802b3410  FUN_1802b3410
// size=1493 thunk=false
// signature: undefined FUN_1802b3410()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1802b3410(float *param_1,int param_2,undefined8 param_3,int param_4,double *param_5,
                       char *param_6,double *param_7,double *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  size_t _Size;
  double dVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  double *pdVar9;
  char *pcVar10;
  char *pcVar11;
  float fVar12;
  size_t *psVar13;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  int local_d8;
  undefined8 local_d0;
  size_t *local_c8;
  longlong local_c0;
  undefined8 local_b0;
  char local_a8 [31];
  char acStack_89 [33];
  ulonglong local_68;
  
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_118;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_d8 = param_2;
  local_d0 = param_1;
  local_b0 = param_3;
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar3 + 0xec0);
  psVar13 = (size_t *)(&DAT_180338970 + (longlong)param_4 * 0x20);
  cVar6 = *param_6;
  while (cVar6 != '\0') {
    if (cVar6 == '%') {
      if (param_6[1] != '%') break;
      param_6 = param_6 + 1;
    }
    pcVar8 = param_6 + 1;
    param_6 = param_6 + 1;
    cVar6 = *pcVar8;
  }
  local_c8 = psVar13;
  local_c0 = lVar4;
  if (*param_6 == '%') {
    pcVar8 = (char *)FUN_1802b32c0(param_6);
    if (*pcVar8 != '\0') {
      pcVar11 = (char *)0x20;
      if (pcVar8 + (1 - (longlong)param_6) < (char *)0x20) {
        pcVar11 = pcVar8 + (1 - (longlong)param_6);
      }
      if (pcVar11 != (char *)0x0) {
        if ((char *)0x1 < pcVar11) {
          strncpy(acStack_89 + 1,param_6,(ulonglong)((int)pcVar11 - 1));
          psVar13 = local_c8;
        }
        acStack_89[(longlong)pcVar11] = '\0';
      }
      param_6 = acStack_89 + 1;
      if (acStack_89[1] == '\0') goto LAB_1802b3517;
    }
  }
  else {
LAB_1802b3517:
    param_6 = (char *)psVar13[2];
  }
  if (param_4 - 4U < 2) {
    fVar12 = *(float *)param_5;
LAB_1802b35a6:
    FUN_180268750(local_a8,0x20,param_6,fVar12);
  }
  else if (param_4 - 6U < 2) {
    FUN_180268750(local_a8,0x20,param_6,*param_5);
  }
  else {
    if (param_4 == 8) {
      dVar5 = (double)*(float *)param_5;
    }
    else {
      if (param_4 != 9) {
        if (param_4 == 0) {
          fVar12 = (float)(int)*(char *)param_5;
        }
        else if (param_4 == 1) {
          fVar12 = (float)(uint)*(byte *)param_5;
        }
        else if (param_4 == 2) {
          fVar12 = (float)(int)*(short *)param_5;
        }
        else {
          if (param_4 != 3) goto LAB_1802b35b7;
          fVar12 = (float)(uint)*(ushort *)param_5;
        }
        goto LAB_1802b35a6;
      }
      dVar5 = *param_5;
    }
    FUN_180268750(local_a8,0x20,param_6,dVar5);
  }
LAB_1802b35b7:
  for (pcVar8 = local_a8; (cVar6 = *pcVar8, cVar6 == ' ' || (cVar6 == '\t')); pcVar8 = pcVar8 + 1) {
  }
  pcVar11 = pcVar8;
  pcVar10 = pcVar8;
  if (cVar6 != '\0') {
    do {
      pcVar10 = pcVar10 + 1;
    } while (*pcVar10 != '\0');
    do {
      pcVar11 = pcVar10;
      if (pcVar11 <= pcVar8) break;
      pcVar10 = pcVar11 + -1;
    } while ((pcVar11[-1] == ' ') || (pcVar11[-1] == '\t'));
  }
  if (pcVar8 != local_a8) {
    memmove(local_a8,pcVar8,(longlong)pcVar11 - (longlong)pcVar8);
  }
  pcVar11[(longlong)(local_a8 + -(longlong)pcVar8)] = '\0';
  *(uint *)(lVar4 + 0x1efc) = *(uint *)(lVar4 + 0x1efc) | 0x10000;
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar3 + 0xec0);
  iVar7 = *(int *)(lVar3 + 0x2638);
  lVar4 = *(longlong *)(lVar3 + 0x1520);
  if (iVar7 != local_d8) {
    FUN_18026ea90(0,0);
  }
  uVar1 = *(undefined4 *)(lVar4 + 0x118);
  uVar2 = *(undefined4 *)(lVar4 + 0x11c);
  *(undefined8 *)(lVar4 + 0x118) = *(undefined8 *)local_d0;
  *(uint *)(lVar3 + 0x1efc) = *(uint *)(lVar3 + 0x1efc) | 0x20;
  local_e0 = 0;
  local_e8 = 0;
  local_f8 = &local_d0;
  local_f0 = 0x18001000;
  local_d0 = (float *)CONCAT44(local_d0[3] - local_d0[1],local_d0[2] - *local_d0);
  cVar6 = FUN_1802b74e0(local_b0,0,local_a8,0x20);
  FUN_18027f100(local_d8);
  if (iVar7 != local_d8) {
    *(undefined4 *)(lVar3 + 0x2638) = *(undefined4 *)(lVar3 + 0x1594);
  }
  if (*(int *)(lVar3 + 0x1594) != local_d8) {
    *(undefined4 *)(lVar3 + 0x2638) = 0;
  }
  *(undefined4 *)(lVar4 + 0x118) = uVar1;
  *(undefined4 *)(lVar4 + 0x11c) = uVar2;
  if (cVar6 == '\0') {
    return (ulonglong)(uint3)((uint)local_d8 >> 8) << 8;
  }
  _Size = *local_c8;
  memcpy(&local_b0,param_5,_Size);
  local_f8 = (undefined8 *)0x0;
  FUN_1802b1550(local_a8,param_4,param_5,param_6);
  pdVar9 = param_7;
  if (param_7 == (double *)0x0) {
    if (param_8 == (double *)0x0) goto switchD_1802b37b4_default;
  }
  else if ((param_8 != (double *)0x0) &&
          (iVar7 = FUN_1802b1760(param_4,param_7,param_8), pdVar9 = param_7, 0 < iVar7)) {
    pdVar9 = param_8;
    param_8 = param_7;
  }
  switch(param_4) {
  case 0:
    if ((pdVar9 == (double *)0x0) || (*(char *)pdVar9 <= *(char *)param_5)) {
      if ((param_8 != (double *)0x0) && (*(char *)param_8 < *(char *)param_5)) {
        *(char *)param_5 = *(char *)param_8;
      }
    }
    else {
      *(char *)param_5 = *(char *)pdVar9;
    }
    break;
  case 1:
    if ((pdVar9 == (double *)0x0) || (*(byte *)pdVar9 <= *(byte *)param_5)) {
      if ((param_8 != (double *)0x0) && (*(byte *)param_8 < *(byte *)param_5)) {
        *(byte *)param_5 = *(byte *)param_8;
      }
    }
    else {
      *(byte *)param_5 = *(byte *)pdVar9;
    }
    break;
  case 2:
    if ((pdVar9 == (double *)0x0) || (*(short *)pdVar9 <= *(short *)param_5)) {
      if ((param_8 != (double *)0x0) && (*(short *)param_8 < *(short *)param_5)) {
        *(short *)param_5 = *(short *)param_8;
      }
    }
    else {
      *(short *)param_5 = *(short *)pdVar9;
    }
    break;
  case 3:
    if ((pdVar9 == (double *)0x0) || (*(ushort *)pdVar9 <= *(ushort *)param_5)) {
      if ((param_8 != (double *)0x0) && (*(ushort *)param_8 < *(ushort *)param_5)) {
        *(ushort *)param_5 = *(ushort *)param_8;
      }
    }
    else {
      *(ushort *)param_5 = *(ushort *)pdVar9;
    }
    break;
  case 4:
    if ((pdVar9 == (double *)0x0) || ((int)*(float *)pdVar9 <= (int)*(float *)param_5)) {
      if ((param_8 != (double *)0x0) && ((int)*(float *)param_8 < (int)*(float *)param_5)) {
        *(float *)param_5 = *(float *)param_8;
      }
    }
    else {
      *(float *)param_5 = *(float *)pdVar9;
    }
    break;
  case 5:
    if ((pdVar9 == (double *)0x0) || ((uint)*(float *)pdVar9 <= (uint)*(float *)param_5)) {
      if ((param_8 != (double *)0x0) && ((uint)*(float *)param_8 < (uint)*(float *)param_5)) {
        *(float *)param_5 = *(float *)param_8;
      }
    }
    else {
      *(float *)param_5 = *(float *)pdVar9;
    }
    break;
  case 6:
    if ((pdVar9 == (double *)0x0) || ((longlong)*pdVar9 <= (longlong)*param_5)) {
      if ((param_8 != (double *)0x0) && ((longlong)*param_8 < (longlong)*param_5)) {
        *param_5 = *param_8;
      }
    }
    else {
      *param_5 = *pdVar9;
    }
    break;
  case 7:
    if ((pdVar9 == (double *)0x0) || ((ulonglong)*pdVar9 <= (ulonglong)*param_5)) {
      if ((param_8 != (double *)0x0) && ((ulonglong)*param_8 < (ulonglong)*param_5)) {
        *param_5 = *param_8;
      }
    }
    else {
      *param_5 = *pdVar9;
    }
    break;
  case 8:
    if ((pdVar9 == (double *)0x0) ||
       (fVar12 = *(float *)pdVar9, fVar12 < *(float *)param_5 || fVar12 == *(float *)param_5)) {
      if ((param_8 != (double *)0x0) && (*(float *)param_8 < *(float *)param_5)) {
        *(float *)param_5 = *(float *)param_8;
      }
    }
    else {
      *(float *)param_5 = fVar12;
    }
    break;
  case 9:
    if ((pdVar9 == (double *)0x0) || (dVar5 = *pdVar9, dVar5 < *param_5 || dVar5 == *param_5)) {
      if ((param_8 != (double *)0x0) && (*param_8 < *param_5)) {
        *param_5 = *param_8;
      }
    }
    else {
      *param_5 = dVar5;
    }
  }
switchD_1802b37b4_default:
  *(uint *)(local_c0 + 0x1efc) = *(uint *)(local_c0 + 0x1efc) & 0xfffeffff;
  iVar7 = memcmp(&local_b0,param_5,_Size);
  if (iVar7 != 0) {
    FUN_18026ed00(local_d8);
  }
  return (ulonglong)(iVar7 != 0);
}



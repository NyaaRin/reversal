// 0x18023ea20  FUN_18023ea20
// size=1166 thunk=false
// signature: undefined FUN_18023ea20()
// status: ok


undefined8 FUN_18023ea20(longlong *param_1,byte param_2)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined8 uVar8;
  int iVar9;
  
  if ((int)param_1[0xe] == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_18023d7e0(param_1,2);
  }
  uVar3 = param_1[0xc];
  if ((uVar3 >> 0xf & 1) != 0) {
    cVar1 = *(char *)((longlong)param_1 + 0x75);
    if (cVar1 == 'f') {
      uVar4 = 0xc;
    }
    else if (cVar1 == 'n') {
      uVar4 = 10;
    }
    else if (cVar1 == 'r') {
      uVar4 = 0xd;
    }
    else if (cVar1 == 't') {
      uVar4 = 9;
    }
    else {
      if (cVar1 != 'v') goto LAB_18023ea85;
      uVar4 = 0xb;
    }
LAB_18023eaa8:
    *(undefined4 *)((longlong)param_1 + 0x6c) = uVar4;
    pcVar7 = (char *)*param_1;
    if (pcVar7 != (char *)param_1[1]) {
      if ((((*pcVar7 == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
          (pcVar7 = pcVar7 + 1, pcVar7 != (char *)param_1[1])) &&
         ((((uVar3 & 8) == 0 && ((byte)(*pcVar7 - 0x28U) < 2)) ||
          (((uVar3 & 0x10) == 0 && ((*pcVar7 + 0x85U & 0xfd) == 0)))))) {
        *param_1 = (longlong)pcVar7;
        *param_1 = *param_1 + 1;
        FUN_180234da0(param_1);
        goto LAB_18023ec44;
      }
LAB_18023ebd0:
      *param_1 = *param_1 + 1;
    }
LAB_18023ebd3:
    FUN_180234da0(param_1);
LAB_18023ec44:
    *(byte *)((longlong)param_1 + 0x76) = *(byte *)((longlong)param_1 + 0x6c);
    if ((uint)*(byte *)((longlong)param_1 + 0x6c) == *(uint *)((longlong)param_1 + 0x6c)) {
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_18023d7e0();
  }
LAB_18023ea85:
  if ((uVar3 >> 0xe & 1) != 0) {
    if (*(char *)((longlong)param_1 + 0x75) == 'a') {
      uVar4 = 7;
    }
    else {
      if (*(char *)((longlong)param_1 + 0x75) != 'b') goto LAB_18023eb11;
      uVar4 = 8;
    }
    goto LAB_18023eaa8;
  }
LAB_18023eb11:
  bVar2 = *(byte *)((longlong)param_1 + 0x75);
  uVar6 = (uint)bVar2;
  if (bVar2 == 99) {
    if ((uVar3 >> 0x11 & 1) == 0) goto LAB_18023ecbc;
    pcVar7 = (char *)*param_1;
    if (pcVar7 != (char *)param_1[1]) {
      if (((*pcVar7 == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
         ((pcVar7 = pcVar7 + 1, pcVar7 != (char *)param_1[1] &&
          ((((uVar3 & 8) == 0 && ((byte)(*pcVar7 - 0x28U) < 2)) ||
           (((uVar3 & 0x10) == 0 && ((*pcVar7 + 0x85U & 0xfd) == 0)))))))) {
        *param_1 = (longlong)pcVar7;
      }
      *param_1 = *param_1 + 1;
    }
    FUN_180234da0(param_1);
    bVar2 = *(byte *)((longlong)param_1 + 0x75);
    if ((0x19 < (byte)(bVar2 + 0x9f)) && (0x19 < (byte)(bVar2 + 0xbf))) {
                    /* WARNING: Subroutine does not return */
      FUN_18023d7e0(bVar2,2);
    }
    *(uint *)((longlong)param_1 + 0x6c) = bVar2 & 0x1f;
    pcVar7 = (char *)*param_1;
    if (pcVar7 != (char *)param_1[1]) {
      if ((((*pcVar7 == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
          (pcVar7 = pcVar7 + 1, pcVar7 != (char *)param_1[1])) &&
         ((((param_1[0xc] & 8U) == 0 && ((byte)(*pcVar7 - 0x28U) < 2)) ||
          (((param_1[0xc] & 0x10U) == 0 && ((*pcVar7 + 0x85U & 0xfd) == 0)))))) {
        *param_1 = (longlong)pcVar7;
      }
      goto LAB_18023ebd0;
    }
    goto LAB_18023ebd3;
  }
  if (bVar2 == 0x78) {
    if ((uVar3 >> 0xb & 1) != 0) {
      pcVar7 = (char *)*param_1;
      if (pcVar7 != (char *)param_1[1]) {
        if (((*pcVar7 == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
           ((pcVar7 = pcVar7 + 1, pcVar7 != (char *)param_1[1] &&
            ((((uVar3 & 8) == 0 && ((byte)(*pcVar7 - 0x28U) < 2)) ||
             (((uVar3 & 0x10) == 0 && ((*pcVar7 + 0x85U & 0xfd) == 0)))))))) {
          *param_1 = *param_1 + 1;
        }
        *param_1 = *param_1 + 1;
      }
      FUN_180234da0(param_1);
      uVar8 = 2;
      goto LAB_18023ec3c;
    }
  }
  else if ((bVar2 == 0x75) && (uVar3 = param_1[0xc], (uVar3 >> 10 & 1) != 0)) {
    pcVar7 = (char *)*param_1;
    if (pcVar7 != (char *)param_1[1]) {
      if ((((*pcVar7 == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
          (pcVar7 = pcVar7 + 1, pcVar7 != (char *)param_1[1])) &&
         ((((uVar3 & 8) == 0 && ((byte)(*pcVar7 - 0x28U) < 2)) ||
          (((uVar3 & 0x10) == 0 && ((*pcVar7 + 0x85U & 0xfd) == 0)))))) {
        *param_1 = *param_1 + 1;
      }
      *param_1 = *param_1 + 1;
    }
    FUN_180234da0(param_1);
    uVar8 = 4;
LAB_18023ec3c:
    FUN_18023f990(param_1,uVar8);
    goto LAB_18023ec44;
  }
LAB_18023ecbc:
  if ((*(uint *)(param_1 + 0xc) >> 0xc & 1) != 0) {
    iVar9 = 3;
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
    do {
      uVar6 = (uint)*(char *)((longlong)param_1 + 0x75);
      if ((7 < (byte)(*(char *)((longlong)param_1 + 0x75) - 0x30U)) ||
         (iVar5 = uVar6 - 0x30, iVar5 == -1)) {
        if (iVar9 == 3) goto LAB_18023ed88;
        break;
      }
      if ((int)((0x7fffffff - iVar5) + (0x7fffffff - iVar5 >> 0x1f & 7U)) >> 3 <
          *(int *)((longlong)param_1 + 0x6c)) {
                    /* WARNING: Subroutine does not return */
        FUN_18023d7e0(iVar5,2);
      }
      iVar9 = iVar9 + -1;
      pcVar7 = (char *)*param_1;
      *(int *)((longlong)param_1 + 0x6c) = iVar5 + *(int *)((longlong)param_1 + 0x6c) * 8;
      if (pcVar7 != (char *)param_1[1]) {
        if ((((*pcVar7 == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
            (pcVar7 = pcVar7 + 1, pcVar7 != (char *)param_1[1])) &&
           ((((param_1[0xc] & 8U) == 0 && ((byte)(*pcVar7 - 0x28U) < 2)) ||
            (((param_1[0xc] & 0x10U) == 0 && ((*pcVar7 + 0x85U & 0xfd) == 0)))))) {
          *param_1 = *param_1 + 1;
        }
        *param_1 = *param_1 + 1;
      }
      FUN_180234da0(param_1);
    } while (iVar9 != 0);
    if (*(int *)((longlong)param_1 + 0x6c) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18023d7e0();
    }
    goto LAB_18023ec44;
  }
LAB_18023ed88:
  uVar3 = param_1[0xc];
  if ((uVar3 >> 0x15 & 1) != 0) {
    switch(uVar6 & 0xff) {
    case 0x44:
    case 0x53:
    case 0x57:
    case 99:
    case 100:
    case 0x73:
    case 0x77:
      goto switchD_18023edbf_caseD_44;
    }
    goto switchD_18023edbf_caseD_45;
  }
  switch((uVar6 & 0xff) - 0x22) {
  case 0:
  case 0xd:
    param_2 = (byte)(uVar3 >> 0x17) & 1;
    break;
  default:
    goto switchD_18023edbf_caseD_44;
  case 2:
  case 8:
  case 0xc:
  case 0x39:
  case 0x3b:
  case 0x3c:
    param_2 = param_2 ^ 1;
    break;
  case 6:
  case 7:
  case 9:
  case 0x1d:
  case 0x59:
  case 0x5a:
  case 0x5b:
    if ((uVar3 >> 0x16 & 1) == 0) {
      return 0;
    }
    if (param_2 != 0) {
      return 0;
    }
  case 0x3a:
    goto switchD_18023edbf_caseD_45;
  }
  if (param_2 == 0) {
switchD_18023edbf_caseD_44:
    return 0;
  }
switchD_18023edbf_caseD_45:
  pcVar7 = (char *)*param_1;
  *(char *)((longlong)param_1 + 0x76) = (char)uVar6;
  if (pcVar7 != (char *)param_1[1]) {
    if (((*pcVar7 == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
       ((pcVar7 = pcVar7 + 1, pcVar7 != (char *)param_1[1] &&
        ((((uVar3 & 8) == 0 && ((byte)(*pcVar7 - 0x28U) < 2)) ||
         (((uVar3 & 0x10) == 0 && ((*pcVar7 + 0x85U & 0xfd) == 0)))))))) {
      *param_1 = *param_1 + 1;
    }
    *param_1 = *param_1 + 1;
  }
  FUN_180234da0(param_1);
  return 1;
}



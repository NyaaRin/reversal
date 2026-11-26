// 0x180154f20  FUN_180154f20
// size=1001 thunk=false
// signature: undefined FUN_180154f20()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180154f20(byte *param_1,char *param_2,longlong param_3,ulonglong param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char *pcVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  char *pcVar10;
  undefined1 auStack_2f8 [32];
  char local_2d8 [57];
  char local_29f [599];
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_2f8;
  if (param_3 == 0) {
    return 0;
  }
  uVar9 = 0;
  local_2d8[0x30] = 0;
  uVar8 = uVar9;
  if (param_1 != (byte *)0x0) {
    for (; ((bVar2 = *param_1, bVar2 == 0x2f || (bVar2 == 0x5c)) ||
           ((bVar2 == 0x2e && ((param_1[1] == 0x2f || (param_1[1] == 0x5c))))));
        param_1 = param_1 + (ulonglong)(bVar2 == 0x2e) + 1) {
    }
    if (bVar2 != 0) {
      do {
        if (599 < uVar8 + 1) break;
        bVar2 = *param_1;
        if (bVar2 == 0x5c) {
          bVar2 = 0x2f;
LAB_180154fdc:
          if ((uVar8 != 0) && (local_2d8[uVar8 + 0x2f] != '/')) goto LAB_180154ffa;
        }
        else {
          if (bVar2 == 0x2f) goto LAB_180154fdc;
LAB_180154ffa:
          iVar3 = tolower((uint)bVar2);
          local_2d8[uVar8 + 0x30] = (char)iVar3;
          uVar8 = uVar8 + 1;
        }
        param_1 = param_1 + 1;
      } while (*param_1 != 0);
      for (; (uVar8 != 0 && (local_2d8[uVar8 + 0x2f] == '/')); uVar8 = uVar8 - 1) {
      }
    }
    local_2d8[uVar8 + 0x30] = '\0';
  }
  pcVar10 = local_2d8 + 0x30;
  if (param_2 != (char *)0x0) {
    uVar5 = uVar9;
    if (*param_2 != '\0') {
      do {
        uVar6 = uVar5 + 1;
        if (0x17 < uVar6) break;
        iVar3 = tolower((uint)(byte)param_2[uVar5]);
        cVar1 = param_2[uVar6];
        local_2d8[uVar5 + 0x18] = (char)iVar3;
        uVar5 = uVar6;
      } while (cVar1 != '\0');
      local_2d8[uVar5 + 0x18] = '\0';
      iVar3 = strcmp(local_2d8 + 0x18,"base_path");
      if ((iVar3 == 0) || (iVar3 = strcmp(local_2d8 + 0x18,"executable_path"), iVar3 == 0)) {
        if (((uVar8 < 9) || (iVar3 = memcmp(local_2d8 + 0x30,"garrysmod",9), iVar3 != 0)) ||
           ((uVar8 != 9 && (local_29f[0] != '/')))) {
          pcVar7 = "@root/";
          goto LAB_1801550f3;
        }
        pcVar10 = local_29f + (uVar8 != 9);
        uVar8 = uVar8 - ((ulonglong)(uVar8 != 9) + 9);
        goto LAB_1801550ec;
      }
    }
    if ((param_2 != (char *)0x0) && (uVar5 = uVar9, *param_2 != '\0')) {
      do {
        uVar6 = uVar5 + 1;
        if (0x17 < uVar6) break;
        iVar3 = tolower((uint)(byte)param_2[uVar5]);
        cVar1 = param_2[uVar6];
        local_2d8[uVar5] = (char)iVar3;
        uVar5 = uVar6;
      } while (cVar1 != '\0');
      local_2d8[uVar5] = '\0';
      uVar5 = uVar9;
      do {
        uVar4 = uVar5 + 1;
        uVar6 = uVar9;
        if (local_2d8[uVar5] != (&DAT_18035ff34)[uVar5]) goto LAB_180155210;
        uVar5 = uVar4;
      } while (uVar4 != 4);
      pcVar7 = "lua/";
      goto LAB_1801550f3;
    }
  }
LAB_1801550ec:
  pcVar7 = "";
  goto LAB_1801550f3;
  while (uVar6 = uVar4, uVar4 != 4) {
LAB_180155210:
    uVar4 = uVar6 + 1;
    uVar5 = uVar9;
    if (local_2d8[uVar6] != (&DAT_18035ff38)[uVar6]) goto LAB_180155240;
  }
  pcVar7 = "lua/";
  goto LAB_1801550f3;
  while (uVar5 = uVar4, uVar4 != 4) {
LAB_180155240:
    uVar4 = uVar5 + 1;
    uVar6 = uVar9;
    if (local_2d8[uVar5] != (&DAT_18035ff3c)[uVar5]) goto LAB_180155270;
  }
  pcVar7 = "lua/";
  goto LAB_1801550f3;
  while (uVar6 = uVar4, uVar4 != 8) {
LAB_180155270:
    uVar4 = uVar6 + 1;
    uVar5 = uVar9;
    if (local_2d8[uVar6] != "luamenu"[uVar6]) goto LAB_1801552a0;
  }
  pcVar7 = "lua/";
  goto LAB_1801550f3;
  while (uVar5 = uVar6, uVar6 != 5) {
LAB_1801552a0:
    uVar6 = uVar5 + 1;
    if (local_2d8[uVar5] != (&DAT_18035ff50)[uVar5]) {
      iVar3 = strcmp(local_2d8,"download");
      pcVar7 = "download/";
      if (iVar3 != 0) {
        pcVar7 = "";
      }
      goto LAB_1801550f3;
    }
  }
  pcVar7 = "data/";
LAB_1801550f3:
  cVar1 = *pcVar7;
  uVar5 = uVar9;
  while ((cVar1 != '\0' && (uVar5 + 1 < param_4))) {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    *(char *)(param_3 + uVar5) = cVar1;
    cVar1 = *pcVar7;
    uVar5 = uVar5 + 1;
  }
  if (uVar8 != 0) {
    do {
      uVar6 = uVar5 + 1;
      if (param_4 <= uVar6) break;
      pcVar7 = pcVar10 + uVar9;
      uVar9 = uVar9 + 1;
      *(char *)(param_3 + uVar5) = *pcVar7;
      uVar5 = uVar6;
    } while (uVar9 < uVar8);
  }
  for (; (uVar5 != 0 && (*(char *)(param_3 + -1 + uVar5) == '/')); uVar5 = uVar5 - 1) {
  }
  *(undefined1 *)(param_3 + uVar5) = 0;
  return uVar5;
}



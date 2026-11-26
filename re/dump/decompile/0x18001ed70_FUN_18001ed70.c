// 0x18001ed70  FUN_18001ed70
// size=399 thunk=false
// signature: undefined FUN_18001ed70()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18001ed70(char *param_1,LPSTR param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  uint7 uVar9;
  longlong *plVar7;
  char *pcVar8;
  byte bVar10;
  int iVar11;
  undefined1 auStackY_498 [32];
  char *local_450 [3];
  WCHAR local_438 [512];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStackY_498;
  puVar5 = (undefined8 *)FUN_18001eac0();
  if (*(char *)(puVar5 + 2) == '\0') {
    uVar6 = (ulonglong)puVar5 & 0xffffffffffffff00;
  }
  else {
    bVar10 = 0;
    plVar7 = *(longlong **)*puVar5;
    uVar9 = (uint7)((ulonglong)*puVar5 >> 8);
    if (plVar7 == (longlong *)0x0) {
      uVar6 = (ulonglong)uVar9 << 8;
    }
    else {
      lVar1 = *plVar7;
      if (lVar1 == 0) {
        uVar6 = (ulonglong)uVar9 << 8;
      }
      else {
        plVar7 = (longlong *)(**(code **)(lVar1 + (longlong)*(int *)(puVar5 + 1) * 8))();
        uVar6 = 0;
        if (plVar7 != (longlong *)0x0) {
          if (*plVar7 == 0) {
            uVar6 = (ulonglong)plVar7 & 0xffffffffffffff00;
          }
          else {
            pcVar2 = *(code **)(*plVar7 + (longlong)*(int *)((longlong)puVar5 + 0xc) * 8);
            pcVar8 = param_1 + 1;
            if (*param_1 != '#') {
              pcVar8 = param_1;
            }
            local_450[0] = pcVar8;
            local_450[1] = param_1;
            for (iVar11 = 0; iVar11 < (int)((pcVar8 != param_1) + 1); iVar11 = iVar11 + 1) {
              local_438[0] = L'\0';
              cVar3 = (*pcVar2)(plVar7,local_450[iVar11],local_438,0x200);
              if ((cVar3 != '\0') && (local_438[0] != L'\0')) {
                iVar4 = WideCharToMultiByte(0xfde9,0,local_438,-1,param_2,0xc0,(LPCSTR)0x0,
                                            (LPBOOL)0x0);
                if (1 < iVar4) {
                  bVar10 = 1;
                  break;
                }
              }
            }
            if (DAT_1803feeec < 10) {
              DAT_1803feeec = DAT_1803feeec + 1;
              pcVar8 = "<none>";
              if (bVar10 != 0) {
                pcVar8 = param_2;
              }
              FUN_180014410("[WEAP] localize \'%s\' -> %s\n",param_1,pcVar8);
            }
            uVar6 = (ulonglong)bVar10;
          }
        }
      }
    }
  }
  return uVar6;
}



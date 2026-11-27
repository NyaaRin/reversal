// 0x180156d30  FUN_180156d30
// size=854 thunk=false
// signature: undefined FUN_180156d30()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

int FUN_180156d30(undefined8 param_1)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  char *pcVar8;
  ulonglong uVar9;
  void *_Src;
  ulonglong uVar10;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  ulonglong local_88 [2];
  char local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  iVar3 = 0;
  if ((((DAT_180409d80 != (code *)0x0) && (iVar3 = (*DAT_180409d80)(), 0 < iVar3)) &&
      (DAT_180409f60 != '\0')) && (cVar2 = FUN_180155560(), cVar2 != '\0')) {
    local_88[0] = 0x93fd561a96ab0c67;
    local_88[1] = 0x87360edd56c25641;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_a8,local_88);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_98,local_88 + 1);
    pcVar8 = (char *)FUN_1801fcfc0(*plVar7 + 0x28);
    if (*pcVar8 != '\0') {
      uVar4 = (*DAT_180409e50)(param_1);
      iVar5 = (*DAT_180409f10)(param_1,uVar4);
      if (iVar5 == 5) {
        uVar9 = (*DAT_180409d38)(param_1,uVar4);
        uVar10 = 1;
        if (uVar9 != 0) {
          do {
            (*DAT_180409f18)(param_1,uVar4,uVar10 & 0xffffffff);
            uVar6 = (*DAT_180409e50)(param_1);
            iVar5 = (*DAT_180409f10)(param_1,uVar6);
            if (iVar5 == 5) {
              local_78[0] = '\0';
              (*DAT_180409f30)(param_1,"folder");
              (*DAT_180409f38)(param_1,uVar6);
              local_78[0] = '\0';
              iVar5 = (*DAT_180409f10)(param_1,0xffffffff);
              if (iVar5 == 4) {
                local_88[0] = 0;
                _Src = (void *)(*DAT_180409e58)(param_1,0xffffffff,local_88);
                if (_Src != (void *)0x0) {
                  if (0x3f < local_88[0]) {
                    local_88[0] = 0x3f;
                  }
                  uVar1 = local_88[0];
                  memcpy(local_78,_Src,local_88[0]);
                  local_78[uVar1] = '\0';
                }
              }
              (*DAT_180409f20)(param_1,0xfffffffe);
              iVar5 = _stricmp(local_78,"garrysmod");
              if (iVar5 != 0) {
                (*DAT_180409f30)(param_1,"installed");
                (*DAT_180409f38)(param_1,uVar6);
                iVar5 = (*DAT_180409f10)(param_1,0xffffffff);
                (*DAT_180409f20)(param_1,0xfffffffe);
                if (0 < iVar5) {
                  (*DAT_180409f30)(param_1,"installed");
                  (*DAT_180409e48)(param_1,0);
                  (*DAT_180409e60)(param_1,uVar6);
                }
                (*DAT_180409f30)(param_1,"mounted");
                (*DAT_180409f38)(param_1,uVar6);
                iVar5 = (*DAT_180409f10)(param_1,0xffffffff);
                (*DAT_180409f20)(param_1,0xfffffffe);
                if (0 < iVar5) {
                  (*DAT_180409f30)(param_1,"mounted");
                  (*DAT_180409e48)(param_1,0);
                  (*DAT_180409e60)(param_1,uVar6);
                }
              }
            }
            (*DAT_180409f20)(param_1,0xfffffffe);
            uVar10 = uVar10 + 1;
          } while (uVar10 <= uVar9);
        }
      }
    }
  }
  return iVar3;
}



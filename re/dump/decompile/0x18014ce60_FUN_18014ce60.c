// 0x18014ce60  FUN_18014ce60
// size=636 thunk=false
// signature: undefined FUN_18014ce60()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18014ce60(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  uint local_198;
  undefined8 *local_190;
  undefined1 local_188 [32];
  char local_168 [256];
  byte **local_68;
  undefined4 local_60;
  byte *local_48;
  byte *pbStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_1c8;
  local_198 = 0;
  local_48 = (byte *)0x0;
  pbStack_40 = (byte *)0x0;
  local_38 = 0;
  local_190 = param_1;
  if ((((longlong *)*param_2 == (longlong *)0x0) || (lVar5 = *(longlong *)*param_2, lVar5 == 0)) ||
     ((code *)param_2[1] == (code *)0x0)) {
LAB_18014d07c:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    FUN_18001d080(param_1,&DAT_18033e9cc,1);
  }
  else {
    local_68 = &local_48;
    uVar7 = 2;
    local_60 = 2;
    local_1a8 = 0;
    iVar3 = (*(code *)param_2[1])(lVar5,"PRAGMA database_list",FUN_18014cd50,&local_68);
    pbVar2 = local_48;
    if ((iVar3 != 0) || (local_48 == pbStack_40)) goto LAB_18014d07c;
    if (*(longlong *)(local_48 + 0x10) != 0) {
      pbVar9 = local_48;
      if (0xf < *(ulonglong *)(local_48 + 0x18)) {
        pbVar9 = *(byte **)local_48;
      }
      lVar4 = *(longlong *)(local_48 + 0x10) + -1;
      lVar5 = -1;
      if (lVar4 != -1) {
        lVar5 = lVar4;
      }
      if (lVar5 + 3U < 0x10) {
        memset(local_168,0,0x100);
        pbVar10 = &DAT_18035d1fc;
        do {
          local_168[*pbVar10] = '\x01';
          pbVar10 = pbVar10 + 1;
        } while (pbVar10 != &DAT_18035d1fe);
        pbVar10 = pbVar9 + lVar5;
        cVar1 = local_168[*pbVar10];
        while (cVar1 == '\0') {
          if (pbVar10 == pbVar9) goto LAB_18014d00c;
          pbVar10 = pbVar10 + -1;
          cVar1 = local_168[*pbVar10];
        }
        lVar5 = (longlong)pbVar10 - (longlong)pbVar9;
      }
      else {
        lVar5 = thunk_FUN_1802d4e90(pbVar9,lVar5 + 1,&DAT_18035d1fc,2);
      }
      if (lVar5 == -1) {
LAB_18014d00c:
        uVar6 = FUN_18016d4c0(local_188,pbVar2);
      }
      else {
        uVar6 = FUN_18020e670(pbVar2,&local_68,lVar5 + 1,0xffffffffffffffff);
        uVar7 = 4;
      }
      local_198 = uVar7;
      FUN_18016d4c0(param_1,uVar6);
      uVar8 = uVar7 | 1;
      local_198 = uVar8;
      if ((uVar7 & 4) != 0) {
        uVar8 = uVar7 & 0xfffffffb | 1;
        local_198 = uVar8;
        FUN_18020e450(&local_68);
      }
      if ((uVar8 & 2) != 0) {
        local_198 = uVar8 & 0xfffffffd;
        FUN_18020e450(local_188);
      }
      goto LAB_18014d0a7;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    FUN_18001d080(param_1,":memory:",8);
  }
  local_198 = 1;
LAB_18014d0a7:
  FUN_18020d5c0(&local_48);
  return param_1;
}



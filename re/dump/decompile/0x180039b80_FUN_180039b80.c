// 0x180039b80  FUN_180039b80
// size=577 thunk=false
// signature: undefined FUN_180039b80()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180039b80(longlong *param_1,char *param_2,char *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  longlong *plVar9;
  size_t sVar10;
  undefined8 *_Buf1;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong *local_98;
  undefined1 local_90 [16];
  ulonglong local_80;
  ulonglong uStack_78;
  ulonglong local_70;
  ulonglong uStack_68;
  int local_60;
  undefined4 local_5c;
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  if (param_1 != (longlong *)0x0) {
    if (((param_2 == (char *)0x0) || (param_3 == (char *)0x0)) || (param_1[1] == 0)) {
      (**(code **)(*param_1 + 0x10))(param_1,1);
    }
    else {
      if ((DAT_1803ff988 != 0) && (DAT_1803ff988 != param_1[1])) {
        FUN_180039a50(0);
      }
      DAT_1803ff988 = param_1[1];
      iVar6 = FUN_18002d7a0(param_1);
      if (iVar6 != -1) {
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        sVar8 = strlen(param_2);
        uVar12 = FUN_18001d080(&local_b8,param_2,sVar8);
        plVar9 = (longlong *)FUN_1802186b0(uVar12,local_90,&local_b8);
        lVar1 = *plVar9;
        FUN_18020e450(&local_b8);
        puVar11 = *(undefined8 **)(lVar1 + 0x40);
        puVar2 = *(undefined8 **)(lVar1 + 0x48);
        uVar4 = _DAT_1803814b0;
        uVar5 = _UNK_1803814b8;
        while( true ) {
          _DAT_1803814b0 = uVar4;
          _UNK_1803814b8 = uVar5;
          if (puVar11 == puVar2) {
            uStack_78 = 0;
            local_80 = 0;
            local_60 = 0xffffffff;
            local_5c = 0;
            local_58 = 0;
            local_70 = uVar4;
            uStack_68 = uVar5;
            sVar8 = strlen(param_3);
            FUN_180212700(&local_80,param_3,sVar8);
            puVar3 = *(ulonglong **)(lVar1 + 0x48);
            local_60 = iVar6;
            if (puVar3 == *(ulonglong **)(lVar1 + 0x50)) {
              FUN_180228340(lVar1 + 0x40,puVar3,&local_80);
            }
            else {
              *puVar3 = 0;
              puVar3[1] = 0;
              puVar3[2] = 0;
              puVar3[3] = 0;
              *puVar3 = local_80;
              puVar3[1] = uStack_78;
              puVar3[2] = local_70;
              puVar3[3] = uStack_68;
              local_80 = local_80 & 0xffffffffffffff00;
              *(int *)(puVar3 + 4) = iVar6;
              *(undefined4 *)((longlong)puVar3 + 0x24) = local_5c;
              *(undefined1 *)(puVar3 + 5) = local_58;
              *(longlong *)(lVar1 + 0x48) = *(longlong *)(lVar1 + 0x48) + 0x30;
              local_98 = puVar3;
              local_70 = uVar4;
              uStack_68 = uVar5;
            }
            FUN_1800397e0();
            FUN_18020e450(&local_80);
            return 1;
          }
          sVar10 = strlen(param_3);
          sVar8 = puVar11[2];
          _Buf1 = puVar11;
          if (0xf < (ulonglong)puVar11[3]) {
            _Buf1 = (undefined8 *)*puVar11;
          }
          if ((sVar8 == sVar10) &&
             ((sVar8 == 0 || (iVar7 = memcmp(_Buf1,param_3,sVar8), iVar7 == 0)))) break;
          puVar11 = puVar11 + 6;
          uVar4 = _DAT_1803814b0;
          uVar5 = _UNK_1803814b8;
        }
        FUN_18002d8c0(param_1,*(undefined4 *)(puVar11 + 4));
        *(int *)(puVar11 + 4) = iVar6;
        *(undefined4 *)((longlong)puVar11 + 0x24) = 0;
        *(undefined1 *)(puVar11 + 5) = 0;
        FUN_1800397e0();
        return 1;
      }
    }
  }
  return 0;
}



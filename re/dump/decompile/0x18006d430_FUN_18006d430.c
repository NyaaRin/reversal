// 0x18006d430  FUN_18006d430
// size=657 thunk=false
// signature: undefined FUN_18006d430()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18006d430(undefined4 param_1)

{
  int iVar1;
  size_t _Size;
  char cVar2;
  int iVar3;
  char *_Str;
  size_t sVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_b8 [32];
  int local_98;
  undefined8 *local_90;
  char *local_88;
  char local_78;
  int local_74;
  undefined4 local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  local_60 = (undefined8 *)0x0;
  puStack_58 = (undefined8 *)0x0;
  local_50 = 0;
  local_70 = param_1;
  cVar2 = FUN_18006cf50(0,0,&local_60);
  if (cVar2 == '\0') {
    if (DAT_1803e7830 == -1) {
      DAT_1803e7830 = FUN_18006c9b0();
    }
    FUN_180014410("[NWSTORE] ent=%d: row unreadable (mgr=%p)\n",param_1,DAT_1803e7830);
  }
  else {
    local_78 = 0 < DAT_1803ffc30;
    if (0 < DAT_1803ffc30) {
      DAT_1803ffc30 = DAT_1803ffc30 + -1;
    }
    iVar9 = 0;
    iVar10 = 0;
    local_74 = 0;
    if ((bool)local_78) {
      FUN_180014410("[NWSTORE] ent=%d: %d entry(ies)\n",param_1,
                    ((longlong)puStack_58 - (longlong)local_60 >> 4) * -0x3333333333333333);
    }
    local_68 = puStack_58;
    puVar7 = local_60;
    iVar3 = 0;
    if (local_60 != puStack_58) {
      do {
        if (DAT_1803fe9e8 == (code *)0x0) {
LAB_18006d55f:
          _Str = "";
        }
        else {
          puVar5 = puVar7;
          if (0xf < (ulonglong)puVar7[3]) {
            puVar5 = (undefined8 *)*puVar7;
          }
          _Str = (char *)(*DAT_1803fe9e8)(param_1,puVar5,&DAT_18033e5ea);
          if (_Str == (char *)0x0) goto LAB_18006d55f;
        }
        iVar1 = *(int *)(puVar7 + 9);
        if (iVar1 == 4) {
          sVar4 = strlen(_Str);
          _Size = puVar7[6];
          puVar5 = puVar7 + 4;
          if (0xf < (ulonglong)puVar7[7]) {
            puVar5 = (undefined8 *)*puVar5;
          }
          if ((_Size == sVar4) && ((_Size == 0 || (iVar3 = memcmp(puVar5,_Str,_Size), iVar3 == 0))))
          {
            pcVar6 = "OK";
            iVar9 = iVar9 + 1;
            cVar2 = 'O';
          }
          else {
            pcVar6 = "MISMATCH";
            iVar10 = iVar10 + 1;
            cVar2 = 'M';
          }
        }
        else {
          pcVar6 = "n/a";
          local_74 = iVar3 + 1;
          cVar2 = 'n';
        }
        puVar5 = puVar7 + 4;
        if ((local_78 != '\0') || (cVar2 == 'M')) {
          if (0xf < (ulonglong)puVar7[7]) {
            puVar5 = (undefined8 *)*puVar5;
          }
          local_98 = *(int *)((longlong)puVar7 + 0x4c);
          puVar8 = puVar7;
          if (0xf < (ulonglong)puVar7[3]) {
            puVar8 = (undefined8 *)*puVar7;
          }
          local_90 = puVar5;
          local_88 = _Str;
          FUN_180014410("[NWSTORE]   %-9s \'%s\' type=%d ref=%d native=\'%s\' lua=\'%s\'\n",pcVar6,
                        puVar8,iVar1);
        }
        puVar7 = puVar7 + 10;
        iVar3 = local_74;
        param_1 = local_70;
      } while (puVar7 != local_68);
    }
    if ((((local_78 != '\0') || (iVar10 != 0)) || (iVar9 != DAT_1803e9570)) || (DAT_1803e6fe8 != 0))
    {
      DAT_1803e6fe8 = iVar10;
      DAT_1803e9570 = iVar9;
      local_98 = iVar3;
      FUN_180014410("[NWSTORE] ent=%d: %d agree, %d MISMATCH, %d non-string\n",param_1,iVar9,iVar10)
      ;
    }
  }
  FUN_18020c270(&local_60);
  return;
}



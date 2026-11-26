// 0x180027310  FUN_180027310
// size=373 thunk=false
// signature: undefined FUN_180027310()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180027310(longlong *param_1,int param_2)

{
  size_t _Size;
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  piVar3 = DAT_1803e9b10;
  uVar2 = _UNK_1803814b8;
  uVar1 = _DAT_1803814b0;
  local_60 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  piVar8 = DAT_1803e9b08;
  do {
    if (piVar8 == piVar3) {
      return 0;
    }
    if (*piVar8 != param_2) {
      local_98 = (undefined8 *)0x0;
      puStack_90 = (undefined8 *)0x0;
      local_88 = 0;
      uStack_78 = 0;
      local_70 = uVar1;
      uStack_68 = uVar2;
      local_80 = 0;
      cVar5 = FUN_180026bc0(piVar8 + 2,&local_98,&local_80);
      puVar4 = puStack_90;
      if ((cVar5 != '\0') &&
         (puVar9 = (undefined8 *)*param_1,
         (longlong)puStack_90 - (longlong)local_98 == param_1[1] - (longlong)puVar9)) {
        puVar7 = local_98;
        if (local_98 == puStack_90) {
LAB_18002746c:
          FUN_18020e450(&local_80);
          FUN_18020d5c0(&local_98);
          return 1;
        }
        while( true ) {
          _Buf2 = puVar9;
          if (0xf < (ulonglong)puVar9[3]) {
            _Buf2 = (undefined8 *)*puVar9;
          }
          _Size = puVar7[2];
          _Buf1 = puVar7;
          if (0xf < (ulonglong)puVar7[3]) {
            _Buf1 = (undefined8 *)*puVar7;
          }
          if ((_Size != puVar9[2]) ||
             ((_Size != 0 && (iVar6 = memcmp(_Buf1,_Buf2,_Size), iVar6 != 0)))) break;
          if (puVar7 + 4 == puVar4) goto LAB_18002746c;
          puVar9 = puVar9 + 4;
          puVar7 = puVar7 + 4;
        }
      }
      FUN_18020e450(&local_80);
      FUN_18020d5c0(&local_98);
    }
    piVar8 = piVar8 + 0x1a;
  } while( true );
}



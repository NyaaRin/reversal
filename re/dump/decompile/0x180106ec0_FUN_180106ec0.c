// 0x180106ec0  FUN_180106ec0
// size=478 thunk=false
// signature: undefined FUN_180106ec0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180106ec0(void)

{
  size_t _Size;
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *_Buf1;
  char *pcVar5;
  undefined8 *puVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  if (DAT_1803fa640 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  local_28 = 0x93fd561a96ab0c67;
  local_20 = 0xf50e5e909d50b4e9;
  plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_48,&local_28);
  plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_38,&local_20);
  puVar4 = (undefined8 *)FUN_1802028c0(*plVar3 + 0x28);
  _Size = puVar4[2];
  if (_Size != 0) {
    puVar6 = &DAT_1803ebb70;
    if (0xf < DAT_1803ebb88) {
      puVar6 = DAT_1803ebb70;
    }
    _Buf1 = puVar4;
    if (0xf < (ulonglong)puVar4[3]) {
      _Buf1 = (undefined8 *)*puVar4;
    }
    if ((_Size != DAT_1803ebb80) || (iVar2 = memcmp(_Buf1,puVar6,_Size), iVar2 != 0)) {
      if ((undefined8 **)puVar4 != &DAT_1803ebb70) {
        puVar6 = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar6 = (undefined8 *)*puVar4;
        }
        FUN_180212700(&DAT_1803ebb70,puVar6,_Size);
      }
      if (DAT_180409990 != (longlong *)0x0) {
        (**(code **)(*DAT_180409990 + 0x68))();
        DAT_180409990 = (longlong *)0x0;
      }
      puVar6 = puVar4;
      if (0xf < (ulonglong)puVar4[3]) {
        puVar6 = (undefined8 *)*puVar4;
      }
      local_58 = 0;
      plVar3 = (longlong *)
               (**(code **)(*DAT_1803fa640 + 600))(DAT_1803fa640,puVar6,"Model textures",1);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar1 = (**(code **)(*plVar3 + 0x150))(plVar3), cVar1 != '\0')) {
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        pcVar5 = "[CHAMS] custom material \'%s\' not found -> falling back to Flat\n";
      }
      else {
        (**(code **)(*plVar3 + 0x60))(plVar3);
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        pcVar5 = "[CHAMS] custom material \'%s\' resolved\n";
        DAT_180409990 = plVar3;
      }
      FUN_180014410(pcVar5,puVar4);
    }
    if (DAT_180409990 != (longlong *)0x0) {
      return DAT_180409990;
    }
  }
  plVar3 = (longlong *)FUN_1801070a0(0);
  return plVar3;
}



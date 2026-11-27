// 0x180095180  FUN_180095180
// size=363 thunk=false
// signature: undefined FUN_180095180()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined * FUN_180095180(void)

{
  size_t _Size;
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *_Buf1;
  undefined8 *puVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  undefined1 local_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  if ((DAT_1805bb708 & 1) == 0) {
    DAT_1805bb708 = DAT_1805bb708 | 1;
    atexit((_func_5014 *)&LAB_180309880);
  }
  if ((DAT_1805bb708 & 2) == 0) {
    DAT_1805bb708 = DAT_1805bb708 | 2;
    atexit((_func_5014 *)&LAB_180309870);
  }
  local_20 = 0x93fd561a96ab0c67;
  local_18 = 0xc262839f3cb156d3;
  plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_30,&local_20);
  plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_48,&local_18);
  puVar3 = (undefined8 *)FUN_1802028c0(*plVar2 + 0x28);
  puVar5 = &DAT_1803e7978;
  if (0xf < DAT_1803e7990) {
    puVar5 = DAT_1803e7978;
  }
  _Size = puVar3[2];
  _Buf1 = puVar3;
  if (0xf < (ulonglong)puVar3[3]) {
    _Buf1 = (undefined8 *)*puVar3;
  }
  if ((_Size != DAT_1803e7988) || ((_Size != 0 && (iVar1 = memcmp(_Buf1,puVar5,_Size), iVar1 != 0)))
     ) {
    uVar4 = FUN_180093400(local_48,puVar3);
    FUN_18020d830(&DAT_180425790,uVar4);
    FUN_18020d5c0(local_48);
    if ((undefined8 **)puVar3 != &DAT_1803e7978) {
      puVar5 = puVar3 + 2;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      FUN_180212700(&DAT_1803e7978,puVar3,*puVar5);
    }
  }
  return &DAT_180425790;
}



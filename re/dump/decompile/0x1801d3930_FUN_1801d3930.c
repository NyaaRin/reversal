// 0x1801d3930  FUN_1801d3930
// size=358 thunk=false
// signature: undefined FUN_1801d3930()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801d3930(undefined8 *param_1,undefined8 *param_2,char *param_3)

{
  ulonglong uVar1;
  size_t sVar2;
  size_t _Size;
  char cVar3;
  int iVar4;
  undefined8 *_Buf1;
  longlong *plVar5;
  undefined8 *_Buf2;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_148 [32];
  char *local_128;
  undefined8 local_118 [2];
  undefined1 local_108 [192];
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_148;
  puVar7 = *(undefined8 **)(*(longlong *)*param_1 + 0x30);
  puVar6 = *(undefined8 **)(*(longlong *)*param_1 + 0x28);
  if (puVar6 != puVar7) {
    uVar1 = param_2[3];
    sVar2 = param_2[2];
    do {
      _Buf2 = param_2;
      if (0xf < uVar1) {
        _Buf2 = (undefined8 *)*param_2;
      }
      _Size = puVar6[2];
      _Buf1 = puVar6;
      if (0xf < (ulonglong)puVar6[3]) {
        _Buf1 = (undefined8 *)*puVar6;
      }
      if ((_Size == sVar2) && ((_Size == 0 || (iVar4 = memcmp(_Buf1,_Buf2,_Size), iVar4 == 0)))) {
        if (puVar6 != puVar7) {
          return;
        }
        break;
      }
      puVar6 = puVar6 + 4;
    } while (puVar6 != puVar7);
  }
  *(int *)param_1[1] = *(int *)param_1[1] + 1;
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    puVar7 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar7 = (undefined8 *)*param_2;
    }
    FUN_180012ac0(local_108,0xc0,&DAT_1803431ac,puVar7);
  }
  else {
    puVar7 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar7 = (undefined8 *)*param_2;
    }
    local_128 = param_3;
    FUN_180012ac0(local_108,0xc0,"%s = %s",puVar7);
  }
  local_118[0] = 0;
  cVar3 = FUN_1802c1850(local_108,0,0,local_118);
  if ((cVar3 != '\0') &&
     (plVar5 = (longlong *)(*(longlong *)*param_1 + 0x28),
     (int)(*(longlong *)(*(longlong *)*param_1 + 0x30) - *plVar5 >> 5) < 0x10)) {
    FUN_18020d6f0(plVar5,param_2);
    LOCK();
    DAT_1803e9190 = DAT_1803e9190 + 1;
    UNLOCK();
  }
  return;
}



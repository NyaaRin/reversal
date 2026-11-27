// 0x180027490  FUN_180027490
// size=281 thunk=false
// signature: undefined FUN_180027490()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_180027490(undefined8 *param_1,double param_2)

{
  double dVar1;
  short sVar2;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_70;
  char local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  local_78 = 0;
  local_70 = param_1;
  sVar2 = _dclass(SUB84(param_2,0));
  if (sVar2 < 1) {
    dVar1 = floor(param_2);
    if ((param_2 != dVar1) ||
       (uVar4 = SUB84(param_2,0) & _DAT_1803817d0,
       uVar5 = (uint)((ulonglong)param_2 >> 0x20) & _UNK_1803817d4,
       DAT_180381160 < (double)CONCAT44(uVar5,uVar4) ||
       DAT_180381160 == (double)CONCAT44(uVar5,uVar4))) {
      FUN_180012ac0(local_68,0x40,"%.14g",param_2);
    }
    else {
      FUN_180012ac0(local_68,0x40,&DAT_18033f574,(longlong)param_2);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    sVar3 = strlen(local_68);
    FUN_18001d080(param_1,local_68,sVar3);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  return param_1;
}



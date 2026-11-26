// 0x1800c0920  FUN_1800c0920
// size=512 thunk=false
// signature: undefined FUN_1800c0920()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1800c0920(void *param_1,longlong param_2,float param_3,char param_4)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  BOOL BVar4;
  ulonglong uVar5;
  void *lp;
  char *_String;
  char *pcVar6;
  float fVar7;
  double dVar8;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  char *local_c0;
  undefined1 local_b8 [32];
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_e8;
  if ((param_1 == (void *)0x0) || (param_2 == 0)) {
    return local_58 & 0xffffffffffffff00;
  }
  FUN_180012ac0(local_b8,0x20,&DAT_18034c190,(double)param_3);
  uVar5 = FUN_1800170a0(param_1);
  if ((uVar5 & 2) == 0) {
    cVar2 = FUN_1800170f0(param_1);
    if (cVar2 == '\0') {
      uVar3 = FUN_1800170a0(param_1);
      if ((uVar3 & 0x406012) != 0) {
        FUN_1800170c0(param_1,~(uVar3 & 0x406012) & uVar3);
      }
    }
    local_c8 = local_b8;
    FUN_180012ac0(local_98,0x40,"%s %s",param_2);
    FUN_1800c08f0(local_98);
    if (param_4 == '\0') goto LAB_1800c0a0a;
  }
  FUN_1801fcdc0(param_1);
LAB_1800c0a0a:
  lp = *(void **)((longlong)param_1 + 0x38);
  if (((lp == (void *)0x0) || (lp == param_1)) || (BVar4 = IsBadReadPtr(lp,0x60), BVar4 != 0)) {
    lp = param_1;
  }
  _String = *(char **)((longlong)lp + 0x48);
  if ((_String == (char *)0x0) || (BVar4 = IsBadReadPtr(_String,2), BVar4 != 0)) {
    _String = "";
  }
  dVar8 = atof(_String);
  local_c0 = "DID NOT TAKE";
  bVar1 = (float)((uint)((float)dVar8 - param_3) & _DAT_1803817c0) <=
          (float)((uint)param_3 & _DAT_1803817c0) * DAT_180380980 + DAT_180380958;
  if (bVar1) {
    local_c0 = "OK";
  }
  fVar7 = (float)FUN_180019700(param_1);
  local_c8 = (undefined1 *)(double)fVar7;
  pcVar6 = "(null)";
  if (_String != (char *)0x0) {
    pcVar6 = _String;
  }
  FUN_180014410("[LAGCOMP] %s -> %.3f : string=\"%s\" float=%.3f %s\n",param_2,
                SUB84((double)param_3,0),pcVar6);
  return (ulonglong)bVar1;
}



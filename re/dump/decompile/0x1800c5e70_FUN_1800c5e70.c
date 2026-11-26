// 0x1800c5e70  FUN_1800c5e70
// size=254 thunk=false
// signature: undefined FUN_1800c5e70()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

double FUN_1800c5e70(void)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  cVar1 = FUN_1800b8200();
  if (cVar1 == '\0') {
    local_48 = 0x13806d9e35de0023;
    local_40 = 0x6018685605485a;
    plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_68,&local_48);
    plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_58,&local_40);
    piVar4 = (int *)FUN_1802029c0(*plVar3 + 0x28);
    iVar5 = *piVar4;
  }
  else {
    iVar2 = FUN_1800b8250();
    iVar5 = 200;
    if (iVar2 == 1) {
      iVar5 = 1000;
    }
  }
  dVar9 = (double)iVar5 / DAT_180380ec0;
  fVar6 = (float)FUN_1800b6be0();
  dVar7 = (double)FUN_1800c5b20((double)fVar6);
  dVar8 = (double)FUN_1800c5c90();
  dVar7 = dVar7 + dVar8;
  fVar6 = (float)FUN_1800b6be0();
  if ((fVar6 <= DAT_180380964) && (dVar9 <= dVar7)) {
    dVar7 = dVar9;
  }
  dVar8 = (double)FUN_1800c5c00();
  if (dVar7 <= dVar8) {
    dVar8 = dVar7;
  }
  return dVar8;
}



// 0x180055050  FUN_180055050
// size=393 thunk=false
// signature: undefined FUN_180055050()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180055050(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_78 [32];
  float local_58;
  float local_54;
  float local_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)FUN_180039770();
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803fa668 != (longlong *)0x0))
  {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,3,3);
    dVar5 = 0.0;
    if (cVar1 == '\0') {
      dVar3 = 0.0;
    }
    else {
      dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,3);
    }
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,3);
    if (cVar1 == '\0') {
      dVar4 = 0.0;
    }
    else {
      dVar4 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,2);
    }
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);
    if (cVar1 != '\0') {
      dVar5 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);
    }
    local_58 = (float)dVar5;
    local_54 = (float)dVar4;
    local_50 = (float)dVar3;
    if (((((uint)local_58 & 0x7f800000) != 0x7f800000) &&
        (((uint)local_54 & 0x7f800000) != 0x7f800000)) &&
       (((uint)local_50 & 0x7f800000) != 0x7f800000)) {
      (**(code **)(*DAT_1803fa668 + 0xa0))(DAT_1803fa668,&local_58);
    }
  }
  return 0;
}



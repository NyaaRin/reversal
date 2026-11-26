// 0x1800e7360  FUN_1800e7360
// size=244 thunk=false
// signature: undefined FUN_1800e7360()
// status: ok


undefined8 FUN_1800e7360(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_180039770();
  lVar4 = DAT_1803ff960;
  if (((plVar5 != (longlong *)0x0) && (plVar5[1] == param_1)) && (DAT_1803ff960 != 0)) {
    dVar3 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,3);
    dVar2 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,2);
    dVar1 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,1);
    if (((((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) &&
        (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000)) &&
       (((uint)(float)dVar3 & 0x7f800000) != 0x7f800000)) {
      *(float *)(lVar4 + 0x40) = (float)dVar1;
      *(float *)(lVar4 + 0x44) = (float)dVar2;
      *(float *)(lVar4 + 0x48) = (float)dVar3;
    }
    return 0;
  }
  return 0;
}



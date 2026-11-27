// 0x180057410  FUN_180057410
// size=469 thunk=false
// signature: undefined FUN_180057410()
// status: ok


undefined8 FUN_180057410(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float local_48;
  float local_44;
  float local_40;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,3,3);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);
      uVar5 = 0;
      uVar6 = 0;
      if (cVar1 == '\0') {
        uVar9 = 0;
        uVar10 = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar2 + 0xc0))(plVar2,1);
        uVar9 = (undefined4)uVar3;
        uVar10 = (undefined4)((ulonglong)uVar3 >> 0x20);
      }
      cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,3);
      if (cVar1 == '\0') {
        uVar7 = 0;
        uVar8 = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar2 + 0xc0))(plVar2,2);
        uVar7 = (undefined4)uVar3;
        uVar8 = (undefined4)((ulonglong)uVar3 >> 0x20);
      }
      cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,3,3);
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(*plVar2 + 0xc0))(plVar2,3);
        uVar5 = (undefined4)uVar3;
        uVar6 = (undefined4)((ulonglong)uVar3 >> 0x20);
      }
      cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,4,3);
      dVar4 = DAT_180380d08;
      if (cVar1 != '\0') {
        dVar4 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,4);
      }
      FUN_180053f40(&local_48,(float)(double)CONCAT44(uVar10,uVar9),
                    (float)(double)CONCAT44(uVar8,uVar7),(int)(double)CONCAT44(uVar6,uVar5),
                    (float)dVar4);
      (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_48);
      (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_44);
      (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_40);
      return 3;
    }
    (**(code **)(*plVar2 + 0xe0))();
    return 1;
  }
  return 0;
}



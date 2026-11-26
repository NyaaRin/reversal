// 0x180171b80  FUN_180171b80
// size=204 thunk=false
// signature: undefined FUN_180171b80()
// status: ok


float FUN_180171b80(int param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  float *pfVar5;
  longlong *plVar6;
  float fVar7;
  undefined1 local_res10 [8];
  
  plVar2 = DAT_1803fb108;
  fVar7 = 0.0;
  plVar6 = DAT_1803fb100;
  if (DAT_1803fb100 == DAT_1803fb108) {
    fVar7 = 0.0;
  }
  else {
    do {
      plVar1 = (longlong *)*plVar6;
      if ((((((int)plVar1[1] == param_1) && (iVar4 = (**(code **)(*plVar1 + 8))(plVar1), iVar4 != 4)
            ) && (iVar4 != 7)) && (*(char *)((longlong)plVar1 + 0x14) != '\0')) &&
         (((DAT_1803fcb80 != '\0' ||
           (((DAT_1803fcb81 == '\0' || (*(char *)((longlong)plVar1 + 0x16) != '\0')) &&
            ((*(char *)((longlong)plVar1 + 0x15) == '\0' ||
             (DAT_1803fcb68 <= *(float *)(plVar1 + 3))))))) &&
          (cVar3 = (**(code **)(*plVar1 + 0x38))(plVar1), cVar3 != '\0')))) {
        pfVar5 = (float *)(**(code **)(*plVar1 + 0x10))(plVar1,local_res10);
        if (fVar7 <= *pfVar5) {
          fVar7 = *pfVar5;
        }
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar2);
  }
  return fVar7;
}



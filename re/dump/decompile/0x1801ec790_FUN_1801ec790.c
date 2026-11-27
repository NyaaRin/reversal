// 0x1801ec790  FUN_1801ec790
// size=338 thunk=false
// signature: undefined FUN_1801ec790()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801ec790(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  DWORD local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)param_1[2];
  plVar3 = (longlong *)*plVar4;
  param_1[1] = (longlong)plVar3;
  if (plVar3 != plVar4) {
    do {
      VirtualProtect((LPVOID)(*param_1 + (longlong)(int)plVar3[4] * 8),8,0x40,local_38);
      *(undefined8 *)(*param_1 + (longlong)*(int *)(param_1[1] + 0x20) * 8) =
           *(undefined8 *)(param_1[1] + 0x28);
      VirtualProtect((LPVOID)(*param_1 + (longlong)*(int *)(param_1[1] + 0x20) * 8),8,local_38[0],
                     (PDWORD)0x0);
      plVar4 = (longlong *)param_1[1];
      plVar3 = (longlong *)plVar4[2];
      if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x19);
        plVar4 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x19);
          plVar3 = plVar4;
          plVar4 = (longlong *)*plVar4;
        }
      }
      else {
        cVar1 = *(char *)(plVar4[1] + 0x19);
        plVar3 = (longlong *)plVar4[1];
        while ((cVar1 == '\0' && (plVar4 == (longlong *)plVar3[2]))) {
          param_1[1] = (longlong)plVar3;
          cVar1 = *(char *)(plVar3[1] + 0x19);
          plVar4 = plVar3;
          plVar3 = (longlong *)plVar3[1];
        }
      }
      param_1[1] = (longlong)plVar3;
      plVar4 = (longlong *)param_1[2];
    } while (plVar3 != plVar4);
  }
  cVar1 = *(char *)(plVar4[1] + 0x19);
  plVar3 = (longlong *)plVar4[1];
  while (cVar1 == '\0') {
    FUN_180214c40(param_1 + 2,param_1 + 2,plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    free(plVar3);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  plVar4[1] = (longlong)plVar4;
  *plVar4 = (longlong)plVar4;
  plVar4[2] = (longlong)plVar4;
  param_1[3] = 0;
  *param_1 = 0;
  return;
}



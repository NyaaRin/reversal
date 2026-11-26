// 0x1802c2840  FUN_1802c2840
// size=253 thunk=false
// signature: undefined FUN_1802c2840()
// status: ok


void FUN_1802c2840(undefined8 param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  piVar4 = *(int **)(param_2 + 2);
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  piVar1 = piVar4 + (longlong)*param_2 * 6;
  for (; piVar4 != piVar1; piVar4 = piVar4 + 6) {
    iVar3 = *piVar4;
    if (iVar3 == 1) {
      if ((*(byte *)(lVar2 + 0x28e4) & 0x40) == 0) {
        iVar3 = 1;
      }
      else {
        pcVar5 = "Clear";
        if ((char)piVar4[1] != '\0') {
          pcVar5 = "SelectAll";
        }
        FUN_180289170("[selection] %s: Request: SetAll %d (= %s)\n","EndMultiSelect",(char)piVar4[1]
                      ,pcVar5);
        iVar3 = *piVar4;
      }
    }
    if ((iVar3 == 2) && ((*(byte *)(lVar2 + 0x28e4) & 0x40) != 0)) {
      FUN_180289170("[selection] %s: Request: SetRange %I64d..%I64d (0x%I64X..0x%I64X) = %d (dir %d)\n"
                    ,"EndMultiSelect",*(undefined8 *)(piVar4 + 2),*(undefined8 *)(piVar4 + 4),
                    *(undefined8 *)(piVar4 + 2),*(undefined8 *)(piVar4 + 4),(char)piVar4[1],
                    (int)*(char *)((longlong)piVar4 + 5));
    }
  }
  return;
}



// 0x180288150  FUN_180288150
// size=563 thunk=false
// signature: undefined FUN_180288150()
// status: ok


void FUN_180288150(char *param_1,size_t param_2)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  char *_Dst;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar3 + 0xec0);
  if (param_2 == 0) {
    param_2 = strlen(param_1);
  }
  FUN_18028a8d0(lVar3 + 0x27a8,(int)param_2 + 1);
  _Dst = *(char **)(lVar3 + 0x27b0);
  pcVar2 = _Dst + param_2;
  memcpy(_Dst,param_1,param_2);
  *pcVar2 = '\0';
  lVar9 = *(longlong *)(lVar3 + 0x27c0);
  lVar8 = lVar9 + (longlong)*(int *)(lVar3 + 0x27b8) * 0x48;
  for (; lVar9 != lVar8; lVar9 = lVar9 + 0x48) {
    if (*(code **)(lVar9 + 0x18) != (code *)0x0) {
      (**(code **)(lVar9 + 0x18))(lVar3,lVar9);
    }
  }
  lVar8 = 0;
  lVar9 = 0;
  pcVar5 = _Dst;
  while (pcVar5 < pcVar2) {
    for (; (*pcVar5 == '\n' || (pcVar4 = pcVar5, *pcVar5 == '\r')); pcVar5 = pcVar5 + 1) {
    }
    for (; ((pcVar4 < pcVar2 && (*pcVar4 != '\n')) && (*pcVar4 != '\r')); pcVar4 = pcVar4 + 1) {
    }
    *pcVar4 = '\0';
    if (*pcVar5 != ';') {
      if (((*pcVar5 == '[') && (pcVar5 < pcVar4)) && (pcVar1 = pcVar4 + -1, pcVar4[-1] == ']')) {
        pcVar5 = pcVar5 + 1;
        *pcVar1 = '\0';
        puVar6 = memchr(pcVar5,0x5d,(longlong)pcVar1 - (longlong)pcVar5);
        if ((puVar6 != (undefined1 *)0x0) &&
           (pvVar7 = memchr(puVar6 + 1,0x5b,(longlong)pcVar1 - (longlong)(puVar6 + 1)),
           pvVar7 != (void *)0x0)) {
          *puVar6 = 0;
          lVar9 = FUN_180288070(pcVar5);
          if (lVar9 == 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = (**(code **)(lVar9 + 0x20))(lVar3,lVar9,(longlong)pvVar7 + 1);
          }
        }
      }
      else if ((lVar9 != 0) && (lVar8 != 0)) {
        (**(code **)(lVar9 + 0x28))(lVar3,lVar9,lVar8,pcVar5);
      }
    }
    pcVar5 = pcVar4 + 1;
  }
  *(undefined1 *)(lVar3 + 0x27a0) = 1;
  memcpy(_Dst,param_1,param_2);
  lVar9 = *(longlong *)(lVar3 + 0x27c0);
  lVar8 = lVar9 + (longlong)*(int *)(lVar3 + 0x27b8) * 0x48;
  for (; lVar9 != lVar8; lVar9 = lVar9 + 0x48) {
    if (*(code **)(lVar9 + 0x30) != (code *)0x0) {
      (**(code **)(lVar9 + 0x30))(lVar3,lVar9);
    }
  }
  return;
}



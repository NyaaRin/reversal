// 0x1800f65f0  FUN_1800f65f0
// size=418 thunk=false
// signature: undefined FUN_1800f65f0()
// status: ok


void FUN_1800f65f0(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  size_t sVar5;
  int iVar6;
  char *pcVar7;
  float fVar8;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  plVar4 = DAT_1803fa668;
  *(int *)(param_1 + 0x10) = (int)(*(float *)(*(longlong *)(lVar2 + 0xec0) + 0xd8) + DAT_180380ac0);
  if ((plVar4 == (longlong *)0x0) ||
     (cVar3 = (**(code **)(*plVar4 + 0xd0))(), plVar4 = DAT_1803fa668, cVar3 == '\0')) {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xc) = 1;
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x240))();
    if (plVar4 != (longlong *)0x0) {
      fVar8 = (float)(**(code **)(*plVar4 + 0x50))(plVar4,0);
      lVar2 = DAT_1803fa608;
      iVar6 = (int)(fVar8 * DAT_180381278 + DAT_180380ac0);
      if (iVar6 < 1) {
        iVar6 = 0;
      }
      *(int *)(param_1 + 0x14) = iVar6;
      if ((lVar2 == 0) || (dVar1 = *(double *)(lVar2 + 0x28), dVar1 <= 0.0)) {
        iVar6 = 0;
      }
      else {
        iVar6 = (int)(DAT_180380d08 / dVar1 + DAT_180380cb0);
      }
      *(int *)(param_1 + 0x18) = iVar6;
      cVar3 = (**(code **)(*plVar4 + 0x40))(plVar4);
      if (cVar3 == '\0') {
        cVar3 = (**(code **)(*plVar4 + 0x30))(plVar4);
        if (cVar3 == '\0') {
          pcVar7 = (char *)(**(code **)(*plVar4 + 8))(plVar4);
          if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
            pcVar7 = "Server";
          }
          FUN_180012ac0(param_1 + 0x1c,0x40,&DAT_1803431ac,pcVar7);
          sVar5 = strlen((char *)(param_1 + 0x1c));
          if (sVar5 < 0x1b) {
            return;
          }
          *(undefined2 *)(param_1 + 0x34) = 0x2e2e;
          *(undefined1 *)(param_1 + 0x33) = 0x2e;
          *(undefined1 *)(param_1 + 0x36) = 0;
          return;
        }
        pcVar7 = "Local host";
      }
      else {
        pcVar7 = "Demo";
      }
      goto LAB_1800f6778;
    }
  }
  *(undefined1 *)(param_1 + 0xc) = 0;
  pcVar7 = "mayrrX64";
LAB_1800f6778:
  strcpy_s((char *)(param_1 + 0x1c),0x40,pcVar7);
  return;
}



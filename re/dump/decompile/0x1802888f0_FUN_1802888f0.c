// 0x1802888f0  FUN_1802888f0
// size=224 thunk=false
// signature: undefined FUN_1802888f0()
// status: ok


void FUN_1802888f0(longlong param_1)

{
  short sVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  
  puVar2 = (undefined4 *)0x0;
  if (*(longlong *)(param_1 + 0x27d0) != 0) {
    puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x27d0) + 4);
  }
  while (puVar2 != (undefined4 *)0x0) {
    if (*(char *)((longlong)puVar2 + 0xe) != '\0') {
      lVar3 = FUN_1802736c0(*puVar2);
      if (lVar3 != 0) {
        sVar1 = *(short *)(puVar2 + 1);
        *(float *)(lVar3 + 0x2c) = (float)(int)*(short *)((longlong)puVar2 + 6);
        *(float *)(lVar3 + 0x28) = (float)(int)sVar1;
        if ((0 < *(short *)(puVar2 + 2)) && (0 < *(short *)((longlong)puVar2 + 10))) {
          fVar6 = (float)(int)*(short *)(puVar2 + 2);
          fVar5 = (float)(int)*(short *)((longlong)puVar2 + 10);
          *(float *)(lVar3 + 0x38) = fVar6;
          *(float *)(lVar3 + 0x3c) = fVar5;
          *(float *)(lVar3 + 0x30) = fVar6;
          *(float *)(lVar3 + 0x34) = fVar5;
        }
        *(undefined1 *)(lVar3 + 0xcf) = *(undefined1 *)(puVar2 + 3);
      }
      *(undefined1 *)((longlong)puVar2 + 0xe) = 0;
    }
    puVar4 = (undefined4 *)((longlong)(int)puVar2[-1] + (longlong)puVar2);
    puVar2 = (undefined4 *)0x0;
    if (puVar4 != (undefined4 *)
                  (*(longlong *)(param_1 + 0x27d0) + 4 + (longlong)*(int *)(param_1 + 0x27c8))) {
      puVar2 = puVar4;
    }
  }
  return;
}



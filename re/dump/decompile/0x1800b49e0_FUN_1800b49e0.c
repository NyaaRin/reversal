// 0x1800b49e0  FUN_1800b49e0
// size=406 thunk=false
// signature: undefined FUN_1800b49e0()
// status: ok


void FUN_1800b49e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  piVar2 = (int *)FUN_1800b3c00();
  if (((param_1 != 0) && ((char)piVar2[8] != '\0')) && (*(char *)(param_2 + 0x40) != '\0')) {
    FUN_1800b4420(*piVar2 + param_1,param_2,0xc);
    FUN_1800b4420(piVar2[1] + param_1,param_2 + 0xc,0xc);
    FUN_1800b4420(piVar2[4] + param_1,param_2 + 0x24,0xc);
    FUN_1800b4420(piVar2[3] + param_1,param_2 + 0x30,4);
    if (0 < piVar2[2]) {
      FUN_1800b4420(param_1 + piVar2[2],param_2 + 0x18,0xc);
    }
    if (0 < piVar2[5]) {
      FUN_1800b4420(param_1 + piVar2[5],param_2 + 0x34,4);
    }
    if (0 < piVar2[6]) {
      FUN_1800b4420(param_1 + piVar2[6],param_2 + 0x38,4);
    }
    if (0 < piVar2[7]) {
      FUN_1800b4420(param_1 + piVar2[7],param_2 + 0x3c,4);
    }
    if ((0 < *(int *)(param_2 + 0x44)) && (DAT_18040a218 != 0)) {
      iVar4 = 0;
      iVar5 = 0;
      lVar6 = DAT_18040a218;
      do {
        lVar3 = (longlong)iVar5;
        lVar1 = lVar6 + lVar3 * 0x18;
        if ((&DAT_1804f0b70)[lVar3] != '\0') {
          FUN_1800b4420(*(int *)(lVar6 + lVar3 * 0x18) + param_1,&DAT_1804f0cf0 + iVar4,
                        *(undefined4 *)(lVar1 + 4));
          lVar6 = DAT_18040a218;
        }
        iVar4 = iVar4 + *(int *)(lVar1 + 4);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_2 + 0x44));
    }
  }
  return;
}



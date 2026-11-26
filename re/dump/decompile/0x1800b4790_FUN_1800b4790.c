// 0x1800b4790  FUN_1800b4790
// size=579 thunk=false
// signature: undefined FUN_1800b4790()
// status: ok


undefined8 FUN_1800b4790(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  
  piVar3 = (int *)FUN_1800b3c00();
  if (((((param_1 != 0) && ((char)piVar3[8] != '\0')) &&
       (cVar1 = FUN_1800b4400(*piVar3 + param_1,param_2,0xc), cVar1 != '\0')) &&
      ((cVar1 = FUN_1800b4400(piVar3[1] + param_1,param_2 + 0xc,0xc), cVar1 != '\0' &&
       (cVar1 = FUN_1800b4400(piVar3[4] + param_1,param_2 + 0x24,0xc), cVar1 != '\0')))) &&
     (cVar1 = FUN_1800b4400(piVar3[3] + param_1,param_2 + 0x30,4), cVar1 != '\0')) {
    if (0 < piVar3[2]) {
      FUN_1800b4400(param_1 + piVar3[2],param_2 + 0x18,0xc);
    }
    if (0 < piVar3[5]) {
      FUN_1800b4400(param_1 + piVar3[5],param_2 + 0x34,4);
    }
    if (0 < piVar3[6]) {
      FUN_1800b4400(param_1 + piVar3[6],param_2 + 0x38,4);
    }
    if (0 < piVar3[7]) {
      FUN_1800b4400(param_1 + piVar3[7],param_2 + 0x3c,4);
    }
    lVar4 = FUN_1800b4450(param_1);
    puVar6 = (undefined *)0x0;
    puVar5 = puVar6;
    puVar7 = puVar6;
    if (lVar4 != 0) {
      if ((lVar4 != DAT_18040a228) || (DAT_18040a220 == '\0')) {
        DAT_18040a220 = '\x01';
        DAT_18040a230 = 0;
        DAT_18040a228 = lVar4;
        FUN_1800b44d0(lVar4,0,&DAT_1804ee770,&DAT_18040a230,0);
        FUN_180014410("[EXTRAP] prediction datamap %p -> %d flattened fields\n",lVar4,DAT_18040a230)
        ;
      }
      puVar5 = (undefined *)(ulonglong)DAT_18040a230;
      puVar7 = &DAT_1804ee770;
    }
    DAT_18040a218 = puVar7;
    *(int *)(param_2 + 0x44) = (int)puVar5;
    if (DAT_18040a218 == (undefined *)0x0) {
      *(undefined4 *)(param_2 + 0x44) = 0;
    }
    else {
      puVar7 = puVar6;
      if (0 < (int)puVar5) {
        do {
          puVar5 = DAT_18040a218;
          lVar4 = (longlong)(int)puVar7;
          uVar2 = FUN_1800b4400(*(int *)(DAT_18040a218 + lVar4 * 0x18) + param_1,
                                &DAT_1804f0cf0 + (int)puVar6,
                                *(undefined4 *)(DAT_18040a218 + lVar4 * 0x18 + 4));
          puVar6 = (undefined *)(ulonglong)(uint)((int)puVar6 + *(int *)(puVar5 + lVar4 * 0x18 + 4))
          ;
          uVar8 = (int)puVar7 + 1;
          puVar7 = (undefined *)(ulonglong)uVar8;
          (&DAT_1804f0b70)[lVar4] = uVar2;
        } while ((int)uVar8 < *(int *)(param_2 + 0x44));
      }
    }
    *(undefined1 *)(param_2 + 0x40) = 1;
    return 1;
  }
  return 0;
}



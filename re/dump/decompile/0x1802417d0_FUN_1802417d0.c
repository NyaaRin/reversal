// 0x1802417d0  FUN_1802417d0
// size=350 thunk=false
// signature: undefined FUN_1802417d0()
// status: ok


longlong * FUN_1802417d0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 local_68;
  undefined8 uStack_60;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar5 = FUN_1802d8350(0x78);
  *(longlong *)lVar5 = lVar5;
  *(longlong *)(lVar5 + 8) = lVar5;
  *(longlong *)(lVar5 + 0x10) = lVar5;
  *(undefined2 *)(lVar5 + 0x18) = 0x101;
  *param_1 = lVar5;
  plVar8 = (longlong *)*param_2;
  plVar1 = (longlong *)param_2[1];
  lVar5 = *param_1;
  do {
    if (plVar8 == plVar1) {
      return param_1;
    }
    puVar6 = (undefined8 *)FUN_180241e40(param_1,&local_68,lVar5,plVar8);
    uVar3 = *puVar6;
    uVar4 = puVar6[1];
    if (*(char *)(puVar6 + 2) == '\0') {
      if (param_1[1] == 0x222222222222222) {
                    /* WARNING: Subroutine does not return */
        FUN_180013b80();
      }
      lVar2 = *param_1;
      plVar7 = (longlong *)FUN_1802d8350(0x78);
      plVar7[4] = *plVar8;
      FUN_180241930(plVar7 + 5,plVar8 + 1);
      FUN_180241280(plVar7 + 7,plVar8 + 3);
      *plVar7 = lVar2;
      plVar7[1] = lVar2;
      plVar7[2] = lVar2;
      *(undefined2 *)(plVar7 + 3) = 0;
      local_68 = uVar3;
      uStack_60 = uVar4;
      FUN_18022bb90(param_1,&local_68,plVar7);
    }
    plVar8 = plVar8 + 0xb;
  } while( true );
}



// 0x180069c20  FUN_180069c20
// size=530 thunk=false
// signature: undefined FUN_180069c20()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180069c20(undefined8 param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  int iVar6;
  longlong *plVar7;
  char cVar8;
  undefined1 auStack_a8 [32];
  ulonglong *local_88;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  double local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  int local_44;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  plVar7 = (longlong *)FUN_180039770();
  if ((plVar7 != (longlong *)0x0) && (plVar7[1] == param_2)) {
    dVar2 = (double)(**(code **)(*plVar7 + 0x160))(plVar7,1);
    if ((DAT_1803faff8 == (code *)0x0) || (plVar7[1] == 0)) {
      cVar8 = (**(code **)(*plVar7 + 0x138))(plVar7,2,6);
    }
    else {
      iVar6 = (*DAT_1803faff8)(plVar7[1],2);
      cVar8 = iVar6 == 6;
    }
    if (cVar8 != '\0') {
      if ((DAT_1803faf38 == (code *)0x0) || (plVar7[1] == 0)) {
        (**(code **)(*plVar7 + 8))(plVar7,2);
      }
      else {
        (*DAT_1803faf38)(plVar7[1],2);
      }
      iVar6 = FUN_18002d7a0(plVar7);
      uVar4 = _UNK_1803814b8;
      uVar3 = _DAT_1803814b0;
      if (iVar6 != -1) {
        uStack_70 = 0;
        local_68 = _DAT_1803814b0;
        uStack_60 = _UNK_1803814b8;
        local_78 = 0;
        local_58 = 0.0;
        uStack_50 = 0;
        local_48 = 0;
        local_44 = 0xffffffff;
        local_40 = 0;
        FUN_180212700(&local_78,&DAT_18033e5ea,0);
        puVar5 = DAT_1803eb3d0;
        dVar1 = 0.0;
        uStack_50 = 0;
        if (DAT_1803fa608 != (float *)0x0) {
          dVar1 = (double)*DAT_1803fa608;
        }
        local_58 = dVar2 + dVar1;
        local_48 = 1;
        local_44 = iVar6;
        if (DAT_1803eb3d0 == DAT_1803eb3d8) {
          FUN_180227990(SUB84(dVar1,0),DAT_1803eb3d0,&local_78);
        }
        else {
          local_88 = DAT_1803eb3d0;
          *DAT_1803eb3d0 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          *puVar5 = local_78;
          puVar5[1] = uStack_70;
          puVar5[2] = local_68;
          puVar5[3] = uStack_60;
          local_68 = uVar3;
          uStack_60 = uVar4;
          local_78 = local_78 & 0xffffffffffffff00;
          puVar5[4] = (ulonglong)local_58;
          puVar5[5] = 0;
          *(undefined4 *)(puVar5 + 6) = 1;
          *(int *)((longlong)puVar5 + 0x34) = iVar6;
          *(undefined1 *)(puVar5 + 7) = local_40;
          DAT_1803eb3d0 = DAT_1803eb3d0 + 8;
        }
        FUN_18020e450(&local_78);
      }
    }
  }
  return 0;
}



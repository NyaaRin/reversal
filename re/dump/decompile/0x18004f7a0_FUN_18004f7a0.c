// 0x18004f7a0  FUN_18004f7a0
// size=742 thunk=false
// signature: undefined FUN_18004f7a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18004f7a0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  double dVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *_Memory;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  longlong lVar15;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined4 local_78;
  int local_70;
  longlong *local_68;
  undefined8 *local_60;
  undefined8 *puStack_58;
  undefined8 *local_50;
  longlong *local_48;
  longlong *plStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  puVar13 = auStack_98;
  puVar14 = auStack_98;
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  plVar7 = (longlong *)FUN_180039770();
  if ((plVar7 == (longlong *)0x0) || (plVar7[1] != param_2)) {
    uVar8 = 0;
    goto LAB_18004fa74;
  }
  local_68 = plVar7;
  if (DAT_1803ff8ec == '\0') {
    uVar8 = FUN_18004a240(param_2);
    puVar14 = auStack_98;
    goto LAB_18004fa74;
  }
  local_48 = (longlong *)0x0;
  plStack_40 = (longlong *)0x0;
  local_38 = 0;
  FUN_18004a120(plVar7);
  local_60 = (undefined8 *)0x0;
  puStack_58 = (undefined8 *)0x0;
  local_50 = (undefined8 *)0x0;
  FUN_18020cc60(&local_60,(longlong)plStack_40 - (longlong)local_48 >> 5);
  plVar3 = plStack_40;
  for (plVar12 = local_48; plVar12 != plVar3; plVar12 = plVar12 + 4) {
    local_68 = plVar12;
    if (0xf < (ulonglong)plVar12[3]) {
      local_68 = (longlong *)*plVar12;
    }
    if (puStack_58 == local_50) {
      FUN_180221c00(&local_60,puStack_58,&local_68);
    }
    else {
      *puStack_58 = local_68;
      puStack_58 = puStack_58 + 1;
    }
  }
  cVar4 = (**(code **)(*plVar7 + 0x138))(plVar7);
  if (cVar4 == '\0') {
LAB_18004f8f9:
    iVar11 = 0;
    local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);
  }
  else {
    dVar2 = (double)(**(code **)(*plVar7 + 0xc0))(plVar7,2);
    iVar11 = (int)dVar2 + -1;
    local_68 = (longlong *)CONCAT44(local_68._4_4_,iVar11);
    if (iVar11 < 0) goto LAB_18004f8f9;
  }
  iVar6 = (int)((longlong)puStack_58 - (longlong)local_60 >> 3);
  if (iVar6 <= iVar11) {
    iVar11 = iVar6 + -1;
    local_68 = (longlong *)CONCAT44(local_68._4_4_,iVar11);
  }
  uVar5 = 0;
  if (local_60 != puStack_58) {
    cVar4 = (**(code **)(*plVar7 + 0x138))(plVar7,4,3);
    if (cVar4 == '\0') {
      iVar11 = -1;
    }
    else {
      dVar2 = (double)(**(code **)(*plVar7 + 0xc0))(plVar7,4);
      iVar11 = (int)dVar2;
    }
    lVar15 = (longlong)puStack_58 - (longlong)local_60;
    cVar4 = (**(code **)(*plVar7 + 0x138))(plVar7,1,4);
    if (cVar4 == '\0') {
      puVar10 = &DAT_180343220;
    }
    else {
      puVar9 = (undefined *)(**(code **)(*plVar7 + 0xb8))(plVar7,1,0);
      puVar10 = &DAT_180343220;
      if (puVar9 != (undefined *)0x0) {
        puVar10 = puVar9;
      }
    }
    local_78 = (undefined4)(lVar15 >> 3);
    local_70 = iVar11;
    uVar5 = FUN_1802c3bd0(puVar10,&local_68);
    iVar11 = (int)local_68;
  }
  (**(code **)(*plVar7 + 0xf0))(plVar7,(double)(iVar11 + 1));
  (**(code **)(*plVar7 + 0xf8))(plVar7,uVar5);
  if (local_60 != (undefined8 *)0x0) {
    _Memory = local_60;
    puVar13 = auStack_98;
    if ((0xfff < (ulonglong)(((longlong)local_50 - (longlong)local_60 >> 3) * 8)) &&
       (_Memory = (undefined8 *)local_60[-1], puVar13 = auStack_98,
       0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)_Memory)))) {
      _Memory = (undefined8 *)0x5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      puVar13 = auStack_90;
    }
    *(undefined8 *)(puVar13 + -8) = 0x18004fa4f;
    free(_Memory);
    *(undefined8 *)(puVar13 + 0x38) = 0;
    *(undefined8 *)(puVar13 + 0x40) = 0;
    *(undefined8 *)(puVar13 + 0x48) = 0;
  }
  *(undefined8 *)(puVar13 + -8) = 0x18004fa6b;
  FUN_18020d5c0(puVar13 + 0x50);
  uVar8 = 2;
  puVar14 = puVar13;
LAB_18004fa74:
  *(undefined8 *)(puVar14 + -8) = 0x18004fa81;
  return uVar8;
}



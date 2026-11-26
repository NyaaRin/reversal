// 0x18004f4f0  FUN_18004f4f0
// size=663 thunk=false
// signature: undefined FUN_18004f4f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18004f4f0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  double dVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 *_Memory;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  int local_78;
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
  plVar6 = (longlong *)FUN_180039770();
  if ((plVar6 == (longlong *)0x0) || (plVar6[1] != param_2)) {
    uVar7 = 0;
    goto LAB_18004f774;
  }
  local_68 = plVar6;
  if (DAT_1803ff8ec == '\0') {
    uVar7 = FUN_18004a240(param_2);
    puVar14 = auStack_98;
    goto LAB_18004f774;
  }
  local_48 = (longlong *)0x0;
  plStack_40 = (longlong *)0x0;
  local_38 = 0;
  FUN_18004a120(plVar6);
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
  cVar4 = (**(code **)(*plVar6 + 0x138))(plVar6,2,3);
  if (cVar4 == '\0') {
LAB_18004f648:
    iVar10 = 0;
    local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);
  }
  else {
    dVar2 = (double)(**(code **)(*plVar6 + 0xc0))(plVar6,2);
    iVar10 = (int)dVar2 + -1;
    local_68 = (longlong *)CONCAT44(local_68._4_4_,iVar10);
    if (iVar10 < 0) goto LAB_18004f648;
  }
  iVar11 = (int)((longlong)puStack_58 - (longlong)local_60 >> 3);
  if (iVar11 <= iVar10) {
    iVar10 = iVar11 + -1;
    local_68 = (longlong *)CONCAT44(local_68._4_4_,iVar10);
  }
  uVar5 = 0;
  if (local_60 != puStack_58) {
    cVar4 = (**(code **)(*plVar6 + 0x138))(plVar6,1,4);
    if (cVar4 == '\0') {
      pcVar9 = "##combo";
    }
    else {
      pcVar8 = (char *)(**(code **)(*plVar6 + 0xb8))(plVar6,1,0);
      pcVar9 = "##combo";
      if (pcVar8 != (char *)0x0) {
        pcVar9 = pcVar8;
      }
    }
    local_78 = iVar11;
    uVar5 = FUN_1802b1200(pcVar9,&local_68);
    iVar10 = (int)local_68;
  }
  (**(code **)(*plVar6 + 0xf0))(plVar6,(double)(iVar10 + 1));
  (**(code **)(*plVar6 + 0xf8))(plVar6,uVar5);
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
    *(undefined8 *)(puVar13 + -8) = 0x18004f74f;
    free(_Memory);
    *(undefined8 *)(puVar13 + 0x38) = 0;
    *(undefined8 *)(puVar13 + 0x40) = 0;
    *(undefined8 *)(puVar13 + 0x48) = 0;
  }
  *(undefined8 *)(puVar13 + -8) = 0x18004f76b;
  FUN_18020d5c0(puVar13 + 0x50);
  uVar7 = 2;
  puVar14 = puVar13;
LAB_18004f774:
  *(undefined8 *)(puVar14 + -8) = 0x18004f781;
  return uVar7;
}



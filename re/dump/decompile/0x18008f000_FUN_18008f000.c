// 0x18008f000  FUN_18008f000
// size=1180 thunk=false
// signature: undefined FUN_18008f000()
// status: ok


/* WARNING: Removing unreachable block (ram,0x00018008f065) */
/* WARNING: Removing unreachable block (ram,0x00018008f07d) */
/* WARNING: Removing unreachable block (ram,0x00018008f074) */
/* WARNING: Removing unreachable block (ram,0x00018008f089) */

ulonglong FUN_18008f000(undefined8 param_1,longlong param_2,float *param_3)

{
  double dVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  bool local_a8;
  longlong *local_a0;
  undefined8 uStack_98;
  longlong local_90;
  longlong local_88;
  undefined4 local_7f;
  undefined2 local_7b;
  undefined1 local_79;
  float local_78;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  char local_58;
  undefined4 local_47;
  undefined2 local_43;
  undefined1 local_41;
  longlong local_40;
  
  puVar7 = (undefined1 *)register0x00000020;
  if ((DAT_1803fa678 != 0) && (param_2 != 0)) {
    local_a0 = (longlong *)0x0;
    uStack_98 = 0;
    local_90 = 0;
    local_40 = param_2;
    puVar7 = (undefined1 *)FUN_18001bcd0(0,&local_a0);
    if (local_a0 != (longlong *)0x0) {
      iVar5 = (**(code **)*local_a0)();
      local_a8 = false;
      fVar10 = 0.0;
      local_78 = 0.0;
      local_74 = iVar5;
      FUN_18002dc30(&local_70,local_a0[1]);
      FUN_18001e2b0(param_2,local_a0);
      uVar8 = (**(code **)(*local_a0 + 0x138))(local_a0,0xffffffff,9);
      plVar2 = local_a0;
      if ((char)uVar8 == '\0') {
        if (local_a0 != (longlong *)0x0) {
          uVar8 = (**(code **)*local_a0)(local_a0);
          if (iVar5 < (int)uVar8) {
            uVar8 = (**(code **)(*plVar2 + 0x10))(plVar2,(int)uVar8 - iVar5);
          }
        }
        if ((local_58 != '\0') && (uVar8 = 0, DAT_1803faf78 != (code *)0x0)) {
          uVar8 = (*DAT_1803faf78)(local_70,local_68,local_60,local_5c);
        }
        if (local_a0 != (longlong *)0x0) {
          (**(code **)*local_a0)();
          if (local_90 == 0) {
            DAT_1803fa330 = local_88;
            DAT_1803fa339 = local_7f;
            DAT_1803fa33d = local_7b;
            local_41 = local_79;
          }
          else {
            DAT_1803fa330 = local_90;
            DAT_1803fa339 = local_47;
            DAT_1803fa33d = local_43;
          }
          DAT_1803fa338 = local_90 != 0;
          uVar8 = 0;
          DAT_1803fa33f = local_41;
        }
        return uVar8 & 0xffffffffffffff00;
      }
      FUN_18002d9c0(local_a0[1],0xffffffff,"Deliberation");
      cVar3 = (**(code **)(*local_a0 + 0x138))(local_a0,0xffffffff,3);
      if (cVar3 != '\0') {
        dVar1 = (double)(**(code **)(*local_a0 + 0xc0))(local_a0,0xffffffff);
        fVar10 = (float)dVar1;
        local_78 = fVar10;
      }
      (**(code **)(*local_a0 + 0x10))(local_a0,1);
      FUN_18002d9c0(local_a0[1],0xffffffff,"GetCone");
      cVar4 = (**(code **)(*local_a0 + 0x138))(local_a0,0xffffffff,6);
      if (cVar4 != '\0') {
        (**(code **)(*local_a0 + 8))(local_a0,0xfffffffe);
        iVar6 = FUN_180023180(local_a0[1],1,1);
        if (iVar6 == 0) {
          cVar4 = (**(code **)(*local_a0 + 0x138))(local_a0,0xffffffff,3);
          if (cVar4 != '\0') {
            dVar1 = (double)(**(code **)(*local_a0 + 0xc0))(local_a0,0xffffffff);
            fVar9 = (float)dVar1;
            *param_3 = fVar9;
            local_a8 = ((uint)fVar9 & 0x7f800000) != 0x7f800000;
            if ((!local_a8) || (fVar9 < 0.0)) {
              local_a8 = false;
            }
          }
          (**(code **)(*local_a0 + 0x10))(local_a0,1);
        }
      }
      plVar2 = local_a0;
      if ((local_a0 != (longlong *)0x0) && (iVar6 = (**(code **)*local_a0)(local_a0), iVar5 < iVar6)
         ) {
        (**(code **)(*plVar2 + 0x10))(plVar2,iVar6 - iVar5);
      }
      FUN_18001e2b0(param_2,local_a0);
      cVar4 = (**(code **)(*local_a0 + 0x138))(local_a0,0xffffffff,9);
      if (cVar4 != '\0') {
        if (cVar3 == '\0') {
          (**(code **)(*local_a0 + 0xe0))();
        }
        else {
          (**(code **)(*local_a0 + 0xf0))(local_a0,SUB84((double)fVar10,0));
        }
        (**(code **)(*local_a0 + 0x28))(local_a0,0xfffffffe,"Deliberation");
      }
      plVar2 = local_a0;
      if ((local_a0 != (longlong *)0x0) && (iVar6 = (**(code **)*local_a0)(local_a0), iVar5 < iVar6)
         ) {
        (**(code **)(*plVar2 + 0x10))(plVar2,iVar6 - iVar5);
      }
      if ((local_58 != '\0') && (DAT_1803faf78 != (code *)0x0)) {
        (*DAT_1803faf78)(local_70,local_68,local_60,local_5c);
      }
      if (local_a0 != (longlong *)0x0) {
        (**(code **)*local_a0)();
        DAT_1803fa338 = local_90 != 0;
        DAT_1803fa330 = local_88;
        if ((bool)DAT_1803fa338) {
          DAT_1803fa330 = local_90;
        }
        DAT_1803fa339 = local_7f;
        DAT_1803fa33d = local_7b;
        DAT_1803fa33f = local_79;
      }
      return (ulonglong)local_a8;
    }
  }
  return (ulonglong)puVar7 & 0xffffffffffffff00;
}



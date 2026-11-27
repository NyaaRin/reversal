// 0x1800558f0  FUN_1800558f0
// size=545 thunk=false
// signature: undefined FUN_1800558f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800558f0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  char *pcVar9;
  longlong *plVar10;
  longlong *plVar11;
  TypeDescriptor *pTVar12;
  ulonglong uVar13;
  byte *pbVar14;
  undefined1 auStack_78 [32];
  ulonglong *local_58;
  ulonglong local_50 [7];
  TypeDescriptor *pTStack_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_2)) {
    uVar7 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,1);
    if (cVar2 == '\0') {
      cVar2 = '\x01';
    }
    else {
      cVar2 = (**(code **)(*plVar4 + 200))(plVar4,1);
    }
    pbVar14 = &DAT_180343f44;
    uVar13 = 0x14650fb0739d0383;
    uVar8 = 0x14650fb0739d0383;
    do {
      if (*pbVar14 == 0) break;
      uVar8 = (uVar8 ^ *pbVar14) * 0x100000001b3;
      pbVar14 = pbVar14 + 1;
    } while (pbVar14 != (byte *)0x0);
    plVar5 = (longlong *)DAT_1803fadf0[1];
    cVar1 = *(char *)((longlong)plVar5 + 0x19);
    plVar6 = DAT_1803fadf0;
    while (cVar1 == '\0') {
      plVar11 = plVar5;
      if ((ulonglong)plVar5[4] < uVar8) {
        plVar5 = plVar5 + 2;
        plVar11 = plVar6;
      }
      plVar5 = (longlong *)*plVar5;
      plVar6 = plVar11;
      cVar1 = *(char *)((longlong)plVar5 + 0x19);
    }
    if ((*(char *)((longlong)plVar6 + 0x19) != '\0') || (uVar8 < (ulonglong)plVar6[4])) {
      plVar6 = DAT_1803fadf0;
    }
    if ((plVar6 != DAT_1803fadf0) && (plVar6 + 5 != (longlong *)0x0)) {
      pcVar9 = "no_interp";
      do {
        if (*pcVar9 == 0) break;
        uVar13 = (uVar13 ^ (byte)*pcVar9) * 0x100000001b3;
        pcVar9 = pcVar9 + 1;
      } while ((byte *)pcVar9 != (byte *)0x0);
      plVar5 = (longlong *)plVar6[5];
      plVar6 = (longlong *)plVar5[1];
      cVar1 = *(char *)((longlong)plVar6 + 0x19);
      plVar11 = plVar5;
      while (cVar1 == '\0') {
        plVar10 = plVar6;
        if ((ulonglong)plVar6[4] < uVar13) {
          plVar6 = plVar6 + 2;
          plVar10 = plVar11;
        }
        plVar6 = (longlong *)*plVar6;
        plVar11 = plVar10;
        cVar1 = *(char *)((longlong)plVar6 + 0x19);
      }
      if ((*(char *)((longlong)plVar11 + 0x19) != '\0') || (uVar13 < (ulonglong)plVar11[4])) {
        plVar11 = plVar5;
      }
      plVar6 = (longlong *)0x0;
      if (plVar11 != plVar5) {
        plVar6 = plVar11 + 5;
      }
      if (plVar6 != (longlong *)0x0) {
        pTVar12 = &.X::RTTI_Type_Descriptor;
        if ((TypeDescriptor *)(plVar6[9] & 0xfffffffffffffffcU) != (TypeDescriptor *)0x0) {
          pTVar12 = (TypeDescriptor *)(plVar6[9] & 0xfffffffffffffffcU);
        }
        iVar3 = __std_type_info_compare(&pTVar12->spare,0x1803eddb8);
        if (iVar3 == 0) {
          local_58 = local_50;
          local_50[1] = 0;
          local_50[2] = 0;
          local_50[3] = 0;
          local_50[4] = 0;
          local_50[5] = 0;
          local_50[6] = 0;
          local_50[0] = (ulonglong)(cVar2 == '\0');
          pTStack_18 = &._N::RTTI_Type_Descriptor;
          FUN_180014200(plVar6 + 2,local_50);
        }
        (**(code **)(*plVar4 + 0xf8))(plVar4,1);
        return 1;
      }
    }
    (**(code **)(*plVar4 + 0xf8))(plVar4,0);
    uVar7 = 1;
  }
  return uVar7;
}



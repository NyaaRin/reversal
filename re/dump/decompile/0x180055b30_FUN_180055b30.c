// 0x180055b30  FUN_180055b30
// size=439 thunk=false
// signature: undefined FUN_180055b30()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180055b30(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  char *pcVar8;
  longlong *plVar9;
  longlong *plVar10;
  TypeDescriptor *pTVar11;
  ulonglong uVar12;
  byte *pbVar13;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2)) {
    uVar6 = 0;
  }
  else {
    uVar12 = 0x14650fb0739d0383;
    pbVar13 = &DAT_180343f44;
    uVar7 = 0x14650fb0739d0383;
    do {
      if (*pbVar13 == 0) break;
      uVar7 = (uVar7 ^ *pbVar13) * 0x100000001b3;
      pbVar13 = pbVar13 + 1;
    } while (pbVar13 != (byte *)0x0);
    plVar4 = (longlong *)DAT_1803fadf0[1];
    cVar1 = *(char *)((longlong)plVar4 + 0x19);
    plVar5 = DAT_1803fadf0;
    while (cVar1 == '\0') {
      plVar10 = plVar4;
      if ((ulonglong)plVar4[4] < uVar7) {
        plVar4 = plVar4 + 2;
        plVar10 = plVar5;
      }
      plVar4 = (longlong *)*plVar4;
      plVar5 = plVar10;
      cVar1 = *(char *)((longlong)plVar4 + 0x19);
    }
    if ((*(char *)((longlong)plVar5 + 0x19) != '\0') || (uVar7 < (ulonglong)plVar5[4])) {
      plVar5 = DAT_1803fadf0;
    }
    if ((plVar5 != DAT_1803fadf0) && (plVar5 + 5 != (longlong *)0x0)) {
      pcVar8 = "no_interp";
      do {
        if (*pcVar8 == 0) break;
        uVar12 = (uVar12 ^ (byte)*pcVar8) * 0x100000001b3;
        pcVar8 = pcVar8 + 1;
      } while ((byte *)pcVar8 != (byte *)0x0);
      plVar4 = (longlong *)plVar5[5];
      plVar5 = (longlong *)plVar4[1];
      cVar1 = *(char *)((longlong)plVar5 + 0x19);
      plVar10 = plVar4;
      while (cVar1 == '\0') {
        plVar9 = plVar5;
        if ((ulonglong)plVar5[4] < uVar12) {
          plVar5 = plVar5 + 2;
          plVar9 = plVar10;
        }
        plVar5 = (longlong *)*plVar5;
        plVar10 = plVar9;
        cVar1 = *(char *)((longlong)plVar5 + 0x19);
      }
      if ((*(char *)((longlong)plVar10 + 0x19) != '\0') || (uVar12 < (ulonglong)plVar10[4])) {
        plVar10 = plVar4;
      }
      plVar5 = (longlong *)0x0;
      if (plVar10 != plVar4) {
        plVar5 = plVar10 + 5;
      }
      if (plVar5 != (longlong *)0x0) {
        pTVar11 = &.X::RTTI_Type_Descriptor;
        if ((TypeDescriptor *)(plVar5[9] & 0xfffffffffffffffcU) != (TypeDescriptor *)0x0) {
          pTVar11 = (TypeDescriptor *)(plVar5[9] & 0xfffffffffffffffcU);
        }
        iVar2 = __std_type_info_compare(&pTVar11->spare,0x1803eddb8);
        if (iVar2 == 0) {
          if (((plVar5 + 2 != (longlong *)0x0) && ((plVar5[9] & 0xfffffffffffffffcU) != 0)) &&
             (iVar2 = __std_type_info_compare((plVar5[9] & 0xfffffffffffffffcU) + 8,0x1803eddb8),
             iVar2 == 0)) {
            (**(code **)(*plVar3 + 0xf8))(plVar3,(char)plVar5[2] == '\0');
            return 1;
          }
                    /* WARNING: Subroutine does not return */
          FUN_180014070();
        }
      }
    }
    (**(code **)(*plVar3 + 0xe0))(plVar3);
    uVar6 = 1;
  }
  return uVar6;
}



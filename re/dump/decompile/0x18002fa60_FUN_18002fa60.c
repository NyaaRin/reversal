// 0x18002fa60  FUN_18002fa60
// size=790 thunk=false
// signature: undefined FUN_18002fa60()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18002fa60(undefined4 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  char local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  cVar3 = FUN_18002e100();
  if ((cVar3 != '\0') && (DAT_1803faf08 != 0)) {
    if (DAT_1803fa678 == (longlong *)0x0) {
      lVar8 = 0;
      plVar7 = (longlong *)0x0;
    }
    else {
      lVar8 = (**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
      if (lVar8 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(longlong *)(lVar8 + 8);
      }
      if (DAT_1803fa678 == (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
      }
    }
    if ((lVar8 != 0) && (plVar7 != (longlong *)0x0)) {
      FUN_18002dc30(&local_48,lVar8);
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if ((*(uint *)(lVar2 + 0x211c) & 1) == 0) {
        *(uint *)(lVar2 + 0x211c) = *(uint *)(lVar2 + 0x211c) | 1;
        FUN_1802d8910(&LAB_180308e90);
      }
      if ((DAT_1803fb088 == (code *)0x0) || (plVar7[1] == 0)) {
        iVar4 = (**(code **)*plVar7)(plVar7);
      }
      else {
        iVar4 = (*DAT_1803fb088)();
      }
      cVar3 = FUN_18002eb00(lVar8,plVar7,param_1);
      if (cVar3 != '\0') {
        (*DAT_1803faf58)(lVar8,DAT_1803faf08,0);
        if ((DAT_1803faf38 == (code *)0x0) || (plVar7[1] == 0)) {
          (**(code **)(*plVar7 + 8))(plVar7,0xfffffffe);
        }
        else {
          (*DAT_1803faf38)(plVar7[1],0xfffffffe);
        }
        iVar5 = FUN_180023180(lVar8,1,1);
        if (iVar5 == 0) {
          puVar9 = (undefined8 *)(lVar2 + 0xd80);
          FUN_180212700(puVar9,&DAT_18033e5ea,0);
          if (((DAT_1803faff8 != (code *)0x0) && (DAT_1803fb008 != (code *)0x0)) &&
             (iVar5 = (*DAT_1803faff8)(lVar8,0xffffffff), iVar5 == 4)) {
            local_28 = 0;
            lVar8 = (*DAT_1803fb008)(lVar8,0xffffffff,&local_28);
            if (lVar8 != 0) {
              FUN_180212700(puVar9,lVar8,local_28);
            }
          }
          if (0xf < *(ulonglong *)(lVar2 + 0xd98)) {
            puVar9 = (undefined8 *)*puVar9;
          }
          do {
            plVar1 = plVar7 + 1;
            while( true ) {
              if ((DAT_1803fb088 == (code *)0x0) || (*plVar1 == 0)) {
                iVar5 = (**(code **)*plVar7)(plVar7);
              }
              else {
                iVar5 = (*DAT_1803fb088)();
              }
              if (iVar5 <= iVar4) goto LAB_18002fd1e;
              if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) ||
                 (*plVar1 == 0)) break;
              iVar6 = (*DAT_1803fb088)();
              iVar5 = 0;
              if (-1 < iVar6 + -1) {
                iVar5 = iVar6 + -1;
              }
              (*DAT_1803faf10)(*plVar1,iVar5);
            }
            (**(code **)(*plVar7 + 0x10))(plVar7,1);
          } while( true );
        }
        while( true ) {
          if ((DAT_1803fb088 == (code *)0x0) || (plVar7[1] == 0)) {
            iVar5 = (**(code **)*plVar7)(plVar7);
          }
          else {
            iVar5 = (*DAT_1803fb088)();
          }
          if (iVar5 <= iVar4) break;
          if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (plVar7[1] == 0)
             ) {
            (**(code **)(*plVar7 + 0x10))(plVar7,1);
          }
          else {
            iVar6 = (*DAT_1803fb088)();
            iVar5 = 0;
            if (-1 < iVar6 + -1) {
              iVar5 = iVar6 + -1;
            }
            (*DAT_1803faf10)(plVar7[1],iVar5);
          }
        }
      }
      puVar9 = (undefined8 *)&DAT_18033e5ea;
LAB_18002fd1e:
      if (local_30 == '\0') {
        return puVar9;
      }
      if (DAT_1803faf78 == (code *)0x0) {
        return puVar9;
      }
      (*DAT_1803faf78)(local_48,local_40,local_38,local_34);
      return puVar9;
    }
  }
  return (undefined8 *)&DAT_18033e5ea;
}



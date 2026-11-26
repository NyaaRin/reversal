// 0x18003f150  FUN_18003f150
// size=672 thunk=false
// signature: undefined FUN_18003f150()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18003f150(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  double dVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 *******pppppppuVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_88 [40];
  undefined8 ******local_60 [3];
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  plVar6 = (longlong *)FUN_180039770();
  if ((plVar6 == (longlong *)0x0) || (plVar6[1] != param_2)) {
    return 0;
  }
  dVar3 = (double)(**(code **)(*plVar6 + 0x160))(plVar6,1);
  uVar9 = (uint)dVar3;
  if ((0 < (int)uVar9) && (uVar7 = (ulonglong)(uVar9 & 0xf), (uVar9 & 0xf) < 8)) {
    lVar12 = uVar7 * 0x30;
    if (((&DAT_1803e75c0)[lVar12] != '\0') &&
       (((*(uint *)(&DAT_1803e75c4 + lVar12) == uVar9 >> 4 && ((&DAT_1803e75d0)[uVar7 * 6] != 0)) &&
        ((&DAT_1803e75d8)[uVar7 * 6] != 0)))) {
      dVar3 = (double)(**(code **)(*plVar6 + 0x160))(plVar6,2);
      puVar1 = (undefined8 *)(&DAT_1803e75d0)[uVar7 * 6];
      if (puVar1 == (undefined8 *)0x0) {
        iVar4 = 0;
      }
      else if ((DAT_1803fb088 == (code *)0x0) || (puVar1[1] == 0)) {
        iVar4 = (**(code **)*puVar1)();
      }
      else {
        iVar4 = (*DAT_1803fb088)(puVar1[1]);
      }
      iVar11 = (int)dVar3;
      if (iVar11 != 0) {
        if (iVar11 < 0) {
          iVar11 = iVar11 + 1 + iVar4;
        }
        if ((*(int *)(&DAT_1803e75e0 + lVar12) < iVar11) && (iVar11 <= iVar4)) {
          lVar8 = (**(code **)(*plVar6 + 0x158))(plVar6,3);
          if (lVar8 == 0) {
            (**(code **)(*plVar6 + 0xf8))(plVar6,0);
            return 1;
          }
          if ((((&DAT_1803e75d8)[uVar7 * 6] != 0) && (DAT_1803fb038 != (code *)0x0)) &&
             (iVar4 = (*DAT_1803fb038)((&DAT_1803e75d8)[uVar7 * 6],4), iVar4 != 0)) {
            puVar1 = (undefined8 *)(&DAT_1803e75d0)[uVar7 * 6];
            if (puVar1 == (undefined8 *)0x0) {
              uVar5 = 0;
            }
            else if ((DAT_1803fb088 == (code *)0x0) || (puVar1[1] == 0)) {
              uVar5 = (**(code **)*puVar1)();
            }
            else {
              uVar5 = (*DAT_1803fb088)(puVar1[1]);
            }
            (*DAT_1803faf58)((&DAT_1803e75d8)[uVar7 * 6],FUN_18002d640,0);
            plVar2 = (longlong *)(&DAT_1803e75d0)[uVar7 * 6];
            if (plVar2 != (longlong *)0x0) {
              if ((DAT_1803faf38 == (code *)0x0) || (plVar2[1] == 0)) {
                (**(code **)(*plVar2 + 8))(plVar2,iVar11);
              }
              else {
                (*DAT_1803faf38)(plVar2[1],iVar11);
              }
            }
            (*DAT_1803fafa0)((&DAT_1803e75d8)[uVar7 * 6],lVar8);
            iVar4 = FUN_180023180((&DAT_1803e75d8)[uVar7 * 6],2,1);
            if (iVar4 != 0) {
              FUN_18003aeb0(local_60,&DAT_1803e75c0 + lVar12,uVar5);
              (**(code **)(*plVar6 + 0xf8))(plVar6,0);
              pppppppuVar10 = local_60;
              if (0xf < local_48) {
                pppppppuVar10 = (undefined8 *******)local_60[0];
              }
              (**(code **)(*plVar6 + 0xe8))(plVar6,pppppppuVar10,0);
              FUN_18020e450(local_60);
              return 2;
            }
            (**(code **)(*plVar6 + 0xf8))(plVar6,1);
            return 1;
          }
        }
      }
    }
  }
  (**(code **)(*plVar6 + 0xf8))(plVar6,0);
  return 1;
}



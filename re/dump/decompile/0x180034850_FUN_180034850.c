// 0x180034850  FUN_180034850
// size=617 thunk=false
// signature: undefined FUN_180034850()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180034850(longlong param_1,undefined4 param_2,longlong *param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong uVar9;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  lVar7 = *param_3;
  lVar1 = param_3[1];
  if (lVar7 != lVar1) {
    do {
      FUN_18020e450(lVar7);
      lVar7 = lVar7 + 0x20;
    } while (lVar7 != lVar1);
    param_3[1] = *param_3;
  }
  if ((((((param_1 == 0) || (DAT_1803fb048 == (code *)0x0)) || (DAT_1803faff8 == (code *)0x0)) ||
       (((DAT_1803fb008 == (code *)0x0 || (DAT_1803fb088 == (code *)0x0)) ||
        ((DAT_1803faf10 == (code *)0x0 || (iVar2 = (*DAT_1803faff8)(param_1,param_2), iVar2 != 5))))
       )) || ((DAT_1803fb038 != (code *)0x0 && (iVar2 = (*DAT_1803fb038)(param_1,4), iVar2 == 0))))
     || ((DAT_1803fa678 == (longlong *)0x0 ||
         (plVar4 = (longlong *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0),
         plVar4 == (longlong *)0x0)))) {
    uVar5 = 0;
  }
  else {
    uVar3 = (*DAT_1803fb088)(param_1);
    if ((DAT_1803fafd8 == (code *)0x0) || (plVar4[1] == 0)) {
      (**(code **)(*plVar4 + 0xe0))(plVar4);
    }
    else {
      (*DAT_1803fafd8)();
    }
    uVar10 = 0;
    iVar2 = (*DAT_1803fb048)(param_1,param_2);
    uVar9 = uVar10;
    while (iVar2 != 0) {
      iVar2 = (*DAT_1803faff8)(param_1,0xfffffffe);
      if (iVar2 == 4) {
        local_50 = 0;
        local_58 = (*DAT_1803fb008)(param_1,0xfffffffe,&local_50);
        if ((local_58 != 0) && (local_50 - 1 < 0x40)) {
          uVar6 = uVar10;
          if (local_50 != 0) {
            do {
              if ((*(byte *)(uVar6 + local_58) < 0x20) || (*(byte *)(uVar6 + local_58) == 0x7f))
              goto LAB_180034a1c;
              uVar6 = uVar6 + 1;
            } while (uVar6 < local_50);
          }
          FUN_180210e30(param_3,&local_58,&local_50);
        }
      }
LAB_180034a1c:
      if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (plVar4[1] == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4,1);
      }
      else {
        iVar2 = (*DAT_1803fb088)();
        uVar6 = uVar10;
        if (-1 < (int)(iVar2 - 1U)) {
          uVar6 = (ulonglong)(iVar2 - 1U);
        }
        (*DAT_1803faf10)(plVar4[1],uVar6);
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      if (param_4 <= (int)uVar8) break;
      iVar2 = (*DAT_1803fb048)(param_1,param_2);
    }
    (*DAT_1803faf10)(param_1,uVar3);
    uVar5 = 1;
  }
  return uVar5;
}



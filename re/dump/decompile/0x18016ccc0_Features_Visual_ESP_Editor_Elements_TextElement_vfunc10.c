// 0x18016ccc0  Features_Visual_ESP_Editor_Elements_TextElement_vfunc10
// size=396 thunk=false
// signature: undefined Features_Visual_ESP_Editor_Elements_TextElement_vfunc10()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * Features_Visual_ESP_Editor_Elements_TextElement_vfunc10(longlong *param_1,float *param_2)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  byte local_27;
  byte local_26;
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  lVar2 = param_1[9];
  *(longlong *)param_2 = param_1[8];
  *(longlong *)(param_2 + 2) = lVar2;
  if (((*(char *)((longlong)param_1 + 0x81) != '\0') && (DAT_1803fcb60 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*DAT_1803fcb60 + 0x420))(), pcVar3 = DAT_1803fe548, cVar4 != '\0')) {
    if (DAT_1803fe548 == (code *)0x0) {
      local_28 = 0xff;
      local_27 = 0xff;
      local_26 = local_27;
    }
    else {
      uVar5 = FUN_18001c560(DAT_1803fcb60);
      (*pcVar3)(&local_28,uVar5);
    }
    fVar1 = *(float *)((longlong)param_1 + 0x4c);
    fVar9 = (float)local_27 / DAT_1803811c8;
    fVar8 = (float)local_26 / DAT_1803811c8;
    *param_2 = (float)local_28 / DAT_1803811c8;
    param_2[1] = fVar9;
    param_2[2] = fVar8;
    param_2[3] = fVar1;
  }
  if (((DAT_1803fcb80 == '\0') && (DAT_1803fcb60 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*DAT_1803fcb60 + 0x420))(), cVar4 != '\0')) {
    plVar7 = (longlong *)(**(code **)(*DAT_1803fcb60 + 0x20))();
    local_38 = 0;
    uStack_30 = 0;
    if (plVar7 != (longlong *)0x0) {
      uVar5 = (**(code **)(*param_1 + 0x48))(param_1);
      uVar6 = (**(code **)(*plVar7 + 0x48))(plVar7);
      cVar4 = FUN_1800214f0(uVar6,uVar5,&local_38);
      if (cVar4 != '\0') {
        *param_2 = (float)local_38;
        param_2[1] = local_38._4_4_;
        param_2[2] = (float)uStack_30;
        param_2[3] = param_2[3];
      }
    }
  }
  return param_2;
}



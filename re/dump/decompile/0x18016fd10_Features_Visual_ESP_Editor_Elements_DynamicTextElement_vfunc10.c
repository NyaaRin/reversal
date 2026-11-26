// 0x18016fd10  Features_Visual_ESP_Editor_Elements_DynamicTextElement_vfunc10
// size=634 thunk=false
// signature: undefined Features_Visual_ESP_Editor_Elements_DynamicTextElement_vfunc10()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * Features_Visual_ESP_Editor_Elements_DynamicTextElement_vfunc10
                  (longlong *param_1,float *param_2)

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
  float fVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  byte local_58;
  byte local_57;
  byte local_56;
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  if (((int)param_1[0x19] == 0xe) && (*(char *)((longlong)param_1 + 0xe4) != '\0')) {
    fVar10 = *(float *)(param_1 + 0x1d);
    fVar8 = *(float *)((longlong)param_1 + 0xec);
    fVar9 = *(float *)(param_1 + 0x1e);
    fVar1 = *(float *)((longlong)param_1 + 0x4c);
    if ((DAT_1803fcb80 == '\0') &&
       ((DAT_1803fcb60 != (longlong *)0x0 &&
        (cVar4 = (**(code **)(*DAT_1803fcb60 + 0x420))(), cVar4 != '\0')))) {
      plVar7 = (longlong *)(**(code **)(*DAT_1803fcb60 + 0x20))();
      local_68 = 0;
      uStack_60 = 0;
      if (plVar7 != (longlong *)0x0) {
        uVar5 = (**(code **)(*param_1 + 0x48))(param_1);
        uVar6 = (**(code **)(*plVar7 + 0x48))(plVar7);
        cVar4 = FUN_1800214f0(uVar6,uVar5,&local_68);
        if (cVar4 != '\0') {
          fVar10 = (float)local_68;
          fVar8 = local_68._4_4_;
          fVar9 = (float)uStack_60;
        }
      }
    }
    *param_2 = fVar10;
    param_2[1] = fVar8;
    param_2[2] = fVar9;
    param_2[3] = fVar1;
  }
  else {
    lVar2 = param_1[9];
    *(longlong *)param_2 = param_1[8];
    *(longlong *)(param_2 + 2) = lVar2;
    if (((*(char *)((longlong)param_1 + 0x81) != '\0') && (DAT_1803fcb60 != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(*DAT_1803fcb60 + 0x420))(), pcVar3 = DAT_1803fe548, cVar4 != '\0')) {
      if (DAT_1803fe548 == (code *)0x0) {
        local_58 = 0xff;
        local_57 = 0xff;
        local_56 = local_57;
      }
      else {
        uVar5 = FUN_18001c560(DAT_1803fcb60);
        (*pcVar3)(&local_58,uVar5);
      }
      fVar10 = *(float *)((longlong)param_1 + 0x4c);
      fVar9 = (float)local_57 / DAT_1803811c8;
      fVar8 = (float)local_56 / DAT_1803811c8;
      *param_2 = (float)local_58 / DAT_1803811c8;
      param_2[1] = fVar9;
      param_2[2] = fVar8;
      param_2[3] = fVar10;
    }
    if (((DAT_1803fcb80 == '\0') && (DAT_1803fcb60 != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(*DAT_1803fcb60 + 0x420))(), cVar4 != '\0')) {
      plVar7 = (longlong *)(**(code **)(*DAT_1803fcb60 + 0x20))();
      local_68 = 0;
      uStack_60 = 0;
      if (plVar7 != (longlong *)0x0) {
        uVar5 = (**(code **)(*param_1 + 0x48))(param_1);
        uVar6 = (**(code **)(*plVar7 + 0x48))(plVar7);
        cVar4 = FUN_1800214f0(uVar6,uVar5,&local_68);
        if (cVar4 != '\0') {
          *param_2 = (float)local_68;
          param_2[1] = local_68._4_4_;
          param_2[2] = (float)uStack_60;
          param_2[3] = param_2[3];
        }
      }
    }
  }
  return param_2;
}



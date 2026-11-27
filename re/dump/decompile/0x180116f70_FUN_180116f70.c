// 0x180116f70  FUN_180116f70
// size=504 thunk=false
// signature: undefined FUN_180116f70()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_180116f70(undefined8 param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  char *pcVar6;
  ULONGLONG UVar7;
  int iVar8;
  float fVar9;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  if (DAT_1803fa608 == (float *)0x0) {
    fVar9 = 0.0;
LAB_180116fc5:
    DAT_1804236ac = DAT_1804236ac + 1;
    PTR_s_Screen_capture_1803e90c8 = s_render_CapturePixels_request_180351030;
    _DAT_1803e90d0 = fVar9;
  }
  else {
    fVar9 = *DAT_1803fa608;
    if ((fVar9 <= 0.0) || (DAT_180380db8 <= fVar9 - _DAT_1803e90d0)) goto LAB_180116fc5;
  }
  local_28 = 0x93fd561a96ab0c67;
  local_20 = 0xb900ad038caed4bd;
  plVar5 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_48,&local_28);
  FUN_180241a30(*plVar5 + 0x28,local_38,&local_20);
  pcVar6 = (char *)FUN_1801fcfc0();
  uVar3 = DAT_180423690;
  if (*pcVar6 != '\0') {
    if (DAT_1803fa608 == (float *)0x0) {
      fVar9 = 0.0;
    }
    else {
      fVar9 = DAT_1803fa608[1];
    }
    if (((DAT_1803e8848 != fVar9) && (DAT_18040a378 != 0)) && (DAT_18040a389 != '\0')) {
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      piVar1 = (int *)(lVar2 + 0xfcc);
      *piVar1 = *piVar1 + 1;
      if (*piVar1 == 0) {
        *(undefined4 *)(lVar2 + 0xfcc) = 1;
      }
      if (DAT_1803fa608 == (float *)0x0) {
        fVar9 = -NAN;
      }
      else {
        fVar9 = DAT_1803fa608[1];
      }
      *(float *)(lVar2 + 0xfc8) = fVar9;
      UVar7 = GetTickCount64();
      *(undefined8 *)(lVar2 + 0xfe0) = uVar3;
      *(ULONGLONG *)(lVar2 + 0xfd8) = UVar7;
      *(undefined4 *)(lVar2 + 0xfd0) = 1;
      iVar8 = *(int *)(lVar2 + 0xfcc);
      goto LAB_1801170fb;
    }
  }
  iVar8 = 0;
LAB_1801170fb:
  if (DAT_1804235e0 == (code *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*DAT_1804235e0)(param_1);
  }
  if ((iVar8 != 0) &&
     (lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8),
     *(int *)(lVar2 + 0xfcc) == iVar8)) {
    *(undefined4 *)(lVar2 + 0xfd0) = 0;
    *(undefined8 *)(lVar2 + 0xfe0) = 0;
  }
  return uVar4;
}



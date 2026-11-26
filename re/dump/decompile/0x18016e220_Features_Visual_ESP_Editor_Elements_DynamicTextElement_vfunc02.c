// 0x18016e220  Features_Visual_ESP_Editor_Elements_DynamicTextElement_vfunc02
// size=126 thunk=false
// signature: undefined Features_Visual_ESP_Editor_Elements_DynamicTextElement_vfunc02()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
Features_Visual_ESP_Editor_Elements_DynamicTextElement_vfunc02(longlong param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 **local_38 [3];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  if (DAT_1803fcb80 == '\0') {
    plVar2 = (longlong *)(param_1 + 0x60);
    if (0xf < *(ulonglong *)(param_1 + 0x78)) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_18016ca30(param_2,plVar2);
  }
  else {
    FUN_18016de30(param_1,local_38);
    pppuVar1 = local_38;
    if (0xf < local_20) {
      pppuVar1 = (undefined8 ***)local_38[0];
    }
    FUN_18016ca30(param_2,pppuVar1);
    FUN_18020e450(local_38);
  }
  return param_2;
}



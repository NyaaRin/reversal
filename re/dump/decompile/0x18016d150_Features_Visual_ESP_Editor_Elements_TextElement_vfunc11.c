// 0x18016d150  Features_Visual_ESP_Editor_Elements_TextElement_vfunc11
// size=379 thunk=false
// signature: undefined Features_Visual_ESP_Editor_Elements_TextElement_vfunc11()
// status: ok


void Features_Visual_ESP_Editor_Elements_TextElement_vfunc11
               (longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fStack_64;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [64];
  
  if ((*(char *)((longlong)param_1 + 0x14) != '\0') && (param_1[0xe] != 0)) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar6 = DAT_180380bb0;
    if (((DAT_1803fcb80 == '\0') &&
        (fVar5 = DAT_1803fcb6c * DAT_180380a38 + DAT_180380b3c, fVar6 = DAT_180380b3c,
        DAT_180380b3c <= fVar5)) && (fVar6 = DAT_180380bb0, fVar5 <= DAT_180380bb0)) {
      fVar6 = fVar5;
    }
    fVar6 = *(float *)(*(longlong *)(lVar1 + 0xec0) + 0x1238) * fVar6;
    if (DAT_1803fcb80 == '\0') {
      fStack_64 = (float)((ulonglong)param_3 >> 0x20);
      param_3 = CONCAT44(fStack_64 - fVar6 * DAT_180380a2c,(int)param_3);
    }
    uVar4 = FUN_1801691d0(param_1);
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x50))(param_1,local_48);
    plVar3 = param_1 + 0xc;
    if (0xf < (ulonglong)param_1[0xf]) {
      plVar3 = (longlong *)*plVar3;
    }
    local_58 = *puVar2;
    uStack_54 = puVar2[1];
    uStack_50 = puVar2[2];
    uStack_4c = puVar2[3];
    FUN_18016ce50(param_1,param_2,param_3,plVar3,&local_58,fVar6,uVar4,0);
  }
  return;
}



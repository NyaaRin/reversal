// 0x180048850  FUN_180048850
// size=532 thunk=false
// signature: undefined FUN_180048850()
// status: ok


undefined8 FUN_180048850(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  char *pcVar5;
  float *pfVar6;
  longlong lVar7;
  float fVar8;
  float local_res10;
  undefined4 local_res14;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) &&
      (lVar4 = FUN_18003a890(), lVar4 != 0)) &&
     ((cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4), cVar2 != '\0' &&
      (pcVar5 = (char *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0), pcVar5 != (char *)0x0)))) {
    fVar8 = DAT_1803ff908;
    if (DAT_1803ff908 <= 0.0) {
      lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar7 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      fVar8 = *(float *)(*(longlong *)(lVar7 + 0xec0) + 0x1238);
    }
    uVar1 = DAT_1803e774c;
    lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_res10 = DAT_1803e7750;
    local_res14 = DAT_1803e7754;
    if (*(char *)(lVar7 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (((uVar1 & 0xff000000) != 0) && (*pcVar5 != '\0')) {
      lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0xec0) + 0x1228);
      if (lVar7 == 0) {
        lVar7 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + 0x18);
      }
      if (fVar8 == 0.0) {
        fVar8 = *(float *)(*(longlong *)(lVar4 + 0x38) + 0x20);
      }
      local_48 = *(undefined4 *)(lVar4 + 0x60);
      uStack_44 = *(undefined4 *)(lVar4 + 100);
      uStack_40 = *(undefined4 *)(lVar4 + 0x68);
      uStack_3c = *(undefined4 *)(lVar4 + 0x6c);
      FUN_18029e990(lVar7,lVar4,fVar8,&local_res10,uVar1,&local_48,pcVar5,0,0,0);
    }
    pfVar6 = (float *)FUN_1800476f0(&local_res10,pcVar5,DAT_1803ff908);
    DAT_1803e7750 = DAT_1803e7750 + *pfVar6;
  }
  return 0;
}



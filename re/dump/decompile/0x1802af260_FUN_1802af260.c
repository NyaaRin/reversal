// 0x1802af260  FUN_1802af260
// size=397 thunk=false
// signature: undefined FUN_1802af260()
// status: ok


void FUN_1802af260(float *param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  float fVar6;
  float fVar7;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar3 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar4 + 0x1520) + 0xce) = 1;
  lVar4 = *(longlong *)(lVar4 + 0x1520);
  if (*(char *)(lVar4 + 0xd1) == '\0') {
    fVar1 = *(float *)(lVar4 + 0x118);
    fVar2 = *(float *)(lVar4 + 0x11c);
    fVar6 = fVar1 + *param_1;
    fVar7 = fVar2 + param_1[1];
    local_78 = fVar1;
    fStack_74 = fVar2;
    fStack_70 = fVar6;
    fStack_6c = fVar7;
    FUN_18027f400(param_1,DAT_180381384);
    if (*(char *)(lVar3 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(lVar3 + 0xec0);
    *(uint *)(lVar3 + 0x1efc) = *(uint *)(lVar3 + 0x1eb8) | *(uint *)(lVar3 + 0x1ec4);
    lVar4 = *(longlong *)(lVar3 + 0x1520);
    *(undefined4 *)(lVar3 + 0x1ef8) = 0;
    *(float *)(lVar3 + 0x1f04) = local_78;
    *(float *)(lVar3 + 0x1f08) = fStack_74;
    *(float *)(lVar3 + 0x1f0c) = fStack_70;
    *(float *)(lVar3 + 0x1f10) = fStack_6c;
    *(undefined4 *)(lVar3 + 0x1f00) = 0;
    *(float *)(lVar3 + 0x1f14) = local_78;
    *(float *)(lVar3 + 0x1f18) = fStack_74;
    *(float *)(lVar3 + 0x1f1c) = fStack_70;
    *(float *)(lVar3 + 0x1f20) = fStack_6c;
    *(undefined8 *)(lVar3 + 0x1ec0) = 0;
    if ((((fVar7 < *(float *)(lVar4 + 0x26c) || fVar7 == *(float *)(lVar4 + 0x26c)) ||
         (*(float *)(lVar4 + 0x274) <= fVar2)) ||
        (fVar6 < *(float *)(lVar4 + 0x268) || fVar6 == *(float *)(lVar4 + 0x268))) ||
       (*(float *)(lVar4 + 0x270) <= fVar1)) {
      if (*(char *)(lVar3 + 0x1592) == '\0') {
        return;
      }
    }
    else {
      *(undefined4 *)(lVar3 + 0x1f00) = 0x100;
    }
    cVar5 = FUN_18027bdd0(&local_78,&fStack_70,1);
    if (cVar5 != '\0') {
      *(uint *)(lVar3 + 0x1f00) = *(uint *)(lVar3 + 0x1f00) | 1;
    }
  }
  return;
}



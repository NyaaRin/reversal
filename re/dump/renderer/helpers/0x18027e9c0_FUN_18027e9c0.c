// 18027e9c0  FUN_18027e9c0
// signature: undefined FUN_18027e9c0()
// status: ok


undefined1 FUN_18027e9c0(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  float local_res10;
  float local_res14;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar2 + 0xec0);
  lVar4 = *(longlong *)(lVar3 + 0x1520);
  if (*(char *)(lVar3 + 0x9e) != '\0') {
    if (*(char *)(lVar3 + 0x28b8) != '\0') {
      if ((*(byte *)(lVar3 + 0x28e4) & 1) == 0) {
        *(int *)(lVar3 + 0x2910) = *(int *)(lVar3 + 0x2910) + 1;
      }
      else {
        FUN_180289170("[imgui-error] (current settings: Assert=%d, Log=%d, Tooltip=%d)\n",
                      *(undefined1 *)(lVar3 + 0x9d),*(char *)(lVar3 + 0x9e),
                      *(undefined1 *)(lVar3 + 0x9f));
      }
    }
    if ((*(byte *)(lVar3 + 0x28e4) & 1) == 0) {
      *(int *)(lVar3 + 0x2910) = *(int *)(lVar3 + 0x2910) + 1;
    }
    else if (lVar4 == 0) {
      FUN_180289170("[imgui-error] In window \'%s\': %s\n",&DAT_18037acb0,param_1);
    }
    else {
      FUN_180289170("[imgui-error] In window \'%s\': %s\n",*(undefined8 *)(lVar4 + 8),param_1);
    }
  }
  *(undefined1 *)(lVar3 + 0x28b8) = 0;
  if (*(char *)(lVar3 + 0x9f) != '\0') {
    if (*(char *)(lVar3 + 1) != '\0') {
      cVar5 = FUN_18027ee60();
      if (cVar5 != '\0') {
        iVar1 = *(int *)(lVar3 + 0x28bc);
        if (iVar1 < 0x14) {
          if (lVar4 == 0) {
            FUN_1802aaae0("In window \'%s\': %s",&DAT_18037acb0,param_1);
          }
          else {
            FUN_1802aaae0("In window \'%s\': %s",*(undefined8 *)(lVar4 + 8),param_1);
            if ((*(char *)(lVar4 + 0xd5) == '\0') || (*(char *)(lVar4 + 0xcd) != '\0')) {
              if (*(char *)(lVar2 + 0x10) == '\0') {
                __dyn_tls_on_demand_init();
              }
              uVar6 = FUN_18026f7d0(**(undefined8 **)(*(longlong *)(lVar2 + 0xec0) + 0x2060),1,
                                    "##Foreground");
              local_res10 = *(float *)(lVar4 + 0x30) + *(float *)(lVar4 + 0x28);
              local_res14 = *(float *)(lVar4 + 0x2c) + *(float *)(lVar4 + 0x34);
              FUN_180294f00(uVar6,(float *)(lVar4 + 0x28),&local_res10,0xff0000ff,0,0x3f800000,0);
            }
          }
          iVar1 = *(int *)(lVar3 + 0x28bc);
        }
        if (iVar1 == 0x14) {
          FUN_1802aaae0("(and more errors)");
        }
        FUN_180278d40();
      }
    }
    *(int *)(lVar3 + 0x28bc) = *(int *)(lVar3 + 0x28bc) + 1;
  }
  if (*(code **)(lVar3 + 0x28a0) != (code *)0x0) {
    (**(code **)(lVar3 + 0x28a0))(lVar3,*(undefined8 *)(lVar3 + 0x28a8),param_1);
  }
  return *(undefined1 *)(lVar3 + 0x9d);
}



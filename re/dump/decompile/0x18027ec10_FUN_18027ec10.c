// 0x18027ec10  FUN_18027ec10
// size=588 thunk=false
// signature: undefined FUN_18027ec10()
// status: ok


void FUN_18027ec10(void)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  char *pcVar6;
  undefined8 local_res8;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar2 + 0xec0);
  if (*(int *)(lVar3 + 0x1574) != 0) {
    if (*(char *)(lVar3 + 0x11c) == '\0') {
      *(undefined4 *)(lVar3 + 0x28e0) = *(undefined4 *)(lVar3 + 0x1584);
    }
    if (*(char *)(lVar3 + 0x2921) == '\0') {
      cVar5 = FUN_18027ee60();
      if (cVar5 != '\0') {
        FUN_1802aaae0("Programmer error: %d visible items with conflicting ID!",
                      *(undefined4 *)(lVar3 + 0x28e0));
        FUN_1802ab210(
                     "Code should use PushID()/PopID() in loops, or append \"##xx\" to same-label identifiers!"
                     );
        FUN_1802ab210(
                     "Empty label e.g. Button(\"\") == same ID as parent widget/node. Use Button(\"##xx\") instead!"
                     );
        FUN_1802ab210(
                     "Set io.ConfigDebugHighlightIdConflicts=false to disable this warning in non-programmers builds."
                     );
        FUN_1802afb40();
        if (*(char *)(lVar3 + 0xa2) == '\0') {
          pcVar6 = "(Hold Ctrl to: ";
        }
        else {
          FUN_1802aaae0("(Hold Ctrl to: use ");
          FUN_18027f5b0(0,0);
          if (*(char *)(lVar2 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar4 = *(longlong *)(lVar2 + 0xec0);
          local_res8 = 0;
          uVar1 = *(undefined4 *)(lVar4 + 0xcc8);
          *(undefined4 *)(lVar4 + 0xcc8) = 0;
          cVar5 = FUN_1802abf60("Item Picker",&local_res8,0x8000);
          *(undefined4 *)(lVar4 + 0xcc8) = uVar1;
          if (cVar5 != '\0') {
            if (*(char *)(lVar2 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            *(undefined1 *)(*(longlong *)(lVar2 + 0xec0) + 0x2921) = 1;
          }
          FUN_18027f5b0(0,0);
          pcVar6 = " to break in item call-stack, or ";
        }
        FUN_1802aaae0(pcVar6);
        FUN_18027f5b0(0,0);
        FUN_1802af100();
        FUN_18027f5b0(0,0);
        FUN_1802aaae0(&DAT_1803467cc);
        FUN_180278d40();
      }
    }
  }
  if (0 < *(int *)(lVar3 + 0x28bc)) {
    cVar5 = FUN_18027ee60();
    if (cVar5 != '\0') {
      FUN_1802afb40();
      FUN_1802aaae0("(Hold Ctrl to: ");
      FUN_18027f5b0(0,0);
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar2 = *(longlong *)(lVar2 + 0xec0);
      local_res8 = 0;
      uVar1 = *(undefined4 *)(lVar2 + 0xcc8);
      *(undefined4 *)(lVar2 + 0xcc8) = 0;
      cVar5 = FUN_1802abf60("Enable Asserts",&local_res8,0x8000);
      *(undefined4 *)(lVar2 + 0xcc8) = uVar1;
      if (cVar5 != '\0') {
        *(undefined1 *)(lVar3 + 0x9d) = 1;
      }
      FUN_18027f5b0(0,0);
      FUN_1802aaae0(&DAT_1803467cc);
      FUN_180278d40();
    }
  }
  return;
}



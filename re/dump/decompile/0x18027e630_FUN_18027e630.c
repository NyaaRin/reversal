// 0x18027e630  FUN_18027e630
// size=909 thunk=false
// signature: undefined FUN_18027e630()
// status: ok


void FUN_18027e630(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar2 + 0xec0);
  lVar4 = *(longlong *)(lVar3 + 0x2368);
  while ((lVar4 != 0 && (*(longlong *)(lVar4 + 0x188) == *(longlong *)(lVar3 + 0x1520)))) {
    FUN_18027e9c0("Missing EndTable()");
    FUN_1802a3b20();
    lVar4 = *(longlong *)(lVar3 + 0x2368);
  }
  lVar4 = *(longlong *)(lVar3 + 0x1520);
  plVar5 = *(longlong **)(lVar3 + 0x23d0);
  while ((plVar5 != (longlong *)0x0 && (*plVar5 == lVar4))) {
    FUN_18027e9c0("Missing EndTabBar()");
    FUN_1802c4d20();
    plVar5 = *(longlong **)(lVar3 + 0x23d0);
  }
  lVar7 = *(longlong *)(lVar3 + 0x24a8);
  while ((lVar7 != 0 && (**(longlong **)(lVar7 + 0x28) == lVar4))) {
    FUN_18027e9c0("Missing EndMultiSelect()");
    FUN_1802c2940();
    lVar7 = *(longlong *)(lVar3 + 0x24a8);
  }
  if (*(char *)(lVar4 + 0x17b) != '\0') {
    FUN_18027e9c0("Missing EndMenuBar()");
    FUN_1802c3fa0();
  }
  if ((int)*(short *)(param_1 + 4) < *(int *)(lVar4 + 0x1a0)) {
    do {
      FUN_18027e9c0("Missing TreePop()");
      FUN_1802c1650();
    } while ((int)*(short *)(param_1 + 4) < *(int *)(lVar4 + 0x1a0));
  }
  if ((int)*(short *)(param_1 + 0xe) < *(int *)(lVar3 + 0x2018)) {
    do {
      FUN_18027e9c0("Missing EndGroup()");
      FUN_18027fda0();
    } while ((int)*(short *)(param_1 + 0xe) < *(int *)(lVar3 + 0x2018));
  }
  if ((int)*(short *)(param_1 + 2) < *(int *)(lVar4 + 0x108)) {
    do {
      FUN_18027e9c0("Missing PopID()");
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar7 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
      iVar1 = *(int *)(lVar7 + 0x108);
      if (iVar1 < 2) {
        FUN_18027e9c0("Calling PopID() too many times!");
      }
      else {
        *(int *)(lVar7 + 0x108) = iVar1 + -1;
      }
    } while ((int)*(short *)(param_1 + 2) < *(int *)(lVar4 + 0x108));
  }
  if (*(short *)(param_1 + 0x14) < *(short *)(lVar3 + 0x26d4)) {
    do {
      FUN_18027e9c0("Missing EndDisabled()");
      if ((*(byte *)(lVar3 + 0x1eb8) & 0x40) == 0) {
        FUN_1802792a0();
        *(undefined1 *)
         ((longlong)*(int *)(lVar3 + 0x14f0) * 0x78 + -10 + *(longlong *)(lVar3 + 0x14f8)) = 0;
      }
      else {
        FUN_180279200();
      }
    } while (*(short *)(param_1 + 0x14) < *(short *)(lVar3 + 0x26d4));
  }
  if ((int)*(short *)(param_1 + 6) < *(int *)(lVar3 + 0x1fc8)) {
    do {
      FUN_18027e9c0("Missing PopStyleColor()");
      FUN_18026a890(1);
    } while ((int)*(short *)(param_1 + 6) < *(int *)(lVar3 + 0x1fc8));
  }
  if ((int)*(short *)(param_1 + 0x10) < *(int *)(lVar3 + 0x2008)) {
    do {
      FUN_18027e9c0("Missing PopItemFlag()");
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar4 = *(longlong *)(lVar2 + 0xec0);
      iVar1 = *(int *)(lVar4 + 0x2008);
      if (iVar1 < 2) {
        FUN_18027e9c0("Calling PopItemFlag() too many times!");
      }
      else {
        *(int *)(lVar4 + 0x2008) = iVar1 + -1;
        *(undefined4 *)(lVar4 + 0x1eb8) =
             *(undefined4 *)(*(longlong *)(lVar4 + 0x2010) + -8 + (longlong)iVar1 * 4);
      }
    } while ((int)*(short *)(param_1 + 0x10) < *(int *)(lVar3 + 0x2008));
  }
  if ((int)*(short *)(param_1 + 8) < *(int *)(lVar3 + 0x1fd8)) {
    do {
      FUN_18027e9c0("Missing PopStyleVar()");
      FUN_18026abb0(1);
    } while ((int)*(short *)(param_1 + 8) < *(int *)(lVar3 + 0x1fd8));
  }
  if ((int)*(short *)(param_1 + 10) < *(int *)(lVar3 + 0x1fe8)) {
    do {
      FUN_18027e9c0("Missing PopFont()");
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar4 = *(longlong *)(lVar2 + 0xec0);
      lVar7 = (longlong)*(int *)(lVar4 + 0x1fe8);
      if (*(int *)(lVar4 + 0x1fe8) < 1) {
        FUN_18027e9c0("Calling PopFont() too many times!");
      }
      else {
        lVar6 = *(longlong *)(lVar4 + 0x1ff0);
        FUN_18027a5f0(*(undefined8 *)(lVar6 + -0x10 + lVar7 * 0x10),
                      *(undefined4 *)(lVar6 + -8 + lVar7 * 0x10),
                      *(undefined4 *)(lVar6 + -4 + lVar7 * 0x10));
        *(int *)(lVar4 + 0x1fe8) = *(int *)(lVar4 + 0x1fe8) + -1;
      }
    } while ((int)*(short *)(param_1 + 10) < *(int *)(lVar3 + 0x1fe8));
  }
  if ((int)*(short *)(param_1 + 0xc) < *(int *)(lVar3 + 0x1ff8)) {
    do {
      FUN_18027e9c0("Missing PopFocusScope()");
      FUN_180279af0();
    } while ((int)*(short *)(param_1 + 0xc) < *(int *)(lVar3 + 0x1ff8));
  }
  return;
}



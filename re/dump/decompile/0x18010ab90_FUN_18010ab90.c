// 0x18010ab90  FUN_18010ab90
// size=920 thunk=false
// signature: undefined FUN_18010ab90()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18010ab90(longlong *param_1,int param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  plVar2 = (longlong *)FUN_1801073d0();
  if (plVar2 == (longlong *)0x0) {
    DAT_180401634 = DAT_180401634 + 1;
  }
  else {
    uVar1 = (**(code **)(*plVar2 + 0xf0))(plVar2,0x8000);
    (**(code **)(*plVar2 + 0xe8))(plVar2,0x8000,0);
    local_60 = 0x93fd561a96ab0c67;
    plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_60);
    lVar8 = *plVar3 + 0x28;
    local_68 = 0xafd05be4da944c2d;
    plVar3 = (longlong *)FUN_180241a30(lVar8,local_88,&local_68);
    puVar4 = (undefined4 *)FUN_180202dc0(*plVar3 + 0x28);
    local_58 = *puVar4;
    local_68 = 0xafd046e4da94287e;
    plVar3 = (longlong *)FUN_180241a30(lVar8,local_88,&local_68);
    puVar4 = (undefined4 *)FUN_180202dc0(*plVar3 + 0x28);
    local_54 = *puVar4;
    local_68 = 0xafd04be4da9430fd;
    plVar3 = (longlong *)FUN_180241a30(lVar8,local_88,&local_68);
    puVar4 = (undefined4 *)FUN_180202dc0(*plVar3 + 0x28);
    plVar3 = DAT_1803fa598;
    local_50 = *puVar4;
    lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    *(undefined1 *)(lVar8 + 0xf4a) = 1;
    (**(code **)(*plVar3 + 0xb8))(plVar3,1);
    (**(code **)(*DAT_1803f9280 + 0x20))(DAT_1803f9280,DAT_180380bb0);
    (**(code **)(*DAT_1803f9280 + 0x30))(DAT_1803f9280,&local_58);
    (**(code **)(*DAT_1803fa598 + 8))(DAT_1803fa598,plVar2,0);
    if (DAT_18040964d != '\0') {
      (**(code **)(*param_1 + 0x3d0))(param_1,0xffffffff);
      (**(code **)(*param_1 + 0x3c8))(param_1,0xffffffff);
      (**(code **)(*param_1 + 0x3c0))(param_1,999);
      (**(code **)(*param_1 + 0x3b8))(param_1,8);
      (**(code **)(*param_1 + 0x3b0))(param_1,3);
      (**(code **)(*param_1 + 0x3a0))(param_1,3);
      (**(code **)(*param_1 + 0x3a8))(param_1,8);
      (**(code **)(*param_1 + 0x398))(param_1,1);
    }
    iVar7 = 0;
    iVar6 = DAT_180409640;
    if (0 < DAT_180409640) {
      do {
        lVar5 = (longlong)iVar7 * 0x160;
        if ((*(int *)(PTR_DAT_1803e7b90 + lVar5 + 0x15c) == param_2) &&
           (*(code **)(PTR_DAT_1803e7b90 + lVar5) != (code *)0x0)) {
          (**(code **)(PTR_DAT_1803e7b90 + lVar5))
                    (*(undefined8 *)(PTR_DAT_1803e7b90 + lVar5 + 8),PTR_DAT_1803e7b90 + lVar5 + 0x10
                     ,PTR_DAT_1803e7b90 + lVar5 + 0x40,
                     *(undefined8 *)(PTR_DAT_1803e7b90 + lVar5 + 0x98));
          iVar6 = DAT_180409640;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar6);
    }
    if (DAT_18040964d != '\0') {
      (**(code **)(*param_1 + 0x3b0))(param_1,1);
      (**(code **)(*param_1 + 0x3a0))(param_1,1);
      (**(code **)(*param_1 + 0x3a8))(param_1,1);
      (**(code **)(*param_1 + 0x398))(param_1,0);
    }
    (**(code **)(*DAT_1803fa598 + 8))(DAT_1803fa598,0,0);
    (**(code **)(*DAT_1803fa598 + 0xb8))(DAT_1803fa598,0);
    local_48 = 0x3f800000;
    local_44 = 0x3f800000;
    local_40 = 0x3f800000;
    (**(code **)(*DAT_1803f9280 + 0x30))(DAT_1803f9280,&local_48);
    (**(code **)(*plVar2 + 0xe8))(plVar2,0x8000,uVar1);
    *(undefined1 *)(lVar8 + 0xf4a) = 0;
  }
  return;
}



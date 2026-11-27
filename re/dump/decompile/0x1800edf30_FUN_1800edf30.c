// 0x1800edf30  FUN_1800edf30
// size=419 thunk=false
// signature: undefined FUN_1800edf30()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800edf30(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  char *_Str;
  size_t sVar6;
  TypeDescriptor *pTVar7;
  TypeDescriptor *pTVar8;
  ulonglong *puVar9;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined **local_38;
  undefined8 uStack_30;
  undefined8 *local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18 [2];
  
  local_18[0] = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  if (param_1 != 0) {
    local_20 = 0;
    local_1c = 2;
    puVar9 = (ulonglong *)&local_20;
    do {
      plVar2 = (longlong *)FUN_1800ebf80((int)*puVar9);
      if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
        uVar3 = (**(code **)(*plVar2 + 0x158))(plVar2,2);
        uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,1);
        lVar5 = FUN_1800e77b0(uVar4,uVar3);
        if (lVar5 == 0) {
          return 0;
        }
        _Str = (char *)(**(code **)(*plVar2 + 0x158))(plVar2,3);
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        sVar6 = strlen(_Str);
        FUN_18001d080(&local_88,_Str,sVar6);
        pTVar7 = (TypeDescriptor *)(*(ulonglong *)(lVar5 + 0x48) & 0xfffffffffffffffc);
        pTVar8 = &.X::RTTI_Type_Descriptor;
        if (pTVar7 != (TypeDescriptor *)0x0) {
          pTVar8 = pTVar7;
        }
        iVar1 = __std_type_info_compare(&pTVar8->spare,0x1803ee0d8);
        if (iVar1 == 0) {
          local_28 = &local_68;
          local_68 = 0;
          uStack_60 = 0;
          local_58 = 0;
          uStack_50 = 0;
          local_48 = 0;
          uStack_40 = 0;
          local_38 = (undefined **)0x0;
          uStack_30 = 0;
          FUN_18016d4c0(&local_68,&local_88);
          local_38 = &PTR_Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09_18033daa8;
          uStack_30 = 0x1803ee0d2;
          FUN_180014200(lVar5 + 0x10,&local_68);
        }
        FUN_18020e450(&local_88);
        return 0;
      }
      puVar9 = (ulonglong *)((longlong)puVar9 + 4);
    } while (puVar9 != local_18);
  }
  return 0;
}



// 0x1800c3970  Features_EdgeJump_EdgeJumpFeature_vfunc01
// size=581 thunk=false
// signature: undefined Features_EdgeJump_EdgeJumpFeature_vfunc01()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_EdgeJump_EdgeJumpFeature_vfunc01
               (undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *plVar5;
  char *pcVar6;
  int *piVar7;
  longlong lVar8;
  byte *pbVar9;
  float *pfVar10;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  DAT_18040a64c = 0;
  local_20 = 0xc98eafbf43c0b816;
  local_28 = 0x93fd561a96ab0c67;
  plVar5 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_48,&local_28);
  plVar5 = (longlong *)FUN_180241a30(*plVar5 + 0x28,local_38,&local_20);
  pcVar6 = (char *)FUN_1801fcfc0(*plVar5 + 0x28);
  if (*pcVar6 != '\0') {
    local_20 = 0x237bcfbdef3b6800;
    local_28 = 0x402819404e703058;
    plVar5 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_38,&local_20);
    plVar5 = (longlong *)FUN_180241a30(*plVar5 + 0x28,local_48,&local_28);
    pcVar6 = (char *)FUN_1801fcfc0(*plVar5 + 0x28);
    if (*pcVar6 == '\0') {
      local_20 = 0x93fd561a96ab0c67;
      local_28 = 0x40af71b84aaf17c9;
      plVar5 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_38,&local_20);
      plVar5 = (longlong *)FUN_180241a30(*plVar5 + 0x28,local_48,&local_28);
      piVar7 = (int *)FUN_1802029c0(*plVar5 + 0x28);
      iVar1 = *piVar7;
      if (0 < iVar1) {
        if (0xfe < iVar1) {
          return;
        }
        cVar3 = FUN_180024540();
        if (cVar3 == '\0') {
          return;
        }
        if (DAT_1803fa545 != '\0') {
          return;
        }
        cVar3 = FUN_1800245f0(iVar1);
        if (cVar3 == '\0') {
          return;
        }
      }
      pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
      uVar4 = (**(code **)(*DAT_1803fa668 + 0x60))();
      lVar8 = (*pcVar2)(DAT_1803fa360,uVar4);
      if (((((lVar8 != 0) && (cVar3 = FUN_18001c330(lVar8), cVar3 != '\0')) && (DAT_1803fa610 != 0))
          && ((DAT_1803fa608 != 0 && (cVar3 = FUN_18001e0a0(lVar8), cVar3 == '\x02')))) &&
         ((cVar3 = FUN_18001fcf0(lVar8), cVar3 < '\x02' &&
          ((pbVar9 = (byte *)FUN_18001d710(lVar8,&local_28), (*pbVar9 & 1) != 0 &&
           ((*(byte *)(param_3 + 0x20) & 2) == 0)))))) {
        pfVar10 = (float *)FUN_18001d530(lVar8);
        DAT_18040a648 =
             (float)(*(code *)PTR_FUN_1803da018)(pfVar10[1] * pfVar10[1] + *pfVar10 * *pfVar10);
        if (DAT_180380fcc <= DAT_18040a648) {
          DAT_18040a64c = 1;
        }
      }
    }
  }
  return;
}



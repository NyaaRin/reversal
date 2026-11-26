// 1802b1200  FUN_1802b1200
// signature: undefined FUN_1802b1200()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1802b1200(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                       int param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  char *pcVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  byte bVar15;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined1 local_85;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xec0);
  uVar8 = 0;
  local_90 = lVar2;
  if ((-1 < *param_2) && (*param_2 < param_5)) {
    uVar8 = FUN_1802b11f0(param_4);
  }
  uVar9 = FUN_1802b0590(param_1,uVar8,0);
  if ((char)uVar9 != '\0') {
    bVar15 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    FUN_180269850(&local_80,param_5,0xbf800000);
    lVar5 = local_50;
    iVar13 = *param_2;
    if (iVar13 < iVar13 + 1) {
      iVar7 = *(int *)(local_50 + 0x1c);
      if (*(int *)(local_50 + 0x18) == iVar7) {
        iVar14 = *(int *)(local_50 + 0x18) + 1;
        if (iVar7 == 0) {
          iVar7 = 8;
        }
        else {
          iVar7 = iVar7 / 2 + iVar7;
        }
        if (iVar14 < iVar7) {
          iVar14 = iVar7;
        }
        FUN_18028ac40(local_50 + 0x18,iVar14);
      }
      lVar10 = (longlong)*(int *)(lVar5 + 0x18);
      lVar3 = *(longlong *)(lVar5 + 0x20);
      *(int *)(lVar3 + lVar10 * 0xc) = iVar13;
      *(int *)(lVar3 + 4 + lVar10 * 0xc) = iVar13 + 1;
      *(undefined2 *)(lVar3 + 8 + lVar10 * 0xc) = 0;
      *(undefined1 *)(lVar3 + 10 + lVar10 * 0xc) = 0;
      *(undefined1 *)(lVar3 + 0xb + lVar10 * 0xc) = local_85;
      *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
    }
    cVar6 = FUN_18026a5b0(&local_80);
    while (cVar6 != '\0') {
      local_80._4_4_ = (int)((ulonglong)local_80 >> 0x20);
      bVar4 = (int)local_80 < local_80._4_4_;
      iVar13 = (int)local_80;
      if (bVar4) {
        do {
          pcVar11 = (char *)FUN_1802b11f0(param_4,iVar13);
          pcVar12 = "*Unknown item*";
          if (pcVar11 != (char *)0x0) {
            pcVar12 = pcVar11;
          }
          FUN_18027ae00(iVar13);
          iVar7 = *param_2;
          local_98 = 0;
          cVar6 = FUN_1802c1850(pcVar12,iVar13 == iVar7,0,&local_98);
          if ((cVar6 != '\0') && (*param_2 != iVar13)) {
            bVar15 = 1;
            *param_2 = iVar13;
          }
          if (iVar13 == iVar7) {
            FUN_180279ea0();
          }
          if (*(char *)(lVar1 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0xec0) + 0x1520);
          iVar7 = *(int *)(lVar2 + 0x108);
          if (iVar7 < 2) {
            FUN_18027e9c0("Calling PopID() too many times!");
          }
          else {
            *(int *)(lVar2 + 0x108) = iVar7 + -1;
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < local_80._4_4_);
      }
      cVar6 = FUN_18026a5b0(&local_80);
      lVar2 = local_90;
    }
    FUN_1802b1130();
    if (bVar15 != 0) {
      FUN_18026ed00(*(undefined4 *)(lVar2 + 0x1ef8));
    }
    FUN_180269ad0(&local_80);
    uVar9 = (ulonglong)bVar15;
  }
  return uVar9;
}



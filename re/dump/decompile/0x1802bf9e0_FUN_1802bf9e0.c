// 0x1802bf9e0  FUN_1802bf9e0
// size=878 thunk=false
// signature: undefined FUN_1802bf9e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802bf9e0(void *param_1,uint param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  size_t _Size;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_a8 [32];
  byte local_88 [4];
  uint local_84;
  uint local_80;
  float local_78;
  float local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  uVar11 = param_2 & 0x6000000;
  uVar10 = param_2 & 0x40002;
  if ((uVar11 == 0) || (uVar10 == 0)) {
    local_84 = uVar11;
    local_80 = uVar10;
    cVar8 = FUN_180281720("context",0);
    if (cVar8 != '\0') {
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar5 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar6 = *(longlong *)(lVar5 + 0xec0);
      FUN_180279080(0x10000,1);
      if (uVar11 == 0) {
        if (*(char *)(lVar5 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        local_78 = *(float *)(lVar6 + 0x1238) * DAT_180380fa8;
        fVar1 = *(float *)(*(longlong *)(lVar5 + 0xec0) + 0xcc8);
        local_74 = local_78 -
                   (fVar1 + fVar1 + *(float *)(*(longlong *)(lVar5 + 0xec0) + 0x1238) +
                   *(float *)(lVar6 + 0xcdc));
        if (local_74 <= DAT_180380bb0) {
          local_74 = DAT_180380bb0;
        }
        FUN_18027f8a0();
        iVar9 = 0;
        do {
          if (iVar9 != 0) {
            FUN_1802afb40();
          }
          FUN_18027ae00(iVar9);
          uVar11 = 0x20001a8;
          if (iVar9 != 0) {
            uVar11 = 0x1a8;
          }
          uVar11 = uVar11 | param_2 & 2;
          if (iVar9 == 1) {
            uVar11 = uVar11 | 0x4000000;
          }
          if (*(char *)(lVar5 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar7 = *(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1520);
          uVar2 = *(undefined4 *)(lVar7 + 0x118);
          uVar3 = *(undefined4 *)(lVar7 + 0x11c);
          cVar8 = FUN_1802c1850("##selectable",0,0,&local_78);
          if (cVar8 != '\0') {
            *(uint *)(lVar6 + 0x264c) = (uVar11 ^ *(uint *)(lVar6 + 0x264c)) & 0xf9ffffff ^ uVar11;
          }
          if (*(char *)(lVar5 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar7 = *(longlong *)(lVar5 + 0xec0);
          *(undefined1 *)(*(longlong *)(lVar7 + 0x1520) + 0xce) = 1;
          lVar7 = *(longlong *)(lVar7 + 0x1520);
          *(undefined4 *)(lVar7 + 0x118) = uVar2;
          *(undefined4 *)(lVar7 + 0x11c) = uVar3;
          *(undefined1 *)(lVar7 + 0x159) = 1;
          _Size = 0x10;
          if ((uVar11 & 2) != 0) {
            _Size = 0xc;
          }
          local_70 = 0;
          uStack_68 = 0;
          memcpy(&local_70,param_1,_Size);
          FUN_1802bbfc0("##previewing_picker",&local_70,uVar11,0);
          if (*(char *)(lVar5 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar7 = *(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1520);
          iVar4 = *(int *)(lVar7 + 0x108);
          if (iVar4 < 2) {
            FUN_18027e9c0("Calling PopID() too many times!");
          }
          else {
            *(int *)(lVar7 + 0x108) = iVar4 + -1;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < 2);
        FUN_18027f940();
        uVar11 = local_84;
        uVar10 = local_80;
      }
      if (uVar10 == 0) {
        if (uVar11 == 0) {
          FUN_1802afb40();
        }
        local_88[0] = (byte)(*(uint *)(lVar6 + 0x264c) >> 0x12) & 1;
        cVar8 = FUN_1802ad620("Alpha Bar",local_88);
        if (cVar8 != '\0') {
          if (local_88[0] == 0) {
            uVar11 = *(uint *)(lVar6 + 0x264c) & 0xfffbffff;
          }
          else {
            uVar11 = *(uint *)(lVar6 + 0x264c) | 0x40000;
          }
          *(uint *)(lVar6 + 0x264c) = uVar11;
        }
      }
      if (*(char *)(lVar5 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar5 = *(longlong *)(lVar5 + 0xec0);
      iVar9 = *(int *)(lVar5 + 0x2008);
      if (iVar9 < 2) {
        FUN_18027e9c0("Calling PopItemFlag() too many times!");
      }
      else {
        *(int *)(lVar5 + 0x2008) = iVar9 + -1;
        *(undefined4 *)(lVar5 + 0x1eb8) =
             *(undefined4 *)(*(longlong *)(lVar5 + 0x2010) + -8 + (longlong)iVar9 * 4);
      }
      FUN_180281800();
    }
  }
  return;
}



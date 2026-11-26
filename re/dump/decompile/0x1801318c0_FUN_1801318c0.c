// 0x1801318c0  FUN_1801318c0
// size=862 thunk=false
// signature: undefined FUN_1801318c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1801318c0(undefined8 param_1,undefined8 param_2,char *param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  size_t sVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 ******ppppppuVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  char *local_1e0;
  char *local_1d8;
  undefined *local_1c8 [2];
  undefined *local_1b8;
  undefined1 local_1b0 [16];
  undefined8 *****local_1a0;
  undefined8 uStack_198;
  ulonglong local_190;
  ulonglong local_188;
  char local_178 [128];
  char local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_208;
  lVar4 = FUN_180131880();
  if (lVar4 == 0) {
    return 0xffffffffffffffff;
  }
  uVar9 = 0;
  if ((DAT_18042f180 & 1) == 0) {
    DAT_18042f180 = DAT_18042f180 | 1;
    _DAT_1804277d8 = 0;
    _DAT_1804277e0 = 0;
    uRam00000001804277e8 = 0;
    _DAT_1804277f0 = 0;
    _DAT_1804277f8 = 0;
    local_1c8[0] = (undefined *)((ulonglong)local_1c8[0] & 0xffffffff00000000);
    _DAT_1804277c0 = 0;
    DAT_1804277c8 = 0;
    _DAT_1804277d0 = 0;
    DAT_1804277c8 = FUN_1802d8350(0x38);
    *(longlong *)DAT_1804277c8 = DAT_1804277c8;
    *(longlong *)(DAT_1804277c8 + 8) = DAT_1804277c8;
    _DAT_1804277d8 = 0;
    _DAT_1804277e0 = 0;
    uRam00000001804277e8 = 0;
    _DAT_1804277f0 = 7;
    _DAT_1804277f8 = 8;
    _DAT_1804277c0 = CONCAT44(DAT_1804277c0_4,0x3f800000);
    FUN_18022c1b0(&DAT_1804277d8,0x10,DAT_1804277c8);
    atexit(FUN_18030a2a0);
  }
  local_1e0 = "IClientUser";
  uVar13 = 0xffffffffffffffff;
  local_1e8 = lVar4;
  local_1d8 = param_3;
  FUN_180012b20(local_f8,0xc0,0xffffffffffffffff,"%p|%s|%s");
  local_1a0 = (undefined8 ******)0x0;
  uStack_198 = 0;
  local_190 = 0;
  local_188 = 0;
  sVar5 = strlen(local_f8);
  FUN_18001d080(&local_1a0,local_f8,sVar5);
  local_1b8 = &DAT_1803e7430;
  iVar3 = _Mtx_lock(&DAT_1803e7430);
  if (iVar3 != 0) {
LAB_180131c12:
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return uVar9;
  }
  uVar14 = uVar13;
  if (DAT_1803e747c == 0x7fffffff) {
LAB_180131bc7:
    DAT_1803e747c = DAT_1803e747c + -1;
    std::_Throw_Cpp_error(6);
  }
  else {
    ppppppuVar11 = &local_1a0;
    if (0xf < local_188) {
      ppppppuVar11 = (undefined8 ******)local_1a0;
    }
    uVar16 = 0xcbf29ce484222325;
    uVar10 = uVar9;
    if (local_190 != 0) {
      do {
        uVar16 = (uVar16 ^ *(byte *)((longlong)ppppppuVar11 + uVar10)) * 0x100000001b3;
        uVar10 = uVar10 + 1;
      } while (uVar10 < local_190);
    }
    lVar6 = FUN_180229bd0(&DAT_1804277c0,local_1c8,&local_1a0,uVar16);
    lVar7 = DAT_1804277c8;
    if (*(longlong *)(lVar6 + 8) != 0) {
      lVar7 = *(longlong *)(lVar6 + 8);
    }
    if (lVar7 != DAT_1804277c8) {
      uVar14 = (ulonglong)*(uint *)(lVar7 + 0x30);
      goto LAB_180131bf7;
    }
    _Mtx_unlock(&DAT_1803e7430);
    lVar7 = FUN_180131880(param_1);
    uVar10 = uVar9;
    if (lVar7 != 0) {
      do {
        uVar12 = (uint)uVar10;
        cVar2 = FUN_1801311e0(*(undefined8 *)(lVar7 + uVar10 * 8));
        if (cVar2 == '\0') break;
        uVar12 = uVar12 + 1;
        uVar10 = (ulonglong)uVar12;
      } while ((int)uVar12 < 0x200);
      if (uVar12 != 0) {
        do {
          local_1e8 = FUN_180131770(lVar4,uVar12,uVar9);
          cVar2 = FUN_180131550(*(undefined8 *)(lVar4 + (longlong)(int)uVar9 * 8));
          if ((cVar2 != '\0') && (iVar3 = strcmp(local_178,param_3), uVar14 = uVar9, iVar3 == 0))
          break;
          uVar15 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar15;
          uVar14 = uVar13;
        } while ((int)uVar15 < (int)uVar12);
      }
    }
    local_1c8[0] = &DAT_1803e7430;
    iVar3 = _Mtx_lock(&DAT_1803e7430);
    if (iVar3 != 0) goto LAB_180131c12;
    if (DAT_1803e747c == 0x7fffffff) goto LAB_180131bc7;
  }
  plVar8 = (longlong *)FUN_180219900(&DAT_1804277c0,local_1b0,&local_1a0);
  *(int *)(*plVar8 + 0x30) = (int)uVar14;
LAB_180131bf7:
  _Mtx_unlock(&DAT_1803e7430);
  FUN_18020e450(&local_1a0);
  return uVar14 & 0xffffffff;
}



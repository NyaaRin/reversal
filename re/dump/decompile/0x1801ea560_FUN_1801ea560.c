// 0x1801ea560  FUN_1801ea560
// size=898 thunk=false
// signature: undefined FUN_1801ea560()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801ea560(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  LPCSTR lpFileName;
  undefined4 uVar3;
  DWORD DVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char cVar7;
  char **ppcVar8;
  undefined1 auStack_1f8 [48];
  undefined1 local_1c8 [40];
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined2 uStack_194;
  undefined1 uStack_192;
  undefined1 uStack_191;
  undefined1 uStack_190;
  undefined1 uStack_18f;
  undefined2 uStack_18e;
  undefined4 uStack_18c;
  undefined *local_188;
  undefined8 uStack_170;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_f8;
  undefined1 uStack_f4;
  undefined3 uStack_f3;
  undefined8 uStack_f0;
  char *local_88;
  char *local_80;
  char *local_78 [10];
  
  local_78[0] = (char *)(DAT_1803da4c0 ^ (ulonglong)auStack_1f8);
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  cVar7 = *(char *)(lVar1 + 0x10);
  *(longlong *)(lVar1 + 0xec0) = param_2;
  if (cVar7 == '\0') {
    __dyn_tls_on_demand_init();
    cVar7 = *(char *)(lVar1 + 0x10);
  }
  if (param_2 == DAT_1803fa588) {
    puVar5 = &DAT_180427640;
    if (0xf < DAT_180427658) {
      puVar5 = DAT_180427640;
    }
  }
  else {
    puVar5 = (undefined8 *)0x0;
  }
  *(undefined8 **)(*(longlong *)(lVar1 + 0xec0) + 0x48) = puVar5;
  if (cVar7 == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar3 = DAT_180380fd8;
  FUN_1802987d0(*(undefined8 *)(*(longlong *)(lVar1 + 0xec0) + 0x60),"C:\\Windows\\Fonts\\Arial.ttf"
                ,DAT_180380fd8,0);
  FUN_180015490(0x65,0x14);
  FUN_180015490(0x65,100);
  DAT_1803fa5d0 = FUN_180015490(0x66);
  memset(local_1c8,0,0xa0);
  uStack_194 = 0x101;
  uStack_191 = 0;
  uStack_190 = 0;
  uStack_170 = CONCAT44(0x7f7fffff,(undefined4)uStack_170);
  _uStack_160 = CONCAT44(0x3f800000,uStack_160);
  local_158 = 0x3f8000003f800000;
  uStack_18e = 0;
  uStack_192 = 1;
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FUN_1802987d0(*(undefined8 *)(*(longlong *)(lVar1 + 0xec0) + 0x60),"C:\\Windows\\Fonts\\Arial.ttf"
                ,uVar3,local_1c8);
  memset(local_1c8,0,0xa0);
  uStack_194 = 0x101;
  uStack_191 = 0;
  uStack_190 = 0;
  _uStack_160 = CONCAT44(0x3f800000,uStack_160);
  local_158 = 0x3f8000003f800000;
  uStack_18e = 0;
  uStack_192 = 1;
  uStack_170 = 0x7f7fffff41400000;
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0xec0) + 0x60);
  uVar6 = FUN_18026f580(0x2d774);
  FUN_1802a04e0(uVar6,&DAT_1803105e0);
  uStack_f0 = CONCAT44(uStack_18c,CONCAT22(uStack_18e,CONCAT11(uStack_18f,uStack_190)));
  uStack_f3 = (undefined3)
              (CONCAT17(uStack_191,CONCAT16(uStack_192,CONCAT24(uStack_194,local_198))) >> 0x28);
  _local_f8 = CONCAT14(1,local_198);
  uStack_194 = (undefined2)((ulonglong)_local_f8 >> 0x20);
  local_198 = 0x2d774;
  uStack_18c = 0x41400000;
  local_188 = &DAT_180330f00;
  uStack_1a0 = uVar6;
  DAT_1803fa5d8 = FUN_1802983a0(uVar2,local_1c8);
  uVar3 = DAT_180380fdc;
  ppcVar8 = &local_88;
  local_88 = "C:\\Windows\\Fonts\\consola.ttf";
  local_80 = "C:\\Windows\\Fonts\\cour.ttf";
  DAT_1803fa5c8 = 0;
  do {
    lpFileName = *ppcVar8;
    DVar4 = GetFileAttributesA(lpFileName);
    if (DVar4 != 0xffffffff) {
      if (*(char *)(lVar1 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      DAT_1803fa5c8 =
           FUN_1802987d0(*(undefined8 *)(*(longlong *)(lVar1 + 0xec0) + 0x60),lpFileName,uVar3,0);
      if (DAT_1803fa5c8 != 0) break;
    }
    ppcVar8 = ppcVar8 + 1;
  } while (ppcVar8 != local_78);
  FUN_1802911b0(0);
  FUN_1802d0ab0(DAT_1803fa618);
  FUN_1802d0770(*(undefined8 *)*param_1);
  FUN_1802cf4a0();
  return;
}



// 0x1802d8884  type_info_vfunc01
// size=138 thunk=false
// signature: undefined type_info_vfunc01()
// status: ok


void type_info_vfunc01(undefined8 param_1,int param_2)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *_Memory;
  
  if ((param_2 == 3) || (param_2 == 0)) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    _Memory = *(uint **)(lVar1 + 0x20);
    if (*(uint **)(lVar1 + 0x20) != (uint *)0x0) {
      while( true ) {
        uVar4 = (ulonglong)*_Memory;
        while (uVar3 = (int)uVar4 - 1, uVar4 = (ulonglong)uVar3, -1 < (int)uVar3) {
          if (*(longlong *)(_Memory + uVar4 * 2 + 4) != 0) {
            (*(code *)PTR__guard_dispatch_icall_18030cca8)();
          }
        }
        puVar2 = *(uint **)(_Memory + 2);
        if (puVar2 == (uint *)0x0) break;
        free(_Memory);
        *(uint **)(lVar1 + 0x20) = puVar2;
        _Memory = puVar2;
      }
      *(undefined8 *)(lVar1 + 0x20) = 0;
    }
  }
  return;
}



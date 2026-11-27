// 0x1802d7d44  __std_fs_open_handle
// size=86 thunk=false
// signature: undefined __std_fs_open_handle()
// status: ok


/* Library Function - Single Match
    __std_fs_open_handle
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

DWORD __std_fs_open_handle
                (longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  DWORD DVar1;
  longlong lVar2;
  
  DVar1 = 0;
  lVar2 = FUN_1802d7564(param_2,param_3,7,0,3,param_4,0);
  *param_1 = lVar2;
  if (lVar2 == -1) {
    DVar1 = GetLastError();
  }
  return DVar1;
}



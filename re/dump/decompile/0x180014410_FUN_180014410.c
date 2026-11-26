// 0x180014410  FUN_180014410
// size=265 thunk=false
// signature: undefined FUN_180014410()
// status: ok


void FUN_180014410(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  FILE *pFVar5;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  if (param_1 != 0) {
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    iVar2 = _Mtx_lock(&DAT_1803da720);
    if (iVar2 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803da76c == 0x7fffffff) {
      DAT_1803da76c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    if (DAT_1803fa567 != '\0') {
      uVar3 = __acrt_iob_func(1);
      puVar4 = (undefined8 *)FUN_180012990();
      __stdio_common_vfprintf(*puVar4,uVar3,param_1,0,&local_res10);
      pFVar5 = (FILE *)__acrt_iob_func(1);
      fflush(pFVar5);
    }
    pFVar5 = DAT_1803f9240;
    if (DAT_1803f9240 != (FILE *)0x0) {
      puVar4 = (undefined8 *)FUN_180012990();
      __stdio_common_vfprintf(*puVar4,pFVar5,param_1,0,&local_res10);
      fflush(DAT_1803f9240);
    }
    _Mtx_unlock(&DAT_1803da720);
  }
  return;
}



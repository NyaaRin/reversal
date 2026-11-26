// 0x18006e130  FUN_18006e130
// size=360 thunk=false
// signature: undefined FUN_18006e130()
// status: ok


ulonglong FUN_18006e130(int param_1,char *param_2,rsize_t param_3)

{
  errno_t eVar1;
  ulonglong in_RAX;
  HMODULE hModule;
  FARPROC pFVar2;
  ULONGLONG UVar3;
  longlong *plVar4;
  ulonglong uVar5;
  char *_Src;
  undefined4 extraout_var;
  
  if (((param_1 < 0) || (param_2 == (char *)0x0)) || (param_3 == 0)) {
    return in_RAX & 0xffffffffffffff00;
  }
  *param_2 = '\0';
  if (DAT_1803fef90 == (longlong *)0x0) {
    hModule = GetModuleHandleA("engine.dll");
    if ((hModule == (HMODULE)0x0) ||
       (pFVar2 = GetProcAddress(hModule,"CreateInterface"), pFVar2 == (FARPROC)0x0)) {
      return 0;
    }
    DAT_1803fef90 = (longlong *)(*pFVar2)("VEngineClientStringTable001",0);
    if (DAT_1803fef90 == (longlong *)0x0) {
      return 0;
    }
  }
  plVar4 = DAT_1803fefc0;
  if (DAT_1803fefc0 == (longlong *)0x0) {
    UVar3 = GetTickCount64();
    if (UVar3 < DAT_1803ff010) {
      return UVar3 & 0xffffffffffffff00;
    }
    DAT_1803ff010 = UVar3 + 5000;
    plVar4 = (longlong *)(**(code **)(*DAT_1803fef90 + 0x18))(DAT_1803fef90,"networkstring");
    uVar5 = FUN_18006e080(plVar4);
    if ((char)uVar5 == '\0') {
      DAT_1803feb44 = DAT_1803feb44 + 1;
      if (DAT_1803feb44 < 6) {
        uVar5 = FUN_180014410("[NETLOG] \'networkstring\' table rejected (%p) #%d; retry in %llu ms\n"
                              ,plVar4,DAT_1803feb44,5000);
      }
      return uVar5 & 0xffffffffffffff00;
    }
  }
  DAT_1803fefc0 = plVar4;
  uVar5 = (**(code **)(*DAT_1803fefc0 + 0x18))(DAT_1803fefc0);
  if (param_1 < (int)uVar5) {
    _Src = (char *)(**(code **)(*DAT_1803fefc0 + 0x48))(DAT_1803fefc0,param_1);
    uVar5 = 0;
    if (_Src != (char *)0x0) {
      eVar1 = strncpy_s(param_2,param_3,_Src,0xffffffffffffffff);
      uVar5 = CONCAT71((int7)(CONCAT44(extraout_var,eVar1) >> 8),*param_2 != '\0');
    }
  }
  else {
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  return uVar5;
}



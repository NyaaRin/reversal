// 0x180014520  FUN_180014520
// size=1290 thunk=false
// signature: undefined FUN_180014520()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180014520(undefined8 *param_1,longlong *param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  HMODULE pHVar2;
  HANDLE pvVar3;
  undefined8 uVar4;
  basic_ostream<char,std::char_traits<char>_> *pbVar5;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_298 [32];
  undefined4 local_278;
  basic_ios<char,std::char_traits<char>_> *local_270;
  undefined8 *local_268;
  HMODULE local_260;
  void *local_258 [3];
  int iStack_23c;
  undefined *local_238;
  undefined **local_230;
  basic_ostream<char,std::char_traits<char>_> local_228 [16];
  longlong *local_218;
  longlong *local_210;
  longlong *local_1f8;
  ulonglong *local_1f0;
  int *local_1e0;
  ulonglong local_1c8;
  uint local_1c0;
  basic_ios<char,std::char_traits<char>_> local_1b0 [104];
  undefined1 local_148 [272];
  ulonglong local_38;
  ulonglong uVar10;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_298;
  local_278 = 0;
  local_268 = param_1;
  GetModuleHandleExW(4,*(LPCWSTR *)(*param_2 + 0x10),&local_260);
  pHVar2 = local_260;
  pvVar3 = GetCurrentProcess();
  K32GetModuleInformation(pvVar3,pHVar2,local_258,0x18);
  pvVar3 = GetCurrentProcess();
  K32GetModuleFileNameExA(pvVar3,local_260,local_148,0x104);
  memset(&local_238,0,0xe8);
  local_238 = &DAT_18033b3dc;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_1b0);
  local_278 = 2;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)&local_238,
             (basic_streambuf<char,std::char_traits<char>_> *)&local_230,false);
  *(undefined ***)((longlong)&local_238 + (longlong)*(int *)(local_238 + 4)) =
       vftable_std_2_D_V__allocator_std_D_DU__char_traits___basic_ostringstream;
  *(int *)((longlong)&iStack_23c + (longlong)*(int *)(local_238 + 4)) =
       *(int *)(local_238 + 4) + -0x88;
  local_270 = (basic_ios<char,std::char_traits<char>_> *)&local_230;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&local_230);
  local_230 = vftable_std_2_D_V__allocator_std_D_DU__char_traits___basic_stringbuf;
  local_1c8 = 0;
  local_1c0 = 4;
  uVar4 = FUN_1801fc280(&local_238,&DAT_18033e970);
  if (param_4 < 0xc0000006) {
    if (param_4 == 0xc0000005) {
      pcVar7 = "EXCEPTION_ACCESS_VIOLATION";
    }
    else if (param_4 == 0x80000002) {
      pcVar7 = "EXCEPTION_DATATYPE_MISALIGNMENT";
    }
    else if (param_4 == 0x80000003) {
      pcVar7 = "EXCEPTION_BREAKPOINT";
    }
    else {
      if (param_4 != 0x80000004) goto switchD_1800146fb_caseD_c0000007;
      pcVar7 = "EXCEPTION_SINGLE_STEP";
    }
  }
  else {
    switch(param_4) {
    case 0xc0000006:
      pcVar7 = "EXCEPTION_IN_PAGE_ERROR";
      break;
    default:
switchD_1800146fb_caseD_c0000007:
      pcVar7 = "UNKNOWN EXCEPTION";
      break;
    case 0xc000001d:
      pcVar7 = "EXCEPTION_ILLEGAL_INSTRUCTION";
      break;
    case 0xc0000025:
      pcVar7 = "EXCEPTION_NONCONTINUABLE_EXCEPTION";
      break;
    case 0xc0000026:
      pcVar7 = "EXCEPTION_INVALID_DISPOSITION";
      break;
    case 0xc000008c:
      pcVar7 = "EXCEPTION_ARRAY_BOUNDS_EXCEEDED";
      break;
    case 0xc000008d:
      pcVar7 = "EXCEPTION_FLT_DENORMAL_OPERAND";
      break;
    case 0xc000008e:
      pcVar7 = "EXCEPTION_FLT_DIVIDE_BY_ZERO";
      break;
    case 0xc000008f:
      pcVar7 = "EXCEPTION_FLT_INEXACT_RESULT";
      break;
    case 0xc0000090:
      pcVar7 = "EXCEPTION_FLT_INVALID_OPERATION";
      break;
    case 0xc0000091:
      pcVar7 = "EXCEPTION_FLT_OVERFLOW";
      break;
    case 0xc0000092:
      pcVar7 = "EXCEPTION_FLT_STACK_CHECK";
      break;
    case 0xc0000093:
      pcVar7 = "EXCEPTION_FLT_UNDERFLOW";
      break;
    case 0xc0000094:
      pcVar7 = "EXCEPTION_INT_DIVIDE_BY_ZERO";
      break;
    case 0xc0000095:
      pcVar7 = "EXCEPTION_INT_OVERFLOW";
      break;
    case 0xc0000096:
      pcVar7 = "EXCEPTION_PRIV_INSTRUCTION";
      break;
    case 0xc00000fd:
      pcVar7 = "EXCEPTION_STACK_OVERFLOW";
    }
  }
  uVar4 = FUN_1801fc280(uVar4,pcVar7);
  pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar4," at address 0x");
  pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     (pbVar5,(_func_ios_base_ptr_ios_base_ptr *)&LAB_180013b50);
  pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     ((basic_ostream<char,std::char_traits<char>_> *)pbVar6,
                      *(void **)(*param_2 + 0x10));
  pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     ((basic_ostream<char,std::char_traits<char>_> *)pbVar6,
                      (_func_ios_base_ptr_ios_base_ptr *)&LAB_180013b30);
  uVar4 = FUN_1801fc280(pbVar6," inside ");
  uVar4 = FUN_1801fc280(uVar4,local_148);
  pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
           FUN_1801fc280(uVar4," loaded at base address 0x");
  pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     (pbVar5,(_func_ios_base_ptr_ios_base_ptr *)&LAB_180013b50);
  pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     ((basic_ostream<char,std::char_traits<char>_> *)pbVar6,local_258[0]);
  FUN_1801fc280(pbVar6,&DAT_18033e92c);
  if (param_4 + 0x3ffffffb < 2) {
    uVar4 = FUN_1801fc280(&local_238,"Invalid operation: ");
    iVar1 = *(int *)(*param_2 + 0x20);
    if (iVar1 == 0) {
      pcVar7 = "read";
    }
    else if (iVar1 == 1) {
      pcVar7 = "write";
    }
    else if (iVar1 == 8) {
      pcVar7 = "user-mode data execution prevention (DEP) violation";
    }
    else {
      pcVar7 = "unknown";
    }
    uVar4 = FUN_1801fc280(uVar4,pcVar7);
    pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar4," at address 0x");
    pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                       (pbVar5,(_func_ios_base_ptr_ios_base_ptr *)&LAB_180013b50);
    pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                       ((basic_ostream<char,std::char_traits<char>_> *)pbVar6,
                        *(__uint64 *)(*param_2 + 0x28));
    pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                       ((basic_ostream<char,std::char_traits<char>_> *)pbVar6,
                        (_func_ios_base_ptr_ios_base_ptr *)&LAB_180013b30);
    FUN_1801fc280(pbVar6,&DAT_18033e92c);
  }
  if (param_4 == 0xc0000006) {
    pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1801fc280(&local_238,"Underlying NTSTATUS code that resulted in the exception ");
    pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                       (pbVar5,*(__uint64 *)(*param_2 + 0x30));
    FUN_1801fc280(pbVar6,&DAT_18033e92c);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_278 = 10;
  if ((((byte)local_1c0 & 0x22) == 2) || (uVar10 = *local_1f0, uVar10 == 0)) {
    if (((local_1c0 & 4) != 0) || (*local_1f8 == 0)) goto LAB_180014994;
    lVar8 = *local_218;
    lVar9 = (*local_1e0 - lVar8) + *local_1f8;
  }
  else {
    lVar8 = *local_210;
    if (uVar10 < local_1c8) {
      uVar10 = local_1c8;
    }
    lVar9 = uVar10 - lVar8;
  }
  if (lVar8 != 0) {
    FUN_180212700(param_1,lVar8,lVar9);
  }
LAB_180014994:
  local_278 = 3;
  local_270 = local_1b0;
  *(undefined ***)((longlong)&local_238 + (longlong)*(int *)(local_238 + 4)) =
       vftable_std_2_D_V__allocator_std_D_DU__char_traits___basic_ostringstream;
  *(int *)((longlong)&iStack_23c + (longlong)*(int *)(local_238 + 4)) =
       *(int *)(local_238 + 4) + -0x88;
  FUN_18020ffc0(&local_230);
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            (local_228);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_1b0);
  return param_1;
}



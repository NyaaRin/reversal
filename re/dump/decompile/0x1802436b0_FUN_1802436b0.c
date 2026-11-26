// 0x1802436b0  FUN_1802436b0
// size=153 thunk=false
// signature: undefined FUN_1802436b0()
// status: ok


char * FUN_1802436b0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "MH_OK";
  case 1:
    return "MH_ERROR_ALREADY_INITIALIZED";
  case 2:
    return "MH_ERROR_NOT_INITIALIZED";
  case 3:
    return "MH_ERROR_ALREADY_CREATED";
  case 4:
    return "MH_ERROR_NOT_CREATED";
  case 5:
    return "MH_ERROR_ENABLED";
  case 6:
    return "MH_ERROR_DISABLED";
  case 7:
    return "MH_ERROR_NOT_EXECUTABLE";
  case 8:
    return "MH_ERROR_UNSUPPORTED_FUNCTION";
  case 9:
    return "MH_ERROR_MEMORY_ALLOC";
  case 10:
    return "MH_ERROR_MEMORY_PROTECT";
  case 0xb:
    return "MH_ERROR_MODULE_NOT_FOUND";
  case 0xc:
    return "MH_ERROR_FUNCTION_NOT_FOUND";
  case 0xffffffff:
    return "MH_UNKNOWN";
  default:
    return "(unknown)";
  }
}



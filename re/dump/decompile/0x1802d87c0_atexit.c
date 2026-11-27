// 0x1802d87c0  atexit
// size=23 thunk=false
// signature: int __cdecl atexit(_func_5014 * param_1)
// status: ok


/* Library Function - Single Match
    atexit
   
   Library: Visual Studio 2019 Release */

int __cdecl atexit(_func_5014 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



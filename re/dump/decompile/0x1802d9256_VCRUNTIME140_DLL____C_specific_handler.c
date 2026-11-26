// 0x1802d9256  VCRUNTIME140.DLL::__C_specific_handler
// size=6 thunk=true
// signature: EXCEPTION_DISPOSITION __C_specific_handler(_EXCEPTION_RECORD * ExceptionRecord, void * EstablisherFrame, _CONTEXT * ContextRecord, _DISPATCHER_CONTEXT * DispatcherContext)
// status: ok


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EXCEPTION_DISPOSITION
__C_specific_handler
          (_EXCEPTION_RECORD *ExceptionRecord,void *EstablisherFrame,_CONTEXT *ContextRecord,
          _DISPATCHER_CONTEXT *DispatcherContext)

{
  EXCEPTION_DISPOSITION EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d9256. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = __C_specific_handler(ExceptionRecord,EstablisherFrame,ContextRecord,DispatcherContext);
  return EVar1;
}



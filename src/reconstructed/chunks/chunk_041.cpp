// Generated complete-corpus translation chunk.
// Generator: re/tools/gen_reconstructed_source.py
#include "../reconstruction.h"
#include "../trace_runtime.h"
#include "../symbols.h"

namespace sf::reconstructed {

// 0x1802d83a0 `eh_vector_destructor_iterator'
// source: re/dump/decompile/0x1802d83a0__eh_vector_destructor_iterator_.c
// size: 107 bytes; thunk: false
// body sha256: cbb9749427a88cc865ea42acba82f1de3c2c9af3a292556529835d0db1bcdd3a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d83a0{
    "0x1802d83a0",
    "`eh_vector_destructor_iterator'",
    R"F1802d83a0S(void __cdecl `eh_vector_destructor_iterator'(void * param_1, __uint64 param_2, __uint64 param_3, _func_void_void_ptr * param_4))F1802d83a0S",
    R"B1802d83a0(// 0x1802d83a0  `eh_vector_destructor_iterator'
// size=107 thunk=false
// signature: void __cdecl `eh_vector_destructor_iterator'(void * param_1, __uint64 param_2, __uint64 param_3, _func_void_void_ptr * param_4)
// status: ok


/* Library Function - Single Match
    void __cdecl `eh vector destructor iterator'(void * __ptr64,unsigned __int64,unsigned
   __int64,void (__cdecl*)(void * __ptr64))
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
_eh_vector_destructor_iterator_
          (void *param_1,__uint64 param_2,__uint64 param_3,_func_void_void_ptr *param_4)

{
  void *pvVar1;
  
  pvVar1 = (void *)(param_2 * param_3 + (longlong)param_1);
  while( true ) {
    if (param_3 == 0) break;
    pvVar1 = (void *)((longlong)pvVar1 - param_2);
    (*(code *)PTR__guard_dispatch_icall_18030cca8)(pvVar1);
    param_3 = param_3 - 1;
  }
  return;
}


)B1802d83a0",
    "cbb9749427a88cc865ea42acba82f1de3c2c9af3a292556529835d0db1bcdd3a",
    R"F1802d83a0C()F1802d83a0C",
    R"F1802d83a0D(PTR__guard_dispatch_icall_18030cca8)F1802d83a0D",
    R"F1802d83a0T()F1802d83a0T",
    R"F1802d83a0F(21: while( true ) {
22: if (param_3 == 0) break;
27: return;)F1802d83a0F",
    R"F1802d83a0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference PTR__guard_dispatch_icall_18030cca8.
TODO: resolve the indirect call in body 24: (*(code *)PTR__guard_dispatch_icall_18030cca8)(pvVar1);.)F1802d83a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d83a0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d83a0", "`eh_vector_destructor_iterator'");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] void * param_1{};
    [[maybe_unused]] std::uint64_t param_2{};
    [[maybe_unused]] std::uint64_t param_3{};
    [[maybe_unused]] void * pvVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for PTR__guard_dispatch_icall_18030cca8.
    // TODO: resolve the indirect call in body 24: (*(code *)PTR__guard_dispatch_icall_18030cca8)(pvVar1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: while( true ) [reason: ambiguous operand type]
    trace.data_ref("PTR__guard_dispatch_icall_18030cca8", static_cast<const void*>(&image::PTR__guard_dispatch_icall_18030cca8));
    // body sha256: cbb9749427a88cc865ea42acba82f1de3c2c9af3a292556529835d0db1bcdd3a
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void __cdecl");
        trace.statement("_eh_vector_destructor_iterator_");
        trace.statement("(void *param_1,__uint64 param_2,__uint64 param_3,_func_void_void_ptr *param_4)");
        {
            trace.statement("void *pvVar1;");
            trace.statement("pvVar1 = (void *)(param_2 * param_3 + (longlong)param_1);");
            while (trace.loop_condition("while( true )")) {
                if (trace.condition("if (param_3 == 0) break; pvVar1 = (void *)((longlong)pvVar1 - param_2); (*(code *)PTR__guard_dispatch_icall_18030cca8)(pvVar1); param_3 = param_3 - 1; } return; }")) {
                }
            }
        }
    return kFunction_0x1802d83a0;
}

// 0x1802d840c FUN_1802d840c
// source: re/dump/decompile/0x1802d840c_FUN_1802d840c.c
// size: 90 bytes; thunk: false
// body sha256: 1d4b81313df4663baf469fdba3ac55670d9f45df0c464cd3770fc0e2b0c3649c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d840c{
    "0x1802d840c",
    "FUN_1802d840c",
    R"F1802d840cS(undefined FUN_1802d840c())F1802d840cS",
    R"B1802d840c(// 0x1802d840c  FUN_1802d840c
// size=90 thunk=false
// signature: undefined FUN_1802d840c()
// status: ok


void FUN_1802d840c(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  for (lVar1 = 0; lVar1 != param_3; lVar1 = lVar1 + 1) {
    param_1 = param_1 - param_2;
    (*(code *)PTR__guard_dispatch_icall_18030cca8)(param_1);
  }
  return;
}


)B1802d840c",
    "1d4b81313df4663baf469fdba3ac55670d9f45df0c464cd3770fc0e2b0c3649c",
    R"F1802d840cC()F1802d840cC",
    R"F1802d840cD(PTR__guard_dispatch_icall_18030cca8)F1802d840cD",
    R"F1802d840cT()F1802d840cT",
    R"F1802d840cF(12: for (lVar1 = 0; lVar1 != param_3; lVar1 = lVar1 + 1) {
16: return;)F1802d840cF",
    R"F1802d840cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference PTR__guard_dispatch_icall_18030cca8.
TODO: resolve the indirect call in body 14: (*(code *)PTR__guard_dispatch_icall_18030cca8)(param_1);.)F1802d840cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d840c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d840c", "FUN_1802d840c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    [[maybe_unused]] std::int64_t param_3{};
    [[maybe_unused]] std::int64_t lVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for PTR__guard_dispatch_icall_18030cca8.
    // TODO: resolve the indirect call in body 14: (*(code *)PTR__guard_dispatch_icall_18030cca8)(param_1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("PTR__guard_dispatch_icall_18030cca8", static_cast<const void*>(&image::PTR__guard_dispatch_icall_18030cca8));
    // body sha256: 1d4b81313df4663baf469fdba3ac55670d9f45df0c464cd3770fc0e2b0c3649c
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong lVar1;");
            for (auto loop = trace.checked_loop("for (lVar1 = 0; lVar1 != param_3; lVar1 = lVar1 + 1)", [&]() -> bool { return static_cast<bool>(lVar1 != param_3); }); loop.next(); ) {
                trace.statement("param_1 = param_1 - param_2;");
                trace.statement("(*(code *)PTR__guard_dispatch_icall_18030cca8)(param_1);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802d840c;
}

// 0x1802d8468 __scrt_acquire_startup_lock
// source: re/dump/decompile/0x1802d8468___scrt_acquire_startup_lock.c
// size: 57 bytes; thunk: false
// body sha256: c2b386223dfee3c569c98d659360395b8ea0402b3bf63c36594d06190222f7d5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d8468{
    "0x1802d8468",
    "__scrt_acquire_startup_lock",
    R"F1802d8468S(undefined __scrt_acquire_startup_lock())F1802d8468S",
    R"B1802d8468(// 0x1802d8468  __scrt_acquire_startup_lock
// size=57 thunk=false
// signature: undefined __scrt_acquire_startup_lock()
// status: ok


/* Library Function - Single Match
    __scrt_acquire_startup_lock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __scrt_acquire_startup_lock(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  
  iVar2 = __scrt_is_ucrt_dll_in_use();
  if (iVar2 == 0) {
LAB_1802d8496:
    uVar4 = 0;
  }
  else {
    do {
      lVar3 = 0;
      LOCK();
      bVar5 = DAT_1803f8f50 == 0;
      lVar1 = *(longlong *)((longlong)Self + 8);
      if (!bVar5) {
        lVar3 = DAT_1803f8f50;
        lVar1 = DAT_1803f8f50;
      }
      DAT_1803f8f50 = lVar1;
      UNLOCK();
      if (bVar5) goto LAB_1802d8496;
    } while (*(longlong *)((longlong)Self + 8) != lVar3);
    uVar4 = 1;
  }
  return uVar4;
}


)B1802d8468",
    "c2b386223dfee3c569c98d659360395b8ea0402b3bf63c36594d06190222f7d5",
    R"F1802d8468C()F1802d8468C",
    R"F1802d8468D(LAB_1802d8496
DAT_1803f8f50)F1802d8468D",
    R"F1802d8468T()F1802d8468T",
    R"F1802d8468F(22: if (iVar2 == 0) {
23: LAB_1802d8496:
26: else {
27: do {
32: if (!bVar5) {
38: if (bVar5) goto LAB_1802d8496;
42: return uVar4;)F1802d8468F",
    R"F1802d8468U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_1802d8496.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803f8f50.)F1802d8468U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d8468() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d8468", "__scrt_acquire_startup_lock");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t lVar1{};
    [[maybe_unused]] std::int32_t iVar2{};
    [[maybe_unused]] std::int64_t lVar3{};
    [[maybe_unused]] std::uint64_t uVar4{};
    [[maybe_unused]] bool bVar5{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_1802d8496.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803f8f50.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("__scrt_is_ucrt_dll_in_use");
    trace.call_arguments("LOCK");
    trace.call_arguments("UNLOCK");
    trace.data_ref("DAT_1803f8f50", static_cast<const void*>(&image::DAT_1803f8f50));
    // body sha256: c2b386223dfee3c569c98d659360395b8ea0402b3bf63c36594d06190222f7d5
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 __scrt_acquire_startup_lock(void)");
        {
            trace.statement("longlong lVar1;");
            trace.statement("int iVar2;");
            trace.statement("longlong lVar3;");
            trace.statement("undefined8 uVar4;");
            trace.statement("bool bVar5;");
            trace.statement("iVar2 = __scrt_is_ucrt_dll_in_use();");
            if (trace.checked_condition("if (iVar2 == 0)", [&]() -> bool { return static_cast<bool>(iVar2 == 0); })) {
                LAB_1802d8496: ;
                trace.statement("uVar4 = 0;");
            } else {
            do {
                trace.statement("lVar3 = 0;");
                trace.statement("LOCK();");
                trace.statement("bVar5 = DAT_1803f8f50 == 0;");
                trace.statement("lVar1 = *(longlong *)((longlong)Self + 8);");
                if (trace.checked_condition("if (!bVar5)", [&]() -> bool { return static_cast<bool>(!bVar5); })) {
                    trace.statement("lVar3 = DAT_1803f8f50;");
                    trace.statement("lVar1 = DAT_1803f8f50;");
                }
                trace.statement("DAT_1803f8f50 = lVar1;");
                trace.statement("UNLOCK();");
                if (trace.condition("if (bVar5) goto LAB_1802d8496; } while (*(longlong *)((longlong)Self + 8) != lVar3); uVar4 = 1; } return uVar4; }")) {
                }
            } while (trace.loop_condition("do/while"));
            }
        }
    return kFunction_0x1802d8468;
}

// 0x1802d84a4 __scrt_dllmain_after_initialize_c
// source: re/dump/decompile/0x1802d84a4___scrt_dllmain_after_initialize_c.c
// size: 52 bytes; thunk: false
// body sha256: 4f4c4ac1d11564826fa20be6720e68525e3bb4b420031be0a659d963eba8f700
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d84a4{
    "0x1802d84a4",
    "__scrt_dllmain_after_initialize_c",
    R"F1802d84a4S(undefined __scrt_dllmain_after_initialize_c())F1802d84a4S",
    R"B1802d84a4(// 0x1802d84a4  __scrt_dllmain_after_initialize_c
// size=52 thunk=false
// signature: undefined __scrt_dllmain_after_initialize_c()
// status: ok


/* Library Function - Single Match
    __scrt_dllmain_after_initialize_c
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 __scrt_dllmain_after_initialize_c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = __scrt_is_ucrt_dll_in_use();
  if (iVar1 == 0) {
    uVar2 = vfunc_shared_1800b0d60();
    iVar1 = _configure_narrow_argv(uVar2);
    if (iVar1 != 0) {
      return 0;
    }
    _initialize_narrow_environment();
  }
  else {
    FUN_1802d8df0();
  }
  return 1;
}


)B1802d84a4",
    "4f4c4ac1d11564826fa20be6720e68525e3bb4b420031be0a659d963eba8f700",
    R"F1802d84a4C(FUN_1802d8df0)F1802d84a4C",
    R"F1802d84a4D()F1802d84a4D",
    R"F1802d84a4T()F1802d84a4T",
    R"F1802d84a4F(19: if (iVar1 == 0) {
22: if (iVar1 != 0) {
23: return 0;
27: else {
30: return 1;)F1802d84a4F",
    R"F1802d84a4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d84a4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d84a4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d84a4", "__scrt_dllmain_after_initialize_c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int32_t iVar1{};
    [[maybe_unused]] std::uint32_t uVar2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("__scrt_is_ucrt_dll_in_use");
    trace.call_arguments("vfunc_shared_1800b0d60");
    trace.call_arguments("_configure_narrow_argv", uVar2);
    trace.call_arguments("_initialize_narrow_environment");
    trace.call_arguments("FUN_1802d8df0");
    trace.call_target("FUN_1802d8df0", reinterpret_cast<const void*>(&image::FUN_1802d8df0));
    // body sha256: 4f4c4ac1d11564826fa20be6720e68525e3bb4b420031be0a659d963eba8f700
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined4 __scrt_dllmain_after_initialize_c(void)");
        {
            trace.statement("int iVar1;");
            trace.statement("undefined4 uVar2;");
            trace.statement("iVar1 = __scrt_is_ucrt_dll_in_use();");
            if (trace.checked_condition("if (iVar1 == 0)", [&]() -> bool { return static_cast<bool>(iVar1 == 0); })) {
                trace.statement("uVar2 = vfunc_shared_1800b0d60();");
                trace.statement("iVar1 = _configure_narrow_argv(uVar2);");
                if (trace.checked_condition("if (iVar1 != 0)", [&]() -> bool { return static_cast<bool>(iVar1 != 0); })) {
                    trace.statement("return 0;");
                }
                trace.statement("_initialize_narrow_environment();");
            } else {
            trace.statement("FUN_1802d8df0();");
            }
            trace.statement("return 1;");
        }
    return kFunction_0x1802d84a4;
}

// 0x1802d84d8 FUN_1802d84d8
// source: re/dump/decompile/0x1802d84d8_FUN_1802d84d8.c
// size: 21 bytes; thunk: false
// body sha256: c64ae33af54d671a85c0822ea7316f6109e289b0857e4c77cac174a3a5f9b30a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d84d8{
    "0x1802d84d8",
    "FUN_1802d84d8",
    R"F1802d84d8S(undefined FUN_1802d84d8())F1802d84d8S",
    R"B1802d84d8(// 0x1802d84d8  FUN_1802d84d8
// size=21 thunk=false
// signature: undefined FUN_1802d84d8()
// status: ok


bool FUN_1802d84d8(void)

{
  char cVar1;
  
  cVar1 = FUN_1802d8610(0);
  return cVar1 != '\0';
}


)B1802d84d8",
    "c64ae33af54d671a85c0822ea7316f6109e289b0857e4c77cac174a3a5f9b30a",
    R"F1802d84d8C(FUN_1802d8610)F1802d84d8C",
    R"F1802d84d8D()F1802d84d8D",
    R"F1802d84d8T()F1802d84d8T",
    R"F1802d84d8F(13: return cVar1 != '\0';)F1802d84d8F",
    R"F1802d84d8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d84d8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d84d8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d84d8", "FUN_1802d84d8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] char cVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1802d8610", 0);
    trace.call_target("FUN_1802d8610", reinterpret_cast<const void*>(&image::FUN_1802d8610));
    // body sha256: c64ae33af54d671a85c0822ea7316f6109e289b0857e4c77cac174a3a5f9b30a
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("char cVar1;");
            trace.statement("cVar1 = FUN_1802d8610(0);");
            trace.statement("return cVar1 != '\\0';");
        }
    return kFunction_0x1802d84d8;
}

// 0x1802d84f0 FUN_1802d84f0
// source: re/dump/decompile/0x1802d84f0_FUN_1802d84f0.c
// size: 40 bytes; thunk: false
// body sha256: a61703c7484f4f16ec069b93bbd877169ffe9497368c150feb4f2db3b99a9f7c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d84f0{
    "0x1802d84f0",
    "FUN_1802d84f0",
    R"F1802d84f0S(undefined FUN_1802d84f0())F1802d84f0S",
    R"B1802d84f0(// 0x1802d84f0  FUN_1802d84f0
// size=40 thunk=false
// signature: undefined FUN_1802d84f0()
// status: ok


undefined1 FUN_1802d84f0(void)

{
  char cVar1;
  
  cVar1 = vfunc_shared_180076390();
  if (cVar1 != '\0') {
    cVar1 = vfunc_shared_180076390();
    if (cVar1 != '\0') {
      return 1;
    }
    vfunc_shared_180076390();
  }
  return 0;
}


)B1802d84f0",
    "a61703c7484f4f16ec069b93bbd877169ffe9497368c150feb4f2db3b99a9f7c",
    R"F1802d84f0C()F1802d84f0C",
    R"F1802d84f0D()F1802d84f0D",
    R"F1802d84f0T()F1802d84f0T",
    R"F1802d84f0F(13: if (cVar1 != '\0') {
15: if (cVar1 != '\0') {
16: return 1;
20: return 0;)F1802d84f0F",
    R"F1802d84f0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d84f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d84f0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d84f0", "FUN_1802d84f0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] char cVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("vfunc_shared_180076390");
    trace.call_arguments("vfunc_shared_180076390");
    trace.call_arguments("vfunc_shared_180076390");
    // body sha256: a61703c7484f4f16ec069b93bbd877169ffe9497368c150feb4f2db3b99a9f7c
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("char cVar1;");
            trace.statement("cVar1 = vfunc_shared_180076390();");
            if (trace.checked_condition("if (cVar1 != '\\0')", [&]() -> bool { return static_cast<bool>(cVar1 != '\0'); })) {
                trace.statement("cVar1 = vfunc_shared_180076390();");
                if (trace.checked_condition("if (cVar1 != '\\0')", [&]() -> bool { return static_cast<bool>(cVar1 != '\0'); })) {
                    trace.statement("return 1;");
                }
                trace.statement("vfunc_shared_180076390();");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1802d84f0;
}

// 0x1802d8518 FUN_1802d8518
// source: re/dump/decompile/0x1802d8518_FUN_1802d8518.c
// size: 21 bytes; thunk: false
// body sha256: 75aee4122f4fa8989168b2a3ca64ae4004b5dbbfe1cf21b24cca7cebb7b28971
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d8518{
    "0x1802d8518",
    "FUN_1802d8518",
    R"F1802d8518S(undefined FUN_1802d8518())F1802d8518S",
    R"B1802d8518(// 0x1802d8518  FUN_1802d8518
// size=21 thunk=false
// signature: undefined FUN_1802d8518()
// status: ok


undefined1 FUN_1802d8518(void)

{
  vfunc_shared_180076390();
  vfunc_shared_180076390();
  return 1;
}


)B1802d8518",
    "75aee4122f4fa8989168b2a3ca64ae4004b5dbbfe1cf21b24cca7cebb7b28971",
    R"F1802d8518C()F1802d8518C",
    R"F1802d8518D()F1802d8518D",
    R"F1802d8518T()F1802d8518T",
    R"F1802d8518F(12: return 1;)F1802d8518F",
    R"F1802d8518U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d8518U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d8518() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d8518", "FUN_1802d8518");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("vfunc_shared_180076390");
    trace.call_arguments("vfunc_shared_180076390");
    // body sha256: 75aee4122f4fa8989168b2a3ca64ae4004b5dbbfe1cf21b24cca7cebb7b28971
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("vfunc_shared_180076390();");
            trace.statement("vfunc_shared_180076390();");
            trace.statement("return 1;");
        }
    return kFunction_0x1802d8518;
}

// 0x1802d8530 __scrt_dllmain_exception_filter
// source: re/dump/decompile/0x1802d8530___scrt_dllmain_exception_filter.c
// size: 96 bytes; thunk: false
// body sha256: dbe81b6909ce76b7f5ebc9ee80b045899ec97814e061e6f4da470074dd27e813
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d8530{
    "0x1802d8530",
    "__scrt_dllmain_exception_filter",
    R"F1802d8530S(undefined __scrt_dllmain_exception_filter())F1802d8530S",
    R"B1802d8530(// 0x1802d8530  __scrt_dllmain_exception_filter
// size=96 thunk=false
// signature: undefined __scrt_dllmain_exception_filter()
// status: ok


/* Library Function - Single Match
    __scrt_dllmain_exception_filter
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __scrt_dllmain_exception_filter
               (undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = __scrt_is_ucrt_dll_in_use();
  if ((iVar1 == 0) && (param_2 == 1)) {
    (*(code *)PTR__guard_dispatch_icall_18030cca8)(param_1,0,param_3);
  }
  _seh_filter_dll(param_5,param_6);
  return;
}


)B1802d8530",
    "dbe81b6909ce76b7f5ebc9ee80b045899ec97814e061e6f4da470074dd27e813",
    R"F1802d8530C()F1802d8530C",
    R"F1802d8530D(PTR__guard_dispatch_icall_18030cca8)F1802d8530D",
    R"F1802d8530T()F1802d8530T",
    R"F1802d8530F(20: if ((iVar1 == 0) && (param_2 == 1)) {
24: return;)F1802d8530F",
    R"F1802d8530U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference PTR__guard_dispatch_icall_18030cca8.
TODO: resolve the indirect call in body 21: (*(code *)PTR__guard_dispatch_icall_18030cca8)(param_1,0,param_3);.)F1802d8530U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d8530() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d8530", "__scrt_dllmain_exception_filter");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int32_t param_2{};
    [[maybe_unused]] std::uint64_t param_3{};
    [[maybe_unused]] std::uint64_t param_4{};
    [[maybe_unused]] std::uint32_t param_5{};
    [[maybe_unused]] std::uint64_t param_6{};
    [[maybe_unused]] std::int32_t iVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for PTR__guard_dispatch_icall_18030cca8.
    // TODO: resolve the indirect call in body 21: (*(code *)PTR__guard_dispatch_icall_18030cca8)(param_1,0,param_3);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("__scrt_is_ucrt_dll_in_use");
    trace.call_arguments("_seh_filter_dll", param_5, param_6);
    trace.data_ref("PTR__guard_dispatch_icall_18030cca8", static_cast<const void*>(&image::PTR__guard_dispatch_icall_18030cca8));
    // body sha256: dbe81b6909ce76b7f5ebc9ee80b045899ec97814e061e6f4da470074dd27e813
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void __scrt_dllmain_exception_filter");
        trace.statement("(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,");
        trace.statement("undefined4 param_5,undefined8 param_6)");
        {
            trace.statement("int iVar1;");
            trace.statement("iVar1 = __scrt_is_ucrt_dll_in_use();");
            if (trace.checked_condition("if ((iVar1 == 0) && (param_2 == 1))", [&]() -> bool { return static_cast<bool>((iVar1 == 0) && (param_2 == 1)); })) {
                trace.statement("(*(code *)PTR__guard_dispatch_icall_18030cca8)(param_1,0,param_3);");
            }
            trace.statement("_seh_filter_dll(param_5,param_6);");
            trace.statement("return;");
        }
    return kFunction_0x1802d8530;
}

// 0x1802d8590 __scrt_dllmain_uninitialize_c
// source: re/dump/decompile/0x1802d8590___scrt_dllmain_uninitialize_c.c
// size: 48 bytes; thunk: false
// body sha256: 43b6afc3df737e496cbb315f981ddfc29b487a3a3d4203e065a34d88d5c419ae
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d8590{
    "0x1802d8590",
    "__scrt_dllmain_uninitialize_c",
    R"F1802d8590S(undefined __scrt_dllmain_uninitialize_c())F1802d8590S",
    R"B1802d8590(// 0x1802d8590  __scrt_dllmain_uninitialize_c
// size=48 thunk=false
// signature: undefined __scrt_dllmain_uninitialize_c()
// status: ok


/* Library Function - Single Match
    __scrt_dllmain_uninitialize_c
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __scrt_dllmain_uninitialize_c(void)

{
  int iVar1;
  
  iVar1 = __scrt_is_ucrt_dll_in_use();
  if (iVar1 != 0) {
    _execute_onexit_table(&DAT_1803f8f60);
    return;
  }
  iVar1 = vfunc_shared_1800139e0();
  if (iVar1 == 0) {
    _cexit();
  }
  return;
}


)B1802d8590",
    "43b6afc3df737e496cbb315f981ddfc29b487a3a3d4203e065a34d88d5c419ae",
    R"F1802d8590C()F1802d8590C",
    R"F1802d8590D(DAT_1803f8f60)F1802d8590D",
    R"F1802d8590T()F1802d8590T",
    R"F1802d8590F(18: if (iVar1 != 0) {
20: return;
23: if (iVar1 == 0) {
26: return;)F1802d8590F",
    R"F1802d8590U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803f8f60.)F1802d8590U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d8590() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d8590", "__scrt_dllmain_uninitialize_c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int32_t iVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803f8f60.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("__scrt_is_ucrt_dll_in_use");
    trace.call_arguments("_execute_onexit_table", &image::DAT_1803f8f60);
    trace.call_arguments("vfunc_shared_1800139e0");
    trace.call_arguments("_cexit");
    trace.data_ref("DAT_1803f8f60", static_cast<const void*>(&image::DAT_1803f8f60));
    // body sha256: 43b6afc3df737e496cbb315f981ddfc29b487a3a3d4203e065a34d88d5c419ae
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void __scrt_dllmain_uninitialize_c(void)");
        {
            trace.statement("int iVar1;");
            trace.statement("iVar1 = __scrt_is_ucrt_dll_in_use();");
            if (trace.checked_condition("if (iVar1 != 0)", [&]() -> bool { return static_cast<bool>(iVar1 != 0); })) {
                trace.statement("_execute_onexit_table(&DAT_1803f8f60);");
                trace.statement("return;");
            }
            trace.statement("iVar1 = vfunc_shared_1800139e0();");
            if (trace.checked_condition("if (iVar1 == 0)", [&]() -> bool { return static_cast<bool>(iVar1 == 0); })) {
                trace.statement("_cexit();");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802d8590;
}

// 0x1802d85c0 FUN_1802d85c0
// source: re/dump/decompile/0x1802d85c0_FUN_1802d85c0.c
// size: 20 bytes; thunk: false
// body sha256: 66892135f0f7a05568a2cb96409b75c4abf622ff427e1b6cd23a1d79098c86fd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d85c0{
    "0x1802d85c0",
    "FUN_1802d85c0",
    R"F1802d85c0S(undefined FUN_1802d85c0())F1802d85c0S",
    R"B1802d85c0(// 0x1802d85c0  FUN_1802d85c0
// size=20 thunk=false
// signature: undefined FUN_1802d85c0()
// status: ok


void FUN_1802d85c0(void)

{
  vfunc_shared_180076390(0);
  vfunc_shared_180076390();
  return;
}


)B1802d85c0",
    "66892135f0f7a05568a2cb96409b75c4abf622ff427e1b6cd23a1d79098c86fd",
    R"F1802d85c0C()F1802d85c0C",
    R"F1802d85c0D()F1802d85c0D",
    R"F1802d85c0T()F1802d85c0T",
    R"F1802d85c0F(12: return;)F1802d85c0F",
    R"F1802d85c0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d85c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d85c0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d85c0", "FUN_1802d85c0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("vfunc_shared_180076390", 0);
    trace.call_arguments("vfunc_shared_180076390");
    // body sha256: 66892135f0f7a05568a2cb96409b75c4abf622ff427e1b6cd23a1d79098c86fd
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("vfunc_shared_180076390(0);");
            trace.statement("vfunc_shared_180076390();");
            trace.statement("return;");
        }
    return kFunction_0x1802d85c0;
}

// 0x1802d85d4 FUN_1802d85d4
// source: re/dump/decompile/0x1802d85d4_FUN_1802d85d4.c
// size: 58 bytes; thunk: false
// body sha256: cf8e33ebc1effe211a4338314a2b68ac3a2f0fa0c6286598ca9691ab217992c8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d85d4{
    "0x1802d85d4",
    "FUN_1802d85d4",
    R"F1802d85d4S(undefined FUN_1802d85d4())F1802d85d4S",
    R"B1802d85d4(// 0x1802d85d4  FUN_1802d85d4
// size=58 thunk=false
// signature: undefined FUN_1802d85d4()
// status: ok


undefined1 FUN_1802d85d4(int param_1)

{
  char cVar1;
  
  if (param_1 == 0) {
    DAT_1803f8f58 = 1;
  }
  FUN_1802d8df0();
  cVar1 = vfunc_shared_180076390();
  if (cVar1 != '\0') {
    cVar1 = vfunc_shared_180076390();
    if (cVar1 != '\0') {
      return 1;
    }
    vfunc_shared_180076390(0);
  }
  return 0;
}


)B1802d85d4",
    "cf8e33ebc1effe211a4338314a2b68ac3a2f0fa0c6286598ca9691ab217992c8",
    R"F1802d85d4C(FUN_1802d8df0)F1802d85d4C",
    R"F1802d85d4D(DAT_1803f8f58)F1802d85d4D",
    R"F1802d85d4T()F1802d85d4T",
    R"F1802d85d4F(12: if (param_1 == 0) {
17: if (cVar1 != '\0') {
19: if (cVar1 != '\0') {
20: return 1;
24: return 0;)F1802d85d4F",
    R"F1802d85d4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803f8f58.)F1802d85d4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d85d4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d85d4", "FUN_1802d85d4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int32_t param_1{};
    [[maybe_unused]] char cVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803f8f58.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1802d8df0");
    trace.call_arguments("vfunc_shared_180076390");
    trace.call_arguments("vfunc_shared_180076390");
    trace.call_arguments("vfunc_shared_180076390", 0);
    trace.call_target("FUN_1802d8df0", reinterpret_cast<const void*>(&image::FUN_1802d8df0));
    trace.data_ref("DAT_1803f8f58", static_cast<const void*>(&image::DAT_1803f8f58));
    // body sha256: cf8e33ebc1effe211a4338314a2b68ac3a2f0fa0c6286598ca9691ab217992c8
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("char cVar1;");
            if (trace.checked_condition("if (param_1 == 0)", [&]() -> bool { return static_cast<bool>(param_1 == 0); })) {
                trace.statement("DAT_1803f8f58 = 1;");
            }
            trace.statement("FUN_1802d8df0();");
            trace.statement("cVar1 = vfunc_shared_180076390();");
            if (trace.checked_condition("if (cVar1 != '\\0')", [&]() -> bool { return static_cast<bool>(cVar1 != '\0'); })) {
                trace.statement("cVar1 = vfunc_shared_180076390();");
                if (trace.checked_condition("if (cVar1 != '\\0')", [&]() -> bool { return static_cast<bool>(cVar1 != '\0'); })) {
                    trace.statement("return 1;");
                }
                trace.statement("vfunc_shared_180076390(0);");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1802d85d4;
}

// 0x1802d8610 FUN_1802d8610
// source: re/dump/decompile/0x1802d8610_FUN_1802d8610.c
// size: 138 bytes; thunk: false
// body sha256: 0dcfc1f22bc3641f4be1dae599e0508e4bc279c89d0d58be3b9ed57f50b3c878
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d8610{
    "0x1802d8610",
    "FUN_1802d8610",
    R"F1802d8610S(undefined FUN_1802d8610())F1802d8610S",
    R"B1802d8610(// 0x1802d8610  FUN_1802d8610
// size=138 thunk=false
// signature: undefined FUN_1802d8610()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1802d8610(uint param_1)

{
  int iVar1;
  
  if (DAT_1803f8f59 == '\0') {
    if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_1802d90dc(5);
    }
    iVar1 = __scrt_is_ucrt_dll_in_use();
    if ((iVar1 == 0) || (param_1 != 0)) {
      DAT_1803f8f60 = _DAT_180381830;
      uRam00000001803f8f68 = _UNK_180381838;
      _DAT_1803f8f70 = 0xffffffffffffffff;
      _DAT_1803f8f78 = _DAT_180381830;
      uRam00000001803f8f80 = _UNK_180381838;
      _DAT_1803f8f88 = 0xffffffffffffffff;
    }
    else {
      iVar1 = _initialize_onexit_table(&DAT_1803f8f60);
      if ((iVar1 != 0) || (iVar1 = _initialize_onexit_table(&DAT_1803f8f78), iVar1 != 0)) {
        return 0;
      }
    }
    DAT_1803f8f59 = '\x01';
  }
  return 1;
}


)B1802d8610",
    "0dcfc1f22bc3641f4be1dae599e0508e4bc279c89d0d58be3b9ed57f50b3c878",
    R"F1802d8610C(FUN_1802d90dc)F1802d8610C",
    R"F1802d8610D(_DAT_180381830
_UNK_180381838
DAT_1803f8f59
DAT_1803f8f60
_DAT_1803f8f70
DAT_1803f8f78
_DAT_1803f8f78
_DAT_1803f8f88)F1802d8610D",
    R"F1802d8610T()F1802d8610T",
    R"F1802d8610F(14: if (DAT_1803f8f59 == '\0') {
15: if (1 < param_1) {
20: if ((iVar1 == 0) || (param_1 != 0)) {
28: else {
30: if ((iVar1 != 0) || (iVar1 = _initialize_onexit_table(&DAT_1803f8f78), iVar1 != 0)) {
31: return 0;
36: return 1;)F1802d8610F",
    R"F1802d8610U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference _DAT_180381830.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference _UNK_180381838.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803f8f59.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803f8f60.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference _DAT_1803f8f70.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803f8f78.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference _DAT_1803f8f78.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference _DAT_1803f8f88.)F1802d8610U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d8610() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d8610", "FUN_1802d8610");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint32_t param_1{};
    [[maybe_unused]] std::int32_t iVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for _DAT_180381830.
    // TODO: recover global/data declaration, type, value and runtime page/layout for _UNK_180381838.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803f8f59.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803f8f60.
    // TODO: recover global/data declaration, type, value and runtime page/layout for _DAT_1803f8f70.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803f8f78.
    // TODO: recover global/data declaration, type, value and runtime page/layout for _DAT_1803f8f78.
    // TODO: recover global/data declaration, type, value and runtime page/layout for _DAT_1803f8f88.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((iVar1 != 0) || (iVar1 = _initialize_onexit_table(&DAT_1803f8f78), iVar1 != 0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_1802d90dc", 5);
    trace.call_arguments("__scrt_is_ucrt_dll_in_use");
    trace.call_arguments("_initialize_onexit_table", &image::DAT_1803f8f60);
    trace.call_arguments("_initialize_onexit_table", &image::DAT_1803f8f78);
    trace.call_target("FUN_1802d90dc", reinterpret_cast<const void*>(&image::FUN_1802d90dc));
    trace.data_ref("_DAT_180381830", static_cast<const void*>(&image::_DAT_180381830));
    trace.data_ref("_UNK_180381838", static_cast<const void*>(&image::_UNK_180381838));
    trace.data_ref("DAT_1803f8f59", static_cast<const void*>(&image::DAT_1803f8f59));
    trace.data_ref("DAT_1803f8f60", static_cast<const void*>(&image::DAT_1803f8f60));
    trace.data_ref("_DAT_1803f8f70", static_cast<const void*>(&image::_DAT_1803f8f70));
    trace.data_ref("DAT_1803f8f78", static_cast<const void*>(&image::DAT_1803f8f78));
    trace.data_ref("_DAT_1803f8f78", static_cast<const void*>(&image::_DAT_1803f8f78));
    trace.data_ref("_DAT_1803f8f88", static_cast<const void*>(&image::_DAT_1803f8f88));
    // body sha256: 0dcfc1f22bc3641f4be1dae599e0508e4bc279c89d0d58be3b9ed57f50b3c878
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("int iVar1;");
            if (trace.checked_condition("if (DAT_1803f8f59 == '\\0')", [&]() -> bool { return static_cast<bool>(image::DAT_1803f8f59 == '\0'); })) {
                if (trace.checked_condition("if (1 < param_1)", [&]() -> bool { return static_cast<bool>(1 < param_1); })) {
                    trace.statement("FUN_1802d90dc(5);");
                }
                trace.statement("iVar1 = __scrt_is_ucrt_dll_in_use();");
                if (trace.checked_condition("if ((iVar1 == 0) || (param_1 != 0))", [&]() -> bool { return static_cast<bool>((iVar1 == 0) || (param_1 != 0)); })) {
                    trace.statement("DAT_1803f8f60 = _DAT_180381830;");
                    trace.statement("uRam00000001803f8f68 = _UNK_180381838;");
                    trace.statement("_DAT_1803f8f70 = 0xffffffffffffffff;");
                    trace.statement("_DAT_1803f8f78 = _DAT_180381830;");
                    trace.statement("uRam00000001803f8f80 = _UNK_180381838;");
                    trace.statement("_DAT_1803f8f88 = 0xffffffffffffffff;");
                } else {
                trace.statement("iVar1 = _initialize_onexit_table(&DAT_1803f8f60);");
                if (trace.condition("if ((iVar1 != 0) || (iVar1 = _initialize_onexit_table(&DAT_1803f8f78), iVar1 != 0))")) {
                    trace.statement("return 0;");
                }
                }
                trace.statement("DAT_1803f8f59 = '\\x01';");
            }
            trace.statement("return 1;");
        }
    return kFunction_0x1802d8610;
}

// 0x1802d869c FUN_1802d869c
// source: re/dump/decompile/0x1802d869c_FUN_1802d869c.c
// size: 150 bytes; thunk: false
// body sha256: b548af39281f15fb993d835e58b07f13e74f6293d02fab68b9522d9ff6ebd840
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d869c{
    "0x1802d869c",
    "FUN_1802d869c",
    R"F1802d869cS(undefined FUN_1802d869c())F1802d869cS",
    R"B1802d869c(// 0x1802d869c  FUN_1802d869c
// size=150 thunk=false
// signature: undefined FUN_1802d869c()
// status: ok


ulonglong FUN_1802d869c(longlong param_1)

{
  ulonglong uVar1;
  uint7 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = 0x5a4d;
  if (IMAGE_DOS_HEADER_180000000.e_magic == (char  [2])0x5a4d) {
    lVar3 = (longlong)(int)IMAGE_DOS_HEADER_180000000.e_lfanew;
    if ((*(int *)(lVar3 + 0x180000000) == 0x4550) &&
       (uVar1 = 0x20b,
       *(short *)((longlong)IMAGE_DOS_HEADER_180000000.e_res_4_ + lVar3 + -4) == 0x20b)) {
      lVar4 = (ulonglong)*(ushort *)((longlong)IMAGE_DOS_HEADER_180000000.e_res_4_ + lVar3 + -8) +
              0x18 + lVar3 + 0x180000000;
      uVar1 = (ulonglong)*(ushort *)(IMAGE_DOS_HEADER_180000000.e_magic + lVar3 + 6);
      lVar3 = lVar4 + uVar1 * 0x28;
      for (; lVar4 != lVar3; lVar4 = lVar4 + 0x28) {
        if (((ulonglong)*(uint *)(lVar4 + 0xc) <= param_1 - 0x180000000U) &&
           (uVar1 = (ulonglong)(*(int *)(lVar4 + 8) + *(uint *)(lVar4 + 0xc)),
           param_1 - 0x180000000U < uVar1)) goto LAB_1802d8712;
      }
      lVar4 = 0;
LAB_1802d8712:
      if (lVar4 == 0) {
        return uVar1 & 0xffffffffffffff00;
      }
      uVar2 = (uint7)(uVar1 >> 8);
      if (*(int *)(lVar4 + 0x24) < 0) {
        return (ulonglong)uVar2 << 8;
      }
      return CONCAT71(uVar2,1);
    }
  }
  return uVar1 & 0xffffffffffffff00;
}


)B1802d869c",
    "b548af39281f15fb993d835e58b07f13e74f6293d02fab68b9522d9ff6ebd840",
    R"F1802d869cC()F1802d869cC",
    R"F1802d869cD(LAB_1802d8712)F1802d869cD",
    R"F1802d869cT()F1802d869cT",
    R"F1802d869cF(16: if (IMAGE_DOS_HEADER_180000000.e_magic == (char  [2])0x5a4d) {
18: if ((*(int *)(lVar3 + 0x180000000) == 0x4550) &&
25: for (; lVar4 != lVar3; lVar4 = lVar4 + 0x28) {
26: if (((ulonglong)*(uint *)(lVar4 + 0xc) <= param_1 - 0x180000000U) &&
31: LAB_1802d8712:
32: if (lVar4 == 0) {
33: return uVar1 & 0xffffffffffffff00;
36: if (*(int *)(lVar4 + 0x24) < 0) {
37: return (ulonglong)uVar2 << 8;
39: return CONCAT71(uVar2,1);
42: return uVar1 & 0xffffffffffffff00;)F1802d869cF",
    R"F1802d869cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_1802d8712.)F1802d869cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d869c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d869c", "FUN_1802d869c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::uint64_t uVar1{};
    [[maybe_unused]] std::int64_t lVar3{};
    [[maybe_unused]] std::int64_t lVar4{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_1802d8712.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if (IMAGE_DOS_HEADER_180000000.e_magic == (char  [2])0x5a4d) [reason: unknown aggregate layout]
    // TODO: call arguments not type-recovered for CONCAT71: uVar2,1 [reason: ambiguous operand type]
    // body sha256: b548af39281f15fb993d835e58b07f13e74f6293d02fab68b9522d9ff6ebd840
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("ulonglong uVar1;");
            trace.statement("uint7 uVar2;");
            trace.statement("longlong lVar3;");
            trace.statement("longlong lVar4;");
            trace.statement("uVar1 = 0x5a4d;");
            if (trace.condition("if (IMAGE_DOS_HEADER_180000000.e_magic == (char  [2])0x5a4d)")) {
                trace.statement("lVar3 = (longlong)(int)IMAGE_DOS_HEADER_180000000.e_lfanew;");
                if (trace.condition("if ((*(int *)(lVar3 + 0x180000000) == 0x4550) && (uVar1 = 0x20b, *(short *)((longlong)IMAGE_DOS_HEADER_180000000.e_res_4_ + lVar3 + -4) == 0x20b))")) {
                    trace.statement("lVar4 = (ulonglong)*(ushort *)((longlong)IMAGE_DOS_HEADER_180000000.e_res_4_ + lVar3 + -8) +");
                    trace.statement("0x18 + lVar3 + 0x180000000;");
                    trace.statement("uVar1 = (ulonglong)*(ushort *)(IMAGE_DOS_HEADER_180000000.e_magic + lVar3 + 6);");
                    trace.statement("lVar3 = lVar4 + uVar1 * 0x28;");
                    for (auto loop = trace.checked_loop("for (; lVar4 != lVar3; lVar4 = lVar4 + 0x28)", [&]() -> bool { return static_cast<bool>(lVar4 = lVar4 + 0x28); }); loop.next(); ) {
                        if (trace.condition("if (((ulonglong)*(uint *)(lVar4 + 0xc) <= param_1 - 0x180000000U) && (uVar1 = (ulonglong)(*(int *)(lVar4 + 8) + *(uint *)(lVar4 + 0xc)), param_1 - 0x180000000U < uVar1)) goto LAB_1802d8712; } lVar4 = 0; LAB_1802d8712: if (lVar4 == 0)")) {
                            trace.statement("return uVar1 & 0xffffffffffffff00;");
                        }
                        trace.statement("uVar2 = (uint7)(uVar1 >> 8);");
                        if (trace.checked_condition("if (*(int *)(lVar4 + 0x24) < 0)", [&]() -> bool { return static_cast<bool>(load_at<std::int32_t>(lVar4 + 0x24, 0) < 0); })) {
                            trace.statement("return (ulonglong)uVar2 << 8;");
                        }
                        trace.statement("return CONCAT71(uVar2,1);");
                    }
                }
                trace.statement("return uVar1 & 0xffffffffffffff00;");
            }
        }
    return kFunction_0x1802d869c;
}

// 0x1802d8734 __scrt_release_startup_lock
// source: re/dump/decompile/0x1802d8734___scrt_release_startup_lock.c
// size: 36 bytes; thunk: false
// body sha256: bb0a768e6ffbfc730af6f2334f9bc733603cd1df6f9a4cf3c32b8f9149c2fdfa
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d8734{
    "0x1802d8734",
    "__scrt_release_startup_lock",
    R"F1802d8734S(undefined __scrt_release_startup_lock())F1802d8734S",
    R"B1802d8734(// 0x1802d8734  __scrt_release_startup_lock
// size=36 thunk=false
// signature: undefined __scrt_release_startup_lock()
// status: ok


/* Library Function - Single Match
    __scrt_release_startup_lock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __scrt_release_startup_lock(char param_1)

{
  int iVar1;
  
  iVar1 = __scrt_is_ucrt_dll_in_use();
  if ((iVar1 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_1803f8f50 = 0;
    UNLOCK();
  }
  return;
}


)B1802d8734",
    "bb0a768e6ffbfc730af6f2334f9bc733603cd1df6f9a4cf3c32b8f9149c2fdfa",
    R"F1802d8734C()F1802d8734C",
    R"F1802d8734D(DAT_1803f8f50)F1802d8734D",
    R"F1802d8734T()F1802d8734T",
    R"F1802d8734F(18: if ((iVar1 != 0) && (param_1 == '\0')) {
23: return;)F1802d8734F",
    R"F1802d8734U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803f8f50.)F1802d8734U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d8734() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d8734", "__scrt_release_startup_lock");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] char param_1{};
    [[maybe_unused]] std::int32_t iVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803f8f50.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("__scrt_is_ucrt_dll_in_use");
    trace.call_arguments("LOCK");
    trace.call_arguments("UNLOCK");
    trace.data_ref("DAT_1803f8f50", static_cast<const void*>(&image::DAT_1803f8f50));
    // body sha256: bb0a768e6ffbfc730af6f2334f9bc733603cd1df6f9a4cf3c32b8f9149c2fdfa
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void __scrt_release_startup_lock(char param_1)");
        {
            trace.statement("int iVar1;");
            trace.statement("iVar1 = __scrt_is_ucrt_dll_in_use();");
            if (trace.checked_condition("if ((iVar1 != 0) && (param_1 == '\\0'))", [&]() -> bool { return static_cast<bool>((iVar1 != 0) && (param_1 == '\0')); })) {
                trace.statement("LOCK();");
                trace.statement("DAT_1803f8f50 = 0;");
                trace.statement("UNLOCK();");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802d8734;
}

// 0x1802d8758 __scrt_uninitialize_crt
// source: re/dump/decompile/0x1802d8758___scrt_uninitialize_crt.c
// size: 41 bytes; thunk: false
// body sha256: 7085b306720d10e4ea3793bcb1761a73df67b7af600323dd8bc7d3a69e46f275
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d8758{
    "0x1802d8758",
    "__scrt_uninitialize_crt",
    R"F1802d8758S(undefined __scrt_uninitialize_crt())F1802d8758S",
    R"B1802d8758(// 0x1802d8758  __scrt_uninitialize_crt
// size=41 thunk=false
// signature: undefined __scrt_uninitialize_crt()
// status: ok


/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2019 Release */

undefined1 __scrt_uninitialize_crt(undefined1 param_1,char param_2)

{
  if ((DAT_1803f8f58 == '\0') || (param_2 == '\0')) {
    vfunc_shared_180076390();
    vfunc_shared_180076390(param_1);
  }
  return 1;
}


)B1802d8758",
    "7085b306720d10e4ea3793bcb1761a73df67b7af600323dd8bc7d3a69e46f275",
    R"F1802d8758C()F1802d8758C",
    R"F1802d8758D(DAT_1803f8f58)F1802d8758D",
    R"F1802d8758T()F1802d8758T",
    R"F1802d8758F(15: if ((DAT_1803f8f58 == '\0') || (param_2 == '\0')) {
19: return 1;)F1802d8758F",
    R"F1802d8758U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803f8f58.)F1802d8758U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d8758() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d8758", "__scrt_uninitialize_crt");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint8_t param_1{};
    [[maybe_unused]] char param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803f8f58.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("vfunc_shared_180076390");
    trace.call_arguments("vfunc_shared_180076390", param_1);
    trace.data_ref("DAT_1803f8f58", static_cast<const void*>(&image::DAT_1803f8f58));
    // body sha256: 7085b306720d10e4ea3793bcb1761a73df67b7af600323dd8bc7d3a69e46f275
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined1 __scrt_uninitialize_crt(undefined1 param_1,char param_2)");
        {
            if (trace.checked_condition("if ((DAT_1803f8f58 == '\\0') || (param_2 == '\\0'))", [&]() -> bool { return static_cast<bool>((image::DAT_1803f8f58 == '\0') || (param_2 == '\0')); })) {
                trace.statement("vfunc_shared_180076390();");
                trace.statement("vfunc_shared_180076390(param_1);");
            }
            trace.statement("return 1;");
        }
    return kFunction_0x1802d8758;
}

// 0x1802d8784 _onexit
// source: re/dump/decompile/0x1802d8784__onexit.c
// size: 58 bytes; thunk: false
// body sha256: ad325da76018eae5f1bdb9500685ba125e9fab46a3cc5e243dbd103d11392dd2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d8784{
    "0x1802d8784",
    "_onexit",
    R"F1802d8784S(_onexit_t __cdecl _onexit(_onexit_t _Func))F1802d8784S",
    R"B1802d8784(// 0x1802d8784  _onexit
// size=58 thunk=false
// signature: _onexit_t __cdecl _onexit(_onexit_t _Func)
// status: ok


/* Library Function - Single Match
    _onexit
   
   Library: Visual Studio 2019 Release */

_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  int iVar1;
  _onexit_t p_Var2;
  
  if (DAT_1803f8f60 == -1) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_1803f8f60);
  }
  p_Var2 = (_onexit_t)0x0;
  if (iVar1 == 0) {
    p_Var2 = _Func;
  }
  return p_Var2;
}


)B1802d8784",
    "ad325da76018eae5f1bdb9500685ba125e9fab46a3cc5e243dbd103d11392dd2",
    R"F1802d8784C()F1802d8784C",
    R"F1802d8784D(DAT_1803f8f60)F1802d8784D",
    R"F1802d8784T()F1802d8784T",
    R"F1802d8784F(18: if (DAT_1803f8f60 == -1) {
21: else {
25: if (iVar1 == 0) {
28: return p_Var2;)F1802d8784F",
    R"F1802d8784U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803f8f60.)F1802d8784U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d8784() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d8784", "_onexit");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int32_t iVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803f8f60.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_crt_atexit");
    trace.call_arguments("_register_onexit_function", &image::DAT_1803f8f60);
    trace.data_ref("DAT_1803f8f60", static_cast<const void*>(&image::DAT_1803f8f60));
    // body sha256: ad325da76018eae5f1bdb9500685ba125e9fab46a3cc5e243dbd103d11392dd2
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("_onexit_t __cdecl _onexit(_onexit_t _Func)");
        {
            trace.statement("int iVar1;");
            trace.statement("_onexit_t p_Var2;");
            if (trace.checked_condition("if (DAT_1803f8f60 == -1)", [&]() -> bool { return static_cast<bool>(image::DAT_1803f8f60 == -1); })) {
                trace.statement("iVar1 = _crt_atexit();");
            } else {
            trace.statement("iVar1 = _register_onexit_function(&DAT_1803f8f60);");
            }
            trace.statement("p_Var2 = (_onexit_t)0x0;");
            if (trace.checked_condition("if (iVar1 == 0)", [&]() -> bool { return static_cast<bool>(iVar1 == 0); })) {
                trace.statement("p_Var2 = _Func;");
            }
            trace.statement("return p_Var2;");
        }
    return kFunction_0x1802d8784;
}

// 0x1802d87c0 atexit
// source: re/dump/decompile/0x1802d87c0_atexit.c
// size: 23 bytes; thunk: false
// body sha256: 3e8d68167047c00be9e5c1520db5caeecd1ad170d371b3ebf2b331b3b34ec896
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d87c0{
    "0x1802d87c0",
    "atexit",
    R"F1802d87c0S(int __cdecl atexit(_func_5014 * param_1))F1802d87c0S",
    R"B1802d87c0(// 0x1802d87c0  atexit
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


)B1802d87c0",
    "3e8d68167047c00be9e5c1520db5caeecd1ad170d371b3ebf2b331b3b34ec896",
    R"F1802d87c0C()F1802d87c0C",
    R"F1802d87c0D()F1802d87c0D",
    R"F1802d87c0T()F1802d87c0T",
    R"F1802d87c0F(18: return (p_Var1 != (_onexit_t)0x0) - 1;)F1802d87c0F",
    R"F1802d87c0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d87c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d87c0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d87c0", "atexit");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: call arguments not type-recovered for _onexit: (_onexit_t)param_1 [reason: ambiguous operand type]
    // body sha256: 3e8d68167047c00be9e5c1520db5caeecd1ad170d371b3ebf2b331b3b34ec896
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("int __cdecl atexit(_func_5014 *param_1)");
        {
            trace.statement("_onexit_t p_Var1;");
            trace.statement("p_Var1 = _onexit((_onexit_t)param_1);");
            trace.statement("return (p_Var1 != (_onexit_t)0x0) - 1;");
        }
    return kFunction_0x1802d87c0;
}

// 0x1802d87d8 API-MS-WIN-CRT-HEAP-L1-1-0.DLL::free
// source: re/dump/decompile/0x1802d87d8_API_MS_WIN_CRT_HEAP_L1_1_0_DLL__free.c
// size: 5 bytes; thunk: true
// body sha256: b698292d7fd7a79d5eef1d8bc6348a6ab4ddb53d273a9e02390fbf173a66ed6d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d87d8{
    "0x1802d87d8",
    "API-MS-WIN-CRT-HEAP-L1-1-0.DLL::free",
    R"F1802d87d8S(void __cdecl free(void * _Memory))F1802d87d8S",
    R"B1802d87d8(// 0x1802d87d8  API-MS-WIN-CRT-HEAP-L1-1-0.DLL::free
// size=5 thunk=true
// signature: void __cdecl free(void * _Memory)
// status: ok


void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x0001802d929e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}


)B1802d87d8",
    "b698292d7fd7a79d5eef1d8bc6348a6ab4ddb53d273a9e02390fbf173a66ed6d",
    R"F1802d87d8C()F1802d87d8C",
    R"F1802d87d8D()F1802d87d8D",
    R"F1802d87d8T()F1802d87d8T",
    R"F1802d87d8F(13: return;)F1802d87d8F",
    R"F1802d87d8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d87d8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d87d8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d87d8", "API-MS-WIN-CRT-HEAP-L1-1-0.DLL::free");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] void * _Memory{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", _Memory);
    // body sha256: b698292d7fd7a79d5eef1d8bc6348a6ab4ddb53d273a9e02390fbf173a66ed6d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void __cdecl free(void *_Memory)");
        {
            trace.statement("free(_Memory);");
            trace.statement("return;");
        }
    return kFunction_0x1802d87d8;
}

// 0x1802d87e0 API-MS-WIN-CRT-HEAP-L1-1-0.DLL::free
// source: re/dump/decompile/0x1802d87e0_API_MS_WIN_CRT_HEAP_L1_1_0_DLL__free.c
// size: 5 bytes; thunk: true
// body sha256: aa19a46793383e3bb89768dba0a2a6d45d3653829f21dd91fb327d8efb665325
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d87e0{
    "0x1802d87e0",
    "API-MS-WIN-CRT-HEAP-L1-1-0.DLL::free",
    R"F1802d87e0S(void __cdecl free(void * _Memory))F1802d87e0S",
    R"B1802d87e0(// 0x1802d87e0  API-MS-WIN-CRT-HEAP-L1-1-0.DLL::free
// size=5 thunk=true
// signature: void __cdecl free(void * _Memory)
// status: ok


void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x0001802d929e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}


)B1802d87e0",
    "aa19a46793383e3bb89768dba0a2a6d45d3653829f21dd91fb327d8efb665325",
    R"F1802d87e0C()F1802d87e0C",
    R"F1802d87e0D()F1802d87e0D",
    R"F1802d87e0T()F1802d87e0T",
    R"F1802d87e0F(13: return;)F1802d87e0F",
    R"F1802d87e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d87e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d87e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d87e0", "API-MS-WIN-CRT-HEAP-L1-1-0.DLL::free");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] void * _Memory{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", _Memory);
    // body sha256: aa19a46793383e3bb89768dba0a2a6d45d3653829f21dd91fb327d8efb665325
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void __cdecl free(void *_Memory)");
        {
            trace.statement("free(_Memory);");
            trace.statement("return;");
        }
    return kFunction_0x1802d87e0;
}

// 0x1802d87e8 type_info_vfunc00
// source: re/dump/decompile/0x1802d87e8_type_info_vfunc00.c
// size: 43 bytes; thunk: false
// body sha256: 9b17bc582df5b614ad75c391bab40b162f2e8653dea03d8ddddca113e334a8f0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d87e8{
    "0x1802d87e8",
    "type_info_vfunc00",
    R"F1802d87e8S(undefined type_info_vfunc00())F1802d87e8S",
    R"B1802d87e8(// 0x1802d87e8  type_info_vfunc00
// size=43 thunk=false
// signature: undefined type_info_vfunc00()
// status: ok


undefined8 * type_info_vfunc00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = vftable_type_info;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


)B1802d87e8",
    "9b17bc582df5b614ad75c391bab40b162f2e8653dea03d8ddddca113e334a8f0",
    R"F1802d87e8C()F1802d87e8C",
    R"F1802d87e8D()F1802d87e8D",
    R"F1802d87e8T()F1802d87e8T",
    R"F1802d87e8F(11: if ((param_2 & 1) != 0) {
14: return param_1;)F1802d87e8F",
    R"F1802d87e8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d87e8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d87e8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d87e8", "type_info_vfunc00");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t * param_1{};
    [[maybe_unused]] std::uint64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", param_1);
    // body sha256: 9b17bc582df5b614ad75c391bab40b162f2e8653dea03d8ddddca113e334a8f0
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 * type_info_vfunc00(undefined8 *param_1,ulonglong param_2)");
        {
            trace.statement("*param_1 = vftable_type_info;");
            if (trace.checked_condition("if ((param_2 & 1) != 0)", [&]() -> bool { return static_cast<bool>((param_2 & 1) != 0); })) {
                trace.statement("free(param_1);");
            }
            trace.statement("return param_1;");
        }
    return kFunction_0x1802d87e8;
}

// 0x1802d8814 `eh_vector_constructor_iterator'
// source: re/dump/decompile/0x1802d8814__eh_vector_constructor_iterator_.c
// size: 112 bytes; thunk: false
// body sha256: 19457878f3c76b297f570716d2ec2a967c35422e4dfc5af946c855e9d0d26aae
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d8814{
    "0x1802d8814",
    "`eh_vector_constructor_iterator'",
    R"F1802d8814S(void __cdecl `eh_vector_constructor_iterator'(void * param_1, __uint64 param_2, __uint64 param_3, _func_void_void_ptr * param_4, _func_void_void_ptr * param_5))F1802d8814S",
    R"B1802d8814(// 0x1802d8814  `eh_vector_constructor_iterator'
// size=112 thunk=false
// signature: void __cdecl `eh_vector_constructor_iterator'(void * param_1, __uint64 param_2, __uint64 param_3, _func_void_void_ptr * param_4, _func_void_void_ptr * param_5)
// status: ok


/* Library Function - Single Match
    void __cdecl `eh vector constructor iterator'(void * __ptr64,unsigned __int64,unsigned
   __int64,void (__cdecl*)(void * __ptr64),void (__cdecl*)(void * __ptr64))
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
_eh_vector_constructor_iterator_
          (void *param_1,__uint64 param_2,__uint64 param_3,_func_void_void_ptr *param_4,
          _func_void_void_ptr *param_5)

{
  __uint64 _Var1;
  
  for (_Var1 = 0; _Var1 != param_3; _Var1 = _Var1 + 1) {
    (*(code *)PTR__guard_dispatch_icall_18030cca8)(param_1);
    param_1 = (void *)((longlong)param_1 + param_2);
  }
  return;
}


)B1802d8814",
    "19457878f3c76b297f570716d2ec2a967c35422e4dfc5af946c855e9d0d26aae",
    R"F1802d8814C()F1802d8814C",
    R"F1802d8814D(PTR__guard_dispatch_icall_18030cca8)F1802d8814D",
    R"F1802d8814T()F1802d8814T",
    R"F1802d8814F(21: for (_Var1 = 0; _Var1 != param_3; _Var1 = _Var1 + 1) {
25: return;)F1802d8814F",
    R"F1802d8814U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference PTR__guard_dispatch_icall_18030cca8.
TODO: resolve the indirect call in body 22: (*(code *)PTR__guard_dispatch_icall_18030cca8)(param_1);.)F1802d8814U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d8814() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d8814", "`eh_vector_constructor_iterator'");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] void * param_1{};
    [[maybe_unused]] std::uint64_t param_2{};
    [[maybe_unused]] std::uint64_t param_3{};
    [[maybe_unused]] std::uint64_t _Var1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for PTR__guard_dispatch_icall_18030cca8.
    // TODO: resolve the indirect call in body 22: (*(code *)PTR__guard_dispatch_icall_18030cca8)(param_1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("PTR__guard_dispatch_icall_18030cca8", static_cast<const void*>(&image::PTR__guard_dispatch_icall_18030cca8));
    // body sha256: 19457878f3c76b297f570716d2ec2a967c35422e4dfc5af946c855e9d0d26aae
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void __cdecl");
        trace.statement("_eh_vector_constructor_iterator_");
        trace.statement("(void *param_1,__uint64 param_2,__uint64 param_3,_func_void_void_ptr *param_4,");
        trace.statement("_func_void_void_ptr *param_5)");
        {
            trace.statement("__uint64 _Var1;");
            for (auto loop = trace.checked_loop("for (_Var1 = 0; _Var1 != param_3; _Var1 = _Var1 + 1)", [&]() -> bool { return static_cast<bool>(_Var1 != param_3); }); loop.next(); ) {
                trace.statement("(*(code *)PTR__guard_dispatch_icall_18030cca8)(param_1);");
                trace.statement("param_1 = (void *)((longlong)param_1 + param_2);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802d8814;
}

// 0x1802d8884 type_info_vfunc01
// source: re/dump/decompile/0x1802d8884_type_info_vfunc01.c
// size: 138 bytes; thunk: false
// body sha256: dbc7f8482a6f3eb15049fe11a99508a4d8d25df226ef5d8403bca2ab44e76ede
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d8884{
    "0x1802d8884",
    "type_info_vfunc01",
    R"F1802d8884S(undefined type_info_vfunc01())F1802d8884S",
    R"B1802d8884(// 0x1802d8884  type_info_vfunc01
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


)B1802d8884",
    "dbc7f8482a6f3eb15049fe11a99508a4d8d25df226ef5d8403bca2ab44e76ede",
    R"F1802d8884C()F1802d8884C",
    R"F1802d8884D(PTR__guard_dispatch_icall_18030cca8)F1802d8884D",
    R"F1802d8884T()F1802d8884T",
    R"F1802d8884F(16: if ((param_2 == 3) || (param_2 == 0)) {
19: if (*(uint **)(lVar1 + 0x20) != (uint *)0x0) {
20: while( true ) {
22: while (uVar3 = (int)uVar4 - 1, uVar4 = (ulonglong)uVar3, -1 < (int)uVar3) {
23: if (*(longlong *)(_Memory + uVar4 * 2 + 4) != 0) {
28: if (puVar2 == (uint *)0x0) break;
36: return;)F1802d8884F",
    R"F1802d8884U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference PTR__guard_dispatch_icall_18030cca8.
TODO: resolve the indirect call in body 24: (*(code *)PTR__guard_dispatch_icall_18030cca8)();.)F1802d8884U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d8884() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d8884", "type_info_vfunc01");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int32_t param_2{};
    [[maybe_unused]] std::int64_t lVar1{};
    [[maybe_unused]] std::uint32_t * puVar2{};
    [[maybe_unused]] std::uint32_t uVar3{};
    [[maybe_unused]] std::uint64_t uVar4{};
    [[maybe_unused]] std::uint32_t * _Memory{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for PTR__guard_dispatch_icall_18030cca8.
    // TODO: resolve the indirect call in body 24: (*(code *)PTR__guard_dispatch_icall_18030cca8)();.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: while( true ) [reason: ambiguous operand type]
    trace.call_arguments("free", _Memory);
    trace.data_ref("PTR__guard_dispatch_icall_18030cca8", static_cast<const void*>(&image::PTR__guard_dispatch_icall_18030cca8));
    // body sha256: dbc7f8482a6f3eb15049fe11a99508a4d8d25df226ef5d8403bca2ab44e76ede
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void type_info_vfunc01(undefined8 param_1,int param_2)");
        {
            trace.statement("longlong lVar1;");
            trace.statement("uint *puVar2;");
            trace.statement("uint uVar3;");
            trace.statement("ulonglong uVar4;");
            trace.statement("uint *_Memory;");
            if (trace.checked_condition("if ((param_2 == 3) || (param_2 == 0))", [&]() -> bool { return static_cast<bool>((param_2 == 3) || (param_2 == 0)); })) {
                trace.statement("lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);");
                trace.statement("_Memory = *(uint **)(lVar1 + 0x20);");
                if (trace.checked_condition("if (*(uint **)(lVar1 + 0x20) != (uint *)0x0)", [&]() -> bool { return static_cast<bool>(load_at<std::uint32_t *>(lVar1 + 0x20, 0) != (uint *)0x0); })) {
                    while (trace.loop_condition("while( true )")) {
                        trace.statement("uVar4 = (ulonglong)*_Memory;");
                        while (trace.checked_loop_condition("while (uVar3 = (int)uVar4 - 1, uVar4 = (ulonglong)uVar3, -1 < (int)uVar3)", [&]() -> bool { return static_cast<bool>(uVar3 = static_cast<std::int32_t>(uVar4) - 1, uVar4 = static_cast<std::uint64_t>(uVar3), -1 < static_cast<std::int32_t>(uVar3)); })) {
                            if (trace.checked_condition("if (*(longlong *)(_Memory + uVar4 * 2 + 4) != 0)", [&]() -> bool { return static_cast<bool>(load_at<std::int64_t>(_Memory + uVar4 * 2 + 4, 0) != 0); })) {
                                trace.statement("(*(code *)PTR__guard_dispatch_icall_18030cca8)();");
                            }
                        }
                        trace.statement("puVar2 = *(uint **)(_Memory + 2);");
                        if (trace.condition("if (puVar2 == (uint *)0x0) break; free(_Memory); *(uint **)(lVar1 + 0x20) = puVar2; _Memory = puVar2; } *(undefined8 *)(lVar1 + 0x20) = 0; } } return; }")) {
                        }
                    }
                }
            }
        }
    return kFunction_0x1802d8884;
}

// 0x1802d8910 FUN_1802d8910
// source: re/dump/decompile/0x1802d8910_FUN_1802d8910.c
// size: 166 bytes; thunk: false
// body sha256: 0433a6268abc0554bcd4a4cb3f6015e8d1ad384ab0ada967915c92f1242c5acb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d8910{
    "0x1802d8910",
    "FUN_1802d8910",
    R"F1802d8910S(undefined FUN_1802d8910())F1802d8910S",
    R"B1802d8910(// 0x1802d8910  FUN_1802d8910
// size=166 thunk=false
// signature: undefined FUN_1802d8910()
// status: ok


undefined8 FUN_1802d8910(undefined8 param_1)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  piVar2 = *(int **)(lVar1 + 0x20);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)(lVar1 + 0x30);
  }
  else {
    if (*piVar2 != 0x1e) {
      iVar3 = *piVar2;
      goto LAB_1802d898f;
    }
    piVar2 = malloc(0x100);
    free((void *)0x0);
    if (piVar2 == (int *)0x0) {
      return 0xffffffff;
    }
    *(undefined8 *)(piVar2 + 2) = *(undefined8 *)(lVar1 + 0x20);
  }
  *(int **)(lVar1 + 0x20) = piVar2;
  *piVar2 = 0;
LAB_1802d898f:
  *(undefined8 *)(piVar2 + (longlong)iVar3 * 2 + 4) = param_1;
  *piVar2 = *piVar2 + 1;
  return 0;
}


)B1802d8910",
    "0433a6268abc0554bcd4a4cb3f6015e8d1ad384ab0ada967915c92f1242c5acb",
    R"F1802d8910C()F1802d8910C",
    R"F1802d8910D(LAB_1802d898f)F1802d8910D",
    R"F1802d8910T()F1802d8910T",
    R"F1802d8910F(17: if (piVar2 == (int *)0x0) {
20: else {
21: if (*piVar2 != 0x1e) {
23: goto LAB_1802d898f;
27: if (piVar2 == (int *)0x0) {
28: return 0xffffffff;
34: LAB_1802d898f:
37: return 0;)F1802d8910F",
    R"F1802d8910U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_1802d898f.)F1802d8910U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d8910() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d8910", "FUN_1802d8910");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t lVar1{};
    [[maybe_unused]] std::int32_t * piVar2{};
    [[maybe_unused]] std::int32_t iVar3{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_1802d898f.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("malloc", 0x100);
    trace.call_arguments("free", (void *)0x0);
    // body sha256: 0433a6268abc0554bcd4a4cb3f6015e8d1ad384ab0ada967915c92f1242c5acb
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong lVar1;");
            trace.statement("int *piVar2;");
            trace.statement("int iVar3;");
            trace.statement("iVar3 = 0;");
            trace.statement("lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);");
            trace.statement("piVar2 = *(int **)(lVar1 + 0x20);");
            if (trace.checked_condition("if (piVar2 == (int *)0x0)", [&]() -> bool { return static_cast<bool>(piVar2 == (int *)0x0); })) {
                trace.statement("piVar2 = (int *)(lVar1 + 0x30);");
            } else {
            if (trace.checked_condition("if (*piVar2 != 0x1e)", [&]() -> bool { return static_cast<bool>(*piVar2 != 0x1e); })) {
                trace.statement("iVar3 = *piVar2;");
                trace.statement("goto LAB_1802d898f;");
            }
            trace.statement("piVar2 = malloc(0x100);");
            trace.statement("free((void *)0x0);");
            if (trace.checked_condition("if (piVar2 == (int *)0x0)", [&]() -> bool { return static_cast<bool>(piVar2 == (int *)0x0); })) {
                trace.statement("return 0xffffffff;");
            }
            trace.statement("*(undefined8 *)(piVar2 + 2) = *(undefined8 *)(lVar1 + 0x20);");
            }
            trace.statement("*(int **)(lVar1 + 0x20) = piVar2;");
            trace.statement("*piVar2 = 0;");
            LAB_1802d898f: ;
            trace.statement("*(undefined8 *)(piVar2 + (longlong)iVar3 * 2 + 4) = param_1;");
            trace.statement("*piVar2 = *piVar2 + 1;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802d8910;
}

// 0x1802d89b8 FUN_1802d89b8
// source: re/dump/decompile/0x1802d89b8_FUN_1802d89b8.c
// size: 80 bytes; thunk: false
// body sha256: 6d9da8dba39af12a4f7f16d5c7556c6e950a0647e1fa48da05f75f8e33143023
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d89b8{
    "0x1802d89b8",
    "FUN_1802d89b8",
    R"F1802d89b8S(undefined FUN_1802d89b8())F1802d89b8S",
    R"B1802d89b8(// 0x1802d89b8  FUN_1802d89b8
// size=80 thunk=false
// signature: undefined FUN_1802d89b8()
// status: ok


ulonglong FUN_1802d89b8(undefined1 param_1,int param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = FUN_1802d8b20(param_3 != 0);
    return uVar2;
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      bVar1 = FUN_1802d84f0();
    }
    else {
      if (param_2 != 3) {
        return 1;
      }
      bVar1 = FUN_1802d8518();
    }
    return (ulonglong)bVar1;
  }
  uVar2 = FUN_1802d8a08(param_1,param_3);
  return uVar2;
}


)B1802d89b8",
    "6d9da8dba39af12a4f7f16d5c7556c6e950a0647e1fa48da05f75f8e33143023",
    R"F1802d89b8C(FUN_1802d84f0
FUN_1802d8518
FUN_1802d8a08
FUN_1802d8b20)F1802d89b8C",
    R"F1802d89b8D()F1802d89b8D",
    R"F1802d89b8T()F1802d89b8T",
    R"F1802d89b8F(13: if (param_2 == 0) {
15: return uVar2;
17: if (param_2 != 1) {
18: if (param_2 == 2) {
21: else {
22: if (param_2 != 3) {
23: return 1;
27: return (ulonglong)bVar1;
30: return uVar2;)F1802d89b8F",
    R"F1802d89b8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d89b8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d89b8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d89b8", "FUN_1802d89b8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint8_t param_1{};
    [[maybe_unused]] std::int32_t param_2{};
    [[maybe_unused]] std::int64_t param_3{};
    [[maybe_unused]] std::uint8_t bVar1{};
    [[maybe_unused]] std::uint64_t uVar2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1802d8b20", param_3 != 0);
    trace.call_arguments("FUN_1802d84f0");
    trace.call_arguments("FUN_1802d8518");
    trace.call_arguments("FUN_1802d8a08", param_1, param_3);
    trace.call_target("FUN_1802d84f0", reinterpret_cast<const void*>(&image::FUN_1802d84f0));
    trace.call_target("FUN_1802d8518", reinterpret_cast<const void*>(&image::FUN_1802d8518));
    trace.call_target("FUN_1802d8a08", reinterpret_cast<const void*>(&image::FUN_1802d8a08));
    trace.call_target("FUN_1802d8b20", reinterpret_cast<const void*>(&image::FUN_1802d8b20));
    // body sha256: 6d9da8dba39af12a4f7f16d5c7556c6e950a0647e1fa48da05f75f8e33143023
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("byte bVar1;");
            trace.statement("ulonglong uVar2;");
            if (trace.checked_condition("if (param_2 == 0)", [&]() -> bool { return static_cast<bool>(param_2 == 0); })) {
                trace.statement("uVar2 = FUN_1802d8b20(param_3 != 0);");
                trace.statement("return uVar2;");
            }
            if (trace.checked_condition("if (param_2 != 1)", [&]() -> bool { return static_cast<bool>(param_2 != 1); })) {
                if (trace.checked_condition("if (param_2 == 2)", [&]() -> bool { return static_cast<bool>(param_2 == 2); })) {
                    trace.statement("bVar1 = FUN_1802d84f0();");
                } else {
                if (trace.checked_condition("if (param_2 != 3)", [&]() -> bool { return static_cast<bool>(param_2 != 3); })) {
                    trace.statement("return 1;");
                }
                trace.statement("bVar1 = FUN_1802d8518();");
                }
                trace.statement("return (ulonglong)bVar1;");
            }
            trace.statement("uVar2 = FUN_1802d8a08(param_1,param_3);");
            trace.statement("return uVar2;");
        }
    return kFunction_0x1802d89b8;
}

// 0x1802d8a08 FUN_1802d8a08
// source: re/dump/decompile/0x1802d8a08_FUN_1802d8a08.c
// size: 276 bytes; thunk: false
// body sha256: 9238954f44a91d5785b21b3b4f73010492adcd20dd388b35247f179f215b758e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d8a08{
    "0x1802d8a08",
    "FUN_1802d8a08",
    R"F1802d8a08S(undefined FUN_1802d8a08())F1802d8a08S",
    R"B1802d8a08(// 0x1802d8a08  FUN_1802d8a08
// size=276 thunk=false
// signature: undefined FUN_1802d8a08()
// status: ok


undefined8 FUN_1802d8a08(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  
  cVar2 = FUN_1802d85d4(0);
  if (cVar2 != '\0') {
    uVar3 = __scrt_acquire_startup_lock();
    bVar1 = true;
    if (DAT_1803f8f48 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1802d90dc(7);
    }
    DAT_1803f8f48 = 1;
    cVar2 = FUN_1802d84d8();
    if (cVar2 != '\0') {
      FUN_1802d91d4();
      FUN_1802d9194();
      FUN_1802d91b0();
      iVar4 = _initterm_e(&DAT_18030d2b8,&DAT_18030d2c0);
      if ((iVar4 == 0) && (cVar2 = __scrt_dllmain_after_initialize_c(), cVar2 != '\0')) {
        _initterm(&DAT_18030ccd0,&DAT_18030d2a0);
        DAT_1803f8f48 = 2;
        bVar1 = false;
      }
    }
    __scrt_release_startup_lock(uVar3);
    if (!bVar1) {
      plVar5 = (longlong *)FUN_1802d91cc();
      if ((*plVar5 != 0) && (cVar2 = FUN_1802d869c(plVar5), cVar2 != '\0')) {
        (*(code *)PTR__guard_dispatch_icall_18030cca8)(param_1,2,param_2);
      }
      DAT_1803f8f90 = DAT_1803f8f90 + 1;
      return 1;
    }
  }
  return 0;
}


)B1802d8a08",
    "9238954f44a91d5785b21b3b4f73010492adcd20dd388b35247f179f215b758e",
    R"F1802d8a08C(FUN_1802d84d8
FUN_1802d85d4
FUN_1802d869c
FUN_1802d90dc
FUN_1802d9194
FUN_1802d91b0
FUN_1802d91cc
FUN_1802d91d4)F1802d8a08C",
    R"F1802d8a08D(PTR__guard_dispatch_icall_18030cca8
DAT_18030ccd0
DAT_18030d2a0
DAT_18030d2b8
DAT_18030d2c0
DAT_1803f8f48
DAT_1803f8f90)F1802d8a08D",
    R"F1802d8a08T()F1802d8a08T",
    R"F1802d8a08F(17: if (cVar2 != '\0') {
20: if (DAT_1803f8f48 != 0) {
26: if (cVar2 != '\0') {
31: if ((iVar4 == 0) && (cVar2 = __scrt_dllmain_after_initialize_c(), cVar2 != '\0')) {
38: if (!bVar1) {
40: if ((*plVar5 != 0) && (cVar2 = FUN_1802d869c(plVar5), cVar2 != '\0')) {
44: return 1;
47: return 0;)F1802d8a08F",
    R"F1802d8a08U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference PTR__guard_dispatch_icall_18030cca8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18030ccd0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18030d2a0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18030d2b8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18030d2c0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803f8f48.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803f8f90.
TODO: resolve the indirect call in body 41: (*(code *)PTR__guard_dispatch_icall_18030cca8)(param_1,2,param_2);.)F1802d8a08U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d8a08() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d8a08", "FUN_1802d8a08");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::uint64_t param_2{};
    [[maybe_unused]] bool bVar1{};
    [[maybe_unused]] char cVar2{};
    [[maybe_unused]] std::uint8_t uVar3{};
    [[maybe_unused]] std::int32_t iVar4{};
    [[maybe_unused]] std::int64_t * plVar5{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for PTR__guard_dispatch_icall_18030cca8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18030ccd0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18030d2a0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18030d2b8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18030d2c0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803f8f48.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803f8f90.
    // TODO: resolve the indirect call in body 41: (*(code *)PTR__guard_dispatch_icall_18030cca8)(param_1,2,param_2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((iVar4 == 0) && (cVar2 = __scrt_dllmain_after_initialize_c(), cVar2 != '\0')) [reason: assignment or side effect]
    // TODO: condition expression type not recovered: if ((*plVar5 != 0) && (cVar2 = FUN_1802d869c(plVar5), cVar2 != '\0')) [reason: assignment or side effect]
    trace.call_arguments("FUN_1802d85d4", 0);
    trace.call_arguments("__scrt_acquire_startup_lock");
    trace.call_arguments("FUN_1802d90dc", 7);
    trace.call_arguments("FUN_1802d84d8");
    trace.call_arguments("FUN_1802d91d4");
    trace.call_arguments("FUN_1802d9194");
    trace.call_arguments("FUN_1802d91b0");
    trace.call_arguments("_initterm_e", &image::DAT_18030d2b8, &image::DAT_18030d2c0);
    trace.call_arguments("__scrt_dllmain_after_initialize_c");
    trace.call_arguments("_initterm", &image::DAT_18030ccd0, &image::DAT_18030d2a0);
    trace.call_arguments("__scrt_release_startup_lock", uVar3);
    trace.call_arguments("FUN_1802d91cc");
    trace.call_arguments("FUN_1802d869c", plVar5);
    trace.call_target("FUN_1802d84d8", reinterpret_cast<const void*>(&image::FUN_1802d84d8));
    trace.call_target("FUN_1802d85d4", reinterpret_cast<const void*>(&image::FUN_1802d85d4));
    trace.call_target("FUN_1802d869c", reinterpret_cast<const void*>(&image::FUN_1802d869c));
    trace.call_target("FUN_1802d90dc", reinterpret_cast<const void*>(&image::FUN_1802d90dc));
    trace.call_target("FUN_1802d9194", reinterpret_cast<const void*>(&image::FUN_1802d9194));
    trace.call_target("FUN_1802d91b0", reinterpret_cast<const void*>(&image::FUN_1802d91b0));
    trace.call_target("FUN_1802d91cc", reinterpret_cast<const void*>(&image::FUN_1802d91cc));
    trace.call_target("FUN_1802d91d4", reinterpret_cast<const void*>(&image::FUN_1802d91d4));
    trace.data_ref("PTR__guard_dispatch_icall_18030cca8", static_cast<const void*>(&image::PTR__guard_dispatch_icall_18030cca8));
    trace.data_ref("DAT_18030ccd0", static_cast<const void*>(&image::DAT_18030ccd0));
    trace.data_ref("DAT_18030d2a0", static_cast<const void*>(&image::DAT_18030d2a0));
    trace.data_ref("DAT_18030d2b8", static_cast<const void*>(&image::DAT_18030d2b8));
    trace.data_ref("DAT_18030d2c0", static_cast<const void*>(&image::DAT_18030d2c0));
    trace.data_ref("DAT_1803f8f48", static_cast<const void*>(&image::DAT_1803f8f48));
    trace.data_ref("DAT_1803f8f90", static_cast<const void*>(&image::DAT_1803f8f90));
    // body sha256: 9238954f44a91d5785b21b3b4f73010492adcd20dd388b35247f179f215b758e
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("bool bVar1;");
            trace.statement("char cVar2;");
            trace.statement("undefined1 uVar3;");
            trace.statement("int iVar4;");
            trace.statement("longlong *plVar5;");
            trace.statement("cVar2 = FUN_1802d85d4(0);");
            if (trace.checked_condition("if (cVar2 != '\\0')", [&]() -> bool { return static_cast<bool>(cVar2 != '\0'); })) {
                trace.statement("uVar3 = __scrt_acquire_startup_lock();");
                trace.statement("bVar1 = true;");
                if (trace.checked_condition("if (DAT_1803f8f48 != 0)", [&]() -> bool { return static_cast<bool>(image::DAT_1803f8f48 != 0); })) {
                    trace.statement("FUN_1802d90dc(7);");
                }
                trace.statement("DAT_1803f8f48 = 1;");
                trace.statement("cVar2 = FUN_1802d84d8();");
                if (trace.checked_condition("if (cVar2 != '\\0')", [&]() -> bool { return static_cast<bool>(cVar2 != '\0'); })) {
                    trace.statement("FUN_1802d91d4();");
                    trace.statement("FUN_1802d9194();");
                    trace.statement("FUN_1802d91b0();");
                    trace.statement("iVar4 = _initterm_e(&DAT_18030d2b8,&DAT_18030d2c0);");
                    if (trace.condition("if ((iVar4 == 0) && (cVar2 = __scrt_dllmain_after_initialize_c(), cVar2 != '\\0'))")) {
                        trace.statement("_initterm(&DAT_18030ccd0,&DAT_18030d2a0);");
                        trace.statement("DAT_1803f8f48 = 2;");
                        trace.statement("bVar1 = false;");
                    }
                }
                trace.statement("__scrt_release_startup_lock(uVar3);");
                if (trace.checked_condition("if (!bVar1)", [&]() -> bool { return static_cast<bool>(!bVar1); })) {
                    trace.statement("plVar5 = (longlong *)FUN_1802d91cc();");
                    if (trace.condition("if ((*plVar5 != 0) && (cVar2 = FUN_1802d869c(plVar5), cVar2 != '\\0'))")) {
                        trace.statement("(*(code *)PTR__guard_dispatch_icall_18030cca8)(param_1,2,param_2);");
                    }
                    trace.statement("DAT_1803f8f90 = DAT_1803f8f90 + 1;");
                    trace.statement("return 1;");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1802d8a08;
}

// 0x1802d8b20 FUN_1802d8b20
// source: re/dump/decompile/0x1802d8b20_FUN_1802d8b20.c
// size: 128 bytes; thunk: false
// body sha256: fdae90be3d74f1d3717158a1aed2c08ac256a2825d570c5dea41b37fae2c772a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d8b20{
    "0x1802d8b20",
    "FUN_1802d8b20",
    R"F1802d8b20S(undefined FUN_1802d8b20())F1802d8b20S",
    R"B1802d8b20(// 0x1802d8b20  FUN_1802d8b20
// size=128 thunk=false
// signature: undefined FUN_1802d8b20()
// status: ok


undefined1
FUN_1802d8b20(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  if (DAT_1803f8f90 < 1) {
    uVar1 = 0;
  }
  else {
    DAT_1803f8f90 = DAT_1803f8f90 + -1;
    uVar1 = __scrt_acquire_startup_lock();
    if (DAT_1803f8f48 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_1802d90dc(7);
    }
    uVar2 = uVar1;
    __scrt_dllmain_uninitialize_c();
    FUN_1802d91a4();
    FUN_1802d9210();
    DAT_1803f8f48 = 0;
    __scrt_release_startup_lock(uVar1);
    uVar1 = __scrt_uninitialize_crt(param_1,0,param_3,param_4,uVar2);
    FUN_1802d85c0();
  }
  return uVar1;
}


)B1802d8b20",
    "fdae90be3d74f1d3717158a1aed2c08ac256a2825d570c5dea41b37fae2c772a",
    R"F1802d8b20C(FUN_1802d85c0
FUN_1802d90dc
FUN_1802d91a4
FUN_1802d9210)F1802d8b20C",
    R"F1802d8b20D(DAT_1803f8f48
DAT_1803f8f90)F1802d8b20D",
    R"F1802d8b20T()F1802d8b20T",
    R"F1802d8b20F(14: if (DAT_1803f8f90 < 1) {
17: else {
20: if (DAT_1803f8f48 != 2) {
33: return uVar1;)F1802d8b20F",
    R"F1802d8b20U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803f8f48.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803f8f90.)F1802d8b20U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d8b20() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d8b20", "FUN_1802d8b20");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint8_t param_1{};
    [[maybe_unused]] std::uint64_t param_2{};
    [[maybe_unused]] std::uint64_t param_3{};
    [[maybe_unused]] std::uint64_t param_4{};
    [[maybe_unused]] std::uint8_t uVar1{};
    [[maybe_unused]] std::uint8_t uVar2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803f8f48.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803f8f90.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("__scrt_acquire_startup_lock");
    trace.call_arguments("FUN_1802d90dc", 7);
    trace.call_arguments("__scrt_dllmain_uninitialize_c");
    trace.call_arguments("FUN_1802d91a4");
    trace.call_arguments("FUN_1802d9210");
    trace.call_arguments("__scrt_release_startup_lock", uVar1);
    trace.call_arguments("__scrt_uninitialize_crt", param_1, 0, param_3, param_4, uVar2);
    trace.call_arguments("FUN_1802d85c0");
    trace.call_target("FUN_1802d85c0", reinterpret_cast<const void*>(&image::FUN_1802d85c0));
    trace.call_target("FUN_1802d90dc", reinterpret_cast<const void*>(&image::FUN_1802d90dc));
    trace.call_target("FUN_1802d91a4", reinterpret_cast<const void*>(&image::FUN_1802d91a4));
    trace.call_target("FUN_1802d9210", reinterpret_cast<const void*>(&image::FUN_1802d9210));
    trace.data_ref("DAT_1803f8f48", static_cast<const void*>(&image::DAT_1803f8f48));
    trace.data_ref("DAT_1803f8f90", static_cast<const void*>(&image::DAT_1803f8f90));
    // body sha256: fdae90be3d74f1d3717158a1aed2c08ac256a2825d570c5dea41b37fae2c772a
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined1");
        {
            trace.statement("undefined1 uVar1;");
            trace.statement("undefined1 uVar2;");
            if (trace.checked_condition("if (DAT_1803f8f90 < 1)", [&]() -> bool { return static_cast<bool>(image::DAT_1803f8f90 < 1); })) {
                trace.statement("uVar1 = 0;");
            } else {
            trace.statement("DAT_1803f8f90 = DAT_1803f8f90 + -1;");
            trace.statement("uVar1 = __scrt_acquire_startup_lock();");
            if (trace.checked_condition("if (DAT_1803f8f48 != 2)", [&]() -> bool { return static_cast<bool>(image::DAT_1803f8f48 != 2); })) {
                trace.statement("FUN_1802d90dc(7);");
            }
            trace.statement("uVar2 = uVar1;");
            trace.statement("__scrt_dllmain_uninitialize_c();");
            trace.statement("FUN_1802d91a4();");
            trace.statement("FUN_1802d9210();");
            trace.statement("DAT_1803f8f48 = 0;");
            trace.statement("__scrt_release_startup_lock(uVar1);");
            trace.statement("uVar1 = __scrt_uninitialize_crt(param_1,0,param_3,param_4,uVar2);");
            trace.statement("FUN_1802d85c0();");
            }
            trace.statement("return uVar1;");
        }
    return kFunction_0x1802d8b20;
}

// 0x1802d8ba4 FUN_1802d8ba4
// source: re/dump/decompile/0x1802d8ba4_FUN_1802d8ba4.c
// size: 290 bytes; thunk: false
// body sha256: c82ba88406d1035095df2f476b90ad4ec94ac7d7d5fe6fb79b393326bfa490ae
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d8ba4{
    "0x1802d8ba4",
    "FUN_1802d8ba4",
    R"F1802d8ba4S(undefined FUN_1802d8ba4())F1802d8ba4S",
    R"B1802d8ba4(// 0x1802d8ba4  FUN_1802d8ba4
// size=290 thunk=false
// signature: undefined FUN_1802d8ba4()
// status: ok


int FUN_1802d8ba4(undefined8 param_1,int param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 == 0) && (DAT_1803f8f90 < 1)) {
    return 0;
  }
  if (param_2 - 1U < 2) {
    if (PTR_18030fbf0 == (undefined *)0x0) {
      iVar2 = 1;
    }
    else {
      iVar2 = (*(code *)PTR__guard_dispatch_icall_18030cca8)();
    }
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = FUN_1802d89b8(param_1,param_2,param_3);
    if (iVar2 == 0) {
      return 0;
    }
  }
  iVar2 = FUN_1802420c0(param_1,param_2,param_3);
  if ((param_2 == 1) && (iVar2 == 0)) {
    FUN_1802420c0(param_1,0,param_3);
    FUN_1802d8b20(param_3 != 0);
    if (PTR_18030fbf0 != (undefined *)0x0) {
      (*(code *)PTR__guard_dispatch_icall_18030cca8)(param_1,0,param_3);
    }
  }
  if ((param_2 == 0) || (param_2 == 3)) {
    iVar1 = FUN_1802d89b8(param_1,param_2,param_3);
    iVar2 = 0;
    if (iVar1 != 0) {
      if (PTR_18030fbf0 == (undefined *)0x0) {
        iVar2 = 1;
      }
      else {
        iVar2 = (*(code *)PTR__guard_dispatch_icall_18030cca8)(param_1,param_2,param_3);
      }
    }
  }
  return iVar2;
}


)B1802d8ba4",
    "c82ba88406d1035095df2f476b90ad4ec94ac7d7d5fe6fb79b393326bfa490ae",
    R"F1802d8ba4C(FUN_1802420c0
FUN_1802d89b8
FUN_1802d8b20)F1802d8ba4C",
    R"F1802d8ba4D(PTR__guard_dispatch_icall_18030cca8
PTR_18030fbf0
DAT_1803f8f90)F1802d8ba4D",
    R"F1802d8ba4T()F1802d8ba4T",
    R"F1802d8ba4F(13: if ((param_2 == 0) && (DAT_1803f8f90 < 1)) {
14: return 0;
16: if (param_2 - 1U < 2) {
17: if (PTR_18030fbf0 == (undefined *)0x0) {
20: else {
23: if (iVar2 == 0) {
24: return 0;
27: if (iVar2 == 0) {
28: return 0;
32: if ((param_2 == 1) && (iVar2 == 0)) {
35: if (PTR_18030fbf0 != (undefined *)0x0) {
39: if ((param_2 == 0) || (param_2 == 3)) {
42: if (iVar1 != 0) {
43: if (PTR_18030fbf0 == (undefined *)0x0) {
46: else {
51: return iVar2;)F1802d8ba4F",
    R"F1802d8ba4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference PTR__guard_dispatch_icall_18030cca8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference PTR_18030fbf0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803f8f90.
TODO: resolve the indirect call in body 21: iVar2 = (*(code *)PTR__guard_dispatch_icall_18030cca8)();.
TODO: resolve the indirect call in body 36: (*(code *)PTR__guard_dispatch_icall_18030cca8)(param_1,0,param_3);.
TODO: resolve the indirect call in body 47: iVar2 = (*(code *)PTR__guard_dispatch_icall_18030cca8)(param_1,param_2,param_3);.)F1802d8ba4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d8ba4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d8ba4", "FUN_1802d8ba4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int32_t param_2{};
    [[maybe_unused]] std::int64_t param_3{};
    [[maybe_unused]] std::int32_t iVar1{};
    [[maybe_unused]] std::int32_t iVar2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for PTR__guard_dispatch_icall_18030cca8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for PTR_18030fbf0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803f8f90.
    // TODO: resolve the indirect call in body 21: iVar2 = (*(code *)PTR__guard_dispatch_icall_18030cca8)();.
    // TODO: resolve the indirect call in body 36: (*(code *)PTR__guard_dispatch_icall_18030cca8)(param_1,0,param_3);.
    // TODO: resolve the indirect call in body 47: iVar2 = (*(code *)PTR__guard_dispatch_icall_18030cca8)(param_1,param_2,param_3);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if (param_2 - 1U < 2) [reason: ambiguous operand type]
    // TODO: condition expression type not recovered: if (PTR_18030fbf0 == (undefined *)0x0) [reason: unresolved global storage/width]
    // TODO: condition expression type not recovered: if (PTR_18030fbf0 != (undefined *)0x0) [reason: unresolved global storage/width]
    // TODO: condition expression type not recovered: if (PTR_18030fbf0 == (undefined *)0x0) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_1802d89b8", param_1, param_2, param_3);
    trace.call_arguments("FUN_1802420c0", param_1, param_2, param_3);
    trace.call_arguments("FUN_1802420c0", param_1, 0, param_3);
    trace.call_arguments("FUN_1802d8b20", param_3 != 0);
    trace.call_arguments("FUN_1802d89b8", param_1, param_2, param_3);
    trace.call_target("FUN_1802420c0", reinterpret_cast<const void*>(&image::FUN_1802420c0));
    trace.call_target("FUN_1802d89b8", reinterpret_cast<const void*>(&image::FUN_1802d89b8));
    trace.call_target("FUN_1802d8b20", reinterpret_cast<const void*>(&image::FUN_1802d8b20));
    trace.data_ref("PTR__guard_dispatch_icall_18030cca8", static_cast<const void*>(&image::PTR__guard_dispatch_icall_18030cca8));
    trace.data_ref("PTR_18030fbf0", static_cast<const void*>(&image::PTR_18030fbf0));
    trace.data_ref("DAT_1803f8f90", static_cast<const void*>(&image::DAT_1803f8f90));
    // body sha256: c82ba88406d1035095df2f476b90ad4ec94ac7d7d5fe6fb79b393326bfa490ae
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("int iVar1;");
            trace.statement("int iVar2;");
            if (trace.checked_condition("if ((param_2 == 0) && (DAT_1803f8f90 < 1))", [&]() -> bool { return static_cast<bool>((param_2 == 0) && (image::DAT_1803f8f90 < 1)); })) {
                trace.statement("return 0;");
            }
            if (trace.condition("if (param_2 - 1U < 2)")) {
                if (trace.condition("if (PTR_18030fbf0 == (undefined *)0x0)")) {
                    trace.statement("iVar2 = 1;");
                } else {
                trace.statement("iVar2 = (*(code *)PTR__guard_dispatch_icall_18030cca8)();");
                }
                if (trace.checked_condition("if (iVar2 == 0)", [&]() -> bool { return static_cast<bool>(iVar2 == 0); })) {
                    trace.statement("return 0;");
                }
                trace.statement("iVar2 = FUN_1802d89b8(param_1,param_2,param_3);");
                if (trace.checked_condition("if (iVar2 == 0)", [&]() -> bool { return static_cast<bool>(iVar2 == 0); })) {
                    trace.statement("return 0;");
                }
            }
            trace.statement("iVar2 = FUN_1802420c0(param_1,param_2,param_3);");
            if (trace.checked_condition("if ((param_2 == 1) && (iVar2 == 0))", [&]() -> bool { return static_cast<bool>((param_2 == 1) && (iVar2 == 0)); })) {
                trace.statement("FUN_1802420c0(param_1,0,param_3);");
                trace.statement("FUN_1802d8b20(param_3 != 0);");
                if (trace.condition("if (PTR_18030fbf0 != (undefined *)0x0)")) {
                    trace.statement("(*(code *)PTR__guard_dispatch_icall_18030cca8)(param_1,0,param_3);");
                }
            }
            if (trace.checked_condition("if ((param_2 == 0) || (param_2 == 3))", [&]() -> bool { return static_cast<bool>((param_2 == 0) || (param_2 == 3)); })) {
                trace.statement("iVar1 = FUN_1802d89b8(param_1,param_2,param_3);");
                trace.statement("iVar2 = 0;");
                if (trace.checked_condition("if (iVar1 != 0)", [&]() -> bool { return static_cast<bool>(iVar1 != 0); })) {
                    if (trace.condition("if (PTR_18030fbf0 == (undefined *)0x0)")) {
                        trace.statement("iVar2 = 1;");
                    } else {
                    trace.statement("iVar2 = (*(code *)PTR__guard_dispatch_icall_18030cca8)(param_1,param_2,param_3);");
                    }
                }
            }
            trace.statement("return iVar2;");
        }
    return kFunction_0x1802d8ba4;
}

// 0x1802d8ccc entry
// source: re/dump/decompile/0x1802d8ccc_entry.c
// size: 61 bytes; thunk: false
// body sha256: 6525ca1c19af56d6c2056ba709b391622d3cb9370b5734eb702267abc3a6ad0d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d8ccc{
    "0x1802d8ccc",
    "entry",
    R"F1802d8cccS(undefined entry())F1802d8cccS",
    R"B1802d8ccc(// 0x1802d8ccc  entry
// size=61 thunk=false
// signature: undefined entry()
// status: ok


void entry(undefined8 param_1,int param_2,undefined8 param_3)

{
  if (param_2 == 1) {
    FUN_1802d90e4();
  }
  FUN_1802d8ba4(param_1,param_2,param_3);
  return;
}


)B1802d8ccc",
    "6525ca1c19af56d6c2056ba709b391622d3cb9370b5734eb702267abc3a6ad0d",
    R"F1802d8cccC(FUN_1802d8ba4
FUN_1802d90e4)F1802d8cccC",
    R"F1802d8cccD()F1802d8cccD",
    R"F1802d8cccT()F1802d8cccT",
    R"F1802d8cccF(10: if (param_2 == 1) {
14: return;)F1802d8cccF",
    R"F1802d8cccU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d8cccU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d8ccc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d8ccc", "entry");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int32_t param_2{};
    [[maybe_unused]] std::uint64_t param_3{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1802d90e4");
    trace.call_arguments("FUN_1802d8ba4", param_1, param_2, param_3);
    trace.call_target("FUN_1802d8ba4", reinterpret_cast<const void*>(&image::FUN_1802d8ba4));
    trace.call_target("FUN_1802d90e4", reinterpret_cast<const void*>(&image::FUN_1802d90e4));
    // body sha256: 6525ca1c19af56d6c2056ba709b391622d3cb9370b5734eb702267abc3a6ad0d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void entry(undefined8 param_1,int param_2,undefined8 param_3)");
        {
            if (trace.checked_condition("if (param_2 == 1)", [&]() -> bool { return static_cast<bool>(param_2 == 1); })) {
                trace.statement("FUN_1802d90e4();");
            }
            trace.statement("FUN_1802d8ba4(param_1,param_2,param_3);");
            trace.statement("return;");
        }
    return kFunction_0x1802d8ccc;
}

// 0x1802d8d0c FUN_1802d8d0c
// source: re/dump/decompile/0x1802d8d0c_FUN_1802d8d0c.c
// size: 29 bytes; thunk: false
// body sha256: 2bce8103e9025080ef88f2eb98ddd19b5bb53ebfec40c89f7300a31d4f57804e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d8d0c{
    "0x1802d8d0c",
    "FUN_1802d8d0c",
    R"F1802d8d0cS(undefined FUN_1802d8d0c())F1802d8d0cS",
    R"B1802d8d0c(// 0x1802d8d0c  FUN_1802d8d0c
// size=29 thunk=false
// signature: undefined FUN_1802d8d0c()
// status: ok


undefined8 FUN_1802d8d0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  FUN_1802d8d2c(param_2,param_4,*(undefined8 *)(param_4 + 0x38));
  return 1;
}


)B1802d8d0c",
    "2bce8103e9025080ef88f2eb98ddd19b5bb53ebfec40c89f7300a31d4f57804e",
    R"F1802d8d0cC(FUN_1802d8d2c)F1802d8d0cC",
    R"F1802d8d0cD()F1802d8d0cD",
    R"F1802d8d0cT()F1802d8d0cT",
    R"F1802d8d0cF(11: return 1;)F1802d8d0cF",
    R"F1802d8d0cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d8d0cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d8d0c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d8d0c", "FUN_1802d8d0c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::uint64_t param_2{};
    [[maybe_unused]] std::uint64_t param_3{};
    [[maybe_unused]] std::int64_t param_4{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1802d8d2c", param_2, param_4, load_at<std::uint64_t>(param_4 + 0x38, 0));
    trace.call_target("FUN_1802d8d2c", reinterpret_cast<const void*>(&image::FUN_1802d8d2c));
    // body sha256: 2bce8103e9025080ef88f2eb98ddd19b5bb53ebfec40c89f7300a31d4f57804e
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_1802d8d2c(param_2,param_4,*(undefined8 *)(param_4 + 0x38));");
            trace.statement("return 1;");
        }
    return kFunction_0x1802d8d0c;
}

// 0x1802d8d2c FUN_1802d8d2c
// source: re/dump/decompile/0x1802d8d2c_FUN_1802d8d2c.c
// size: 99 bytes; thunk: false
// body sha256: eac8714b4a0d6be654a55e4da0ad321cbba8e80378354e7440584be0ed0e8c97
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d8d2c{
    "0x1802d8d2c",
    "FUN_1802d8d2c",
    R"F1802d8d2cS(undefined FUN_1802d8d2c())F1802d8d2cS",
    R"B1802d8d2c(// 0x1802d8d2c  FUN_1802d8d2c
// size=99 thunk=false
// signature: undefined FUN_1802d8d2c()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1802d8d2c(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8);
  if ((*(byte *)(uVar1 + 3 + *(longlong *)(param_2 + 8)) & 0xf) != 0) {
    param_1 = ((ulonglong)*(byte *)(uVar1 + 3 + *(longlong *)(param_2 + 8)) & 0xfffffff0) + param_1;
  }
  return param_1;
}


)B1802d8d2c",
    "eac8714b4a0d6be654a55e4da0ad321cbba8e80378354e7440584be0ed0e8c97",
    R"F1802d8d2cC()F1802d8d2cC",
    R"F1802d8d2cD()F1802d8d2cD",
    R"F1802d8d2cT()F1802d8d2cT",
    R"F1802d8d2cF(15: if ((*(byte *)(uVar1 + 3 + *(longlong *)(param_2 + 8)) & 0xf) != 0) {
18: return param_1;)F1802d8d2cF",
    R"F1802d8d2cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d8d2cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d8d2c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d8d2c", "FUN_1802d8d2c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    [[maybe_unused]] std::uint64_t uVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: eac8714b4a0d6be654a55e4da0ad321cbba8e80378354e7440584be0ed0e8c97
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("ulonglong uVar1;");
            trace.statement("uVar1 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8);");
            if (trace.checked_condition("if ((*(byte *)(uVar1 + 3 + *(longlong *)(param_2 + 8)) & 0xf) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint8_t>(uVar1 + 3 + load_at<std::int64_t>(param_2 + 8, 0), 0) & 0xf) != 0); })) {
                trace.statement("param_1 = ((ulonglong)*(byte *)(uVar1 + 3 + *(longlong *)(param_2 + 8)) & 0xfffffff0) + param_1;");
            }
            trace.statement("return param_1;");
        }
    return kFunction_0x1802d8d2c;
}

// 0x1802d8da0 __chkstk
// source: re/dump/decompile/0x1802d8da0___chkstk.c
// size: 78 bytes; thunk: false
// body sha256: 42f5f5779932af20b6080031f701d7cac0ee3347f2c8d838e46e514ccea0a501
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d8da0{
    "0x1802d8da0",
    "__chkstk",
    R"F1802d8da0S(undefined __chkstk())F1802d8da0S",
    R"B1802d8da0(// 0x1802d8da0  __chkstk
// size=78 thunk=false
// signature: undefined __chkstk()
// status: ok


/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __chkstk(void)

{
  undefined1 *in_RAX;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = local_res8 + -(longlong)in_RAX;
  if (local_res8 < in_RAX) {
    puVar1 = (undefined1 *)0x0;
  }
  if (puVar1 < StackLimit) {
    puVar2 = StackLimit;
    do {
      puVar2 = puVar2 + -0x1000;
      *puVar2 = 0;
    } while ((undefined1 *)((ulonglong)puVar1 & 0xfffffffffffff000) != puVar2);
  }
  return;
}


)B1802d8da0",
    "42f5f5779932af20b6080031f701d7cac0ee3347f2c8d838e46e514ccea0a501",
    R"F1802d8da0C()F1802d8da0C",
    R"F1802d8da0D()F1802d8da0D",
    R"F1802d8da0T()F1802d8da0T",
    R"F1802d8da0F(22: if (local_res8 < in_RAX) {
25: if (puVar1 < StackLimit) {
27: do {
32: return;)F1802d8da0F",
    R"F1802d8da0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d8da0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d8da0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d8da0", "__chkstk");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint8_t * in_RAX{};
    [[maybe_unused]] std::uint8_t * puVar1{};
    [[maybe_unused]] std::uint8_t * puVar2{};
    [[maybe_unused]] std::uint8_t local_res8[32]{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if (local_res8 < in_RAX) [reason: ambiguous operand type]
    // TODO: condition expression type not recovered: if (puVar1 < StackLimit) [reason: ambiguous operand type]
    // body sha256: 42f5f5779932af20b6080031f701d7cac0ee3347f2c8d838e46e514ccea0a501
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void __chkstk(void)");
        {
            trace.statement("undefined1 *in_RAX;");
            trace.statement("undefined1 *puVar1;");
            trace.statement("undefined1 *puVar2;");
            trace.statement("undefined1 local_res8 [32];");
            trace.statement("puVar1 = local_res8 + -(longlong)in_RAX;");
            if (trace.condition("if (local_res8 < in_RAX)")) {
                trace.statement("puVar1 = (undefined1 *)0x0;");
            }
            if (trace.condition("if (puVar1 < StackLimit)")) {
                trace.statement("puVar2 = StackLimit;");
                do {
                    trace.statement("puVar2 = puVar2 + -0x1000;");
                    trace.statement("*puVar2 = 0;");
                } while (trace.loop_condition("while ((undefined1 *)((ulonglong)puVar1 & 0xfffffffffffff000) != puVar2);"));
            }
            trace.statement("return;");
        }
    return kFunction_0x1802d8da0;
}

// 0x1802d8df0 FUN_1802d8df0
// source: re/dump/decompile/0x1802d8df0_FUN_1802d8df0.c
// size: 667 bytes; thunk: false
// body sha256: 880c67fb5168095863495ba058a362174e5aeeb641a3ec3082d33267cbf603b1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d8df0{
    "0x1802d8df0",
    "FUN_1802d8df0",
    R"F1802d8df0S(undefined FUN_1802d8df0())F1802d8df0S",
    R"B1802d8df0(// 0x1802d8df0  FUN_1802d8df0
// size=667 thunk=false
// signature: undefined FUN_1802d8df0()
// status: ok


/* WARNING: Removing unreachable block (ram,0x0001802d8edb) */
/* WARNING: Removing unreachable block (ram,0x0001802d8ecb) */
/* WARNING: Removing unreachable block (ram,0x0001802d8ea6) */
/* WARNING: Removing unreachable block (ram,0x0001802d8e2a) */
/* WARNING: Removing unreachable block (ram,0x0001802d8e08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1802d8df0(void)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  byte bVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong in_XCR0;
  
  piVar1 = (int *)cpuid_basic_info(0);
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar5 = puVar2[3];
  if ((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) {
    uVar8 = *puVar2 & 0xfff3ff0;
    _DAT_1803da518 = 0x8000;
    _DAT_1803da520 = 0xffffffffffffffff;
    if ((((uVar8 == 0x106c0) || (uVar8 == 0x20660)) || (uVar8 == 0x20670)) ||
       ((uVar8 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar8 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_1803f8f94 = DAT_1803f8f94 | 1;
    }
  }
  uVar11 = 0;
  uVar8 = 0;
  if (*piVar1 < 7) {
    uVar12 = 0;
    uVar10 = 0;
  }
  else {
    piVar3 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
    uVar12 = piVar3[1];
    uVar10 = piVar3[2];
    if ((uVar12 >> 9 & 1) != 0) {
      DAT_1803f8f94 = DAT_1803f8f94 | 2;
    }
    if (0 < *piVar3) {
      lVar4 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar11 = *(uint *)(lVar4 + 8);
    }
    if (0x23 < *piVar1) {
      lVar4 = cpuid(0x24);
      uVar8 = *(uint *)(lVar4 + 4);
    }
  }
  DAT_1803da510 = 1;
  DAT_1803da514 = 2;
  uVar9 = DAT_1803da528 & 0xfffffffffffffffe;
  if ((uVar5 >> 0x14 & 1) != 0) {
    DAT_1803da510 = 2;
    DAT_1803da514 = 6;
    uVar9 = DAT_1803da528 & 0xffffffffffffffee;
  }
  DAT_1803da528 = uVar9;
  if ((uVar5 >> 0x1b & 1) != 0) {
    uVar9 = xinuse(0);
    uVar9 = in_XCR0 & uVar9 & 0xffffffff;
    if (((uVar5 >> 0x1c & 1) != 0) && (bVar6 = (byte)uVar9, (bVar6 & 6) == 6)) {
      DAT_1803da510 = 3;
      uVar5 = DAT_1803da514 | 8;
      uVar7 = DAT_1803da528;
      if ((uVar12 & 0x20) != 0) {
        DAT_1803da510 = 5;
        uVar5 = DAT_1803da514 | 0x28;
        uVar7 = DAT_1803da528 & 0xfffffffffffffffd;
        if (((uVar12 & 0xd0030000) == 0xd0030000) && ((bVar6 & 0xe0) == 0xe0)) {
          DAT_1803da514 = DAT_1803da514 | 0x68;
          DAT_1803da510 = 6;
          uVar5 = DAT_1803da514;
          uVar7 = DAT_1803da528 & 0xffffffffffffffd9;
        }
      }
      DAT_1803da528 = uVar7;
      DAT_1803da514 = uVar5;
      if ((uVar10 >> 0x17 & 1) != 0) {
        DAT_1803da528 = DAT_1803da528 & 0xfffffffffeffffff;
      }
      if (((uVar11 >> 0x13 & 1) != 0) && ((bVar6 & 0xe0) == 0xe0)) {
        _DAT_1803f8f98 = uVar8 & 0x400ff;
        DAT_1803da528 = DAT_1803da528 & ~((ulonglong)(uVar8 >> 0x10 & 6) | 0x1000029);
        if (1 < (byte)_DAT_1803f8f98) {
          DAT_1803da528 = DAT_1803da528 & 0xffffffffffffffbf;
        }
      }
    }
    if (((uVar11 >> 0x15 & 1) != 0) && ((uVar9 >> 0x13 & 1) != 0)) {
      DAT_1803da528 = DAT_1803da528 & 0xffffffffffffff7f;
    }
  }
  return 0;
}


)B1802d8df0",
    "880c67fb5168095863495ba058a362174e5aeeb641a3ec3082d33267cbf603b1",
    R"F1802d8df0C()F1802d8df0C",
    R"F1802d8df0D(DAT_1803da510
DAT_1803da514
_DAT_1803da518
_DAT_1803da520
DAT_1803da528
DAT_1803f8f94
_DAT_1803f8f98)F1802d8df0D",
    R"F1802d8df0T()F1802d8df0T",
    R"F1802d8df0F(34: if ((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) {
38: if ((((uVar8 == 0x106c0) || (uVar8 == 0x20660)) || (uVar8 == 0x20670)) ||
46: if (*piVar1 < 7) {
50: else {
54: if ((uVar12 >> 9 & 1) != 0) {
57: if (0 < *piVar3) {
61: if (0x23 < *piVar1) {
69: if ((uVar5 >> 0x14 & 1) != 0) {
75: if ((uVar5 >> 0x1b & 1) != 0) {
78: if (((uVar5 >> 0x1c & 1) != 0) && (bVar6 = (byte)uVar9, (bVar6 & 6) == 6)) {
82: if ((uVar12 & 0x20) != 0) {
86: if (((uVar12 & 0xd0030000) == 0xd0030000) && ((bVar6 & 0xe0) == 0xe0)) {
95: if ((uVar10 >> 0x17 & 1) != 0) {
98: if (((uVar11 >> 0x13 & 1) != 0) && ((bVar6 & 0xe0) == 0xe0)) {
101: if (1 < (byte)_DAT_1803f8f98) {
106: if (((uVar11 >> 0x15 & 1) != 0) && ((uVar9 >> 0x13 & 1) != 0)) {
110: return 0;)F1802d8df0F",
    R"F1802d8df0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da510.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da514.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference _DAT_1803da518.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference _DAT_1803da520.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da528.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803f8f94.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference _DAT_1803f8f98.)F1802d8df0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d8df0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d8df0", "FUN_1802d8df0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int32_t * piVar1{};
    [[maybe_unused]] std::uint32_t * puVar2{};
    [[maybe_unused]] std::int32_t * piVar3{};
    [[maybe_unused]] std::int64_t lVar4{};
    [[maybe_unused]] std::uint32_t uVar5{};
    [[maybe_unused]] std::uint8_t bVar6{};
    [[maybe_unused]] std::uint64_t uVar7{};
    [[maybe_unused]] std::uint32_t uVar8{};
    [[maybe_unused]] std::uint64_t uVar9{};
    [[maybe_unused]] std::uint32_t uVar10{};
    [[maybe_unused]] std::uint32_t uVar11{};
    [[maybe_unused]] std::uint32_t uVar12{};
    [[maybe_unused]] std::uint64_t in_XCR0{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da510.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da514.
    // TODO: recover global/data declaration, type, value and runtime page/layout for _DAT_1803da518.
    // TODO: recover global/data declaration, type, value and runtime page/layout for _DAT_1803da520.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da528.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803f8f94.
    // TODO: recover global/data declaration, type, value and runtime page/layout for _DAT_1803f8f98.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("cpuid_basic_info", 0);
    trace.call_arguments("cpuid_Version_info", 1);
    trace.call_arguments("cpuid_Extended_Feature_Enumeration_info", 7);
    trace.call_arguments("cpuid_Extended_Feature_Enumeration_info", 7);
    trace.call_arguments("cpuid", 0x24);
    trace.call_arguments("xinuse", 0);
    trace.data_ref("DAT_1803da510", static_cast<const void*>(&image::DAT_1803da510));
    trace.data_ref("DAT_1803da514", static_cast<const void*>(&image::DAT_1803da514));
    trace.data_ref("_DAT_1803da518", static_cast<const void*>(&image::_DAT_1803da518));
    trace.data_ref("_DAT_1803da520", static_cast<const void*>(&image::_DAT_1803da520));
    trace.data_ref("DAT_1803da528", static_cast<const void*>(&image::DAT_1803da528));
    trace.data_ref("DAT_1803f8f94", static_cast<const void*>(&image::DAT_1803f8f94));
    trace.data_ref("_DAT_1803f8f98", static_cast<const void*>(&image::_DAT_1803f8f98));
    // body sha256: 880c67fb5168095863495ba058a362174e5aeeb641a3ec3082d33267cbf603b1
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("int *piVar1;");
            trace.statement("uint *puVar2;");
            trace.statement("int *piVar3;");
            trace.statement("longlong lVar4;");
            trace.statement("uint uVar5;");
            trace.statement("byte bVar6;");
            trace.statement("ulonglong uVar7;");
            trace.statement("uint uVar8;");
            trace.statement("ulonglong uVar9;");
            trace.statement("uint uVar10;");
            trace.statement("uint uVar11;");
            trace.statement("uint uVar12;");
            trace.statement("ulonglong in_XCR0;");
            trace.statement("piVar1 = (int *)cpuid_basic_info(0);");
            trace.statement("puVar2 = (uint *)cpuid_Version_info(1);");
            trace.statement("uVar5 = puVar2[3];");
            if (trace.checked_condition("if ((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547)", [&]() -> bool { return static_cast<bool>((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547); })) {
                trace.statement("uVar8 = *puVar2 & 0xfff3ff0;");
                trace.statement("_DAT_1803da518 = 0x8000;");
                trace.statement("_DAT_1803da520 = 0xffffffffffffffff;");
                if (trace.condition("if ((((uVar8 == 0x106c0) || (uVar8 == 0x20660)) || (uVar8 == 0x20670)) || ((uVar8 - 0x30650 < 0x21 && ((0x100010001U >> ((ulonglong)(uVar8 - 0x30650) & 0x3f) & 1) != 0))))")) {
                    trace.statement("DAT_1803f8f94 = DAT_1803f8f94 | 1;");
                }
            }
            trace.statement("uVar11 = 0;");
            trace.statement("uVar8 = 0;");
            if (trace.checked_condition("if (*piVar1 < 7)", [&]() -> bool { return static_cast<bool>(*piVar1 < 7); })) {
                trace.statement("uVar12 = 0;");
                trace.statement("uVar10 = 0;");
            } else {
            trace.statement("piVar3 = (int *)cpuid_Extended_Feature_Enumeration_info(7);");
            trace.statement("uVar12 = piVar3[1];");
            trace.statement("uVar10 = piVar3[2];");
            if (trace.checked_condition("if ((uVar12 >> 9 & 1) != 0)", [&]() -> bool { return static_cast<bool>((uVar12 >> 9 & 1) != 0); })) {
                trace.statement("DAT_1803f8f94 = DAT_1803f8f94 | 2;");
            }
            if (trace.checked_condition("if (0 < *piVar3)", [&]() -> bool { return static_cast<bool>(0 < *piVar3); })) {
                trace.statement("lVar4 = cpuid_Extended_Feature_Enumeration_info(7);");
                trace.statement("uVar11 = *(uint *)(lVar4 + 8);");
            }
            if (trace.checked_condition("if (0x23 < *piVar1)", [&]() -> bool { return static_cast<bool>(0x23 < *piVar1); })) {
                trace.statement("lVar4 = cpuid(0x24);");
                trace.statement("uVar8 = *(uint *)(lVar4 + 4);");
            }
            }
            trace.statement("DAT_1803da510 = 1;");
            trace.statement("DAT_1803da514 = 2;");
            trace.statement("uVar9 = DAT_1803da528 & 0xfffffffffffffffe;");
            if (trace.checked_condition("if ((uVar5 >> 0x14 & 1) != 0)", [&]() -> bool { return static_cast<bool>((uVar5 >> 0x14 & 1) != 0); })) {
                trace.statement("DAT_1803da510 = 2;");
                trace.statement("DAT_1803da514 = 6;");
                trace.statement("uVar9 = DAT_1803da528 & 0xffffffffffffffee;");
            }
            trace.statement("DAT_1803da528 = uVar9;");
            if (trace.checked_condition("if ((uVar5 >> 0x1b & 1) != 0)", [&]() -> bool { return static_cast<bool>((uVar5 >> 0x1b & 1) != 0); })) {
                trace.statement("uVar9 = xinuse(0);");
                trace.statement("uVar9 = in_XCR0 & uVar9 & 0xffffffff;");
                if (trace.checked_condition("if (((uVar5 >> 0x1c & 1) != 0) && (bVar6 = (byte)uVar9, (bVar6 & 6) == 6))", [&]() -> bool { return static_cast<bool>(((uVar5 >> 0x1c & 1) != 0) && (bVar6 = static_cast<std::uint8_t>(uVar9), (bVar6 & 6) == 6)); })) {
                    trace.statement("DAT_1803da510 = 3;");
                    trace.statement("uVar5 = DAT_1803da514 | 8;");
                    trace.statement("uVar7 = DAT_1803da528;");
                    if (trace.checked_condition("if ((uVar12 & 0x20) != 0)", [&]() -> bool { return static_cast<bool>((uVar12 & 0x20) != 0); })) {
                        trace.statement("DAT_1803da510 = 5;");
                        trace.statement("uVar5 = DAT_1803da514 | 0x28;");
                        trace.statement("uVar7 = DAT_1803da528 & 0xfffffffffffffffd;");
                        if (trace.checked_condition("if (((uVar12 & 0xd0030000) == 0xd0030000) && ((bVar6 & 0xe0) == 0xe0))", [&]() -> bool { return static_cast<bool>(((uVar12 & 0xd0030000) == 0xd0030000) && ((bVar6 & 0xe0) == 0xe0)); })) {
                            trace.statement("DAT_1803da514 = DAT_1803da514 | 0x68;");
                            trace.statement("DAT_1803da510 = 6;");
                            trace.statement("uVar5 = DAT_1803da514;");
                            trace.statement("uVar7 = DAT_1803da528 & 0xffffffffffffffd9;");
                        }
                    }
                    trace.statement("DAT_1803da528 = uVar7;");
                    trace.statement("DAT_1803da514 = uVar5;");
                    if (trace.checked_condition("if ((uVar10 >> 0x17 & 1) != 0)", [&]() -> bool { return static_cast<bool>((uVar10 >> 0x17 & 1) != 0); })) {
                        trace.statement("DAT_1803da528 = DAT_1803da528 & 0xfffffffffeffffff;");
                    }
                    if (trace.checked_condition("if (((uVar11 >> 0x13 & 1) != 0) && ((bVar6 & 0xe0) == 0xe0))", [&]() -> bool { return static_cast<bool>(((uVar11 >> 0x13 & 1) != 0) && ((bVar6 & 0xe0) == 0xe0)); })) {
                        trace.statement("_DAT_1803f8f98 = uVar8 & 0x400ff;");
                        trace.statement("DAT_1803da528 = DAT_1803da528 & ~((ulonglong)(uVar8 >> 0x10 & 6) | 0x1000029);");
                        if (trace.checked_condition("if (1 < (byte)_DAT_1803f8f98)", [&]() -> bool { return static_cast<bool>(1 < (byte)image::_DAT_1803f8f98); })) {
                            trace.statement("DAT_1803da528 = DAT_1803da528 & 0xffffffffffffffbf;");
                        }
                    }
                }
                if (trace.checked_condition("if (((uVar11 >> 0x15 & 1) != 0) && ((uVar9 >> 0x13 & 1) != 0))", [&]() -> bool { return static_cast<bool>(((uVar11 >> 0x15 & 1) != 0) && ((uVar9 >> 0x13 & 1) != 0)); })) {
                    trace.statement("DAT_1803da528 = DAT_1803da528 & 0xffffffffffffff7f;");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1802d8df0;
}

// 0x1802d908c FUN_1802d908c
// source: re/dump/decompile/0x1802d908c_FUN_1802d908c.c
// size: 33 bytes; thunk: false
// body sha256: 2f96f876f3ff1949f071fccba03535046a8c0e945750502de9df1850d3a69561
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d908c{
    "0x1802d908c",
    "FUN_1802d908c",
    R"F1802d908cS(undefined FUN_1802d908c())F1802d908cS",
    R"B1802d908c(// 0x1802d908c  FUN_1802d908c
// size=33 thunk=false
// signature: undefined FUN_1802d908c()
// status: ok


undefined8 * FUN_1802d908c(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = vftable_std_bad_alloc;
  return param_1;
}


)B1802d908c",
    "2f96f876f3ff1949f071fccba03535046a8c0e945750502de9df1850d3a69561",
    R"F1802d908cC()F1802d908cC",
    R"F1802d908cD()F1802d908cD",
    R"F1802d908cT("bad allocation")F1802d908cT",
    R"F1802d908cF(13: return param_1;)F1802d908cF",
    R"F1802d908cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d908cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d908c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d908c", "FUN_1802d908c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t * param_1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.string_literal("bad allocation");
    // body sha256: 2f96f876f3ff1949f071fccba03535046a8c0e945750502de9df1850d3a69561
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("param_1[2] = 0;");
            trace.statement("param_1[1] = \"bad allocation\";");
            trace.statement("*param_1 = vftable_std_bad_alloc;");
            trace.statement("return param_1;");
        }
    return kFunction_0x1802d908c;
}

// 0x1802d90b0 FUN_1802d90b0
// source: re/dump/decompile/0x1802d90b0_FUN_1802d90b0.c
// size: 31 bytes; thunk: false
// body sha256: fac871fda4d5265a65b3290d2a54cb08a68e702bc8db8c275fd6aa26b4a09ff8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d90b0{
    "0x1802d90b0",
    "FUN_1802d90b0",
    R"F1802d90b0S(undefined FUN_1802d90b0())F1802d90b0S",
    R"B1802d90b0(// 0x1802d90b0  FUN_1802d90b0
// size=31 thunk=false
// signature: undefined FUN_1802d90b0()
// status: ok


void FUN_1802d90b0(void)

{
  undefined1 local_28 [40];
  
  FUN_1802d908c(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_1803d5890);
}


)B1802d90b0",
    "fac871fda4d5265a65b3290d2a54cb08a68e702bc8db8c275fd6aa26b4a09ff8",
    R"F1802d90b0C(FUN_1802d908c)F1802d90b0C",
    R"F1802d90b0D(DAT_1803d5890)F1802d90b0D",
    R"F1802d90b0T()F1802d90b0T",
    R"F1802d90b0F(linear body (no explicit branch keyword found))F1802d90b0F",
    R"F1802d90b0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803d5890.)F1802d90b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d90b0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d90b0", "FUN_1802d90b0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint8_t local_28[40]{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803d5890.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: call arguments not type-recovered for _CxxThrowException: local_28,(ThrowInfo *)&DAT_1803d5890 [reason: unresolved global storage/width]
    trace.call_arguments("FUN_1802d908c", local_28);
    trace.call_target("FUN_1802d908c", reinterpret_cast<const void*>(&image::FUN_1802d908c));
    trace.data_ref("DAT_1803d5890", static_cast<const void*>(&image::DAT_1803d5890));
    // body sha256: fac871fda4d5265a65b3290d2a54cb08a68e702bc8db8c275fd6aa26b4a09ff8
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("undefined1 local_28 [40];");
            trace.statement("FUN_1802d908c(local_28);");
            trace.statement("_CxxThrowException(local_28,(ThrowInfo *)&DAT_1803d5890);");
        }
    return kFunction_0x1802d90b0;
}

// 0x1802d90d0 __scrt_is_ucrt_dll_in_use
// source: re/dump/decompile/0x1802d90d0___scrt_is_ucrt_dll_in_use.c
// size: 12 bytes; thunk: false
// body sha256: b7999cf803f03dea6749784aa658c087f0bbd08328e24d793512ffcd876d6056
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d90d0{
    "0x1802d90d0",
    "__scrt_is_ucrt_dll_in_use",
    R"F1802d90d0S(undefined __scrt_is_ucrt_dll_in_use())F1802d90d0S",
    R"B1802d90d0(// 0x1802d90d0  __scrt_is_ucrt_dll_in_use
// size=12 thunk=false
// signature: undefined __scrt_is_ucrt_dll_in_use()
// status: ok


/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_1803da530 != 0;
}


)B1802d90d0",
    "b7999cf803f03dea6749784aa658c087f0bbd08328e24d793512ffcd876d6056",
    R"F1802d90d0C()F1802d90d0C",
    R"F1802d90d0D(DAT_1803da530)F1802d90d0D",
    R"F1802d90d0T()F1802d90d0T",
    R"F1802d90d0F(15: return DAT_1803da530 != 0;)F1802d90d0F",
    R"F1802d90d0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da530.)F1802d90d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d90d0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d90d0", "__scrt_is_ucrt_dll_in_use");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da530.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1803da530", static_cast<const void*>(&image::DAT_1803da530));
    // body sha256: b7999cf803f03dea6749784aa658c087f0bbd08328e24d793512ffcd876d6056
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("bool __scrt_is_ucrt_dll_in_use(void)");
        {
            trace.statement("return DAT_1803da530 != 0;");
        }
    return kFunction_0x1802d90d0;
}

// 0x1802d90dc FUN_1802d90dc
// source: re/dump/decompile/0x1802d90dc_FUN_1802d90dc.c
// size: 5 bytes; thunk: false
// body sha256: 020840f208ae7263cb1f7e799e11149efbaf06e29dd54960dfe5f7c1acf908dc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d90dc{
    "0x1802d90dc",
    "FUN_1802d90dc",
    R"F1802d90dcS(undefined FUN_1802d90dc())F1802d90dcS",
    R"B1802d90dc(// 0x1802d90dc  FUN_1802d90dc
// size=5 thunk=false
// signature: undefined FUN_1802d90dc()
// status: ok


void FUN_1802d90dc(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(param_1);
  return;
}


)B1802d90dc",
    "020840f208ae7263cb1f7e799e11149efbaf06e29dd54960dfe5f7c1acf908dc",
    R"F1802d90dcC()F1802d90dcC",
    R"F1802d90dcD()F1802d90dcD",
    R"F1802d90dcT()F1802d90dcT",
    R"F1802d90dcF(14: return;)F1802d90dcF",
    R"F1802d90dcU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: resolve the indirect call in body 12: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 13: (*pcVar1)(param_1);.)F1802d90dcU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d90dc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d90dc", "FUN_1802d90dc");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint32_t param_1{};
    [[maybe_unused]] void* * pcVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: resolve the indirect call in body 12: pcVar1 = (code *)swi(0x29);.
    // TODO: resolve the indirect call in body 13: (*pcVar1)(param_1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("swi", 0x29);
    // body sha256: 020840f208ae7263cb1f7e799e11149efbaf06e29dd54960dfe5f7c1acf908dc
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("code *pcVar1;");
            trace.statement("pcVar1 = (code *)swi(0x29);");
            trace.statement("(*pcVar1)(param_1);");
            trace.statement("return;");
        }
    return kFunction_0x1802d90dc;
}

// 0x1802d90e4 FUN_1802d90e4
// source: re/dump/decompile/0x1802d90e4_FUN_1802d90e4.c
// size: 175 bytes; thunk: false
// body sha256: 1911e625a970ca2e01923b6c68fe9f5641ea519c3f8f361653be424f3b304975
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d90e4{
    "0x1802d90e4",
    "FUN_1802d90e4",
    R"F1802d90e4S(undefined FUN_1802d90e4())F1802d90e4S",
    R"B1802d90e4(// 0x1802d90e4  FUN_1802d90e4
// size=175 thunk=false
// signature: undefined FUN_1802d90e4()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802d90e4(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  LARGE_INTEGER local_res10;
  _FILETIME local_18 [2];
  
  if (DAT_1803da4c0 == 0x2b992ddfa232) {
    local_res8.dwLowDateTime = 0;
    local_res8.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res8);
    local_18[0] = local_res8;
    DVar1 = GetCurrentThreadId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res10);
    DAT_1803da4c0 =
         ((ulonglong)local_res10.s.LowPart << 0x20 ^
          CONCAT44(local_res10.s.HighPart,local_res10.s.LowPart) ^ (ulonglong)local_18[0] ^
         (ulonglong)local_18) & 0xffffffffffff;
    if (DAT_1803da4c0 == 0x2b992ddfa232) {
      DAT_1803da4c0 = 0x2b992ddfa233;
    }
  }
  _DAT_1803da500 = ~DAT_1803da4c0;
  return;
}


)B1802d90e4",
    "1911e625a970ca2e01923b6c68fe9f5641ea519c3f8f361653be424f3b304975",
    R"F1802d90e4C()F1802d90e4C",
    R"F1802d90e4D(DAT_1803da4c0
_DAT_1803da500)F1802d90e4D",
    R"F1802d90e4T()F1802d90e4T",
    R"F1802d90e4F(17: if (DAT_1803da4c0 == 0x2b992ddfa232) {
31: if (DAT_1803da4c0 == 0x2b992ddfa232) {
36: return;)F1802d90e4F",
    R"F1802d90e4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference _DAT_1803da500.)F1802d90e4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d90e4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d90e4", "FUN_1802d90e4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint32_t DVar1{};
    [[maybe_unused]] std::uint64_t local_res8{};
    [[maybe_unused]] std::uint64_t local_res10{};
    [[maybe_unused]] std::uint64_t local_18[2]{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da4c0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for _DAT_1803da500.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: call arguments not type-recovered for CONCAT44: local_res10.s.HighPart,local_res10.s.LowPart [reason: unknown aggregate layout]
    trace.call_arguments("GetSystemTimeAsFileTime", &local_res8);
    trace.call_arguments("GetCurrentThreadId");
    trace.call_arguments("GetCurrentProcessId");
    trace.call_arguments("QueryPerformanceCounter", &local_res10);
    trace.data_ref("DAT_1803da4c0", static_cast<const void*>(&image::DAT_1803da4c0));
    trace.data_ref("_DAT_1803da500", static_cast<const void*>(&image::_DAT_1803da500));
    // body sha256: 1911e625a970ca2e01923b6c68fe9f5641ea519c3f8f361653be424f3b304975
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DWORD DVar1;");
            trace.statement("_FILETIME local_res8;");
            trace.statement("LARGE_INTEGER local_res10;");
            trace.statement("_FILETIME local_18 [2];");
            if (trace.checked_condition("if (DAT_1803da4c0 == 0x2b992ddfa232)", [&]() -> bool { return static_cast<bool>(image::DAT_1803da4c0 == 0x2b992ddfa232); })) {
                trace.statement("local_res8.dwLowDateTime = 0;");
                trace.statement("local_res8.dwHighDateTime = 0;");
                trace.statement("GetSystemTimeAsFileTime(&local_res8);");
                trace.statement("local_18[0] = local_res8;");
                trace.statement("DVar1 = GetCurrentThreadId();");
                trace.statement("local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);");
                trace.statement("DVar1 = GetCurrentProcessId();");
                trace.statement("local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);");
                trace.statement("QueryPerformanceCounter(&local_res10);");
                trace.statement("DAT_1803da4c0 =");
                trace.statement("((ulonglong)local_res10.s.LowPart << 0x20 ^");
                trace.statement("CONCAT44(local_res10.s.HighPart,local_res10.s.LowPart) ^ (ulonglong)local_18[0] ^");
                trace.statement("(ulonglong)local_18) & 0xffffffffffff;");
                if (trace.checked_condition("if (DAT_1803da4c0 == 0x2b992ddfa232)", [&]() -> bool { return static_cast<bool>(image::DAT_1803da4c0 == 0x2b992ddfa232); })) {
                    trace.statement("DAT_1803da4c0 = 0x2b992ddfa233;");
                }
            }
            trace.statement("_DAT_1803da500 = ~DAT_1803da4c0;");
            trace.statement("return;");
        }
    return kFunction_0x1802d90e4;
}

// 0x1802d9194 FUN_1802d9194
// source: re/dump/decompile/0x1802d9194_FUN_1802d9194.c
// size: 14 bytes; thunk: false
// body sha256: cd9e475e28a8f7f0da9e8be613e4ba08ea5be2679739d9bbe7af20324f8d326e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9194{
    "0x1802d9194",
    "FUN_1802d9194",
    R"F1802d9194S(undefined FUN_1802d9194())F1802d9194S",
    R"B1802d9194(// 0x1802d9194  FUN_1802d9194
// size=14 thunk=false
// signature: undefined FUN_1802d9194()
// status: ok


void FUN_1802d9194(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001802d919b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_1803f8fb0);
  return;
}


)B1802d9194",
    "cd9e475e28a8f7f0da9e8be613e4ba08ea5be2679739d9bbe7af20324f8d326e",
    R"F1802d9194C()F1802d9194C",
    R"F1802d9194D(DAT_1803f8fb0)F1802d9194D",
    R"F1802d9194T()F1802d9194T",
    R"F1802d9194F(13: return;)F1802d9194F",
    R"F1802d9194U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803f8fb0.)F1802d9194U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9194() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9194", "FUN_1802d9194");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803f8fb0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("InitializeSListHead", &image::DAT_1803f8fb0);
    trace.data_ref("DAT_1803f8fb0", static_cast<const void*>(&image::DAT_1803f8fb0));
    // body sha256: cd9e475e28a8f7f0da9e8be613e4ba08ea5be2679739d9bbe7af20324f8d326e
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("InitializeSListHead(&DAT_1803f8fb0);");
            trace.statement("return;");
        }
    return kFunction_0x1802d9194;
}

// 0x1802d91a4 FUN_1802d91a4
// source: re/dump/decompile/0x1802d91a4_FUN_1802d91a4.c
// size: 12 bytes; thunk: false
// body sha256: 2ab81c9a64faa2dcc7f96cd0e327fc60853939cc55dec7e4ab3da1fb89aec648
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d91a4{
    "0x1802d91a4",
    "FUN_1802d91a4",
    R"F1802d91a4S(undefined FUN_1802d91a4())F1802d91a4S",
    R"B1802d91a4(// 0x1802d91a4  FUN_1802d91a4
// size=12 thunk=false
// signature: undefined FUN_1802d91a4()
// status: ok


void FUN_1802d91a4(void)

{
  __std_type_info_destroy_list(&DAT_1803f8fb0);
  return;
}


)B1802d91a4",
    "2ab81c9a64faa2dcc7f96cd0e327fc60853939cc55dec7e4ab3da1fb89aec648",
    R"F1802d91a4C()F1802d91a4C",
    R"F1802d91a4D(DAT_1803f8fb0)F1802d91a4D",
    R"F1802d91a4T()F1802d91a4T",
    R"F1802d91a4F(11: return;)F1802d91a4F",
    R"F1802d91a4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803f8fb0.)F1802d91a4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d91a4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d91a4", "FUN_1802d91a4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803f8fb0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("__std_type_info_destroy_list", &image::DAT_1803f8fb0);
    trace.data_ref("DAT_1803f8fb0", static_cast<const void*>(&image::DAT_1803f8fb0));
    // body sha256: 2ab81c9a64faa2dcc7f96cd0e327fc60853939cc55dec7e4ab3da1fb89aec648
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("__std_type_info_destroy_list(&DAT_1803f8fb0);");
            trace.statement("return;");
        }
    return kFunction_0x1802d91a4;
}

// 0x1802d91b0 FUN_1802d91b0
// source: re/dump/decompile/0x1802d91b0_FUN_1802d91b0.c
// size: 27 bytes; thunk: false
// body sha256: c083d6c7d81d45a151c7b8e6963ce56cb0b8cf554e33133bc13a8a7ace90c1e2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d91b0{
    "0x1802d91b0",
    "FUN_1802d91b0",
    R"F1802d91b0S(undefined FUN_1802d91b0())F1802d91b0S",
    R"B1802d91b0(// 0x1802d91b0  FUN_1802d91b0
// size=27 thunk=false
// signature: undefined FUN_1802d91b0()
// status: ok


void FUN_1802d91b0(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_180012990();
  *puVar1 = *puVar1 | 0x24;
  puVar1 = (ulonglong *)FUN_1800129a0();
  *puVar1 = *puVar1 | 2;
  return;
}


)B1802d91b0",
    "c083d6c7d81d45a151c7b8e6963ce56cb0b8cf554e33133bc13a8a7ace90c1e2",
    R"F1802d91b0C(FUN_180012990
FUN_1800129a0)F1802d91b0C",
    R"F1802d91b0D()F1802d91b0D",
    R"F1802d91b0T()F1802d91b0T",
    R"F1802d91b0F(16: return;)F1802d91b0F",
    R"F1802d91b0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d91b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d91b0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d91b0", "FUN_1802d91b0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t * puVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180012990");
    trace.call_arguments("FUN_1800129a0");
    trace.call_target("FUN_180012990", reinterpret_cast<const void*>(&image::FUN_180012990));
    trace.call_target("FUN_1800129a0", reinterpret_cast<const void*>(&image::FUN_1800129a0));
    // body sha256: c083d6c7d81d45a151c7b8e6963ce56cb0b8cf554e33133bc13a8a7ace90c1e2
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("ulonglong *puVar1;");
            trace.statement("puVar1 = (ulonglong *)FUN_180012990();");
            trace.statement("*puVar1 = *puVar1 | 0x24;");
            trace.statement("puVar1 = (ulonglong *)FUN_1800129a0();");
            trace.statement("*puVar1 = *puVar1 | 2;");
            trace.statement("return;");
        }
    return kFunction_0x1802d91b0;
}

// 0x1802d91cc FUN_1802d91cc
// source: re/dump/decompile/0x1802d91cc_FUN_1802d91cc.c
// size: 8 bytes; thunk: false
// body sha256: db9419ef853a7c59d37cedd9e3a60504e0fa6757b2a024e0565f2bfedddf3be2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d91cc{
    "0x1802d91cc",
    "FUN_1802d91cc",
    R"F1802d91ccS(undefined FUN_1802d91cc())F1802d91ccS",
    R"B1802d91cc(// 0x1802d91cc  FUN_1802d91cc
// size=8 thunk=false
// signature: undefined FUN_1802d91cc()
// status: ok


undefined ** FUN_1802d91cc(void)

{
  return &PTR_tls_callback_0_18030fbd0;
}


)B1802d91cc",
    "db9419ef853a7c59d37cedd9e3a60504e0fa6757b2a024e0565f2bfedddf3be2",
    R"F1802d91ccC()F1802d91ccC",
    R"F1802d91ccD(PTR_tls_callback_0_18030fbd0)F1802d91ccD",
    R"F1802d91ccT()F1802d91ccT",
    R"F1802d91ccF(10: return &PTR_tls_callback_0_18030fbd0;)F1802d91ccF",
    R"F1802d91ccU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference PTR_tls_callback_0_18030fbd0.)F1802d91ccU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d91cc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d91cc", "FUN_1802d91cc");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for PTR_tls_callback_0_18030fbd0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("PTR_tls_callback_0_18030fbd0", static_cast<const void*>(&image::PTR_tls_callback_0_18030fbd0));
    // body sha256: db9419ef853a7c59d37cedd9e3a60504e0fa6757b2a024e0565f2bfedddf3be2
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return &PTR_tls_callback_0_18030fbd0;");
        }
    return kFunction_0x1802d91cc;
}

// 0x1802d91d4 FUN_1802d91d4
// source: re/dump/decompile/0x1802d91d4_FUN_1802d91d4.c
// size: 60 bytes; thunk: false
// body sha256: 09f041f0bb66832abe2a3859101965304c3883e4566ea1c319192e02254d1e89
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d91d4{
    "0x1802d91d4",
    "FUN_1802d91d4",
    R"F1802d91d4S(undefined FUN_1802d91d4())F1802d91d4S",
    R"B1802d91d4(// 0x1802d91d4  FUN_1802d91d4
// size=60 thunk=false
// signature: undefined FUN_1802d91d4()
// status: ok


void FUN_1802d91d4(void)

{
  longlong *plVar1;
  
  for (plVar1 = &DAT_1803877d8; plVar1 < &DAT_1803877d8; plVar1 = plVar1 + 1) {
    if (*plVar1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_18030cca8)();
    }
  }
  return;
}


)B1802d91d4",
    "09f041f0bb66832abe2a3859101965304c3883e4566ea1c319192e02254d1e89",
    R"F1802d91d4C()F1802d91d4C",
    R"F1802d91d4D(PTR__guard_dispatch_icall_18030cca8
DAT_1803877d8)F1802d91d4D",
    R"F1802d91d4T()F1802d91d4T",
    R"F1802d91d4F(12: for (plVar1 = &DAT_1803877d8; plVar1 < &DAT_1803877d8; plVar1 = plVar1 + 1) {
13: if (*plVar1 != 0) {
17: return;)F1802d91d4F",
    R"F1802d91d4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference PTR__guard_dispatch_icall_18030cca8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803877d8.
TODO: resolve the indirect call in body 14: (*(code *)PTR__guard_dispatch_icall_18030cca8)();.)F1802d91d4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d91d4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d91d4", "FUN_1802d91d4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t * plVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for PTR__guard_dispatch_icall_18030cca8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803877d8.
    // TODO: resolve the indirect call in body 14: (*(code *)PTR__guard_dispatch_icall_18030cca8)();.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: for (plVar1 = &DAT_1803877d8; plVar1 < &DAT_1803877d8; plVar1 = plVar1 + 1) [reason: unresolved global storage/width]
    trace.data_ref("PTR__guard_dispatch_icall_18030cca8", static_cast<const void*>(&image::PTR__guard_dispatch_icall_18030cca8));
    trace.data_ref("DAT_1803877d8", static_cast<const void*>(&image::DAT_1803877d8));
    // body sha256: 09f041f0bb66832abe2a3859101965304c3883e4566ea1c319192e02254d1e89
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            for (auto loop = trace.loop("for (plVar1 = &DAT_1803877d8; plVar1 < &DAT_1803877d8; plVar1 = plVar1 + 1)"); loop.next(); ) {
                if (trace.checked_condition("if (*plVar1 != 0)", [&]() -> bool { return static_cast<bool>(*plVar1 != 0); })) {
                    trace.statement("(*(code *)PTR__guard_dispatch_icall_18030cca8)();");
                }
            }
            trace.statement("return;");
        }
    return kFunction_0x1802d91d4;
}

// 0x1802d9210 FUN_1802d9210
// source: re/dump/decompile/0x1802d9210_FUN_1802d9210.c
// size: 60 bytes; thunk: false
// body sha256: d69cfced2216ba3962214d9a01f33f05c6400d9f90a938402477c2755035ff9e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9210{
    "0x1802d9210",
    "FUN_1802d9210",
    R"F1802d9210S(undefined FUN_1802d9210())F1802d9210S",
    R"B1802d9210(// 0x1802d9210  FUN_1802d9210
// size=60 thunk=false
// signature: undefined FUN_1802d9210()
// status: ok


void FUN_1802d9210(void)

{
  longlong *plVar1;
  
  for (plVar1 = &DAT_1803877e8; plVar1 < &DAT_1803877e8; plVar1 = plVar1 + 1) {
    if (*plVar1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_18030cca8)();
    }
  }
  return;
}


)B1802d9210",
    "d69cfced2216ba3962214d9a01f33f05c6400d9f90a938402477c2755035ff9e",
    R"F1802d9210C()F1802d9210C",
    R"F1802d9210D(PTR__guard_dispatch_icall_18030cca8
DAT_1803877e8)F1802d9210D",
    R"F1802d9210T()F1802d9210T",
    R"F1802d9210F(12: for (plVar1 = &DAT_1803877e8; plVar1 < &DAT_1803877e8; plVar1 = plVar1 + 1) {
13: if (*plVar1 != 0) {
17: return;)F1802d9210F",
    R"F1802d9210U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference PTR__guard_dispatch_icall_18030cca8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803877e8.
TODO: resolve the indirect call in body 14: (*(code *)PTR__guard_dispatch_icall_18030cca8)();.)F1802d9210U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9210() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9210", "FUN_1802d9210");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t * plVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for PTR__guard_dispatch_icall_18030cca8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803877e8.
    // TODO: resolve the indirect call in body 14: (*(code *)PTR__guard_dispatch_icall_18030cca8)();.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: for (plVar1 = &DAT_1803877e8; plVar1 < &DAT_1803877e8; plVar1 = plVar1 + 1) [reason: unresolved global storage/width]
    trace.data_ref("PTR__guard_dispatch_icall_18030cca8", static_cast<const void*>(&image::PTR__guard_dispatch_icall_18030cca8));
    trace.data_ref("DAT_1803877e8", static_cast<const void*>(&image::DAT_1803877e8));
    // body sha256: d69cfced2216ba3962214d9a01f33f05c6400d9f90a938402477c2755035ff9e
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            for (auto loop = trace.loop("for (plVar1 = &DAT_1803877e8; plVar1 < &DAT_1803877e8; plVar1 = plVar1 + 1)"); loop.next(); ) {
                if (trace.checked_condition("if (*plVar1 != 0)", [&]() -> bool { return static_cast<bool>(*plVar1 != 0); })) {
                    trace.statement("(*(code *)PTR__guard_dispatch_icall_18030cca8)();");
                }
            }
            trace.statement("return;");
        }
    return kFunction_0x1802d9210;
}

// 0x1802d9250 VCRUNTIME140_1.DLL::__CxxFrameHandler4
// source: re/dump/decompile/0x1802d9250_VCRUNTIME140_1_DLL____CxxFrameHandler4.c
// size: 6 bytes; thunk: true
// body sha256: 5029792ee91bcecbad131464c4932dd2ac4d94958377652a82f84b6e2eb5ff0d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9250{
    "0x1802d9250",
    "VCRUNTIME140_1.DLL::__CxxFrameHandler4",
    R"F1802d9250S(undefined __CxxFrameHandler4())F1802d9250S",
    R"B1802d9250(// 0x1802d9250  VCRUNTIME140_1.DLL::__CxxFrameHandler4
// size=6 thunk=true
// signature: undefined __CxxFrameHandler4()
// status: ok


void __CxxFrameHandler4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001802d9250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __CxxFrameHandler4();
  return;
}


)B1802d9250",
    "5029792ee91bcecbad131464c4932dd2ac4d94958377652a82f84b6e2eb5ff0d",
    R"F1802d9250C()F1802d9250C",
    R"F1802d9250D()F1802d9250D",
    R"F1802d9250T()F1802d9250T",
    R"F1802d9250F(13: return;)F1802d9250F",
    R"F1802d9250U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9250U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9250() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9250", "VCRUNTIME140_1.DLL::__CxxFrameHandler4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("__CxxFrameHandler4");
    // body sha256: 5029792ee91bcecbad131464c4932dd2ac4d94958377652a82f84b6e2eb5ff0d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void __CxxFrameHandler4(void)");
        {
            trace.statement("__CxxFrameHandler4();");
            trace.statement("return;");
        }
    return kFunction_0x1802d9250;
}

// 0x1802d9256 VCRUNTIME140.DLL::__C_specific_handler
// source: re/dump/decompile/0x1802d9256_VCRUNTIME140_DLL____C_specific_handler.c
// size: 6 bytes; thunk: true
// body sha256: 3527a3f4169c7feace9f1583ad2464d0fbe01b0126e7af24571015a3fa73f832
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9256{
    "0x1802d9256",
    "VCRUNTIME140.DLL::__C_specific_handler",
    R"F1802d9256S(EXCEPTION_DISPOSITION __C_specific_handler(_EXCEPTION_RECORD * ExceptionRecord, void * EstablisherFrame, _CONTEXT * ContextRecord, _DISPATCHER_CONTEXT * DispatcherContext))F1802d9256S",
    R"B1802d9256(// 0x1802d9256  VCRUNTIME140.DLL::__C_specific_handler
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


)B1802d9256",
    "3527a3f4169c7feace9f1583ad2464d0fbe01b0126e7af24571015a3fa73f832",
    R"F1802d9256C()F1802d9256C",
    R"F1802d9256D()F1802d9256D",
    R"F1802d9256T()F1802d9256T",
    R"F1802d9256F(20: return EVar1;)F1802d9256F",
    R"F1802d9256U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9256U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9256() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9256", "VCRUNTIME140.DLL::__C_specific_handler");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint8_t * ExceptionRecord{};
    [[maybe_unused]] void * EstablisherFrame{};
    [[maybe_unused]] std::uint8_t * ContextRecord{};
    [[maybe_unused]] std::uint8_t * DispatcherContext{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("__C_specific_handler", ExceptionRecord, EstablisherFrame, ContextRecord, DispatcherContext);
    // body sha256: 3527a3f4169c7feace9f1583ad2464d0fbe01b0126e7af24571015a3fa73f832
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("EXCEPTION_DISPOSITION");
        trace.statement("__C_specific_handler");
        trace.statement("(_EXCEPTION_RECORD *ExceptionRecord,void *EstablisherFrame,_CONTEXT *ContextRecord,");
        trace.statement("_DISPATCHER_CONTEXT *DispatcherContext)");
        {
            trace.statement("EXCEPTION_DISPOSITION EVar1;");
            trace.statement("EVar1 = __C_specific_handler(ExceptionRecord,EstablisherFrame,ContextRecord,DispatcherContext);");
            trace.statement("return EVar1;");
        }
    return kFunction_0x1802d9256;
}

// 0x1802d925c VCRUNTIME140.DLL::vfunc_shared_1802d925c
// source: re/dump/decompile/0x1802d925c_VCRUNTIME140_DLL__vfunc_shared_1802d925c.c
// size: 6 bytes; thunk: true
// body sha256: a9db5835bf3481137939ee3a837401cc86a06fe1ee8e12a8f7091504e7732540
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d925c{
    "0x1802d925c",
    "VCRUNTIME140.DLL::vfunc_shared_1802d925c",
    R"F1802d925cS(undefined vfunc_shared_1802d925c())F1802d925cS",
    R"B1802d925c(// 0x1802d925c  VCRUNTIME140.DLL::vfunc_shared_1802d925c
// size=6 thunk=true
// signature: undefined vfunc_shared_1802d925c()
// status: ok


void vfunc_shared_1802d925c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001802d925c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _purecall();
  return;
}


)B1802d925c",
    "a9db5835bf3481137939ee3a837401cc86a06fe1ee8e12a8f7091504e7732540",
    R"F1802d925cC()F1802d925cC",
    R"F1802d925cD()F1802d925cD",
    R"F1802d925cT()F1802d925cT",
    R"F1802d925cF(13: return;)F1802d925cF",
    R"F1802d925cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d925cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d925c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d925c", "VCRUNTIME140.DLL::vfunc_shared_1802d925c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_purecall");
    // body sha256: a9db5835bf3481137939ee3a837401cc86a06fe1ee8e12a8f7091504e7732540
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void vfunc_shared_1802d925c(void)");
        {
            trace.statement("_purecall();");
            trace.statement("return;");
        }
    return kFunction_0x1802d925c;
}

// 0x1802d9262 VCRUNTIME140.DLL::memcpy
// source: re/dump/decompile/0x1802d9262_VCRUNTIME140_DLL__memcpy.c
// size: 6 bytes; thunk: true
// body sha256: 6ce5a33c167531cff77365597739f3abe416f8df987b3cd8b947ee548ae8a5ae
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9262{
    "0x1802d9262",
    "VCRUNTIME140.DLL::memcpy",
    R"F1802d9262S(void * __cdecl memcpy(void * _Dst, void * _Src, size_t _Size))F1802d9262S",
    R"B1802d9262(// 0x1802d9262  VCRUNTIME140.DLL::memcpy
// size=6 thunk=true
// signature: void * __cdecl memcpy(void * _Dst, void * _Src, size_t _Size)
// status: ok


void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d9262. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}


)B1802d9262",
    "6ce5a33c167531cff77365597739f3abe416f8df987b3cd8b947ee548ae8a5ae",
    R"F1802d9262C()F1802d9262C",
    R"F1802d9262D()F1802d9262D",
    R"F1802d9262T()F1802d9262T",
    R"F1802d9262F(15: return pvVar1;)F1802d9262F",
    R"F1802d9262U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9262U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9262() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9262", "VCRUNTIME140.DLL::memcpy");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] void * _Dst{};
    [[maybe_unused]] void * _Src{};
    [[maybe_unused]] std::size_t _Size{};
    [[maybe_unused]] void * pvVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: call arguments not type-recovered for memcpy: void *_Dst,void *_Src,size_t _Size [reason: ambiguous operand type]
    trace.call_arguments("memcpy", _Dst, _Src, _Size);
    // body sha256: 6ce5a33c167531cff77365597739f3abe416f8df987b3cd8b947ee548ae8a5ae
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)");
        {
            trace.statement("void *pvVar1;");
            trace.statement("pvVar1 = memcpy(_Dst,_Src,_Size);");
            trace.statement("return pvVar1;");
        }
    return kFunction_0x1802d9262;
}

// 0x1802d9268 VCRUNTIME140.DLL::memcmp
// source: re/dump/decompile/0x1802d9268_VCRUNTIME140_DLL__memcmp.c
// size: 6 bytes; thunk: true
// body sha256: 6ae0a041addf266674f8eff19ddbbf6aa17a31b7de120a056ccdea1e9497bd76
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9268{
    "0x1802d9268",
    "VCRUNTIME140.DLL::memcmp",
    R"F1802d9268S(int __cdecl memcmp(void * _Buf1, void * _Buf2, size_t _Size))F1802d9268S",
    R"B1802d9268(// 0x1802d9268  VCRUNTIME140.DLL::memcmp
// size=6 thunk=true
// signature: int __cdecl memcmp(void * _Buf1, void * _Buf2, size_t _Size)
// status: ok


int __cdecl memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d9268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = memcmp(_Buf1,_Buf2,_Size);
  return iVar1;
}


)B1802d9268",
    "6ae0a041addf266674f8eff19ddbbf6aa17a31b7de120a056ccdea1e9497bd76",
    R"F1802d9268C()F1802d9268C",
    R"F1802d9268D()F1802d9268D",
    R"F1802d9268T()F1802d9268T",
    R"F1802d9268F(15: return iVar1;)F1802d9268F",
    R"F1802d9268U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9268U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9268() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9268", "VCRUNTIME140.DLL::memcmp");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] void * _Buf1{};
    [[maybe_unused]] void * _Buf2{};
    [[maybe_unused]] std::size_t _Size{};
    [[maybe_unused]] std::int32_t iVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("memcmp", _Buf1, _Buf2, _Size);
    // body sha256: 6ae0a041addf266674f8eff19ddbbf6aa17a31b7de120a056ccdea1e9497bd76
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("int __cdecl memcmp(void *_Buf1,void *_Buf2,size_t _Size)");
        {
            trace.statement("int iVar1;");
            trace.statement("iVar1 = memcmp(_Buf1,_Buf2,_Size);");
            trace.statement("return iVar1;");
        }
    return kFunction_0x1802d9268;
}

// 0x1802d926e VCRUNTIME140.DLL::memchr
// source: re/dump/decompile/0x1802d926e_VCRUNTIME140_DLL__memchr.c
// size: 6 bytes; thunk: true
// body sha256: 572be384c0b4cc54d1aedf09ca7d460e4827b7f772b0ef2a9b6d1f5bc3faae22
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d926e{
    "0x1802d926e",
    "VCRUNTIME140.DLL::memchr",
    R"F1802d926eS(void * __cdecl memchr(void * _Buf, int _Val, size_t _MaxCount))F1802d926eS",
    R"B1802d926e(// 0x1802d926e  VCRUNTIME140.DLL::memchr
// size=6 thunk=true
// signature: void * __cdecl memchr(void * _Buf, int _Val, size_t _MaxCount)
// status: ok


void * __cdecl memchr(void *_Buf,int _Val,size_t _MaxCount)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d926e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memchr(_Buf,_Val,_MaxCount);
  return pvVar1;
}


)B1802d926e",
    "572be384c0b4cc54d1aedf09ca7d460e4827b7f772b0ef2a9b6d1f5bc3faae22",
    R"F1802d926eC()F1802d926eC",
    R"F1802d926eD()F1802d926eD",
    R"F1802d926eT()F1802d926eT",
    R"F1802d926eF(15: return pvVar1;)F1802d926eF",
    R"F1802d926eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d926eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d926e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d926e", "VCRUNTIME140.DLL::memchr");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] void * _Buf{};
    [[maybe_unused]] std::int32_t _Val{};
    [[maybe_unused]] std::size_t _MaxCount{};
    [[maybe_unused]] void * pvVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: call arguments not type-recovered for memchr: void *_Buf,int _Val,size_t _MaxCount [reason: ambiguous operand type]
    trace.call_arguments("memchr", _Buf, _Val, _MaxCount);
    // body sha256: 572be384c0b4cc54d1aedf09ca7d460e4827b7f772b0ef2a9b6d1f5bc3faae22
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void * __cdecl memchr(void *_Buf,int _Val,size_t _MaxCount)");
        {
            trace.statement("void *pvVar1;");
            trace.statement("pvVar1 = memchr(_Buf,_Val,_MaxCount);");
            trace.statement("return pvVar1;");
        }
    return kFunction_0x1802d926e;
}

// 0x1802d9274 VCRUNTIME140.DLL::memmove
// source: re/dump/decompile/0x1802d9274_VCRUNTIME140_DLL__memmove.c
// size: 6 bytes; thunk: true
// body sha256: 61737c2dd324a8debfc201a62379febc5e3a5173ade73cfbf86762d67982f028
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9274{
    "0x1802d9274",
    "VCRUNTIME140.DLL::memmove",
    R"F1802d9274S(void * __cdecl memmove(void * _Dst, void * _Src, size_t _Size))F1802d9274S",
    R"B1802d9274(// 0x1802d9274  VCRUNTIME140.DLL::memmove
// size=6 thunk=true
// signature: void * __cdecl memmove(void * _Dst, void * _Src, size_t _Size)
// status: ok


void * __cdecl memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d9274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memmove(_Dst,_Src,_Size);
  return pvVar1;
}


)B1802d9274",
    "61737c2dd324a8debfc201a62379febc5e3a5173ade73cfbf86762d67982f028",
    R"F1802d9274C()F1802d9274C",
    R"F1802d9274D()F1802d9274D",
    R"F1802d9274T()F1802d9274T",
    R"F1802d9274F(15: return pvVar1;)F1802d9274F",
    R"F1802d9274U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9274U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9274() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9274", "VCRUNTIME140.DLL::memmove");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] void * _Dst{};
    [[maybe_unused]] void * _Src{};
    [[maybe_unused]] std::size_t _Size{};
    [[maybe_unused]] void * pvVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: call arguments not type-recovered for memmove: void *_Dst,void *_Src,size_t _Size [reason: ambiguous operand type]
    trace.call_arguments("memmove", _Dst, _Src, _Size);
    // body sha256: 61737c2dd324a8debfc201a62379febc5e3a5173ade73cfbf86762d67982f028
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void * __cdecl memmove(void *_Dst,void *_Src,size_t _Size)");
        {
            trace.statement("void *pvVar1;");
            trace.statement("pvVar1 = memmove(_Dst,_Src,_Size);");
            trace.statement("return pvVar1;");
        }
    return kFunction_0x1802d9274;
}

// 0x1802d927a VCRUNTIME140.DLL::memset
// source: re/dump/decompile/0x1802d927a_VCRUNTIME140_DLL__memset.c
// size: 6 bytes; thunk: true
// body sha256: d22150723f78c7d27d92e97276bad47c675376fd65eb3c66e4ed8c4a55989ba0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d927a{
    "0x1802d927a",
    "VCRUNTIME140.DLL::memset",
    R"F1802d927aS(void * __cdecl memset(void * _Dst, int _Val, size_t _Size))F1802d927aS",
    R"B1802d927a(// 0x1802d927a  VCRUNTIME140.DLL::memset
// size=6 thunk=true
// signature: void * __cdecl memset(void * _Dst, int _Val, size_t _Size)
// status: ok


void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d927a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}


)B1802d927a",
    "d22150723f78c7d27d92e97276bad47c675376fd65eb3c66e4ed8c4a55989ba0",
    R"F1802d927aC()F1802d927aC",
    R"F1802d927aD()F1802d927aD",
    R"F1802d927aT()F1802d927aT",
    R"F1802d927aF(15: return pvVar1;)F1802d927aF",
    R"F1802d927aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d927aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d927a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d927a", "VCRUNTIME140.DLL::memset");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] void * _Dst{};
    [[maybe_unused]] std::int32_t _Val{};
    [[maybe_unused]] std::size_t _Size{};
    [[maybe_unused]] void * pvVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: call arguments not type-recovered for memset: void *_Dst,int _Val,size_t _Size [reason: ambiguous operand type]
    trace.call_arguments("memset", _Dst, _Val, _Size);
    // body sha256: d22150723f78c7d27d92e97276bad47c675376fd65eb3c66e4ed8c4a55989ba0
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void * __cdecl memset(void *_Dst,int _Val,size_t _Size)");
        {
            trace.statement("void *pvVar1;");
            trace.statement("pvVar1 = memset(_Dst,_Val,_Size);");
            trace.statement("return pvVar1;");
        }
    return kFunction_0x1802d927a;
}

// 0x1802d9280 VCRUNTIME140.DLL::__current_exception
// source: re/dump/decompile/0x1802d9280_VCRUNTIME140_DLL____current_exception.c
// size: 6 bytes; thunk: true
// body sha256: 04509cb691caf5a5864625026a32fd8d4240e236928c442131b617557eb84604
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9280{
    "0x1802d9280",
    "VCRUNTIME140.DLL::__current_exception",
    R"F1802d9280S(undefined __current_exception())F1802d9280S",
    R"B1802d9280(// 0x1802d9280  VCRUNTIME140.DLL::__current_exception
// size=6 thunk=true
// signature: undefined __current_exception()
// status: ok


void __current_exception(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001802d9280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception();
  return;
}


)B1802d9280",
    "04509cb691caf5a5864625026a32fd8d4240e236928c442131b617557eb84604",
    R"F1802d9280C()F1802d9280C",
    R"F1802d9280D()F1802d9280D",
    R"F1802d9280T()F1802d9280T",
    R"F1802d9280F(13: return;)F1802d9280F",
    R"F1802d9280U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9280U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9280() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9280", "VCRUNTIME140.DLL::__current_exception");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("__current_exception");
    // body sha256: 04509cb691caf5a5864625026a32fd8d4240e236928c442131b617557eb84604
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void __current_exception(void)");
        {
            trace.statement("__current_exception();");
            trace.statement("return;");
        }
    return kFunction_0x1802d9280;
}

// 0x1802d9286 VCRUNTIME140.DLL::__current_exception_context
// source: re/dump/decompile/0x1802d9286_VCRUNTIME140_DLL____current_exception_context.c
// size: 6 bytes; thunk: true
// body sha256: f8998c738fa3cd624ab07d61d7d3f7e635d7688dea89ad2abca5f4846c4cecc0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9286{
    "0x1802d9286",
    "VCRUNTIME140.DLL::__current_exception_context",
    R"F1802d9286S(undefined __current_exception_context())F1802d9286S",
    R"B1802d9286(// 0x1802d9286  VCRUNTIME140.DLL::__current_exception_context
// size=6 thunk=true
// signature: undefined __current_exception_context()
// status: ok


void __current_exception_context(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001802d9286. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception_context();
  return;
}


)B1802d9286",
    "f8998c738fa3cd624ab07d61d7d3f7e635d7688dea89ad2abca5f4846c4cecc0",
    R"F1802d9286C()F1802d9286C",
    R"F1802d9286D()F1802d9286D",
    R"F1802d9286T()F1802d9286T",
    R"F1802d9286F(13: return;)F1802d9286F",
    R"F1802d9286U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9286U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9286() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9286", "VCRUNTIME140.DLL::__current_exception_context");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("__current_exception_context");
    // body sha256: f8998c738fa3cd624ab07d61d7d3f7e635d7688dea89ad2abca5f4846c4cecc0
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void __current_exception_context(void)");
        {
            trace.statement("__current_exception_context();");
            trace.statement("return;");
        }
    return kFunction_0x1802d9286;
}

// 0x1802d928c VCRUNTIME140.DLL::_CxxThrowException
// source: re/dump/decompile/0x1802d928c_VCRUNTIME140_DLL___CxxThrowException.c
// size: 6 bytes; thunk: true
// body sha256: ca0110737cca58ac426e5b614fd253ea5f46a540729bc0c9e549a035bce513e9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d928c{
    "0x1802d928c",
    "VCRUNTIME140.DLL::_CxxThrowException",
    R"F1802d928cS(void __stdcall _CxxThrowException(void * pExceptionObject, ThrowInfo * pThrowInfo))F1802d928cS",
    R"B1802d928c(// 0x1802d928c  VCRUNTIME140.DLL::_CxxThrowException
// size=6 thunk=true
// signature: void __stdcall _CxxThrowException(void * pExceptionObject, ThrowInfo * pThrowInfo)
// status: ok


void __stdcall _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x0001802d928c. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}


)B1802d928c",
    "ca0110737cca58ac426e5b614fd253ea5f46a540729bc0c9e549a035bce513e9",
    R"F1802d928cC()F1802d928cC",
    R"F1802d928cD()F1802d928cD",
    R"F1802d928cT()F1802d928cT",
    R"F1802d928cF(14: return;)F1802d928cF",
    R"F1802d928cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d928cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d928c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d928c", "VCRUNTIME140.DLL::_CxxThrowException");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] void * pExceptionObject{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: call arguments not type-recovered for _CxxThrowException: pExceptionObject,pThrowInfo [reason: ambiguous operand type]
    // body sha256: ca0110737cca58ac426e5b614fd253ea5f46a540729bc0c9e549a035bce513e9
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void __stdcall _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)");
        {
            trace.statement("_CxxThrowException(pExceptionObject,pThrowInfo);");
            trace.statement("return;");
        }
    return kFunction_0x1802d928c;
}

// 0x1802d9292 VCRUNTIME140.DLL::__std_type_info_destroy_list
// source: re/dump/decompile/0x1802d9292_VCRUNTIME140_DLL____std_type_info_destroy_list.c
// size: 6 bytes; thunk: true
// body sha256: f6b17154552ad4eb813682dec66625bcd014f03339e90f5f8130a51479465675
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9292{
    "0x1802d9292",
    "VCRUNTIME140.DLL::__std_type_info_destroy_list",
    R"F1802d9292S(undefined __std_type_info_destroy_list())F1802d9292S",
    R"B1802d9292(// 0x1802d9292  VCRUNTIME140.DLL::__std_type_info_destroy_list
// size=6 thunk=true
// signature: undefined __std_type_info_destroy_list()
// status: ok


void __std_type_info_destroy_list(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001802d9292. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __std_type_info_destroy_list();
  return;
}


)B1802d9292",
    "f6b17154552ad4eb813682dec66625bcd014f03339e90f5f8130a51479465675",
    R"F1802d9292C()F1802d9292C",
    R"F1802d9292D()F1802d9292D",
    R"F1802d9292T()F1802d9292T",
    R"F1802d9292F(13: return;)F1802d9292F",
    R"F1802d9292U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9292U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9292() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9292", "VCRUNTIME140.DLL::__std_type_info_destroy_list");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("__std_type_info_destroy_list");
    // body sha256: f6b17154552ad4eb813682dec66625bcd014f03339e90f5f8130a51479465675
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void __std_type_info_destroy_list(void)");
        {
            trace.statement("__std_type_info_destroy_list();");
            trace.statement("return;");
        }
    return kFunction_0x1802d9292;
}

// 0x1802d9298 API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::terminate
// source: re/dump/decompile/0x1802d9298_API_MS_WIN_CRT_RUNTIME_L1_1_0_DLL__terminate.c
// size: 6 bytes; thunk: true
// body sha256: 27234ad7f4af730120812e87e3af19aea8f6187262f49d00f56a66a4b025086d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9298{
    "0x1802d9298",
    "API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::terminate",
    R"F1802d9298S(undefined terminate())F1802d9298S",
    R"B1802d9298(// 0x1802d9298  API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::terminate
// size=6 thunk=true
// signature: undefined terminate()
// status: ok


void terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001802d9298. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  terminate();
  return;
}


)B1802d9298",
    "27234ad7f4af730120812e87e3af19aea8f6187262f49d00f56a66a4b025086d",
    R"F1802d9298C()F1802d9298C",
    R"F1802d9298D()F1802d9298D",
    R"F1802d9298T()F1802d9298T",
    R"F1802d9298F(14: return;)F1802d9298F",
    R"F1802d9298U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9298U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9298() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9298", "API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::terminate");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("terminate");
    // body sha256: 27234ad7f4af730120812e87e3af19aea8f6187262f49d00f56a66a4b025086d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void terminate(void)");
        {
            trace.statement("terminate();");
            trace.statement("return;");
        }
    return kFunction_0x1802d9298;
}

// 0x1802d929e API-MS-WIN-CRT-HEAP-L1-1-0.DLL::free
// source: re/dump/decompile/0x1802d929e_API_MS_WIN_CRT_HEAP_L1_1_0_DLL__free.c
// size: 6 bytes; thunk: true
// body sha256: c46bf36953b0fb1e46c9d28956ab24f5bcc77fabfcf872a744afa3499ae5770b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d929e{
    "0x1802d929e",
    "API-MS-WIN-CRT-HEAP-L1-1-0.DLL::free",
    R"F1802d929eS(void __cdecl free(void * _Memory))F1802d929eS",
    R"B1802d929e(// 0x1802d929e  API-MS-WIN-CRT-HEAP-L1-1-0.DLL::free
// size=6 thunk=true
// signature: void __cdecl free(void * _Memory)
// status: ok


void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x0001802d929e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}


)B1802d929e",
    "c46bf36953b0fb1e46c9d28956ab24f5bcc77fabfcf872a744afa3499ae5770b",
    R"F1802d929eC()F1802d929eC",
    R"F1802d929eD()F1802d929eD",
    R"F1802d929eT()F1802d929eT",
    R"F1802d929eF(13: return;)F1802d929eF",
    R"F1802d929eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d929eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d929e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d929e", "API-MS-WIN-CRT-HEAP-L1-1-0.DLL::free");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] void * _Memory{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", _Memory);
    // body sha256: c46bf36953b0fb1e46c9d28956ab24f5bcc77fabfcf872a744afa3499ae5770b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void __cdecl free(void *_Memory)");
        {
            trace.statement("free(_Memory);");
            trace.statement("return;");
        }
    return kFunction_0x1802d929e;
}

// 0x1802d92a4 API-MS-WIN-CRT-HEAP-L1-1-0.DLL::malloc
// source: re/dump/decompile/0x1802d92a4_API_MS_WIN_CRT_HEAP_L1_1_0_DLL__malloc.c
// size: 6 bytes; thunk: true
// body sha256: eebed3f7edb63da0914b610fd1c4ffdc52737374170877c6eb9e66b8f779ac8d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d92a4{
    "0x1802d92a4",
    "API-MS-WIN-CRT-HEAP-L1-1-0.DLL::malloc",
    R"F1802d92a4S(void * __cdecl malloc(size_t _Size))F1802d92a4S",
    R"B1802d92a4(// 0x1802d92a4  API-MS-WIN-CRT-HEAP-L1-1-0.DLL::malloc
// size=6 thunk=true
// signature: void * __cdecl malloc(size_t _Size)
// status: ok


void * __cdecl malloc(size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d92a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = malloc(_Size);
  return pvVar1;
}


)B1802d92a4",
    "eebed3f7edb63da0914b610fd1c4ffdc52737374170877c6eb9e66b8f779ac8d",
    R"F1802d92a4C()F1802d92a4C",
    R"F1802d92a4D()F1802d92a4D",
    R"F1802d92a4T()F1802d92a4T",
    R"F1802d92a4F(15: return pvVar1;)F1802d92a4F",
    R"F1802d92a4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d92a4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d92a4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d92a4", "API-MS-WIN-CRT-HEAP-L1-1-0.DLL::malloc");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::size_t _Size{};
    [[maybe_unused]] void * pvVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: call arguments not type-recovered for malloc: size_t _Size [reason: ambiguous operand type]
    trace.call_arguments("malloc", _Size);
    // body sha256: eebed3f7edb63da0914b610fd1c4ffdc52737374170877c6eb9e66b8f779ac8d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void * __cdecl malloc(size_t _Size)");
        {
            trace.statement("void *pvVar1;");
            trace.statement("pvVar1 = malloc(_Size);");
            trace.statement("return pvVar1;");
        }
    return kFunction_0x1802d92a4;
}

// 0x1802d92aa API-MS-WIN-CRT-MATH-L1-1-0.DLL::cosf
// source: re/dump/decompile/0x1802d92aa_API_MS_WIN_CRT_MATH_L1_1_0_DLL__cosf.c
// size: 6 bytes; thunk: true
// body sha256: 30a6e32e2ef8b3c38556cca1902ed76d3574c1a9cdf3f83aa9c20710dace9cb0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d92aa{
    "0x1802d92aa",
    "API-MS-WIN-CRT-MATH-L1-1-0.DLL::cosf",
    R"F1802d92aaS(float __cdecl cosf(float _X))F1802d92aaS",
    R"B1802d92aa(// 0x1802d92aa  API-MS-WIN-CRT-MATH-L1-1-0.DLL::cosf
// size=6 thunk=true
// signature: float __cdecl cosf(float _X)
// status: ok


float __cdecl cosf(float _X)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d92aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = cosf(_X);
  return fVar1;
}


)B1802d92aa",
    "30a6e32e2ef8b3c38556cca1902ed76d3574c1a9cdf3f83aa9c20710dace9cb0",
    R"F1802d92aaC()F1802d92aaC",
    R"F1802d92aaD()F1802d92aaD",
    R"F1802d92aaT()F1802d92aaT",
    R"F1802d92aaF(15: return fVar1;)F1802d92aaF",
    R"F1802d92aaU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d92aaU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d92aa() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d92aa", "API-MS-WIN-CRT-MATH-L1-1-0.DLL::cosf");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] float _X{};
    [[maybe_unused]] float fVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("cosf", _X);
    // body sha256: 30a6e32e2ef8b3c38556cca1902ed76d3574c1a9cdf3f83aa9c20710dace9cb0
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("float __cdecl cosf(float _X)");
        {
            trace.statement("float fVar1;");
            trace.statement("fVar1 = cosf(_X);");
            trace.statement("return fVar1;");
        }
    return kFunction_0x1802d92aa;
}

// 0x1802d92b0 API-MS-WIN-CRT-MATH-L1-1-0.DLL::asin
// source: re/dump/decompile/0x1802d92b0_API_MS_WIN_CRT_MATH_L1_1_0_DLL__asin.c
// size: 6 bytes; thunk: true
// body sha256: daa87e2c54e1d96fa43341c54b950805609457d5c86013ac450dfc2a49ebd341
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d92b0{
    "0x1802d92b0",
    "API-MS-WIN-CRT-MATH-L1-1-0.DLL::asin",
    R"F1802d92b0S(double __cdecl asin(double _X))F1802d92b0S",
    R"B1802d92b0(// 0x1802d92b0  API-MS-WIN-CRT-MATH-L1-1-0.DLL::asin
// size=6 thunk=true
// signature: double __cdecl asin(double _X)
// status: ok


double __cdecl asin(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d92b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = asin(_X);
  return dVar1;
}


)B1802d92b0",
    "daa87e2c54e1d96fa43341c54b950805609457d5c86013ac450dfc2a49ebd341",
    R"F1802d92b0C()F1802d92b0C",
    R"F1802d92b0D()F1802d92b0D",
    R"F1802d92b0T()F1802d92b0T",
    R"F1802d92b0F(15: return dVar1;)F1802d92b0F",
    R"F1802d92b0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d92b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d92b0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d92b0", "API-MS-WIN-CRT-MATH-L1-1-0.DLL::asin");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] double _X{};
    [[maybe_unused]] double dVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("asin", _X);
    // body sha256: daa87e2c54e1d96fa43341c54b950805609457d5c86013ac450dfc2a49ebd341
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("double __cdecl asin(double _X)");
        {
            trace.statement("double dVar1;");
            trace.statement("dVar1 = asin(_X);");
            trace.statement("return dVar1;");
        }
    return kFunction_0x1802d92b0;
}

// 0x1802d92b6 API-MS-WIN-CRT-MATH-L1-1-0.DLL::atan
// source: re/dump/decompile/0x1802d92b6_API_MS_WIN_CRT_MATH_L1_1_0_DLL__atan.c
// size: 6 bytes; thunk: true
// body sha256: 193603c11dd99f6cd3aee708903240f465f25608866811dd9608c2524a9f347a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d92b6{
    "0x1802d92b6",
    "API-MS-WIN-CRT-MATH-L1-1-0.DLL::atan",
    R"F1802d92b6S(double __cdecl atan(double _X))F1802d92b6S",
    R"B1802d92b6(// 0x1802d92b6  API-MS-WIN-CRT-MATH-L1-1-0.DLL::atan
// size=6 thunk=true
// signature: double __cdecl atan(double _X)
// status: ok


double __cdecl atan(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d92b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = atan(_X);
  return dVar1;
}


)B1802d92b6",
    "193603c11dd99f6cd3aee708903240f465f25608866811dd9608c2524a9f347a",
    R"F1802d92b6C()F1802d92b6C",
    R"F1802d92b6D()F1802d92b6D",
    R"F1802d92b6T()F1802d92b6T",
    R"F1802d92b6F(15: return dVar1;)F1802d92b6F",
    R"F1802d92b6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d92b6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d92b6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d92b6", "API-MS-WIN-CRT-MATH-L1-1-0.DLL::atan");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] double _X{};
    [[maybe_unused]] double dVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("atan", _X);
    // body sha256: 193603c11dd99f6cd3aee708903240f465f25608866811dd9608c2524a9f347a
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("double __cdecl atan(double _X)");
        {
            trace.statement("double dVar1;");
            trace.statement("dVar1 = atan(_X);");
            trace.statement("return dVar1;");
        }
    return kFunction_0x1802d92b6;
}

// 0x1802d92bc API-MS-WIN-CRT-MATH-L1-1-0.DLL::atan2
// source: re/dump/decompile/0x1802d92bc_API_MS_WIN_CRT_MATH_L1_1_0_DLL__atan2.c
// size: 6 bytes; thunk: true
// body sha256: ca29a6396513eb3cf1e0b2fc193876e8b954499b541169223e85b6092fa51e1c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d92bc{
    "0x1802d92bc",
    "API-MS-WIN-CRT-MATH-L1-1-0.DLL::atan2",
    R"F1802d92bcS(double __cdecl atan2(double _Y, double _X))F1802d92bcS",
    R"B1802d92bc(// 0x1802d92bc  API-MS-WIN-CRT-MATH-L1-1-0.DLL::atan2
// size=6 thunk=true
// signature: double __cdecl atan2(double _Y, double _X)
// status: ok


double __cdecl atan2(double _Y,double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d92bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = atan2(_Y,_X);
  return dVar1;
}


)B1802d92bc",
    "ca29a6396513eb3cf1e0b2fc193876e8b954499b541169223e85b6092fa51e1c",
    R"F1802d92bcC()F1802d92bcC",
    R"F1802d92bcD()F1802d92bcD",
    R"F1802d92bcT()F1802d92bcT",
    R"F1802d92bcF(15: return dVar1;)F1802d92bcF",
    R"F1802d92bcU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d92bcU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d92bc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d92bc", "API-MS-WIN-CRT-MATH-L1-1-0.DLL::atan2");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] double _Y{};
    [[maybe_unused]] double _X{};
    [[maybe_unused]] double dVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("atan2", _Y, _X);
    // body sha256: ca29a6396513eb3cf1e0b2fc193876e8b954499b541169223e85b6092fa51e1c
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("double __cdecl atan2(double _Y,double _X)");
        {
            trace.statement("double dVar1;");
            trace.statement("dVar1 = atan2(_Y,_X);");
            trace.statement("return dVar1;");
        }
    return kFunction_0x1802d92bc;
}

// 0x1802d92c2 API-MS-WIN-CRT-MATH-L1-1-0.DLL::atan2f
// source: re/dump/decompile/0x1802d92c2_API_MS_WIN_CRT_MATH_L1_1_0_DLL__atan2f.c
// size: 6 bytes; thunk: true
// body sha256: b2d6eff500330bd7b46f693687cb0cfedaa6ac5e8fe2482f31f275ed3ba272ce
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d92c2{
    "0x1802d92c2",
    "API-MS-WIN-CRT-MATH-L1-1-0.DLL::atan2f",
    R"F1802d92c2S(float __cdecl atan2f(float _Y, float _X))F1802d92c2S",
    R"B1802d92c2(// 0x1802d92c2  API-MS-WIN-CRT-MATH-L1-1-0.DLL::atan2f
// size=6 thunk=true
// signature: float __cdecl atan2f(float _Y, float _X)
// status: ok


float __cdecl atan2f(float _Y,float _X)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d92c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = atan2f(_Y,_X);
  return fVar1;
}


)B1802d92c2",
    "b2d6eff500330bd7b46f693687cb0cfedaa6ac5e8fe2482f31f275ed3ba272ce",
    R"F1802d92c2C()F1802d92c2C",
    R"F1802d92c2D()F1802d92c2D",
    R"F1802d92c2T()F1802d92c2T",
    R"F1802d92c2F(15: return fVar1;)F1802d92c2F",
    R"F1802d92c2U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d92c2U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d92c2() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d92c2", "API-MS-WIN-CRT-MATH-L1-1-0.DLL::atan2f");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] float _Y{};
    [[maybe_unused]] float _X{};
    [[maybe_unused]] float fVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("atan2f", _Y, _X);
    // body sha256: b2d6eff500330bd7b46f693687cb0cfedaa6ac5e8fe2482f31f275ed3ba272ce
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("float __cdecl atan2f(float _Y,float _X)");
        {
            trace.statement("float fVar1;");
            trace.statement("fVar1 = atan2f(_Y,_X);");
            trace.statement("return fVar1;");
        }
    return kFunction_0x1802d92c2;
}

// 0x1802d92c8 API-MS-WIN-CRT-MATH-L1-1-0.DLL::cos
// source: re/dump/decompile/0x1802d92c8_API_MS_WIN_CRT_MATH_L1_1_0_DLL__cos.c
// size: 6 bytes; thunk: true
// body sha256: 560add6274f24dd417f668256b61789827ce05fd02410794ba01cf60e5b13e53
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d92c8{
    "0x1802d92c8",
    "API-MS-WIN-CRT-MATH-L1-1-0.DLL::cos",
    R"F1802d92c8S(double __cdecl cos(double _X))F1802d92c8S",
    R"B1802d92c8(// 0x1802d92c8  API-MS-WIN-CRT-MATH-L1-1-0.DLL::cos
// size=6 thunk=true
// signature: double __cdecl cos(double _X)
// status: ok


double __cdecl cos(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d92c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = cos(_X);
  return dVar1;
}


)B1802d92c8",
    "560add6274f24dd417f668256b61789827ce05fd02410794ba01cf60e5b13e53",
    R"F1802d92c8C()F1802d92c8C",
    R"F1802d92c8D()F1802d92c8D",
    R"F1802d92c8T()F1802d92c8T",
    R"F1802d92c8F(15: return dVar1;)F1802d92c8F",
    R"F1802d92c8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d92c8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d92c8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d92c8", "API-MS-WIN-CRT-MATH-L1-1-0.DLL::cos");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] double _X{};
    [[maybe_unused]] double dVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("cos", _X);
    // body sha256: 560add6274f24dd417f668256b61789827ce05fd02410794ba01cf60e5b13e53
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("double __cdecl cos(double _X)");
        {
            trace.statement("double dVar1;");
            trace.statement("dVar1 = cos(_X);");
            trace.statement("return dVar1;");
        }
    return kFunction_0x1802d92c8;
}

// 0x1802d92ce API-MS-WIN-CRT-MATH-L1-1-0.DLL::floor
// source: re/dump/decompile/0x1802d92ce_API_MS_WIN_CRT_MATH_L1_1_0_DLL__floor.c
// size: 6 bytes; thunk: true
// body sha256: fa888e7a322f829144a3cf71022457b33ab055fdbf5cd44e39d9323b0efa7fa8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d92ce{
    "0x1802d92ce",
    "API-MS-WIN-CRT-MATH-L1-1-0.DLL::floor",
    R"F1802d92ceS(double __cdecl floor(double _X))F1802d92ceS",
    R"B1802d92ce(// 0x1802d92ce  API-MS-WIN-CRT-MATH-L1-1-0.DLL::floor
// size=6 thunk=true
// signature: double __cdecl floor(double _X)
// status: ok


double __cdecl floor(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d92ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = floor(_X);
  return dVar1;
}


)B1802d92ce",
    "fa888e7a322f829144a3cf71022457b33ab055fdbf5cd44e39d9323b0efa7fa8",
    R"F1802d92ceC()F1802d92ceC",
    R"F1802d92ceD()F1802d92ceD",
    R"F1802d92ceT()F1802d92ceT",
    R"F1802d92ceF(15: return dVar1;)F1802d92ceF",
    R"F1802d92ceU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d92ceU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d92ce() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d92ce", "API-MS-WIN-CRT-MATH-L1-1-0.DLL::floor");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] double _X{};
    [[maybe_unused]] double dVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("floor", _X);
    // body sha256: fa888e7a322f829144a3cf71022457b33ab055fdbf5cd44e39d9323b0efa7fa8
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("double __cdecl floor(double _X)");
        {
            trace.statement("double dVar1;");
            trace.statement("dVar1 = floor(_X);");
            trace.statement("return dVar1;");
        }
    return kFunction_0x1802d92ce;
}

// 0x1802d92d4 API-MS-WIN-CRT-MATH-L1-1-0.DLL::fmodf
// source: re/dump/decompile/0x1802d92d4_API_MS_WIN_CRT_MATH_L1_1_0_DLL__fmodf.c
// size: 6 bytes; thunk: true
// body sha256: 45600b58d83c0019a36ef6e05dc5652cd48d0d06ca057c0f9682e60d625d35ac
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d92d4{
    "0x1802d92d4",
    "API-MS-WIN-CRT-MATH-L1-1-0.DLL::fmodf",
    R"F1802d92d4S(float __cdecl fmodf(float _X, float _Y))F1802d92d4S",
    R"B1802d92d4(// 0x1802d92d4  API-MS-WIN-CRT-MATH-L1-1-0.DLL::fmodf
// size=6 thunk=true
// signature: float __cdecl fmodf(float _X, float _Y)
// status: ok


float __cdecl fmodf(float _X,float _Y)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d92d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = fmodf(_X,_Y);
  return fVar1;
}


)B1802d92d4",
    "45600b58d83c0019a36ef6e05dc5652cd48d0d06ca057c0f9682e60d625d35ac",
    R"F1802d92d4C()F1802d92d4C",
    R"F1802d92d4D()F1802d92d4D",
    R"F1802d92d4T()F1802d92d4T",
    R"F1802d92d4F(15: return fVar1;)F1802d92d4F",
    R"F1802d92d4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d92d4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d92d4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d92d4", "API-MS-WIN-CRT-MATH-L1-1-0.DLL::fmodf");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] float _X{};
    [[maybe_unused]] float _Y{};
    [[maybe_unused]] float fVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("fmodf", _X, _Y);
    // body sha256: 45600b58d83c0019a36ef6e05dc5652cd48d0d06ca057c0f9682e60d625d35ac
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("float __cdecl fmodf(float _X,float _Y)");
        {
            trace.statement("float fVar1;");
            trace.statement("fVar1 = fmodf(_X,_Y);");
            trace.statement("return fVar1;");
        }
    return kFunction_0x1802d92d4;
}

// 0x1802d92da API-MS-WIN-CRT-MATH-L1-1-0.DLL::log
// source: re/dump/decompile/0x1802d92da_API_MS_WIN_CRT_MATH_L1_1_0_DLL__log.c
// size: 6 bytes; thunk: true
// body sha256: 4b71417a550e50c45a7d2c6caff8b842fb87d6078c0088af9064e28e70bca4f0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d92da{
    "0x1802d92da",
    "API-MS-WIN-CRT-MATH-L1-1-0.DLL::log",
    R"F1802d92daS(double __cdecl log(double _X))F1802d92daS",
    R"B1802d92da(// 0x1802d92da  API-MS-WIN-CRT-MATH-L1-1-0.DLL::log
// size=6 thunk=true
// signature: double __cdecl log(double _X)
// status: ok


double __cdecl log(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d92da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = log(_X);
  return dVar1;
}


)B1802d92da",
    "4b71417a550e50c45a7d2c6caff8b842fb87d6078c0088af9064e28e70bca4f0",
    R"F1802d92daC()F1802d92daC",
    R"F1802d92daD()F1802d92daD",
    R"F1802d92daT()F1802d92daT",
    R"F1802d92daF(15: return dVar1;)F1802d92daF",
    R"F1802d92daU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d92daU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d92da() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d92da", "API-MS-WIN-CRT-MATH-L1-1-0.DLL::log");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] double _X{};
    [[maybe_unused]] double dVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("log", _X);
    // body sha256: 4b71417a550e50c45a7d2c6caff8b842fb87d6078c0088af9064e28e70bca4f0
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("double __cdecl log(double _X)");
        {
            trace.statement("double dVar1;");
            trace.statement("dVar1 = log(_X);");
            trace.statement("return dVar1;");
        }
    return kFunction_0x1802d92da;
}

// 0x1802d92e0 API-MS-WIN-CRT-MATH-L1-1-0.DLL::pow
// source: re/dump/decompile/0x1802d92e0_API_MS_WIN_CRT_MATH_L1_1_0_DLL__pow.c
// size: 6 bytes; thunk: true
// body sha256: d2f1913eb5e21ea7e2f8655bf8c9ff858534563d943d3f2dcb729c7df47c4721
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d92e0{
    "0x1802d92e0",
    "API-MS-WIN-CRT-MATH-L1-1-0.DLL::pow",
    R"F1802d92e0S(double __cdecl pow(double _X, double _Y))F1802d92e0S",
    R"B1802d92e0(// 0x1802d92e0  API-MS-WIN-CRT-MATH-L1-1-0.DLL::pow
// size=6 thunk=true
// signature: double __cdecl pow(double _X, double _Y)
// status: ok


double __cdecl pow(double _X,double _Y)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d92e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = pow(_X,_Y);
  return dVar1;
}


)B1802d92e0",
    "d2f1913eb5e21ea7e2f8655bf8c9ff858534563d943d3f2dcb729c7df47c4721",
    R"F1802d92e0C()F1802d92e0C",
    R"F1802d92e0D()F1802d92e0D",
    R"F1802d92e0T()F1802d92e0T",
    R"F1802d92e0F(15: return dVar1;)F1802d92e0F",
    R"F1802d92e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d92e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d92e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d92e0", "API-MS-WIN-CRT-MATH-L1-1-0.DLL::pow");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] double _X{};
    [[maybe_unused]] double _Y{};
    [[maybe_unused]] double dVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("pow", _X, _Y);
    // body sha256: d2f1913eb5e21ea7e2f8655bf8c9ff858534563d943d3f2dcb729c7df47c4721
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("double __cdecl pow(double _X,double _Y)");
        {
            trace.statement("double dVar1;");
            trace.statement("dVar1 = pow(_X,_Y);");
            trace.statement("return dVar1;");
        }
    return kFunction_0x1802d92e0;
}

// 0x1802d92e6 API-MS-WIN-CRT-MATH-L1-1-0.DLL::powf
// source: re/dump/decompile/0x1802d92e6_API_MS_WIN_CRT_MATH_L1_1_0_DLL__powf.c
// size: 6 bytes; thunk: true
// body sha256: b81b72bec6e4921eb9e83397c96ba3ff584413d7ffb69da1077f806884b61d2c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d92e6{
    "0x1802d92e6",
    "API-MS-WIN-CRT-MATH-L1-1-0.DLL::powf",
    R"F1802d92e6S(float __cdecl powf(float _X, float _Y))F1802d92e6S",
    R"B1802d92e6(// 0x1802d92e6  API-MS-WIN-CRT-MATH-L1-1-0.DLL::powf
// size=6 thunk=true
// signature: float __cdecl powf(float _X, float _Y)
// status: ok


float __cdecl powf(float _X,float _Y)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d92e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = powf(_X,_Y);
  return fVar1;
}


)B1802d92e6",
    "b81b72bec6e4921eb9e83397c96ba3ff584413d7ffb69da1077f806884b61d2c",
    R"F1802d92e6C()F1802d92e6C",
    R"F1802d92e6D()F1802d92e6D",
    R"F1802d92e6T()F1802d92e6T",
    R"F1802d92e6F(15: return fVar1;)F1802d92e6F",
    R"F1802d92e6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d92e6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d92e6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d92e6", "API-MS-WIN-CRT-MATH-L1-1-0.DLL::powf");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] float _X{};
    [[maybe_unused]] float _Y{};
    [[maybe_unused]] float fVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("powf", _X, _Y);
    // body sha256: b81b72bec6e4921eb9e83397c96ba3ff584413d7ffb69da1077f806884b61d2c
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("float __cdecl powf(float _X,float _Y)");
        {
            trace.statement("float fVar1;");
            trace.statement("fVar1 = powf(_X,_Y);");
            trace.statement("return fVar1;");
        }
    return kFunction_0x1802d92e6;
}

// 0x1802d92ec API-MS-WIN-CRT-MATH-L1-1-0.DLL::sin
// source: re/dump/decompile/0x1802d92ec_API_MS_WIN_CRT_MATH_L1_1_0_DLL__sin.c
// size: 6 bytes; thunk: true
// body sha256: 20b9bf3155bd88ae8f30c51995518a7a1fbf85fa149a46a05e9b0acffa8994ff
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d92ec{
    "0x1802d92ec",
    "API-MS-WIN-CRT-MATH-L1-1-0.DLL::sin",
    R"F1802d92ecS(double __cdecl sin(double _X))F1802d92ecS",
    R"B1802d92ec(// 0x1802d92ec  API-MS-WIN-CRT-MATH-L1-1-0.DLL::sin
// size=6 thunk=true
// signature: double __cdecl sin(double _X)
// status: ok


double __cdecl sin(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d92ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = sin(_X);
  return dVar1;
}


)B1802d92ec",
    "20b9bf3155bd88ae8f30c51995518a7a1fbf85fa149a46a05e9b0acffa8994ff",
    R"F1802d92ecC()F1802d92ecC",
    R"F1802d92ecD()F1802d92ecD",
    R"F1802d92ecT()F1802d92ecT",
    R"F1802d92ecF(15: return dVar1;)F1802d92ecF",
    R"F1802d92ecU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d92ecU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d92ec() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d92ec", "API-MS-WIN-CRT-MATH-L1-1-0.DLL::sin");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] double _X{};
    [[maybe_unused]] double dVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("sin", _X);
    // body sha256: 20b9bf3155bd88ae8f30c51995518a7a1fbf85fa149a46a05e9b0acffa8994ff
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("double __cdecl sin(double _X)");
        {
            trace.statement("double dVar1;");
            trace.statement("dVar1 = sin(_X);");
            trace.statement("return dVar1;");
        }
    return kFunction_0x1802d92ec;
}

// 0x1802d92f2 API-MS-WIN-CRT-MATH-L1-1-0.DLL::sqrt
// source: re/dump/decompile/0x1802d92f2_API_MS_WIN_CRT_MATH_L1_1_0_DLL__sqrt.c
// size: 6 bytes; thunk: true
// body sha256: 2483435f3ad7f73ff7fc3acf5b8c7212eea0640ecaa266149f4b8e1e7a29394d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d92f2{
    "0x1802d92f2",
    "API-MS-WIN-CRT-MATH-L1-1-0.DLL::sqrt",
    R"F1802d92f2S(double __cdecl sqrt(double _X))F1802d92f2S",
    R"B1802d92f2(// 0x1802d92f2  API-MS-WIN-CRT-MATH-L1-1-0.DLL::sqrt
// size=6 thunk=true
// signature: double __cdecl sqrt(double _X)
// status: ok


double __cdecl sqrt(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d92f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = sqrt(_X);
  return dVar1;
}


)B1802d92f2",
    "2483435f3ad7f73ff7fc3acf5b8c7212eea0640ecaa266149f4b8e1e7a29394d",
    R"F1802d92f2C()F1802d92f2C",
    R"F1802d92f2D()F1802d92f2D",
    R"F1802d92f2T()F1802d92f2T",
    R"F1802d92f2F(15: return dVar1;)F1802d92f2F",
    R"F1802d92f2U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d92f2U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d92f2() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d92f2", "API-MS-WIN-CRT-MATH-L1-1-0.DLL::sqrt");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] double _X{};
    [[maybe_unused]] double dVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("sqrt", _X);
    // body sha256: 2483435f3ad7f73ff7fc3acf5b8c7212eea0640ecaa266149f4b8e1e7a29394d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("double __cdecl sqrt(double _X)");
        {
            trace.statement("double dVar1;");
            trace.statement("dVar1 = sqrt(_X);");
            trace.statement("return dVar1;");
        }
    return kFunction_0x1802d92f2;
}

// 0x1802d92f8 API-MS-WIN-CRT-MATH-L1-1-0.DLL::sqrtf
// source: re/dump/decompile/0x1802d92f8_API_MS_WIN_CRT_MATH_L1_1_0_DLL__sqrtf.c
// size: 6 bytes; thunk: true
// body sha256: aa3ac5bfd2beea5aecf64287d6af8c171f0c78358983a57a84cae124e6ab2ed5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d92f8{
    "0x1802d92f8",
    "API-MS-WIN-CRT-MATH-L1-1-0.DLL::sqrtf",
    R"F1802d92f8S(float __cdecl sqrtf(float _X))F1802d92f8S",
    R"B1802d92f8(// 0x1802d92f8  API-MS-WIN-CRT-MATH-L1-1-0.DLL::sqrtf
// size=6 thunk=true
// signature: float __cdecl sqrtf(float _X)
// status: ok


float __cdecl sqrtf(float _X)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d92f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = sqrtf(_X);
  return fVar1;
}


)B1802d92f8",
    "aa3ac5bfd2beea5aecf64287d6af8c171f0c78358983a57a84cae124e6ab2ed5",
    R"F1802d92f8C()F1802d92f8C",
    R"F1802d92f8D()F1802d92f8D",
    R"F1802d92f8T()F1802d92f8T",
    R"F1802d92f8F(15: return fVar1;)F1802d92f8F",
    R"F1802d92f8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d92f8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d92f8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d92f8", "API-MS-WIN-CRT-MATH-L1-1-0.DLL::sqrtf");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] float _X{};
    [[maybe_unused]] float fVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("sqrtf", _X);
    // body sha256: aa3ac5bfd2beea5aecf64287d6af8c171f0c78358983a57a84cae124e6ab2ed5
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("float __cdecl sqrtf(float _X)");
        {
            trace.statement("float fVar1;");
            trace.statement("fVar1 = sqrtf(_X);");
            trace.statement("return fVar1;");
        }
    return kFunction_0x1802d92f8;
}

// 0x1802d92fe API-MS-WIN-CRT-MATH-L1-1-0.DLL::tanf
// source: re/dump/decompile/0x1802d92fe_API_MS_WIN_CRT_MATH_L1_1_0_DLL__tanf.c
// size: 6 bytes; thunk: true
// body sha256: 67851457b7fea2552bc36207abd2754bac455672a48b25c3e98b6852e221c916
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d92fe{
    "0x1802d92fe",
    "API-MS-WIN-CRT-MATH-L1-1-0.DLL::tanf",
    R"F1802d92feS(float __cdecl tanf(float _X))F1802d92feS",
    R"B1802d92fe(// 0x1802d92fe  API-MS-WIN-CRT-MATH-L1-1-0.DLL::tanf
// size=6 thunk=true
// signature: float __cdecl tanf(float _X)
// status: ok


float __cdecl tanf(float _X)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d92fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = tanf(_X);
  return fVar1;
}


)B1802d92fe",
    "67851457b7fea2552bc36207abd2754bac455672a48b25c3e98b6852e221c916",
    R"F1802d92feC()F1802d92feC",
    R"F1802d92feD()F1802d92feD",
    R"F1802d92feT()F1802d92feT",
    R"F1802d92feF(15: return fVar1;)F1802d92feF",
    R"F1802d92feU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d92feU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d92fe() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d92fe", "API-MS-WIN-CRT-MATH-L1-1-0.DLL::tanf");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] float _X{};
    [[maybe_unused]] float fVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("tanf", _X);
    // body sha256: 67851457b7fea2552bc36207abd2754bac455672a48b25c3e98b6852e221c916
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("float __cdecl tanf(float _X)");
        {
            trace.statement("float fVar1;");
            trace.statement("fVar1 = tanf(_X);");
            trace.statement("return fVar1;");
        }
    return kFunction_0x1802d92fe;
}

// 0x1802d9304 API-MS-WIN-CRT-HEAP-L1-1-0.DLL::_callnewh
// source: re/dump/decompile/0x1802d9304_API_MS_WIN_CRT_HEAP_L1_1_0_DLL___callnewh.c
// size: 6 bytes; thunk: true
// body sha256: 4de257b74d0c8fefb6de2e57f61bd6f7ca31299c2dfddc1379fecbbf96b4c892
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9304{
    "0x1802d9304",
    "API-MS-WIN-CRT-HEAP-L1-1-0.DLL::_callnewh",
    R"F1802d9304S(int __cdecl _callnewh(size_t _Size))F1802d9304S",
    R"B1802d9304(// 0x1802d9304  API-MS-WIN-CRT-HEAP-L1-1-0.DLL::_callnewh
// size=6 thunk=true
// signature: int __cdecl _callnewh(size_t _Size)
// status: ok


int __cdecl _callnewh(size_t _Size)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d9304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _callnewh(_Size);
  return iVar1;
}


)B1802d9304",
    "4de257b74d0c8fefb6de2e57f61bd6f7ca31299c2dfddc1379fecbbf96b4c892",
    R"F1802d9304C()F1802d9304C",
    R"F1802d9304D()F1802d9304D",
    R"F1802d9304T()F1802d9304T",
    R"F1802d9304F(15: return iVar1;)F1802d9304F",
    R"F1802d9304U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9304U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9304() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9304", "API-MS-WIN-CRT-HEAP-L1-1-0.DLL::_callnewh");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::size_t _Size{};
    [[maybe_unused]] std::int32_t iVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_callnewh", _Size);
    // body sha256: 4de257b74d0c8fefb6de2e57f61bd6f7ca31299c2dfddc1379fecbbf96b4c892
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("int __cdecl _callnewh(size_t _Size)");
        {
            trace.statement("int iVar1;");
            trace.statement("iVar1 = _callnewh(_Size);");
            trace.statement("return iVar1;");
        }
    return kFunction_0x1802d9304;
}

// 0x1802d930a API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_seh_filter_dll
// source: re/dump/decompile/0x1802d930a_API_MS_WIN_CRT_RUNTIME_L1_1_0_DLL___seh_filter_dll.c
// size: 6 bytes; thunk: true
// body sha256: 93b45f45fceb6b135bd7626d4a9fc4e0bce29bcabfe53d624b616ab91c60f53c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d930a{
    "0x1802d930a",
    "API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_seh_filter_dll",
    R"F1802d930aS(undefined _seh_filter_dll())F1802d930aS",
    R"B1802d930a(// 0x1802d930a  API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_seh_filter_dll
// size=6 thunk=true
// signature: undefined _seh_filter_dll()
// status: ok


void _seh_filter_dll(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001802d930a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _seh_filter_dll();
  return;
}


)B1802d930a",
    "93b45f45fceb6b135bd7626d4a9fc4e0bce29bcabfe53d624b616ab91c60f53c",
    R"F1802d930aC()F1802d930aC",
    R"F1802d930aD()F1802d930aD",
    R"F1802d930aT()F1802d930aT",
    R"F1802d930aF(13: return;)F1802d930aF",
    R"F1802d930aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d930aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d930a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d930a", "API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_seh_filter_dll");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_seh_filter_dll");
    // body sha256: 93b45f45fceb6b135bd7626d4a9fc4e0bce29bcabfe53d624b616ab91c60f53c
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void _seh_filter_dll(void)");
        {
            trace.statement("_seh_filter_dll();");
            trace.statement("return;");
        }
    return kFunction_0x1802d930a;
}

// 0x1802d9310 API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_configure_narrow_argv
// source: re/dump/decompile/0x1802d9310_API_MS_WIN_CRT_RUNTIME_L1_1_0_DLL___configure_narrow_argv.c
// size: 6 bytes; thunk: true
// body sha256: ffd937dfeda3a8fbab9b58645ef5da1c0b064fe252a2fc6fe91720edc52e684b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9310{
    "0x1802d9310",
    "API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_configure_narrow_argv",
    R"F1802d9310S(undefined _configure_narrow_argv())F1802d9310S",
    R"B1802d9310(// 0x1802d9310  API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_configure_narrow_argv
// size=6 thunk=true
// signature: undefined _configure_narrow_argv()
// status: ok


void _configure_narrow_argv(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001802d9310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _configure_narrow_argv();
  return;
}


)B1802d9310",
    "ffd937dfeda3a8fbab9b58645ef5da1c0b064fe252a2fc6fe91720edc52e684b",
    R"F1802d9310C()F1802d9310C",
    R"F1802d9310D()F1802d9310D",
    R"F1802d9310T()F1802d9310T",
    R"F1802d9310F(13: return;)F1802d9310F",
    R"F1802d9310U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9310U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9310() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9310", "API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_configure_narrow_argv");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_configure_narrow_argv");
    // body sha256: ffd937dfeda3a8fbab9b58645ef5da1c0b064fe252a2fc6fe91720edc52e684b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void _configure_narrow_argv(void)");
        {
            trace.statement("_configure_narrow_argv();");
            trace.statement("return;");
        }
    return kFunction_0x1802d9310;
}

// 0x1802d9316 API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_initialize_narrow_environment
// source: re/dump/decompile/0x1802d9316_API_MS_WIN_CRT_RUNTIME_L1_1_0_DLL___initialize_narrow_environment.c
// size: 6 bytes; thunk: true
// body sha256: fa41302d8e3f5aae358d5e49e74d9a660a9cb760c87d4147a6dbeda82ce1c72e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9316{
    "0x1802d9316",
    "API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_initialize_narrow_environment",
    R"F1802d9316S(undefined _initialize_narrow_environment())F1802d9316S",
    R"B1802d9316(// 0x1802d9316  API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_initialize_narrow_environment
// size=6 thunk=true
// signature: undefined _initialize_narrow_environment()
// status: ok


void _initialize_narrow_environment(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001802d9316. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initialize_narrow_environment();
  return;
}


)B1802d9316",
    "fa41302d8e3f5aae358d5e49e74d9a660a9cb760c87d4147a6dbeda82ce1c72e",
    R"F1802d9316C()F1802d9316C",
    R"F1802d9316D()F1802d9316D",
    R"F1802d9316T()F1802d9316T",
    R"F1802d9316F(13: return;)F1802d9316F",
    R"F1802d9316U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9316U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9316() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9316", "API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_initialize_narrow_environment");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_initialize_narrow_environment");
    // body sha256: fa41302d8e3f5aae358d5e49e74d9a660a9cb760c87d4147a6dbeda82ce1c72e
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void _initialize_narrow_environment(void)");
        {
            trace.statement("_initialize_narrow_environment();");
            trace.statement("return;");
        }
    return kFunction_0x1802d9316;
}

// 0x1802d931c API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_initialize_onexit_table
// source: re/dump/decompile/0x1802d931c_API_MS_WIN_CRT_RUNTIME_L1_1_0_DLL___initialize_onexit_table.c
// size: 6 bytes; thunk: true
// body sha256: 6b7bab9224d8708c30a1d323650a7ba078f0fb1e27841e5f19fab1fad698fc47
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d931c{
    "0x1802d931c",
    "API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_initialize_onexit_table",
    R"F1802d931cS(undefined _initialize_onexit_table())F1802d931cS",
    R"B1802d931c(// 0x1802d931c  API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_initialize_onexit_table
// size=6 thunk=true
// signature: undefined _initialize_onexit_table()
// status: ok


void _initialize_onexit_table(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001802d931c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initialize_onexit_table();
  return;
}


)B1802d931c",
    "6b7bab9224d8708c30a1d323650a7ba078f0fb1e27841e5f19fab1fad698fc47",
    R"F1802d931cC()F1802d931cC",
    R"F1802d931cD()F1802d931cD",
    R"F1802d931cT()F1802d931cT",
    R"F1802d931cF(13: return;)F1802d931cF",
    R"F1802d931cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d931cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d931c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d931c", "API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_initialize_onexit_table");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_initialize_onexit_table");
    // body sha256: 6b7bab9224d8708c30a1d323650a7ba078f0fb1e27841e5f19fab1fad698fc47
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void _initialize_onexit_table(void)");
        {
            trace.statement("_initialize_onexit_table();");
            trace.statement("return;");
        }
    return kFunction_0x1802d931c;
}

// 0x1802d9322 API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_register_onexit_function
// source: re/dump/decompile/0x1802d9322_API_MS_WIN_CRT_RUNTIME_L1_1_0_DLL___register_onexit_function.c
// size: 6 bytes; thunk: true
// body sha256: 595103bbbefc53482893aa46f9236838820c89fd1ece38ee68b0e911c2fcede1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9322{
    "0x1802d9322",
    "API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_register_onexit_function",
    R"F1802d9322S(undefined _register_onexit_function())F1802d9322S",
    R"B1802d9322(// 0x1802d9322  API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_register_onexit_function
// size=6 thunk=true
// signature: undefined _register_onexit_function()
// status: ok


void _register_onexit_function(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001802d9322. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _register_onexit_function();
  return;
}


)B1802d9322",
    "595103bbbefc53482893aa46f9236838820c89fd1ece38ee68b0e911c2fcede1",
    R"F1802d9322C()F1802d9322C",
    R"F1802d9322D()F1802d9322D",
    R"F1802d9322T()F1802d9322T",
    R"F1802d9322F(13: return;)F1802d9322F",
    R"F1802d9322U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9322U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9322() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9322", "API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_register_onexit_function");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_register_onexit_function");
    // body sha256: 595103bbbefc53482893aa46f9236838820c89fd1ece38ee68b0e911c2fcede1
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void _register_onexit_function(void)");
        {
            trace.statement("_register_onexit_function();");
            trace.statement("return;");
        }
    return kFunction_0x1802d9322;
}

// 0x1802d9328 API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_execute_onexit_table
// source: re/dump/decompile/0x1802d9328_API_MS_WIN_CRT_RUNTIME_L1_1_0_DLL___execute_onexit_table.c
// size: 6 bytes; thunk: true
// body sha256: 8e82298427af5cd5a421fe1e8935b12b3b453ead7eaad0345b999c11519ff888
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9328{
    "0x1802d9328",
    "API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_execute_onexit_table",
    R"F1802d9328S(undefined _execute_onexit_table())F1802d9328S",
    R"B1802d9328(// 0x1802d9328  API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_execute_onexit_table
// size=6 thunk=true
// signature: undefined _execute_onexit_table()
// status: ok


void _execute_onexit_table(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001802d9328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _execute_onexit_table();
  return;
}


)B1802d9328",
    "8e82298427af5cd5a421fe1e8935b12b3b453ead7eaad0345b999c11519ff888",
    R"F1802d9328C()F1802d9328C",
    R"F1802d9328D()F1802d9328D",
    R"F1802d9328T()F1802d9328T",
    R"F1802d9328F(13: return;)F1802d9328F",
    R"F1802d9328U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9328U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9328() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9328", "API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_execute_onexit_table");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_execute_onexit_table");
    // body sha256: 8e82298427af5cd5a421fe1e8935b12b3b453ead7eaad0345b999c11519ff888
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void _execute_onexit_table(void)");
        {
            trace.statement("_execute_onexit_table();");
            trace.statement("return;");
        }
    return kFunction_0x1802d9328;
}

// 0x1802d932e API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_crt_atexit
// source: re/dump/decompile/0x1802d932e_API_MS_WIN_CRT_RUNTIME_L1_1_0_DLL___crt_atexit.c
// size: 6 bytes; thunk: true
// body sha256: ee2ad11086761f3f0c9ab9543ed418d066d86293db5171f323f448da38c13de8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d932e{
    "0x1802d932e",
    "API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_crt_atexit",
    R"F1802d932eS(undefined _crt_atexit())F1802d932eS",
    R"B1802d932e(// 0x1802d932e  API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_crt_atexit
// size=6 thunk=true
// signature: undefined _crt_atexit()
// status: ok


void _crt_atexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001802d932e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _crt_atexit();
  return;
}


)B1802d932e",
    "ee2ad11086761f3f0c9ab9543ed418d066d86293db5171f323f448da38c13de8",
    R"F1802d932eC()F1802d932eC",
    R"F1802d932eD()F1802d932eD",
    R"F1802d932eT()F1802d932eT",
    R"F1802d932eF(13: return;)F1802d932eF",
    R"F1802d932eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d932eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d932e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d932e", "API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_crt_atexit");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_crt_atexit");
    // body sha256: ee2ad11086761f3f0c9ab9543ed418d066d86293db5171f323f448da38c13de8
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void _crt_atexit(void)");
        {
            trace.statement("_crt_atexit();");
            trace.statement("return;");
        }
    return kFunction_0x1802d932e;
}

// 0x1802d9334 API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_cexit
// source: re/dump/decompile/0x1802d9334_API_MS_WIN_CRT_RUNTIME_L1_1_0_DLL___cexit.c
// size: 6 bytes; thunk: true
// body sha256: 7a68dee3fc6aa64c75e9e02f1ad5d31ce4917c6bb520d4326ea6f9694b728b3f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9334{
    "0x1802d9334",
    "API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_cexit",
    R"F1802d9334S(void __cdecl _cexit(void))F1802d9334S",
    R"B1802d9334(// 0x1802d9334  API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_cexit
// size=6 thunk=true
// signature: void __cdecl _cexit(void)
// status: ok


void __cdecl _cexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001802d9334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _cexit();
  return;
}


)B1802d9334",
    "7a68dee3fc6aa64c75e9e02f1ad5d31ce4917c6bb520d4326ea6f9694b728b3f",
    R"F1802d9334C()F1802d9334C",
    R"F1802d9334D()F1802d9334D",
    R"F1802d9334T()F1802d9334T",
    R"F1802d9334F(13: return;)F1802d9334F",
    R"F1802d9334U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9334U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9334() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9334", "API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_cexit");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_cexit");
    // body sha256: 7a68dee3fc6aa64c75e9e02f1ad5d31ce4917c6bb520d4326ea6f9694b728b3f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void __cdecl _cexit(void)");
        {
            trace.statement("_cexit();");
            trace.statement("return;");
        }
    return kFunction_0x1802d9334;
}

// 0x1802d933a API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_initterm
// source: re/dump/decompile/0x1802d933a_API_MS_WIN_CRT_RUNTIME_L1_1_0_DLL___initterm.c
// size: 6 bytes; thunk: true
// body sha256: 6e35b198bea67b8d0f905fca87e9457a6961904f2bbffd05a53229161d0bcefb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d933a{
    "0x1802d933a",
    "API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_initterm",
    R"F1802d933aS(undefined _initterm())F1802d933aS",
    R"B1802d933a(// 0x1802d933a  API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_initterm
// size=6 thunk=true
// signature: undefined _initterm()
// status: ok


void _initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001802d933a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initterm();
  return;
}


)B1802d933a",
    "6e35b198bea67b8d0f905fca87e9457a6961904f2bbffd05a53229161d0bcefb",
    R"F1802d933aC()F1802d933aC",
    R"F1802d933aD()F1802d933aD",
    R"F1802d933aT()F1802d933aT",
    R"F1802d933aF(13: return;)F1802d933aF",
    R"F1802d933aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d933aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d933a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d933a", "API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_initterm");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_initterm");
    // body sha256: 6e35b198bea67b8d0f905fca87e9457a6961904f2bbffd05a53229161d0bcefb
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void _initterm(void)");
        {
            trace.statement("_initterm();");
            trace.statement("return;");
        }
    return kFunction_0x1802d933a;
}

// 0x1802d9340 API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_initterm_e
// source: re/dump/decompile/0x1802d9340_API_MS_WIN_CRT_RUNTIME_L1_1_0_DLL___initterm_e.c
// size: 6 bytes; thunk: true
// body sha256: fda66b3ad2c4b562a57cf77df4fa14e11da8e45e93c26f94d52dd944d7e231c4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9340{
    "0x1802d9340",
    "API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_initterm_e",
    R"F1802d9340S(undefined _initterm_e())F1802d9340S",
    R"B1802d9340(// 0x1802d9340  API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_initterm_e
// size=6 thunk=true
// signature: undefined _initterm_e()
// status: ok


void _initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001802d9340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initterm_e();
  return;
}


)B1802d9340",
    "fda66b3ad2c4b562a57cf77df4fa14e11da8e45e93c26f94d52dd944d7e231c4",
    R"F1802d9340C()F1802d9340C",
    R"F1802d9340D()F1802d9340D",
    R"F1802d9340T()F1802d9340T",
    R"F1802d9340F(13: return;)F1802d9340F",
    R"F1802d9340U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9340U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9340() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9340", "API-MS-WIN-CRT-RUNTIME-L1-1-0.DLL::_initterm_e");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_initterm_e");
    // body sha256: fda66b3ad2c4b562a57cf77df4fa14e11da8e45e93c26f94d52dd944d7e231c4
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void _initterm_e(void)");
        {
            trace.statement("_initterm_e();");
            trace.statement("return;");
        }
    return kFunction_0x1802d9340;
}

// 0x1802d9348 FUN_1802d9348
// source: re/dump/decompile/0x1802d9348_FUN_1802d9348.c
// size: 127 bytes; thunk: false
// body sha256: f3997026e55e443e7089cec6c3a0e426bad595fa15f794484f91cc8ca449870c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9348{
    "0x1802d9348",
    "FUN_1802d9348",
    R"F1802d9348S(undefined FUN_1802d9348())F1802d9348S",
    R"B1802d9348(// 0x1802d9348  FUN_1802d9348
// size=127 thunk=false
// signature: undefined FUN_1802d9348()
// status: ok


void FUN_1802d9348(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_4 + 0x38);
  FUN_1802d8d2c(param_2,param_4,lVar1 + 4);
  if ((*(uint *)(lVar1 + 4) & ((*(uint *)(param_1 + 4) & 0x66) != 0) + 1) != 0) {
    __CxxFrameHandler4(param_1,param_2,param_3,param_4);
  }
  return;
}


)B1802d9348",
    "f3997026e55e443e7089cec6c3a0e426bad595fa15f794484f91cc8ca449870c",
    R"F1802d9348C(FUN_1802d8d2c)F1802d9348C",
    R"F1802d9348D()F1802d9348D",
    R"F1802d9348T()F1802d9348T",
    R"F1802d9348F(14: if ((*(uint *)(lVar1 + 4) & ((*(uint *)(param_1 + 4) & 0x66) != 0) + 1) != 0) {
17: return;)F1802d9348F",
    R"F1802d9348U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9348U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9348() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9348", "FUN_1802d9348");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::uint64_t param_2{};
    [[maybe_unused]] std::uint64_t param_3{};
    [[maybe_unused]] std::int64_t param_4{};
    [[maybe_unused]] std::int64_t lVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1802d8d2c", param_2, param_4, lVar1 + 4);
    trace.call_arguments("__CxxFrameHandler4", param_1, param_2, param_3, param_4);
    trace.call_target("FUN_1802d8d2c", reinterpret_cast<const void*>(&image::FUN_1802d8d2c));
    // body sha256: f3997026e55e443e7089cec6c3a0e426bad595fa15f794484f91cc8ca449870c
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong lVar1;");
            trace.statement("lVar1 = *(longlong *)(param_4 + 0x38);");
            trace.statement("FUN_1802d8d2c(param_2,param_4,lVar1 + 4);");
            if (trace.checked_condition("if ((*(uint *)(lVar1 + 4) & ((*(uint *)(param_1 + 4) & 0x66) != 0) + 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(lVar1 + 4, 0) & ((load_at<std::uint32_t>(param_1 + 4, 0) & 0x66) != 0) + 1) != 0); })) {
                trace.statement("__CxxFrameHandler4(param_1,param_2,param_3,param_4);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802d9348;
}

// 0x1802d93c8 __GSHandlerCheck_SEH
// source: re/dump/decompile/0x1802d93c8___GSHandlerCheck_SEH.c
// size: 133 bytes; thunk: false
// body sha256: af1fffc385b3bbc9cf4c82666e0970e1fe4a9568e37501b1879bb27de9879391
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d93c8{
    "0x1802d93c8",
    "__GSHandlerCheck_SEH",
    R"F1802d93c8S(undefined __GSHandlerCheck_SEH())F1802d93c8S",
    R"B1802d93c8(// 0x1802d93c8  __GSHandlerCheck_SEH
// size=133 thunk=false
// signature: undefined __GSHandlerCheck_SEH()
// status: ok


/* Library Function - Single Match
    __GSHandlerCheck_SEH
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __GSHandlerCheck_SEH
               (_EXCEPTION_RECORD *param_1,void *param_2,_CONTEXT *param_3,
               _DISPATCHER_CONTEXT *param_4)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(param_4 + 0x38);
  uVar1 = *puVar2;
  FUN_1802d8d2c(param_2,param_4,puVar2 + (ulonglong)uVar1 * 4 + 1);
  if ((puVar2[(ulonglong)uVar1 * 4 + 1] & ((param_1->ExceptionFlags & 0x66) != 0) + 1) != 0) {
    __C_specific_handler(param_1,param_2,param_3,param_4);
  }
  return;
}


)B1802d93c8",
    "af1fffc385b3bbc9cf4c82666e0970e1fe4a9568e37501b1879bb27de9879391",
    R"F1802d93c8C(FUN_1802d8d2c)F1802d93c8C",
    R"F1802d93c8D()F1802d93c8D",
    R"F1802d93c8T()F1802d93c8T",
    R"F1802d93c8F(23: if ((puVar2[(ulonglong)uVar1 * 4 + 1] & ((param_1->ExceptionFlags & 0x66) != 0) + 1) != 0) {
26: return;)F1802d93c8F",
    R"F1802d93c8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d93c8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d93c8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d93c8", "__GSHandlerCheck_SEH");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint8_t * param_1{};
    [[maybe_unused]] void * param_2{};
    [[maybe_unused]] std::uint8_t * param_3{};
    [[maybe_unused]] std::uint8_t * param_4{};
    [[maybe_unused]] std::uint32_t uVar1{};
    [[maybe_unused]] std::uint32_t * puVar2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((puVar2[(ulonglong)uVar1 * 4 + 1] & ((param_1->ExceptionFlags & 0x66) != 0) + 1) != 0) [reason: unknown aggregate layout]
    trace.call_arguments("FUN_1802d8d2c", param_2, param_4, puVar2 + static_cast<std::uint64_t>(uVar1) * 4 + 1);
    trace.call_arguments("__C_specific_handler", param_1, param_2, param_3, param_4);
    trace.call_target("FUN_1802d8d2c", reinterpret_cast<const void*>(&image::FUN_1802d8d2c));
    // body sha256: af1fffc385b3bbc9cf4c82666e0970e1fe4a9568e37501b1879bb27de9879391
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void __GSHandlerCheck_SEH");
        trace.statement("(_EXCEPTION_RECORD *param_1,void *param_2,_CONTEXT *param_3,");
        trace.statement("_DISPATCHER_CONTEXT *param_4)");
        {
            trace.statement("uint uVar1;");
            trace.statement("uint *puVar2;");
            trace.statement("puVar2 = *(uint **)(param_4 + 0x38);");
            trace.statement("uVar1 = *puVar2;");
            trace.statement("FUN_1802d8d2c(param_2,param_4,puVar2 + (ulonglong)uVar1 * 4 + 1);");
            if (trace.condition("if ((puVar2[(ulonglong)uVar1 * 4 + 1] & ((param_1->ExceptionFlags & 0x66) != 0) + 1) != 0)")) {
                trace.statement("__C_specific_handler(param_1,param_2,param_3,param_4);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802d93c8;
}

// 0x1802d944d API-MS-WIN-CRT-MATH-L1-1-0.DLL::_dclass
// source: re/dump/decompile/0x1802d944d_API_MS_WIN_CRT_MATH_L1_1_0_DLL___dclass.c
// size: 6 bytes; thunk: true
// body sha256: 25d87f51c55a98160ddd743af62345e01acb0818a4ff7aa942d68159ed8c3e5b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d944d{
    "0x1802d944d",
    "API-MS-WIN-CRT-MATH-L1-1-0.DLL::_dclass",
    R"F1802d944dS(undefined _dclass())F1802d944dS",
    R"B1802d944d(// 0x1802d944d  API-MS-WIN-CRT-MATH-L1-1-0.DLL::_dclass
// size=6 thunk=true
// signature: undefined _dclass()
// status: ok


void _dclass(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001802d944d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _dclass();
  return;
}


)B1802d944d",
    "25d87f51c55a98160ddd743af62345e01acb0818a4ff7aa942d68159ed8c3e5b",
    R"F1802d944dC()F1802d944dC",
    R"F1802d944dD()F1802d944dD",
    R"F1802d944dT()F1802d944dT",
    R"F1802d944dF(13: return;)F1802d944dF",
    R"F1802d944dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d944dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d944d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d944d", "API-MS-WIN-CRT-MATH-L1-1-0.DLL::_dclass");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_dclass");
    // body sha256: 25d87f51c55a98160ddd743af62345e01acb0818a4ff7aa942d68159ed8c3e5b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void _dclass(void)");
        {
            trace.statement("_dclass();");
            trace.statement("return;");
        }
    return kFunction_0x1802d944d;
}

// 0x1802d9453 API-MS-WIN-CRT-MATH-L1-1-0.DLL::_fdclass
// source: re/dump/decompile/0x1802d9453_API_MS_WIN_CRT_MATH_L1_1_0_DLL___fdclass.c
// size: 6 bytes; thunk: true
// body sha256: 3034563ae45663510ea18d2aa37e59cc6bd79fb03b525464a9adb3a7731d4ad6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9453{
    "0x1802d9453",
    "API-MS-WIN-CRT-MATH-L1-1-0.DLL::_fdclass",
    R"F1802d9453S(undefined _fdclass())F1802d9453S",
    R"B1802d9453(// 0x1802d9453  API-MS-WIN-CRT-MATH-L1-1-0.DLL::_fdclass
// size=6 thunk=true
// signature: undefined _fdclass()
// status: ok


void _fdclass(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001802d9453. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _fdclass();
  return;
}


)B1802d9453",
    "3034563ae45663510ea18d2aa37e59cc6bd79fb03b525464a9adb3a7731d4ad6",
    R"F1802d9453C()F1802d9453C",
    R"F1802d9453D()F1802d9453D",
    R"F1802d9453T()F1802d9453T",
    R"F1802d9453F(13: return;)F1802d9453F",
    R"F1802d9453U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9453U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9453() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9453", "API-MS-WIN-CRT-MATH-L1-1-0.DLL::_fdclass");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_fdclass");
    // body sha256: 3034563ae45663510ea18d2aa37e59cc6bd79fb03b525464a9adb3a7731d4ad6
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void _fdclass(void)");
        {
            trace.statement("_fdclass();");
            trace.statement("return;");
        }
    return kFunction_0x1802d9453;
}

// 0x1802d9459 API-MS-WIN-CRT-MATH-L1-1-0.DLL::_hypotf
// source: re/dump/decompile/0x1802d9459_API_MS_WIN_CRT_MATH_L1_1_0_DLL___hypotf.c
// size: 6 bytes; thunk: true
// body sha256: 7fd9da393e902dbc687e683490027e057c8968d3c94a5c4a40e883fa63c43a0f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9459{
    "0x1802d9459",
    "API-MS-WIN-CRT-MATH-L1-1-0.DLL::_hypotf",
    R"F1802d9459S(float __cdecl _hypotf(float _X, float _Y))F1802d9459S",
    R"B1802d9459(// 0x1802d9459  API-MS-WIN-CRT-MATH-L1-1-0.DLL::_hypotf
// size=6 thunk=true
// signature: float __cdecl _hypotf(float _X, float _Y)
// status: ok


float __cdecl _hypotf(float _X,float _Y)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d9459. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = _hypotf(_X,_Y);
  return fVar1;
}


)B1802d9459",
    "7fd9da393e902dbc687e683490027e057c8968d3c94a5c4a40e883fa63c43a0f",
    R"F1802d9459C()F1802d9459C",
    R"F1802d9459D()F1802d9459D",
    R"F1802d9459T()F1802d9459T",
    R"F1802d9459F(15: return fVar1;)F1802d9459F",
    R"F1802d9459U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9459U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9459() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9459", "API-MS-WIN-CRT-MATH-L1-1-0.DLL::_hypotf");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] float _X{};
    [[maybe_unused]] float _Y{};
    [[maybe_unused]] float fVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_hypotf", _X, _Y);
    // body sha256: 7fd9da393e902dbc687e683490027e057c8968d3c94a5c4a40e883fa63c43a0f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("float __cdecl _hypotf(float _X,float _Y)");
        {
            trace.statement("float fVar1;");
            trace.statement("fVar1 = _hypotf(_X,_Y);");
            trace.statement("return fVar1;");
        }
    return kFunction_0x1802d9459;
}

// 0x1802d945f API-MS-WIN-CRT-MATH-L1-1-0.DLL::acosf
// source: re/dump/decompile/0x1802d945f_API_MS_WIN_CRT_MATH_L1_1_0_DLL__acosf.c
// size: 6 bytes; thunk: true
// body sha256: f5bb1776c603eac3c35cd6ffbb4fc38b9c62347b97c715fb170e3c4e0342d1f3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d945f{
    "0x1802d945f",
    "API-MS-WIN-CRT-MATH-L1-1-0.DLL::acosf",
    R"F1802d945fS(float __cdecl acosf(float _X))F1802d945fS",
    R"B1802d945f(// 0x1802d945f  API-MS-WIN-CRT-MATH-L1-1-0.DLL::acosf
// size=6 thunk=true
// signature: float __cdecl acosf(float _X)
// status: ok


float __cdecl acosf(float _X)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d945f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = acosf(_X);
  return fVar1;
}


)B1802d945f",
    "f5bb1776c603eac3c35cd6ffbb4fc38b9c62347b97c715fb170e3c4e0342d1f3",
    R"F1802d945fC()F1802d945fC",
    R"F1802d945fD()F1802d945fD",
    R"F1802d945fT()F1802d945fT",
    R"F1802d945fF(15: return fVar1;)F1802d945fF",
    R"F1802d945fU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d945fU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d945f() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d945f", "API-MS-WIN-CRT-MATH-L1-1-0.DLL::acosf");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] float _X{};
    [[maybe_unused]] float fVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("acosf", _X);
    // body sha256: f5bb1776c603eac3c35cd6ffbb4fc38b9c62347b97c715fb170e3c4e0342d1f3
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("float __cdecl acosf(float _X)");
        {
            trace.statement("float fVar1;");
            trace.statement("fVar1 = acosf(_X);");
            trace.statement("return fVar1;");
        }
    return kFunction_0x1802d945f;
}

// 0x1802d9465 API-MS-WIN-CRT-MATH-L1-1-0.DLL::asinf
// source: re/dump/decompile/0x1802d9465_API_MS_WIN_CRT_MATH_L1_1_0_DLL__asinf.c
// size: 6 bytes; thunk: true
// body sha256: aeb0b2715b669c0810ab92b54f86092245dca4fa27920575f471e2119e2172f3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9465{
    "0x1802d9465",
    "API-MS-WIN-CRT-MATH-L1-1-0.DLL::asinf",
    R"F1802d9465S(float __cdecl asinf(float _X))F1802d9465S",
    R"B1802d9465(// 0x1802d9465  API-MS-WIN-CRT-MATH-L1-1-0.DLL::asinf
// size=6 thunk=true
// signature: float __cdecl asinf(float _X)
// status: ok


float __cdecl asinf(float _X)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d9465. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = asinf(_X);
  return fVar1;
}


)B1802d9465",
    "aeb0b2715b669c0810ab92b54f86092245dca4fa27920575f471e2119e2172f3",
    R"F1802d9465C()F1802d9465C",
    R"F1802d9465D()F1802d9465D",
    R"F1802d9465T()F1802d9465T",
    R"F1802d9465F(15: return fVar1;)F1802d9465F",
    R"F1802d9465U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9465U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9465() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9465", "API-MS-WIN-CRT-MATH-L1-1-0.DLL::asinf");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] float _X{};
    [[maybe_unused]] float fVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("asinf", _X);
    // body sha256: aeb0b2715b669c0810ab92b54f86092245dca4fa27920575f471e2119e2172f3
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("float __cdecl asinf(float _X)");
        {
            trace.statement("float fVar1;");
            trace.statement("fVar1 = asinf(_X);");
            trace.statement("return fVar1;");
        }
    return kFunction_0x1802d9465;
}

// 0x1802d946b API-MS-WIN-CRT-MATH-L1-1-0.DLL::atanf
// source: re/dump/decompile/0x1802d946b_API_MS_WIN_CRT_MATH_L1_1_0_DLL__atanf.c
// size: 6 bytes; thunk: true
// body sha256: c99cc3f89ca0ddb223aec6efef5a44cffdd8eb4b2205bc76c1fbae645883ccaa
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d946b{
    "0x1802d946b",
    "API-MS-WIN-CRT-MATH-L1-1-0.DLL::atanf",
    R"F1802d946bS(float __cdecl atanf(float _X))F1802d946bS",
    R"B1802d946b(// 0x1802d946b  API-MS-WIN-CRT-MATH-L1-1-0.DLL::atanf
// size=6 thunk=true
// signature: float __cdecl atanf(float _X)
// status: ok


float __cdecl atanf(float _X)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d946b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = atanf(_X);
  return fVar1;
}


)B1802d946b",
    "c99cc3f89ca0ddb223aec6efef5a44cffdd8eb4b2205bc76c1fbae645883ccaa",
    R"F1802d946bC()F1802d946bC",
    R"F1802d946bD()F1802d946bD",
    R"F1802d946bT()F1802d946bT",
    R"F1802d946bF(15: return fVar1;)F1802d946bF",
    R"F1802d946bU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d946bU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d946b() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d946b", "API-MS-WIN-CRT-MATH-L1-1-0.DLL::atanf");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] float _X{};
    [[maybe_unused]] float fVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("atanf", _X);
    // body sha256: c99cc3f89ca0ddb223aec6efef5a44cffdd8eb4b2205bc76c1fbae645883ccaa
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("float __cdecl atanf(float _X)");
        {
            trace.statement("float fVar1;");
            trace.statement("fVar1 = atanf(_X);");
            trace.statement("return fVar1;");
        }
    return kFunction_0x1802d946b;
}

// 0x1802d9471 API-MS-WIN-CRT-MATH-L1-1-0.DLL::ceil
// source: re/dump/decompile/0x1802d9471_API_MS_WIN_CRT_MATH_L1_1_0_DLL__ceil.c
// size: 6 bytes; thunk: true
// body sha256: 02356c9868294b62b8587de491d194645db12e0babb7b5b44684f662e307f163
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9471{
    "0x1802d9471",
    "API-MS-WIN-CRT-MATH-L1-1-0.DLL::ceil",
    R"F1802d9471S(double __cdecl ceil(double _X))F1802d9471S",
    R"B1802d9471(// 0x1802d9471  API-MS-WIN-CRT-MATH-L1-1-0.DLL::ceil
// size=6 thunk=true
// signature: double __cdecl ceil(double _X)
// status: ok


double __cdecl ceil(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d9471. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = ceil(_X);
  return dVar1;
}


)B1802d9471",
    "02356c9868294b62b8587de491d194645db12e0babb7b5b44684f662e307f163",
    R"F1802d9471C()F1802d9471C",
    R"F1802d9471D()F1802d9471D",
    R"F1802d9471T()F1802d9471T",
    R"F1802d9471F(15: return dVar1;)F1802d9471F",
    R"F1802d9471U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9471U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9471() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9471", "API-MS-WIN-CRT-MATH-L1-1-0.DLL::ceil");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] double _X{};
    [[maybe_unused]] double dVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("ceil", _X);
    // body sha256: 02356c9868294b62b8587de491d194645db12e0babb7b5b44684f662e307f163
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("double __cdecl ceil(double _X)");
        {
            trace.statement("double dVar1;");
            trace.statement("dVar1 = ceil(_X);");
            trace.statement("return dVar1;");
        }
    return kFunction_0x1802d9471;
}

// 0x1802d9477 API-MS-WIN-CRT-MATH-L1-1-0.DLL::ceilf
// source: re/dump/decompile/0x1802d9477_API_MS_WIN_CRT_MATH_L1_1_0_DLL__ceilf.c
// size: 6 bytes; thunk: true
// body sha256: f17b5750657d00143255cf84c4da4b2095d8a8cd708070966c54d0a03e191394
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9477{
    "0x1802d9477",
    "API-MS-WIN-CRT-MATH-L1-1-0.DLL::ceilf",
    R"F1802d9477S(float __cdecl ceilf(float _X))F1802d9477S",
    R"B1802d9477(// 0x1802d9477  API-MS-WIN-CRT-MATH-L1-1-0.DLL::ceilf
// size=6 thunk=true
// signature: float __cdecl ceilf(float _X)
// status: ok


float __cdecl ceilf(float _X)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d9477. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = ceilf(_X);
  return fVar1;
}


)B1802d9477",
    "f17b5750657d00143255cf84c4da4b2095d8a8cd708070966c54d0a03e191394",
    R"F1802d9477C()F1802d9477C",
    R"F1802d9477D()F1802d9477D",
    R"F1802d9477T()F1802d9477T",
    R"F1802d9477F(15: return fVar1;)F1802d9477F",
    R"F1802d9477U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9477U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9477() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9477", "API-MS-WIN-CRT-MATH-L1-1-0.DLL::ceilf");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] float _X{};
    [[maybe_unused]] float fVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("ceilf", _X);
    // body sha256: f17b5750657d00143255cf84c4da4b2095d8a8cd708070966c54d0a03e191394
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("float __cdecl ceilf(float _X)");
        {
            trace.statement("float fVar1;");
            trace.statement("fVar1 = ceilf(_X);");
            trace.statement("return fVar1;");
        }
    return kFunction_0x1802d9477;
}

// 0x1802d947d API-MS-WIN-CRT-MATH-L1-1-0.DLL::exp
// source: re/dump/decompile/0x1802d947d_API_MS_WIN_CRT_MATH_L1_1_0_DLL__exp.c
// size: 6 bytes; thunk: true
// body sha256: 3013e591cb71da098c2ffc9b57add40656dc94c13eaecdcb71516fe6dc8d2eb4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d947d{
    "0x1802d947d",
    "API-MS-WIN-CRT-MATH-L1-1-0.DLL::exp",
    R"F1802d947dS(double __cdecl exp(double _X))F1802d947dS",
    R"B1802d947d(// 0x1802d947d  API-MS-WIN-CRT-MATH-L1-1-0.DLL::exp
// size=6 thunk=true
// signature: double __cdecl exp(double _X)
// status: ok


double __cdecl exp(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d947d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = exp(_X);
  return dVar1;
}


)B1802d947d",
    "3013e591cb71da098c2ffc9b57add40656dc94c13eaecdcb71516fe6dc8d2eb4",
    R"F1802d947dC()F1802d947dC",
    R"F1802d947dD()F1802d947dD",
    R"F1802d947dT()F1802d947dT",
    R"F1802d947dF(15: return dVar1;)F1802d947dF",
    R"F1802d947dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d947dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d947d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d947d", "API-MS-WIN-CRT-MATH-L1-1-0.DLL::exp");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] double _X{};
    [[maybe_unused]] double dVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("exp", _X);
    // body sha256: 3013e591cb71da098c2ffc9b57add40656dc94c13eaecdcb71516fe6dc8d2eb4
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("double __cdecl exp(double _X)");
        {
            trace.statement("double dVar1;");
            trace.statement("dVar1 = exp(_X);");
            trace.statement("return dVar1;");
        }
    return kFunction_0x1802d947d;
}

// 0x1802d9483 API-MS-WIN-CRT-MATH-L1-1-0.DLL::expf
// source: re/dump/decompile/0x1802d9483_API_MS_WIN_CRT_MATH_L1_1_0_DLL__expf.c
// size: 6 bytes; thunk: true
// body sha256: fd4831a0e2832e01e3e628276295d4b6b9d404c938101a52f401b3e31ff9fb22
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9483{
    "0x1802d9483",
    "API-MS-WIN-CRT-MATH-L1-1-0.DLL::expf",
    R"F1802d9483S(float __cdecl expf(float _X))F1802d9483S",
    R"B1802d9483(// 0x1802d9483  API-MS-WIN-CRT-MATH-L1-1-0.DLL::expf
// size=6 thunk=true
// signature: float __cdecl expf(float _X)
// status: ok


float __cdecl expf(float _X)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d9483. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = expf(_X);
  return fVar1;
}


)B1802d9483",
    "fd4831a0e2832e01e3e628276295d4b6b9d404c938101a52f401b3e31ff9fb22",
    R"F1802d9483C()F1802d9483C",
    R"F1802d9483D()F1802d9483D",
    R"F1802d9483T()F1802d9483T",
    R"F1802d9483F(15: return fVar1;)F1802d9483F",
    R"F1802d9483U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9483U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9483() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9483", "API-MS-WIN-CRT-MATH-L1-1-0.DLL::expf");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] float _X{};
    [[maybe_unused]] float fVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("expf", _X);
    // body sha256: fd4831a0e2832e01e3e628276295d4b6b9d404c938101a52f401b3e31ff9fb22
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("float __cdecl expf(float _X)");
        {
            trace.statement("float fVar1;");
            trace.statement("fVar1 = expf(_X);");
            trace.statement("return fVar1;");
        }
    return kFunction_0x1802d9483;
}

// 0x1802d9489 API-MS-WIN-CRT-MATH-L1-1-0.DLL::floorf
// source: re/dump/decompile/0x1802d9489_API_MS_WIN_CRT_MATH_L1_1_0_DLL__floorf.c
// size: 6 bytes; thunk: true
// body sha256: ff29fe4d8e49e04280aa90acdbadea74c65a17b9435a98bf953c548a5cc88544
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9489{
    "0x1802d9489",
    "API-MS-WIN-CRT-MATH-L1-1-0.DLL::floorf",
    R"F1802d9489S(float __cdecl floorf(float _X))F1802d9489S",
    R"B1802d9489(// 0x1802d9489  API-MS-WIN-CRT-MATH-L1-1-0.DLL::floorf
// size=6 thunk=true
// signature: float __cdecl floorf(float _X)
// status: ok


float __cdecl floorf(float _X)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d9489. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = floorf(_X);
  return fVar1;
}


)B1802d9489",
    "ff29fe4d8e49e04280aa90acdbadea74c65a17b9435a98bf953c548a5cc88544",
    R"F1802d9489C()F1802d9489C",
    R"F1802d9489D()F1802d9489D",
    R"F1802d9489T()F1802d9489T",
    R"F1802d9489F(15: return fVar1;)F1802d9489F",
    R"F1802d9489U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9489U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9489() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9489", "API-MS-WIN-CRT-MATH-L1-1-0.DLL::floorf");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] float _X{};
    [[maybe_unused]] float fVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("floorf", _X);
    // body sha256: ff29fe4d8e49e04280aa90acdbadea74c65a17b9435a98bf953c548a5cc88544
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("float __cdecl floorf(float _X)");
        {
            trace.statement("float fVar1;");
            trace.statement("fVar1 = floorf(_X);");
            trace.statement("return fVar1;");
        }
    return kFunction_0x1802d9489;
}

// 0x1802d948f API-MS-WIN-CRT-MATH-L1-1-0.DLL::log10
// source: re/dump/decompile/0x1802d948f_API_MS_WIN_CRT_MATH_L1_1_0_DLL__log10.c
// size: 6 bytes; thunk: true
// body sha256: 9fd58204f59f150cd072e47a9bcbf8a705f92042b78500de594f47ef71d26662
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d948f{
    "0x1802d948f",
    "API-MS-WIN-CRT-MATH-L1-1-0.DLL::log10",
    R"F1802d948fS(double __cdecl log10(double _X))F1802d948fS",
    R"B1802d948f(// 0x1802d948f  API-MS-WIN-CRT-MATH-L1-1-0.DLL::log10
// size=6 thunk=true
// signature: double __cdecl log10(double _X)
// status: ok


double __cdecl log10(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d948f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = log10(_X);
  return dVar1;
}


)B1802d948f",
    "9fd58204f59f150cd072e47a9bcbf8a705f92042b78500de594f47ef71d26662",
    R"F1802d948fC()F1802d948fC",
    R"F1802d948fD()F1802d948fD",
    R"F1802d948fT()F1802d948fT",
    R"F1802d948fF(15: return dVar1;)F1802d948fF",
    R"F1802d948fU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d948fU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d948f() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d948f", "API-MS-WIN-CRT-MATH-L1-1-0.DLL::log10");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] double _X{};
    [[maybe_unused]] double dVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("log10", _X);
    // body sha256: 9fd58204f59f150cd072e47a9bcbf8a705f92042b78500de594f47ef71d26662
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("double __cdecl log10(double _X)");
        {
            trace.statement("double dVar1;");
            trace.statement("dVar1 = log10(_X);");
            trace.statement("return dVar1;");
        }
    return kFunction_0x1802d948f;
}

// 0x1802d9495 API-MS-WIN-CRT-MATH-L1-1-0.DLL::log10f
// source: re/dump/decompile/0x1802d9495_API_MS_WIN_CRT_MATH_L1_1_0_DLL__log10f.c
// size: 6 bytes; thunk: true
// body sha256: 1aac23eb95d141256a0d5c0dba4511a9d7a4b5f8926ee3662bc397aa818c8a92
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9495{
    "0x1802d9495",
    "API-MS-WIN-CRT-MATH-L1-1-0.DLL::log10f",
    R"F1802d9495S(float __cdecl log10f(float _X))F1802d9495S",
    R"B1802d9495(// 0x1802d9495  API-MS-WIN-CRT-MATH-L1-1-0.DLL::log10f
// size=6 thunk=true
// signature: float __cdecl log10f(float _X)
// status: ok


float __cdecl log10f(float _X)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d9495. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = log10f(_X);
  return fVar1;
}


)B1802d9495",
    "1aac23eb95d141256a0d5c0dba4511a9d7a4b5f8926ee3662bc397aa818c8a92",
    R"F1802d9495C()F1802d9495C",
    R"F1802d9495D()F1802d9495D",
    R"F1802d9495T()F1802d9495T",
    R"F1802d9495F(15: return fVar1;)F1802d9495F",
    R"F1802d9495U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9495U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9495() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9495", "API-MS-WIN-CRT-MATH-L1-1-0.DLL::log10f");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] float _X{};
    [[maybe_unused]] float fVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("log10f", _X);
    // body sha256: 1aac23eb95d141256a0d5c0dba4511a9d7a4b5f8926ee3662bc397aa818c8a92
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("float __cdecl log10f(float _X)");
        {
            trace.statement("float fVar1;");
            trace.statement("fVar1 = log10f(_X);");
            trace.statement("return fVar1;");
        }
    return kFunction_0x1802d9495;
}

// 0x1802d949b API-MS-WIN-CRT-MATH-L1-1-0.DLL::logf
// source: re/dump/decompile/0x1802d949b_API_MS_WIN_CRT_MATH_L1_1_0_DLL__logf.c
// size: 6 bytes; thunk: true
// body sha256: 6eaa85e440cdbff5f74018290eb7c1ca57dc668c05473d0d6da62183b30d7a36
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d949b{
    "0x1802d949b",
    "API-MS-WIN-CRT-MATH-L1-1-0.DLL::logf",
    R"F1802d949bS(float __cdecl logf(float _X))F1802d949bS",
    R"B1802d949b(// 0x1802d949b  API-MS-WIN-CRT-MATH-L1-1-0.DLL::logf
// size=6 thunk=true
// signature: float __cdecl logf(float _X)
// status: ok


float __cdecl logf(float _X)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d949b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = logf(_X);
  return fVar1;
}


)B1802d949b",
    "6eaa85e440cdbff5f74018290eb7c1ca57dc668c05473d0d6da62183b30d7a36",
    R"F1802d949bC()F1802d949bC",
    R"F1802d949bD()F1802d949bD",
    R"F1802d949bT()F1802d949bT",
    R"F1802d949bF(15: return fVar1;)F1802d949bF",
    R"F1802d949bU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d949bU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d949b() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d949b", "API-MS-WIN-CRT-MATH-L1-1-0.DLL::logf");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] float _X{};
    [[maybe_unused]] float fVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("logf", _X);
    // body sha256: 6eaa85e440cdbff5f74018290eb7c1ca57dc668c05473d0d6da62183b30d7a36
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("float __cdecl logf(float _X)");
        {
            trace.statement("float fVar1;");
            trace.statement("fVar1 = logf(_X);");
            trace.statement("return fVar1;");
        }
    return kFunction_0x1802d949b;
}

// 0x1802d94a1 API-MS-WIN-CRT-MATH-L1-1-0.DLL::roundf
// source: re/dump/decompile/0x1802d94a1_API_MS_WIN_CRT_MATH_L1_1_0_DLL__roundf.c
// size: 6 bytes; thunk: true
// body sha256: c8e1b591b4c81d4e560af3acb29f59244f110bde16617e83ba2b885d98493b38
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d94a1{
    "0x1802d94a1",
    "API-MS-WIN-CRT-MATH-L1-1-0.DLL::roundf",
    R"F1802d94a1S(undefined roundf())F1802d94a1S",
    R"B1802d94a1(// 0x1802d94a1  API-MS-WIN-CRT-MATH-L1-1-0.DLL::roundf
// size=6 thunk=true
// signature: undefined roundf()
// status: ok


void roundf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001802d94a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  roundf();
  return;
}


)B1802d94a1",
    "c8e1b591b4c81d4e560af3acb29f59244f110bde16617e83ba2b885d98493b38",
    R"F1802d94a1C()F1802d94a1C",
    R"F1802d94a1D()F1802d94a1D",
    R"F1802d94a1T()F1802d94a1T",
    R"F1802d94a1F(13: return;)F1802d94a1F",
    R"F1802d94a1U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d94a1U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d94a1() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d94a1", "API-MS-WIN-CRT-MATH-L1-1-0.DLL::roundf");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("roundf");
    // body sha256: c8e1b591b4c81d4e560af3acb29f59244f110bde16617e83ba2b885d98493b38
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void roundf(void)");
        {
            trace.statement("roundf();");
            trace.statement("return;");
        }
    return kFunction_0x1802d94a1;
}

// 0x1802d94a7 API-MS-WIN-CRT-MATH-L1-1-0.DLL::sinf
// source: re/dump/decompile/0x1802d94a7_API_MS_WIN_CRT_MATH_L1_1_0_DLL__sinf.c
// size: 6 bytes; thunk: true
// body sha256: 73706d4c9aafdca30c390822c1b976577cbbbb26cc0092a829b9d07970df1821
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d94a7{
    "0x1802d94a7",
    "API-MS-WIN-CRT-MATH-L1-1-0.DLL::sinf",
    R"F1802d94a7S(float __cdecl sinf(float _X))F1802d94a7S",
    R"B1802d94a7(// 0x1802d94a7  API-MS-WIN-CRT-MATH-L1-1-0.DLL::sinf
// size=6 thunk=true
// signature: float __cdecl sinf(float _X)
// status: ok


float __cdecl sinf(float _X)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d94a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = sinf(_X);
  return fVar1;
}


)B1802d94a7",
    "73706d4c9aafdca30c390822c1b976577cbbbb26cc0092a829b9d07970df1821",
    R"F1802d94a7C()F1802d94a7C",
    R"F1802d94a7D()F1802d94a7D",
    R"F1802d94a7T()F1802d94a7T",
    R"F1802d94a7F(15: return fVar1;)F1802d94a7F",
    R"F1802d94a7U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d94a7U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d94a7() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d94a7", "API-MS-WIN-CRT-MATH-L1-1-0.DLL::sinf");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] float _X{};
    [[maybe_unused]] float fVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("sinf", _X);
    // body sha256: 73706d4c9aafdca30c390822c1b976577cbbbb26cc0092a829b9d07970df1821
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("float __cdecl sinf(float _X)");
        {
            trace.statement("float fVar1;");
            trace.statement("fVar1 = sinf(_X);");
            trace.statement("return fVar1;");
        }
    return kFunction_0x1802d94a7;
}

// 0x1802d94ad API-MS-WIN-CRT-STRING-L1-1-0.DLL::strcmp
// source: re/dump/decompile/0x1802d94ad_API_MS_WIN_CRT_STRING_L1_1_0_DLL__strcmp.c
// size: 6 bytes; thunk: true
// body sha256: 19f03f878da256068a05a16c79926adea82fa344a0d6c2cee80540aa1744b5f6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d94ad{
    "0x1802d94ad",
    "API-MS-WIN-CRT-STRING-L1-1-0.DLL::strcmp",
    R"F1802d94adS(int __cdecl strcmp(char * _Str1, char * _Str2))F1802d94adS",
    R"B1802d94ad(// 0x1802d94ad  API-MS-WIN-CRT-STRING-L1-1-0.DLL::strcmp
// size=6 thunk=true
// signature: int __cdecl strcmp(char * _Str1, char * _Str2)
// status: ok


int __cdecl strcmp(char *_Str1,char *_Str2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d94ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = strcmp(_Str1,_Str2);
  return iVar1;
}


)B1802d94ad",
    "19f03f878da256068a05a16c79926adea82fa344a0d6c2cee80540aa1744b5f6",
    R"F1802d94adC()F1802d94adC",
    R"F1802d94adD()F1802d94adD",
    R"F1802d94adT()F1802d94adT",
    R"F1802d94adF(15: return iVar1;)F1802d94adF",
    R"F1802d94adU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d94adU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d94ad() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d94ad", "API-MS-WIN-CRT-STRING-L1-1-0.DLL::strcmp");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] char * _Str1{};
    [[maybe_unused]] char * _Str2{};
    [[maybe_unused]] std::int32_t iVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("strcmp", _Str1, _Str2);
    // body sha256: 19f03f878da256068a05a16c79926adea82fa344a0d6c2cee80540aa1744b5f6
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("int __cdecl strcmp(char *_Str1,char *_Str2)");
        {
            trace.statement("int iVar1;");
            trace.statement("iVar1 = strcmp(_Str1,_Str2);");
            trace.statement("return iVar1;");
        }
    return kFunction_0x1802d94ad;
}

// 0x1802d94b3 API-MS-WIN-CRT-STRING-L1-1-0.DLL::strlen
// source: re/dump/decompile/0x1802d94b3_API_MS_WIN_CRT_STRING_L1_1_0_DLL__strlen.c
// size: 6 bytes; thunk: true
// body sha256: f3baac9f02f4e2e4b3b1403682f2e2a66bc16d1f8d8b2594e3f8a4134f21df5e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d94b3{
    "0x1802d94b3",
    "API-MS-WIN-CRT-STRING-L1-1-0.DLL::strlen",
    R"F1802d94b3S(size_t __cdecl strlen(char * _Str))F1802d94b3S",
    R"B1802d94b3(// 0x1802d94b3  API-MS-WIN-CRT-STRING-L1-1-0.DLL::strlen
// size=6 thunk=true
// signature: size_t __cdecl strlen(char * _Str)
// status: ok


size_t __cdecl strlen(char *_Str)

{
  size_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d94b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = strlen(_Str);
  return sVar1;
}


)B1802d94b3",
    "f3baac9f02f4e2e4b3b1403682f2e2a66bc16d1f8d8b2594e3f8a4134f21df5e",
    R"F1802d94b3C()F1802d94b3C",
    R"F1802d94b3D()F1802d94b3D",
    R"F1802d94b3T()F1802d94b3T",
    R"F1802d94b3F(15: return sVar1;)F1802d94b3F",
    R"F1802d94b3U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d94b3U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d94b3() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d94b3", "API-MS-WIN-CRT-STRING-L1-1-0.DLL::strlen");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] char * _Str{};
    [[maybe_unused]] std::size_t sVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("strlen", _Str);
    // body sha256: f3baac9f02f4e2e4b3b1403682f2e2a66bc16d1f8d8b2594e3f8a4134f21df5e
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("size_t __cdecl strlen(char *_Str)");
        {
            trace.statement("size_t sVar1;");
            trace.statement("sVar1 = strlen(_Str);");
            trace.statement("return sVar1;");
        }
    return kFunction_0x1802d94b3;
}

// 0x1802d94b9 API-MS-WIN-CRT-STRING-L1-1-0.DLL::strncmp
// source: re/dump/decompile/0x1802d94b9_API_MS_WIN_CRT_STRING_L1_1_0_DLL__strncmp.c
// size: 6 bytes; thunk: true
// body sha256: 6f657f71effcfbb81ef20702ba7ae9dda083159c0fc060841a5a2f2d40d6d72e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d94b9{
    "0x1802d94b9",
    "API-MS-WIN-CRT-STRING-L1-1-0.DLL::strncmp",
    R"F1802d94b9S(int __cdecl strncmp(char * _Str1, char * _Str2, size_t _MaxCount))F1802d94b9S",
    R"B1802d94b9(// 0x1802d94b9  API-MS-WIN-CRT-STRING-L1-1-0.DLL::strncmp
// size=6 thunk=true
// signature: int __cdecl strncmp(char * _Str1, char * _Str2, size_t _MaxCount)
// status: ok


int __cdecl strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d94b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = strncmp(_Str1,_Str2,_MaxCount);
  return iVar1;
}


)B1802d94b9",
    "6f657f71effcfbb81ef20702ba7ae9dda083159c0fc060841a5a2f2d40d6d72e",
    R"F1802d94b9C()F1802d94b9C",
    R"F1802d94b9D()F1802d94b9D",
    R"F1802d94b9T()F1802d94b9T",
    R"F1802d94b9F(15: return iVar1;)F1802d94b9F",
    R"F1802d94b9U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d94b9U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d94b9() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d94b9", "API-MS-WIN-CRT-STRING-L1-1-0.DLL::strncmp");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] char * _Str1{};
    [[maybe_unused]] char * _Str2{};
    [[maybe_unused]] std::size_t _MaxCount{};
    [[maybe_unused]] std::int32_t iVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("strncmp", _Str1, _Str2, _MaxCount);
    // body sha256: 6f657f71effcfbb81ef20702ba7ae9dda083159c0fc060841a5a2f2d40d6d72e
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("int __cdecl strncmp(char *_Str1,char *_Str2,size_t _MaxCount)");
        {
            trace.statement("int iVar1;");
            trace.statement("iVar1 = strncmp(_Str1,_Str2,_MaxCount);");
            trace.statement("return iVar1;");
        }
    return kFunction_0x1802d94b9;
}

// 0x1802d94bf API-MS-WIN-CRT-STRING-L1-1-0.DLL::strncpy
// source: re/dump/decompile/0x1802d94bf_API_MS_WIN_CRT_STRING_L1_1_0_DLL__strncpy.c
// size: 6 bytes; thunk: true
// body sha256: a8f43ce631f9d0fd82de96b396b141d32c48e1af6ca73eddc8de831290ade325
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d94bf{
    "0x1802d94bf",
    "API-MS-WIN-CRT-STRING-L1-1-0.DLL::strncpy",
    R"F1802d94bfS(char * __cdecl strncpy(char * _Dest, char * _Source, size_t _Count))F1802d94bfS",
    R"B1802d94bf(// 0x1802d94bf  API-MS-WIN-CRT-STRING-L1-1-0.DLL::strncpy
// size=6 thunk=true
// signature: char * __cdecl strncpy(char * _Dest, char * _Source, size_t _Count)
// status: ok


char * __cdecl strncpy(char *_Dest,char *_Source,size_t _Count)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d94bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = strncpy(_Dest,_Source,_Count);
  return pcVar1;
}


)B1802d94bf",
    "a8f43ce631f9d0fd82de96b396b141d32c48e1af6ca73eddc8de831290ade325",
    R"F1802d94bfC()F1802d94bfC",
    R"F1802d94bfD()F1802d94bfD",
    R"F1802d94bfT()F1802d94bfT",
    R"F1802d94bfF(15: return pcVar1;)F1802d94bfF",
    R"F1802d94bfU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d94bfU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d94bf() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d94bf", "API-MS-WIN-CRT-STRING-L1-1-0.DLL::strncpy");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] char * _Dest{};
    [[maybe_unused]] char * _Source{};
    [[maybe_unused]] std::size_t _Count{};
    [[maybe_unused]] char * pcVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: call arguments not type-recovered for strncpy: char *_Dest,char *_Source,size_t _Count [reason: ambiguous operand type]
    trace.call_arguments("strncpy", _Dest, _Source, _Count);
    // body sha256: a8f43ce631f9d0fd82de96b396b141d32c48e1af6ca73eddc8de831290ade325
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("char * __cdecl strncpy(char *_Dest,char *_Source,size_t _Count)");
        {
            trace.statement("char *pcVar1;");
            trace.statement("pcVar1 = strncpy(_Dest,_Source,_Count);");
            trace.statement("return pcVar1;");
        }
    return kFunction_0x1802d94bf;
}

// 0x1802d94c5 API-MS-WIN-CRT-STRING-L1-1-0.DLL::wcslen
// source: re/dump/decompile/0x1802d94c5_API_MS_WIN_CRT_STRING_L1_1_0_DLL__wcslen.c
// size: 6 bytes; thunk: true
// body sha256: f0223810b8757d4a379f999b378daa1ab1b4f4a3f1a8064dc9d387ce73cde521
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d94c5{
    "0x1802d94c5",
    "API-MS-WIN-CRT-STRING-L1-1-0.DLL::wcslen",
    R"F1802d94c5S(size_t __cdecl wcslen(wchar_t * _Str))F1802d94c5S",
    R"B1802d94c5(// 0x1802d94c5  API-MS-WIN-CRT-STRING-L1-1-0.DLL::wcslen
// size=6 thunk=true
// signature: size_t __cdecl wcslen(wchar_t * _Str)
// status: ok


size_t __cdecl wcslen(wchar_t *_Str)

{
  size_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d94c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = wcslen(_Str);
  return sVar1;
}


)B1802d94c5",
    "f0223810b8757d4a379f999b378daa1ab1b4f4a3f1a8064dc9d387ce73cde521",
    R"F1802d94c5C()F1802d94c5C",
    R"F1802d94c5D()F1802d94c5D",
    R"F1802d94c5T()F1802d94c5T",
    R"F1802d94c5F(15: return sVar1;)F1802d94c5F",
    R"F1802d94c5U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d94c5U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d94c5() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d94c5", "API-MS-WIN-CRT-STRING-L1-1-0.DLL::wcslen");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] wchar_t * _Str{};
    [[maybe_unused]] std::size_t sVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("wcslen", _Str);
    // body sha256: f0223810b8757d4a379f999b378daa1ab1b4f4a3f1a8064dc9d387ce73cde521
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("size_t __cdecl wcslen(wchar_t *_Str)");
        {
            trace.statement("size_t sVar1;");
            trace.statement("sVar1 = wcslen(_Str);");
            trace.statement("return sVar1;");
        }
    return kFunction_0x1802d94c5;
}

// 0x1802d94e0 _guard_dispatch_icall
// source: re/dump/decompile/0x1802d94e0__guard_dispatch_icall.c
// size: 2 bytes; thunk: false
// body sha256: 0299807909918158590c5945d38be67d910394de1c4c729dbae3241e851af512
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d94e0{
    "0x1802d94e0",
    "_guard_dispatch_icall",
    R"F1802d94e0S(undefined _guard_dispatch_icall())F1802d94e0S",
    R"B1802d94e0(// 0x1802d94e0  _guard_dispatch_icall
// size=2 thunk=false
// signature: undefined _guard_dispatch_icall()
// status: ok


/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d94e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


)B1802d94e0",
    "0299807909918158590c5945d38be67d910394de1c4c729dbae3241e851af512",
    R"F1802d94e0C()F1802d94e0C",
    R"F1802d94e0D()F1802d94e0D",
    R"F1802d94e0T()F1802d94e0T",
    R"F1802d94e0F(17: return;)F1802d94e0F",
    R"F1802d94e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: resolve the indirect call in body 16: (*UNRECOVERED_JUMPTABLE)();.)F1802d94e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d94e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d94e0", "_guard_dispatch_icall");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] void* * UNRECOVERED_JUMPTABLE{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: resolve the indirect call in body 16: (*UNRECOVERED_JUMPTABLE)();.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 0299807909918158590c5945d38be67d910394de1c4c729dbae3241e851af512
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void _guard_dispatch_icall(void)");
        {
            trace.statement("code *UNRECOVERED_JUMPTABLE;");
            trace.statement("(*UNRECOVERED_JUMPTABLE)();");
            trace.statement("return;");
        }
    return kFunction_0x1802d94e0;
}

// 0x1802d9500 _guard_dispatch_icall
// source: re/dump/decompile/0x1802d9500__guard_dispatch_icall.c
// size: 6 bytes; thunk: true
// body sha256: 6be86d406667ab44421c572a2586ce66a255b2accf3a7c11bc55e9825aae9b7b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9500{
    "0x1802d9500",
    "_guard_dispatch_icall",
    R"F1802d9500S(undefined _guard_dispatch_icall())F1802d9500S",
    R"B1802d9500(// 0x1802d9500  _guard_dispatch_icall
// size=6 thunk=true
// signature: undefined _guard_dispatch_icall()
// status: ok


/* WARNING: This is an inlined function */
/* WARNING: Switch with 1 destination removed at 0x0001802d9500 */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d94e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


)B1802d9500",
    "6be86d406667ab44421c572a2586ce66a255b2accf3a7c11bc55e9825aae9b7b",
    R"F1802d9500C()F1802d9500C",
    R"F1802d9500D()F1802d9500D",
    R"F1802d9500T()F1802d9500T",
    R"F1802d9500F(18: return;)F1802d9500F",
    R"F1802d9500U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: resolve the indirect call in body 17: (*UNRECOVERED_JUMPTABLE)();.)F1802d9500U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9500() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9500", "_guard_dispatch_icall");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] void* * UNRECOVERED_JUMPTABLE{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: resolve the indirect call in body 17: (*UNRECOVERED_JUMPTABLE)();.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 6be86d406667ab44421c572a2586ce66a255b2accf3a7c11bc55e9825aae9b7b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void _guard_dispatch_icall(void)");
        {
            trace.statement("code *UNRECOVERED_JUMPTABLE;");
            trace.statement("(*UNRECOVERED_JUMPTABLE)();");
            trace.statement("return;");
        }
    return kFunction_0x1802d9500;
}

// 0x1802d9580 FUN_1802d9580
// source: re/dump/decompile/0x1802d9580_FUN_1802d9580.c
// size: 38 bytes; thunk: false
// body sha256: 63f0b820665fbb131a3068ddc1b2db4990dadd61c05b3f2e8dd8603a942fef17
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9580{
    "0x1802d9580",
    "FUN_1802d9580",
    R"F1802d9580S(undefined FUN_1802d9580())F1802d9580S",
    R"B1802d9580(// 0x1802d9580  FUN_1802d9580
// size=38 thunk=false
// signature: undefined FUN_1802d9580()
// status: ok


void FUN_1802d9580(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x40));
  }
  return;
}


)B1802d9580",
    "63f0b820665fbb131a3068ddc1b2db4990dadd61c05b3f2e8dd8603a942fef17",
    R"F1802d9580C()F1802d9580C",
    R"F1802d9580D()F1802d9580D",
    R"F1802d9580T()F1802d9580T",
    R"F1802d9580F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802d9580F",
    R"F1802d9580U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9580U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9580() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9580", "FUN_1802d9580");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", load_at<std::uint64_t>(param_2 + 0x40, 0));
    // body sha256: 63f0b820665fbb131a3068ddc1b2db4990dadd61c05b3f2e8dd8603a942fef17
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x40));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802d9580;
}

// 0x1802d95d0 FUN_1802d95d0
// source: re/dump/decompile/0x1802d95d0_FUN_1802d95d0.c
// size: 38 bytes; thunk: false
// body sha256: 95018bae75edb6984f86397c82c1a1f4034f374ba58d0877eba52663a2ad3bdf
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d95d0{
    "0x1802d95d0",
    "FUN_1802d95d0",
    R"F1802d95d0S(undefined FUN_1802d95d0())F1802d95d0S",
    R"B1802d95d0(// 0x1802d95d0  FUN_1802d95d0
// size=38 thunk=false
// signature: undefined FUN_1802d95d0()
// status: ok


void FUN_1802d95d0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);
  }
  return;
}


)B1802d95d0",
    "95018bae75edb6984f86397c82c1a1f4034f374ba58d0877eba52663a2ad3bdf",
    R"F1802d95d0C()F1802d95d0C",
    R"F1802d95d0D()F1802d95d0D",
    R"F1802d95d0T()F1802d95d0T",
    R"F1802d95d0F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802d95d0F",
    R"F1802d95d0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d95d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d95d0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d95d0", "FUN_1802d95d0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x28);
    // body sha256: 95018bae75edb6984f86397c82c1a1f4034f374ba58d0877eba52663a2ad3bdf
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802d95d0;
}

// 0x1802d962c FUN_1802d962c
// source: re/dump/decompile/0x1802d962c_FUN_1802d962c.c
// size: 38 bytes; thunk: false
// body sha256: 6500882e429f9b3982115ee109a050d8dbe137ec4bd8dfa392608f3578dbccf6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d962c{
    "0x1802d962c",
    "FUN_1802d962c",
    R"F1802d962cS(undefined FUN_1802d962c())F1802d962cS",
    R"B1802d962c(// 0x1802d962c  FUN_1802d962c
// size=38 thunk=false
// signature: undefined FUN_1802d962c()
// status: ok


void FUN_1802d962c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);
  }
  return;
}


)B1802d962c",
    "6500882e429f9b3982115ee109a050d8dbe137ec4bd8dfa392608f3578dbccf6",
    R"F1802d962cC()F1802d962cC",
    R"F1802d962cD()F1802d962cD",
    R"F1802d962cT()F1802d962cT",
    R"F1802d962cF(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802d962cF",
    R"F1802d962cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d962cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d962c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d962c", "FUN_1802d962c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x28);
    // body sha256: 6500882e429f9b3982115ee109a050d8dbe137ec4bd8dfa392608f3578dbccf6
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802d962c;
}

// 0x1802d965e FUN_1802d965e
// source: re/dump/decompile/0x1802d965e_FUN_1802d965e.c
// size: 38 bytes; thunk: false
// body sha256: 2cd9e60485f72909ab669760631a1d54f723d1aeea8ae69b27e1c5c43c997c67
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d965e{
    "0x1802d965e",
    "FUN_1802d965e",
    R"F1802d965eS(undefined FUN_1802d965e())F1802d965eS",
    R"B1802d965e(// 0x1802d965e  FUN_1802d965e
// size=38 thunk=false
// signature: undefined FUN_1802d965e()
// status: ok


void FUN_1802d965e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x78);
  }
  return;
}


)B1802d965e",
    "2cd9e60485f72909ab669760631a1d54f723d1aeea8ae69b27e1c5c43c997c67",
    R"F1802d965eC()F1802d965eC",
    R"F1802d965eD()F1802d965eD",
    R"F1802d965eT()F1802d965eT",
    R"F1802d965eF(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802d965eF",
    R"F1802d965eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d965eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d965e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d965e", "FUN_1802d965e");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x78);
    // body sha256: 2cd9e60485f72909ab669760631a1d54f723d1aeea8ae69b27e1c5c43c997c67
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802d965e;
}

// 0x1802d9710 FUN_1802d9710
// source: re/dump/decompile/0x1802d9710_FUN_1802d9710.c
// size: 38 bytes; thunk: false
// body sha256: 2ea71c4fde4827be7c5ecec8c682bb55eff544c6a9a2869eb9ef57d787dc7662
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9710{
    "0x1802d9710",
    "FUN_1802d9710",
    R"F1802d9710S(undefined FUN_1802d9710())F1802d9710S",
    R"B1802d9710(// 0x1802d9710  FUN_1802d9710
// size=38 thunk=false
// signature: undefined FUN_1802d9710()
// status: ok


void FUN_1802d9710(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802d9710",
    "2ea71c4fde4827be7c5ecec8c682bb55eff544c6a9a2869eb9ef57d787dc7662",
    R"F1802d9710C()F1802d9710C",
    R"F1802d9710D()F1802d9710D",
    R"F1802d9710T()F1802d9710T",
    R"F1802d9710F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802d9710F",
    R"F1802d9710U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9710U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9710() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9710", "FUN_1802d9710");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", load_at<std::uint64_t>(param_2 + 0x48, 0));
    // body sha256: 2ea71c4fde4827be7c5ecec8c682bb55eff544c6a9a2869eb9ef57d787dc7662
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802d9710;
}

// 0x1802d974c FUN_1802d974c
// source: re/dump/decompile/0x1802d974c_FUN_1802d974c.c
// size: 38 bytes; thunk: false
// body sha256: 97f6b0fbe99384e80e7b52fb26c4d75bfc54b638ff113c42312def123eabc1d1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d974c{
    "0x1802d974c",
    "FUN_1802d974c",
    R"F1802d974cS(undefined FUN_1802d974c())F1802d974cS",
    R"B1802d974c(// 0x1802d974c  FUN_1802d974c
// size=38 thunk=false
// signature: undefined FUN_1802d974c()
// status: ok


void FUN_1802d974c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802d974c",
    "97f6b0fbe99384e80e7b52fb26c4d75bfc54b638ff113c42312def123eabc1d1",
    R"F1802d974cC()F1802d974cC",
    R"F1802d974cD()F1802d974cD",
    R"F1802d974cT()F1802d974cT",
    R"F1802d974cF(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802d974cF",
    R"F1802d974cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d974cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d974c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d974c", "FUN_1802d974c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", load_at<std::uint64_t>(param_2 + 0x28, 0));
    // body sha256: 97f6b0fbe99384e80e7b52fb26c4d75bfc54b638ff113c42312def123eabc1d1
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802d974c;
}

// 0x1802d9790 FUN_1802d9790
// source: re/dump/decompile/0x1802d9790_FUN_1802d9790.c
// size: 38 bytes; thunk: false
// body sha256: 3a5d3529371581fe10ab09808dab84041b3f183518520f168357573e02173849
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9790{
    "0x1802d9790",
    "FUN_1802d9790",
    R"F1802d9790S(undefined FUN_1802d9790())F1802d9790S",
    R"B1802d9790(// 0x1802d9790  FUN_1802d9790
// size=38 thunk=false
// signature: undefined FUN_1802d9790()
// status: ok


void FUN_1802d9790(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802d9790",
    "3a5d3529371581fe10ab09808dab84041b3f183518520f168357573e02173849",
    R"F1802d9790C()F1802d9790C",
    R"F1802d9790D()F1802d9790D",
    R"F1802d9790T()F1802d9790T",
    R"F1802d9790F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802d9790F",
    R"F1802d9790U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9790U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9790() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9790", "FUN_1802d9790");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x48);
    // body sha256: 3a5d3529371581fe10ab09808dab84041b3f183518520f168357573e02173849
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802d9790;
}

// 0x1802d97b6 FUN_1802d97b6
// source: re/dump/decompile/0x1802d97b6_FUN_1802d97b6.c
// size: 38 bytes; thunk: false
// body sha256: 5efeb7a215f5b0743aba0a03dc6379f7e8034fd818d3795c8e49013130c0864c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d97b6{
    "0x1802d97b6",
    "FUN_1802d97b6",
    R"F1802d97b6S(undefined FUN_1802d97b6())F1802d97b6S",
    R"B1802d97b6(// 0x1802d97b6  FUN_1802d97b6
// size=38 thunk=false
// signature: undefined FUN_1802d97b6()
// status: ok


void FUN_1802d97b6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);
  }
  return;
}


)B1802d97b6",
    "5efeb7a215f5b0743aba0a03dc6379f7e8034fd818d3795c8e49013130c0864c",
    R"F1802d97b6C()F1802d97b6C",
    R"F1802d97b6D()F1802d97b6D",
    R"F1802d97b6T()F1802d97b6T",
    R"F1802d97b6F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802d97b6F",
    R"F1802d97b6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d97b6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d97b6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d97b6", "FUN_1802d97b6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x28);
    // body sha256: 5efeb7a215f5b0743aba0a03dc6379f7e8034fd818d3795c8e49013130c0864c
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802d97b6;
}

// 0x1802d97dc FUN_1802d97dc
// source: re/dump/decompile/0x1802d97dc_FUN_1802d97dc.c
// size: 41 bytes; thunk: false
// body sha256: 237e6d7e817ae622c8cf1e28340aba3ce2efa470b3205a2fae79ef245440291a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d97dc{
    "0x1802d97dc",
    "FUN_1802d97dc",
    R"F1802d97dcS(undefined FUN_1802d97dc())F1802d97dcS",
    R"B1802d97dc(// 0x1802d97dc  FUN_1802d97dc
// size=41 thunk=false
// signature: undefined FUN_1802d97dc()
// status: ok


void FUN_1802d97dc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x88));
  }
  return;
}


)B1802d97dc",
    "237e6d7e817ae622c8cf1e28340aba3ce2efa470b3205a2fae79ef245440291a",
    R"F1802d97dcC()F1802d97dcC",
    R"F1802d97dcD()F1802d97dcD",
    R"F1802d97dcT()F1802d97dcT",
    R"F1802d97dcF(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802d97dcF",
    R"F1802d97dcU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d97dcU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d97dc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d97dc", "FUN_1802d97dc");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", load_at<std::uint64_t>(param_2 + 0x88, 0));
    // body sha256: 237e6d7e817ae622c8cf1e28340aba3ce2efa470b3205a2fae79ef245440291a
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x88));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802d97dc;
}

// 0x1802d9810 FUN_1802d9810
// source: re/dump/decompile/0x1802d9810_FUN_1802d9810.c
// size: 38 bytes; thunk: false
// body sha256: a308a540d505aeec9c8a167b5c19f276053904feb907f8a7fe3b4a945eeabb24
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9810{
    "0x1802d9810",
    "FUN_1802d9810",
    R"F1802d9810S(undefined FUN_1802d9810())F1802d9810S",
    R"B1802d9810(// 0x1802d9810  FUN_1802d9810
// size=38 thunk=false
// signature: undefined FUN_1802d9810()
// status: ok


void FUN_1802d9810(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802d9810",
    "a308a540d505aeec9c8a167b5c19f276053904feb907f8a7fe3b4a945eeabb24",
    R"F1802d9810C()F1802d9810C",
    R"F1802d9810D()F1802d9810D",
    R"F1802d9810T()F1802d9810T",
    R"F1802d9810F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802d9810F",
    R"F1802d9810U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9810U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9810() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9810", "FUN_1802d9810");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", load_at<std::uint64_t>(param_2 + 0x28, 0));
    // body sha256: a308a540d505aeec9c8a167b5c19f276053904feb907f8a7fe3b4a945eeabb24
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802d9810;
}

// 0x1802d9836 FUN_1802d9836
// source: re/dump/decompile/0x1802d9836_FUN_1802d9836.c
// size: 38 bytes; thunk: false
// body sha256: 28e86e57fff1aa28feebb3e864d6d5b024bf15e0bf7fb58f2e5f30e0762f263c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9836{
    "0x1802d9836",
    "FUN_1802d9836",
    R"F1802d9836S(undefined FUN_1802d9836())F1802d9836S",
    R"B1802d9836(// 0x1802d9836  FUN_1802d9836
// size=38 thunk=false
// signature: undefined FUN_1802d9836()
// status: ok


void FUN_1802d9836(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802d9836",
    "28e86e57fff1aa28feebb3e864d6d5b024bf15e0bf7fb58f2e5f30e0762f263c",
    R"F1802d9836C()F1802d9836C",
    R"F1802d9836D()F1802d9836D",
    R"F1802d9836T()F1802d9836T",
    R"F1802d9836F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802d9836F",
    R"F1802d9836U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9836U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9836() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9836", "FUN_1802d9836");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", load_at<std::uint64_t>(param_2 + 0x28, 0));
    // body sha256: 28e86e57fff1aa28feebb3e864d6d5b024bf15e0bf7fb58f2e5f30e0762f263c
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802d9836;
}

// 0x1802d98b0 FUN_1802d98b0
// source: re/dump/decompile/0x1802d98b0_FUN_1802d98b0.c
// size: 46 bytes; thunk: false
// body sha256: 1012501a4ccc7ec6be758b89161a0ee4445d43ce40bb452276d4102aaf6a64da
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d98b0{
    "0x1802d98b0",
    "FUN_1802d98b0",
    R"F1802d98b0S(undefined FUN_1802d98b0())F1802d98b0S",
    R"B1802d98b0(// 0x1802d98b0  FUN_1802d98b0
// size=46 thunk=false
// signature: undefined FUN_1802d98b0()
// status: ok


void FUN_1802d98b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(param_2 + 0xe8));
  }
  return;
}


)B1802d98b0",
    "1012501a4ccc7ec6be758b89161a0ee4445d43ce40bb452276d4102aaf6a64da",
    R"F1802d98b0C()F1802d98b0C",
    R"F1802d98b0D()F1802d98b0D",
    R"F1802d98b0T()F1802d98b0T",
    R"F1802d98b0F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
15: return;)F1802d98b0F",
    R"F1802d98b0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d98b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d98b0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d98b0", "FUN_1802d98b0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 1012501a4ccc7ec6be758b89161a0ee4445d43ce40bb452276d4102aaf6a64da
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>");
                trace.statement("((basic_ios<char,std::char_traits<char>_> *)(param_2 + 0xe8));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802d98b0;
}

// 0x1802d991a FUN_1802d991a
// source: re/dump/decompile/0x1802d991a_FUN_1802d991a.c
// size: 38 bytes; thunk: false
// body sha256: 0456e71fad1b48171c738bea59d806c0664c02dc1639880edc62c77d91c4df3a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d991a{
    "0x1802d991a",
    "FUN_1802d991a",
    R"F1802d991aS(undefined FUN_1802d991a())F1802d991aS",
    R"B1802d991a(// 0x1802d991a  FUN_1802d991a
// size=38 thunk=false
// signature: undefined FUN_1802d991a()
// status: ok


void FUN_1802d991a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x30));
  }
  return;
}


)B1802d991a",
    "0456e71fad1b48171c738bea59d806c0664c02dc1639880edc62c77d91c4df3a",
    R"F1802d991aC()F1802d991aC",
    R"F1802d991aD()F1802d991aD",
    R"F1802d991aT()F1802d991aT",
    R"F1802d991aF(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802d991aF",
    R"F1802d991aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d991aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d991a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d991a", "FUN_1802d991a");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", load_at<std::uint64_t>(param_2 + 0x30, 0));
    // body sha256: 0456e71fad1b48171c738bea59d806c0664c02dc1639880edc62c77d91c4df3a
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x30));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802d991a;
}

// 0x1802d9940 FUN_1802d9940
// source: re/dump/decompile/0x1802d9940_FUN_1802d9940.c
// size: 38 bytes; thunk: false
// body sha256: 22111555616ff223b692eb495980e85c4e0f8ba30579fa2eecdb682ce875544b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9940{
    "0x1802d9940",
    "FUN_1802d9940",
    R"F1802d9940S(undefined FUN_1802d9940())F1802d9940S",
    R"B1802d9940(// 0x1802d9940  FUN_1802d9940
// size=38 thunk=false
// signature: undefined FUN_1802d9940()
// status: ok


void FUN_1802d9940(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x30));
  }
  return;
}


)B1802d9940",
    "22111555616ff223b692eb495980e85c4e0f8ba30579fa2eecdb682ce875544b",
    R"F1802d9940C()F1802d9940C",
    R"F1802d9940D()F1802d9940D",
    R"F1802d9940T()F1802d9940T",
    R"F1802d9940F(10: if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
14: return;)F1802d9940F",
    R"F1802d9940U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9940U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9940() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9940", "FUN_1802d9940");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", load_at<std::uint64_t>(param_2 + 0x30, 0));
    // body sha256: 22111555616ff223b692eb495980e85c4e0f8ba30579fa2eecdb682ce875544b
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 8) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x30));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802d9940;
}

// 0x1802d9966 FUN_1802d9966
// source: re/dump/decompile/0x1802d9966_FUN_1802d9966.c
// size: 38 bytes; thunk: false
// body sha256: 47d0a9d47427838a67bcd2d7ed14923a69da726cf8430f030b9f67442c309aff
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9966{
    "0x1802d9966",
    "FUN_1802d9966",
    R"F1802d9966S(undefined FUN_1802d9966())F1802d9966S",
    R"B1802d9966(// 0x1802d9966  FUN_1802d9966
// size=38 thunk=false
// signature: undefined FUN_1802d9966()
// status: ok


void FUN_1802d9966(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x30));
  }
  return;
}


)B1802d9966",
    "47d0a9d47427838a67bcd2d7ed14923a69da726cf8430f030b9f67442c309aff",
    R"F1802d9966C()F1802d9966C",
    R"F1802d9966D()F1802d9966D",
    R"F1802d9966T()F1802d9966T",
    R"F1802d9966F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802d9966F",
    R"F1802d9966U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9966U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9966() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9966", "FUN_1802d9966");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", load_at<std::uint64_t>(param_2 + 0x30, 0));
    // body sha256: 47d0a9d47427838a67bcd2d7ed14923a69da726cf8430f030b9f67442c309aff
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x30));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802d9966;
}

// 0x1802d9a70 FUN_1802d9a70
// source: re/dump/decompile/0x1802d9a70_FUN_1802d9a70.c
// size: 38 bytes; thunk: false
// body sha256: 2cf47062fb04224c31e53a17cd7873991db3220de4a10a833a3e2968d1b31022
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9a70{
    "0x1802d9a70",
    "FUN_1802d9a70",
    R"F1802d9a70S(undefined FUN_1802d9a70())F1802d9a70S",
    R"B1802d9a70(// 0x1802d9a70  FUN_1802d9a70
// size=38 thunk=false
// signature: undefined FUN_1802d9a70()
// status: ok


void FUN_1802d9a70(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180209700(*(undefined8 *)(param_2 + 0x30));
  }
  return;
}


)B1802d9a70",
    "2cf47062fb04224c31e53a17cd7873991db3220de4a10a833a3e2968d1b31022",
    R"F1802d9a70C(FUN_180209700)F1802d9a70C",
    R"F1802d9a70D()F1802d9a70D",
    R"F1802d9a70T()F1802d9a70T",
    R"F1802d9a70F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802d9a70F",
    R"F1802d9a70U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9a70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9a70() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9a70", "FUN_1802d9a70");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209700", load_at<std::uint64_t>(param_2 + 0x30, 0));
    trace.call_target("FUN_180209700", reinterpret_cast<const void*>(&image::FUN_180209700));
    // body sha256: 2cf47062fb04224c31e53a17cd7873991db3220de4a10a833a3e2968d1b31022
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_180209700(*(undefined8 *)(param_2 + 0x30));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802d9a70;
}

// 0x1802d9b10 FUN_1802d9b10
// source: re/dump/decompile/0x1802d9b10_FUN_1802d9b10.c
// size: 42 bytes; thunk: false
// body sha256: 6674da1e2dfe31d797963098a79a331abc34a70e5beba6c53a67982cbc83c15e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9b10{
    "0x1802d9b10",
    "FUN_1802d9b10",
    R"F1802d9b10S(undefined FUN_1802d9b10())F1802d9b10S",
    R"B1802d9b10(// 0x1802d9b10  FUN_1802d9b10
// size=42 thunk=false
// signature: undefined FUN_1802d9b10()
// status: ok


undefined8 FUN_1802d9b10(void)

{
  FUN_180014410("[IFACE-FAIL] Exception reading CHLClient vtable!\n");
  return 0;
}


)B1802d9b10",
    "6674da1e2dfe31d797963098a79a331abc34a70e5beba6c53a67982cbc83c15e",
    R"F1802d9b10C(FUN_180014410)F1802d9b10C",
    R"F1802d9b10D()F1802d9b10D",
    R"F1802d9b10T("[IFACE-FAIL] Exception reading CHLClient vtable!\\n")F1802d9b10T",
    R"F1802d9b10F(11: return 0;)F1802d9b10F",
    R"F1802d9b10U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9b10U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9b10() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9b10", "FUN_1802d9b10");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180014410", "[IFACE-FAIL] Exception reading CHLClient vtable!\n");
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.string_literal("[IFACE-FAIL] Exception reading CHLClient vtable!\\n");
    // body sha256: 6674da1e2dfe31d797963098a79a331abc34a70e5beba6c53a67982cbc83c15e
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180014410(\"[IFACE-FAIL] Exception reading CHLClient vtable!\\n\");");
            trace.statement("return 0;");
        }
    return kFunction_0x1802d9b10;
}

// 0x1802d9b6b FUN_1802d9b6b
// source: re/dump/decompile/0x1802d9b6b_FUN_1802d9b6b.c
// size: 42 bytes; thunk: false
// body sha256: a2428cfb827762b89829972ac8ef69537b41dac815ab0074695645a54dd07b76
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9b6b{
    "0x1802d9b6b",
    "FUN_1802d9b6b",
    R"F1802d9b6bS(undefined FUN_1802d9b6b())F1802d9b6bS",
    R"B1802d9b6b(// 0x1802d9b6b  FUN_1802d9b6b
// size=42 thunk=false
// signature: undefined FUN_1802d9b6b()
// status: ok


undefined8 FUN_1802d9b6b(void)

{
  FUN_180014410("[IFACE-FAIL] Exception reading RenderView vtable!\n");
  return 0;
}


)B1802d9b6b",
    "a2428cfb827762b89829972ac8ef69537b41dac815ab0074695645a54dd07b76",
    R"F1802d9b6bC(FUN_180014410)F1802d9b6bC",
    R"F1802d9b6bD()F1802d9b6bD",
    R"F1802d9b6bT("[IFACE-FAIL] Exception reading RenderView vtable!\\n")F1802d9b6bT",
    R"F1802d9b6bF(11: return 0;)F1802d9b6bF",
    R"F1802d9b6bU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9b6bU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9b6b() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9b6b", "FUN_1802d9b6b");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180014410", "[IFACE-FAIL] Exception reading RenderView vtable!\n");
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.string_literal("[IFACE-FAIL] Exception reading RenderView vtable!\\n");
    // body sha256: a2428cfb827762b89829972ac8ef69537b41dac815ab0074695645a54dd07b76
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180014410(\"[IFACE-FAIL] Exception reading RenderView vtable!\\n\");");
            trace.statement("return 0;");
        }
    return kFunction_0x1802d9b6b;
}

// 0x1802d9ed0 FUN_1802d9ed0
// source: re/dump/decompile/0x1802d9ed0_FUN_1802d9ed0.c
// size: 38 bytes; thunk: false
// body sha256: 7a8f76d6fd7de870f79548cc5e28da89d98654f9c5ffac397efdbfa9522a22f6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802d9ed0{
    "0x1802d9ed0",
    "FUN_1802d9ed0",
    R"F1802d9ed0S(undefined FUN_1802d9ed0())F1802d9ed0S",
    R"B1802d9ed0(// 0x1802d9ed0  FUN_1802d9ed0
// size=38 thunk=false
// signature: undefined FUN_1802d9ed0()
// status: ok


void FUN_1802d9ed0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18001bc60(*(undefined8 *)(param_2 + 0x58));
  }
  return;
}


)B1802d9ed0",
    "7a8f76d6fd7de870f79548cc5e28da89d98654f9c5ffac397efdbfa9522a22f6",
    R"F1802d9ed0C(FUN_18001bc60)F1802d9ed0C",
    R"F1802d9ed0D()F1802d9ed0D",
    R"F1802d9ed0T()F1802d9ed0T",
    R"F1802d9ed0F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802d9ed0F",
    R"F1802d9ed0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802d9ed0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802d9ed0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802d9ed0", "FUN_1802d9ed0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18001bc60", load_at<std::uint64_t>(param_2 + 0x58, 0));
    trace.call_target("FUN_18001bc60", reinterpret_cast<const void*>(&image::FUN_18001bc60));
    // body sha256: 7a8f76d6fd7de870f79548cc5e28da89d98654f9c5ffac397efdbfa9522a22f6
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_18001bc60(*(undefined8 *)(param_2 + 0x58));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802d9ed0;
}

}  // namespace sf::reconstructed

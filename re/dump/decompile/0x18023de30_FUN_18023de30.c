// 0x18023de30  FUN_18023de30
// size=169 thunk=false
// signature: undefined FUN_18023de30()
// status: ok


void FUN_18023de30(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  
  if (*(int *)(*(longlong *)(param_1 + 8) + 8) != 6) {
    puVar1 = (undefined8 *)FUN_1802d8350(0x30);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *puVar1 = vftable_std__Node_base;
    puVar1[1] = 6;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = vftable_std_D____Node_str;
    puVar1[4] = 0;
    puVar1[5] = 0;
    FUN_18023c1f0(param_1,puVar1);
  }
  if ((*(uint *)(param_1 + 0x10) & 0x100) != 0) {
    param_2 = std::ctype<char>::tolower
                        (*(ctype<char> **)(*(longlong *)(param_1 + 0x18) + 8),param_2);
  }
  FUN_18023f460(*(longlong *)(param_1 + 8) + 0x20,param_2);
  return;
}



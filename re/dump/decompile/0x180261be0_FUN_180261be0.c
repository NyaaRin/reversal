// 0x180261be0  FUN_180261be0
// size=622 thunk=false
// signature: undefined FUN_180261be0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_180261be0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  puVar5 = *(undefined8 **)(param_1 + 8);
  if (puVar5 == *(undefined8 **)(param_1 + 0x10)) {
    uVar3 = FUN_180264710(param_1,param_3,param_4);
    *param_2 = uVar3;
  }
  else {
    local_a0 = *param_4;
    *param_4 = 0;
    local_90 = param_4[2];
    param_4[2] = 0;
    local_98 = param_4[1];
    param_4[1] = 0;
    if (param_3 == puVar5) {
      *puVar5 = local_a0;
      puVar5[1] = local_98;
      puVar5[2] = local_90;
      puVar5[3] = param_4[3];
      *(undefined1 *)(puVar5 + 4) = *(undefined1 *)(param_4 + 4);
      *(undefined1 *)((longlong)puVar5 + 0x21) = *(undefined1 *)((longlong)param_4 + 0x21);
      *(undefined1 *)((longlong)puVar5 + 0x22) = *(undefined1 *)((longlong)param_4 + 0x22);
      *(undefined1 *)((longlong)puVar5 + 0x23) = *(undefined1 *)((longlong)param_4 + 0x23);
      puVar5[5] = param_4[5];
      puVar5[6] = param_4[6];
      puVar5[7] = param_4[7];
      puVar5[8] = 0;
      puVar5[9] = 0;
      puVar5[8] = param_4[8];
      puVar5[9] = param_4[9];
      param_4[8] = 0;
      param_4[9] = 0;
      puVar5[10] = param_4[10];
      puVar5[0xb] = param_4[0xb];
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x60;
      *param_2 = param_3;
    }
    else {
      local_b8 = &local_a0;
      local_88 = param_4[3];
      local_80 = *(undefined1 *)(param_4 + 4);
      local_7f = *(undefined1 *)((longlong)param_4 + 0x21);
      local_7e = *(undefined1 *)((longlong)param_4 + 0x22);
      local_7d = *(undefined1 *)((longlong)param_4 + 0x23);
      local_78 = param_4[5];
      local_70 = param_4[6];
      local_68 = param_4[7];
      local_60 = param_4[8];
      local_58 = param_4[9];
      param_4[8] = 0;
      param_4[9] = 0;
      local_50 = param_4[10];
      local_48 = param_4[0xb];
      puVar4 = puVar5 + -0xc;
      uVar3 = puVar5[-10];
      puVar5[-10] = 0;
      uVar1 = puVar5[-0xb];
      puVar5[-0xb] = 0;
      uVar2 = *puVar4;
      *puVar4 = 0;
      *puVar5 = uVar2;
      puVar5[1] = uVar1;
      puVar5[2] = uVar3;
      puVar5[3] = puVar5[-9];
      *(undefined1 *)(puVar5 + 4) = *(undefined1 *)(puVar5 + -8);
      *(undefined1 *)((longlong)puVar5 + 0x21) = *(undefined1 *)((longlong)puVar5 + -0x3f);
      *(undefined1 *)((longlong)puVar5 + 0x22) = *(undefined1 *)((longlong)puVar5 + -0x3e);
      *(undefined1 *)((longlong)puVar5 + 0x23) = *(undefined1 *)((longlong)puVar5 + -0x3d);
      puVar5[5] = puVar5[-7];
      puVar5[6] = puVar5[-6];
      puVar5[7] = puVar5[-5];
      puVar5[8] = 0;
      puVar5[9] = 0;
      puVar5[8] = puVar5[-4];
      puVar5[9] = puVar5[-3];
      puVar5[-4] = 0;
      puVar5[-3] = 0;
      puVar5[10] = puVar5[-2];
      puVar5[0xb] = puVar5[-1];
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x60;
      local_b0 = puVar5;
      local_a8 = param_1;
      while (puVar4 != param_3) {
        puVar4 = puVar4 + -0xc;
        puVar5 = puVar5 + -0xc;
        FUN_180261ae0(puVar5,puVar4);
      }
      FUN_180261ae0(param_3,&local_a0);
      FUN_18023b050(&local_a0);
      *param_2 = param_3;
    }
  }
  return param_2;
}



// 0x180220450  FUN_180220450
// size=669 thunk=false
// signature: undefined FUN_180220450()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180220450(longlong param_1,undefined4 *param_2,longlong param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  longlong local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  uVar2 = (longlong)param_2 - param_1;
  while( true ) {
    if ((longlong)(uVar2 & 0xffffffffffffffe0) < 0x401) {
      FUN_18022ff50(param_1,param_2);
      return;
    }
    lVar4 = (longlong)param_2 - param_1 >> 6;
    if (param_3 < 1) break;
    local_78 = lVar4 * 0x20 + param_1;
    puVar5 = param_2 + -8;
    lVar7 = (longlong)puVar5 - param_1 >> 5;
    lVar4 = param_1;
    if (0x28 < lVar7) {
      lVar7 = lVar7 + 1 >> 3;
      lVar4 = lVar7 * 0x20 + param_1;
      FUN_18023cbe0(param_1,lVar4,lVar7 * 0x40 + param_1);
      FUN_18023cbe0(local_78 + lVar7 * -0x20,local_78,lVar7 * 0x20 + local_78);
      puVar5 = puVar5 + lVar7 * -8;
      FUN_18023cbe0(param_2 + lVar7 * -0x10 + -8,puVar5);
    }
    lVar7 = local_78;
    FUN_18023cbe0(lVar4,local_78,puVar5);
    FUN_18023a7e0(&local_70,param_1,lVar7,param_2);
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    lVar4 = CONCAT44(uStack_64,uStack_68);
    puVar5 = (undefined4 *)CONCAT44(uStack_6c,local_70);
    if ((longlong)((longlong)puVar5 - param_1 & 0xffffffffffffffe0U) <
        (longlong)((longlong)param_2 - lVar4 & 0xffffffffffffffe0U)) {
      FUN_180220450(param_1,puVar5,param_3,param_4);
      param_1 = lVar4;
      puVar5 = param_2;
    }
    else {
      FUN_180220450(lVar4,param_2,param_3,param_4);
    }
    uVar2 = (longlong)puVar5 - param_1;
    param_2 = puVar5;
  }
  lVar7 = (longlong)param_2 - param_1 >> 5;
  while (0 < lVar4) {
    lVar4 = lVar4 + -1;
    lVar3 = lVar4 * 0x20;
    puVar5 = (undefined4 *)(lVar3 + param_1);
    local_70 = *puVar5;
    uStack_6c = puVar5[1];
    uStack_68 = puVar5[2];
    uStack_64 = puVar5[3];
    puVar1 = (undefined8 *)(lVar3 + 0x10 + param_1);
    local_60 = *puVar1;
    uStack_58 = puVar1[1];
    *(undefined1 *)(lVar3 + param_1) = 0;
    *(undefined8 *)(lVar3 + 0x10 + param_1) = 0;
    *(undefined8 *)(lVar3 + 0x18 + param_1) = 0xf;
    local_88 = param_4;
    FUN_18023a6d0(param_1,lVar4,lVar7,&local_70);
    FUN_18020e450(&local_70);
  }
  puVar5 = param_2;
  if (lVar7 < 2) {
    return;
  }
  do {
    puVar6 = puVar5 + -8;
    if (0x3f < (longlong)((longlong)param_2 - param_1 & 0xffffffffffffffe0U)) {
      local_70 = *puVar6;
      uStack_6c = puVar5[-7];
      uStack_68 = puVar5[-6];
      uStack_64 = puVar5[-5];
      local_60 = *(undefined8 *)(puVar5 + -4);
      uStack_58 = *(undefined8 *)(puVar5 + -2);
      *(undefined1 *)puVar6 = 0;
      *(undefined8 *)(puVar5 + -4) = 0;
      *(undefined8 *)(puVar5 + -2) = 0xf;
      FUN_18020e8a0(puVar6,param_1);
      local_88 = param_4;
      FUN_18023a6d0(param_1,0,(longlong)puVar6 - param_1 >> 5,&local_70);
      FUN_18020e450(&local_70);
    }
    param_2 = param_2 + -8;
    puVar5 = puVar6;
  } while (0x3f < (longlong)((longlong)param_2 - param_1 & 0xffffffffffffffe0U));
  return;
}



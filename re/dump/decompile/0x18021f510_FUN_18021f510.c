// 0x18021f510  FUN_18021f510
// size=561 thunk=false
// signature: undefined FUN_18021f510()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18021f510(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  int local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  if ((param_1 != param_2) && (puVar4 = param_1 + 8, puVar4 != param_2)) {
    local_a8 = param_1 + 0xd;
    local_a0 = param_2;
    do {
      local_98 = *puVar4;
      uStack_90 = puVar4[1];
      local_88 = puVar4[2];
      uStack_80 = puVar4[3];
      *(undefined1 *)puVar4 = 0;
      puVar4[2] = 0;
      puVar4[3] = 0xf;
      iVar1 = *(int *)(puVar4 + 4);
      local_60 = local_a8[2];
      local_a8[2] = 0;
      local_68 = local_a8[1];
      local_a8[1] = 0;
      local_70 = *local_a8;
      *local_a8 = 0;
      if (iVar1 == *(int *)(param_1 + 4)) {
        lVar6 = local_68 - local_70;
        bVar2 = (ulonglong)((longlong)(param_1[6] - param_1[5]) >> 5) < (ulonglong)(lVar6 >> 5);
      }
      else {
        bVar2 = *(int *)(param_1 + 4) <= iVar1;
        lVar6 = local_68 - local_70;
      }
      puVar5 = puVar4;
      local_78 = iVar1;
      if (bVar2) {
        puVar5 = puVar4 + 8;
        puVar3 = puVar4;
        while (puVar3 != param_1) {
          FUN_18020e8a0(puVar5 + -8,puVar3 + -8);
          *(undefined4 *)(puVar5 + -4) = *(undefined4 *)(puVar3 + -4);
          FUN_18020d830(puVar5 + -3,puVar3 + -3);
          puVar5 = puVar5 + -8;
          puVar3 = puVar3 + -8;
        }
        FUN_18020e8a0(param_1,&local_98);
        *(int *)(param_1 + 4) = local_78;
        FUN_18020d830(param_1 + 5,&local_70);
      }
      else {
        while( true ) {
          if (iVar1 == *(int *)(puVar5 + -4)) {
            bVar2 = (ulonglong)((longlong)(puVar5[-2] - puVar5[-3]) >> 5) < (ulonglong)(lVar6 >> 5);
          }
          else {
            bVar2 = *(int *)(puVar5 + -4) <= iVar1;
          }
          if (!bVar2) break;
          FUN_18020e8a0(puVar5,puVar5 + -8);
          *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(puVar5 + -4);
          FUN_18020d830(puVar5 + 5,puVar5 + -3);
          puVar5 = puVar5 + -8;
        }
        FUN_18020e8a0(puVar5,&local_98);
        *(int *)(puVar5 + 4) = local_78;
        FUN_18020d830(puVar5 + 5,&local_70);
      }
      puVar4 = puVar4 + 8;
      FUN_18020d5c0(&local_70);
      FUN_18020e450(&local_98);
      local_a8 = local_a8 + 8;
      param_2 = local_a0;
    } while (puVar4 != local_a0);
  }
  return param_2;
}



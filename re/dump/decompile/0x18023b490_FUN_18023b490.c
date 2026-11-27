// 0x18023b490  FUN_18023b490
// size=423 thunk=false
// signature: undefined FUN_18023b490()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18023b490(undefined1 param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 ***pppuVar6;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_d8 [32];
  uint local_b8;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70;
  undefined1 local_6f [7];
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66 [6];
  undefined8 **local_60 [2];
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  uVar7 = 0;
  local_b8 = 0;
  local_70 = param_1;
  FUN_18023ce30(param_3,local_60,&local_70,local_6f);
  uVar11 = 0;
  if (*(int *)(param_2 + 4) != 0) {
    do {
      local_68 = *(undefined1 *)(uVar11 + *(longlong *)(param_2 + 8));
      local_67 = *(undefined1 *)((ulonglong)((int)uVar11 + 1) + *(longlong *)(param_2 + 8));
      puVar5 = (undefined8 *)FUN_18023ce30(param_3,local_90,&local_68,&local_67);
      uVar2 = local_50;
      uVar7 = uVar7 | 1;
      pppuVar6 = local_60;
      if (0xf < local_48) {
        pppuVar6 = (undefined8 ***)local_60[0];
      }
      uVar1 = puVar5[2];
      if (0xf < (ulonglong)puVar5[3]) {
        puVar5 = (undefined8 *)*puVar5;
      }
      uVar9 = uVar1;
      if (local_50 < uVar1) {
        uVar9 = local_50;
      }
      local_b8 = uVar7;
      iVar4 = memcmp(puVar5,pppuVar6,uVar9);
      if (iVar4 == 0) {
        if ((uVar1 < uVar2) || (uVar1 == uVar2)) goto LAB_18023b56b;
LAB_18023b62e:
        bVar3 = false;
      }
      else {
        if (-1 < iVar4) goto LAB_18023b62e;
LAB_18023b56b:
        puVar5 = (undefined8 *)FUN_18023ce30(param_3,local_b0,&local_67,local_66);
        uVar1 = local_50;
        uVar7 = 3;
        local_b8 = 3;
        uVar2 = puVar5[2];
        if (0xf < (ulonglong)puVar5[3]) {
          puVar5 = (undefined8 *)*puVar5;
        }
        pppuVar6 = local_60;
        if (0xf < local_48) {
          pppuVar6 = (undefined8 ***)local_60[0];
        }
        uVar9 = local_50;
        if (uVar2 < local_50) {
          uVar9 = uVar2;
        }
        iVar4 = memcmp(pppuVar6,puVar5,uVar9);
        if (iVar4 == 0) {
          if (uVar2 < uVar1) goto LAB_18023b62e;
        }
        else if (-1 < iVar4) goto LAB_18023b62e;
        bVar3 = true;
      }
      if ((uVar7 & 2) != 0) {
        uVar7 = uVar7 & 0xfffffffd;
        local_b8 = uVar7;
        FUN_18020e450(local_b0);
      }
      if ((uVar7 & 1) != 0) {
        uVar7 = uVar7 & 0xfffffffe;
        local_b8 = uVar7;
        FUN_18020e450(local_90);
      }
      if (bVar3) {
        uVar8 = 1;
        goto LAB_18023b5ff;
      }
      uVar10 = (int)uVar11 + 2;
      uVar11 = (ulonglong)uVar10;
    } while (uVar10 < *(uint *)(param_2 + 4));
  }
  uVar8 = 0;
LAB_18023b5ff:
  FUN_18020e450(local_60);
  return uVar8;
}



// 0x1801fcbd0  FUN_1801fcbd0
// size=357 thunk=false
// signature: undefined FUN_1801fcbd0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1801fcbd0(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  ushort uVar3;
  byte bVar4;
  ushort *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong *local_50;
  byte local_48;
  byte local_47;
  byte local_46;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  local_58 = 1;
  puVar6 = (undefined8 *)*param_1;
  local_50 = param_2;
LAB_1801fcc30:
  do {
    if ((undefined8 *)param_1[1] <= puVar6) {
      return param_2;
    }
    for (puVar5 = (ushort *)*puVar6; puVar5 < (ushort *)puVar6[1]; puVar5 = puVar5 + 8) {
      uVar3 = *puVar5;
      if (uVar3 < 0x80) {
        uVar7 = 1;
LAB_1801fcc9c:
        local_48 = (byte)uVar3;
      }
      else {
        bVar4 = (byte)uVar3 & 0x3f | 0x80;
        bVar2 = (byte)(uVar3 >> 6);
        if (0x7ff < uVar3) {
          uVar3 = (ushort)(byte)((byte)(uVar3 >> 0xc) | 0xe0);
          local_47 = bVar2 & 0x3f | 0x80;
          uVar7 = 3;
          local_46 = bVar4;
          goto LAB_1801fcc9c;
        }
        local_48 = bVar2 & 0x1f | 0xc0;
        uVar7 = 2;
        local_47 = bVar4;
      }
      FUN_18021aef0(param_2,&local_48,uVar7);
    }
    if ((puVar6 != (undefined8 *)(param_1[1] + -0x60)) || ((ushort *)puVar6[1] != (ushort *)*puVar6)
       ) {
      uVar1 = param_2[2];
      if (uVar1 < (ulonglong)param_2[3]) {
        param_2[2] = uVar1 + 1;
        if ((ulonglong)param_2[3] < 0x10) {
          *(undefined2 *)(uVar1 + (longlong)param_2) = 10;
          puVar6 = puVar6 + 0xc;
        }
        else {
          *(undefined2 *)(uVar1 + *param_2) = 10;
          puVar6 = puVar6 + 0xc;
        }
        goto LAB_1801fcc30;
      }
      FUN_18021abd0(param_2);
    }
    puVar6 = puVar6 + 0xc;
  } while( true );
}



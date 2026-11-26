// 0x180254e90  FUN_180254e90
// size=483 thunk=false
// signature: undefined FUN_180254e90()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180254e90(longlong *param_1,longlong *param_2,ulonglong *param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong *local_40;
  byte local_38;
  byte local_37;
  byte local_36;
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  local_48 = 1;
  uVar7 = *param_3;
  uVar8 = param_3[1];
  uVar1 = *param_4;
  local_40 = param_2;
  do {
    while( true ) {
      while( true ) {
        if ((uVar1 <= uVar7) && (param_4[1] <= uVar8)) {
          return param_2;
        }
        lVar2 = *param_1;
        uVar5 = (param_1[1] - lVar2 >> 5) * -0x5555555555555555;
        if (uVar5 < uVar7 || uVar5 - uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_180262180();
        }
        lVar3 = *(longlong *)(uVar7 * 0x60 + lVar2);
        if (uVar8 < (ulonglong)(*(longlong *)(uVar7 * 0x60 + 8 + lVar2) - lVar3 >> 4)) break;
        uVar8 = param_2[2];
        uVar5 = param_2[3];
        if (uVar8 < uVar5) {
          param_2[2] = uVar8 + 1;
          if (uVar5 < 0x10) {
            *(undefined2 *)(uVar8 + (longlong)param_2) = 10;
            uVar7 = uVar7 + 1;
            uVar8 = 0;
          }
          else {
            *(undefined2 *)(uVar8 + *param_2) = 10;
            uVar7 = uVar7 + 1;
            uVar8 = 0;
          }
        }
        else {
          FUN_18021abd0(param_2,uVar5,0x80,0x80a);
          uVar7 = uVar7 + 1;
          uVar8 = 0;
        }
      }
      uVar6 = *(ushort *)(lVar3 + uVar8 * 0x10);
      if (0x7f < uVar6) break;
      uVar9 = 1;
      bVar4 = local_37;
LAB_180254fc9:
      local_37 = bVar4;
      local_38 = (byte)uVar6;
      FUN_18021aef0(param_2,&local_38,uVar9);
      uVar8 = uVar8 + 1;
    }
    local_37 = (byte)uVar6 & 0x3f | 0x80;
    bVar4 = (byte)(uVar6 >> 6);
    if (0x7ff < uVar6) {
      uVar6 = (ushort)(byte)((byte)(uVar6 >> 0xc) | 0xe0);
      uVar9 = 3;
      bVar4 = bVar4 & 0x3f | 0x80;
      local_36 = local_37;
      goto LAB_180254fc9;
    }
    local_38 = bVar4 & 0x1f | 0xc0;
    FUN_18021aef0(param_2,&local_38,2);
    uVar8 = uVar8 + 1;
  } while( true );
}



// 0x18025f5f0  FUN_18025f5f0
// size=436 thunk=false
// signature: undefined FUN_18025f5f0()
// status: ok


undefined8 * FUN_18025f5f0(undefined8 *param_1,ushort *param_2,ushort *param_3)

{
  ushort uVar1;
  longlong lVar2;
  bool bVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  if (param_2 < param_3) {
    uVar1 = *param_2;
    if (uVar1 < 0x7f) {
      if ((uVar1 == 0x5f) || ((uVar1 | 0x20) - 0x61 < 0x1a)) {
LAB_18025f6bd:
        param_2 = param_2 + 8;
        if (param_2 < param_3) {
LAB_18025f6e1:
          uVar1 = *param_2;
          if (0x7e < uVar1) {
            puVar4 = (undefined2 *)&DAT_1803de250;
            puVar5 = &DAT_1803debf8;
            do {
              lVar2 = ((longlong)puVar5 - (longlong)puVar4) / 0xc;
              if (uVar1 < (ushort)puVar4[lVar2 * 3]) {
                puVar5 = puVar4 + lVar2 * 3 + -3;
              }
              else {
                if (uVar1 <= (ushort)puVar4[lVar2 * 3 + 1]) goto LAB_18025f752;
                puVar4 = puVar4 + lVar2 * 3 + 3;
              }
              if (puVar5 < puVar4) goto LAB_18025f798;
            } while( true );
          }
          if (((uVar1 == 0x5f) || ((uVar1 | 0x20) - 0x61 < 0x1a)) || (uVar1 - 0x30 < 10))
          goto LAB_18025f778;
        }
      }
    }
    else {
      puVar4 = (undefined2 *)&DAT_1803e5c90;
      puVar5 = &DAT_1803e64ee;
      do {
        lVar2 = ((longlong)puVar5 - (longlong)puVar4) / 0xc;
        if (uVar1 < (ushort)puVar4[lVar2 * 3]) {
          puVar5 = puVar4 + lVar2 * 3 + -3;
        }
        else {
          if (uVar1 <= (ushort)puVar4[lVar2 * 3 + 1]) {
            if (((ushort)puVar4[lVar2 * 3 + 2] == 1) ||
               ((int)((uint)uVar1 - (uint)(ushort)puVar4[lVar2 * 3]) %
                (int)(uint)(ushort)puVar4[lVar2 * 3 + 2] == 0)) {
              bVar3 = true;
            }
            else {
              bVar3 = false;
            }
            if (bVar3) goto LAB_18025f6bd;
            break;
          }
          puVar4 = puVar4 + lVar2 * 3 + 3;
        }
      } while (puVar4 <= puVar5);
    }
  }
LAB_18025f798:
  *param_1 = param_2;
  return param_1;
LAB_18025f752:
  if (((ushort)puVar4[lVar2 * 3 + 2] == 1) ||
     ((int)((uint)uVar1 - (uint)(ushort)puVar4[lVar2 * 3]) %
      (int)(uint)(ushort)puVar4[lVar2 * 3 + 2] == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (!bVar3) goto LAB_18025f798;
LAB_18025f778:
  param_2 = param_2 + 8;
  if (param_3 <= param_2) goto LAB_18025f798;
  goto LAB_18025f6e1;
}



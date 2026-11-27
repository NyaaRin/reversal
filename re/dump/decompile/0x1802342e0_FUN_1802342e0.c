// 0x1802342e0  FUN_1802342e0
// size=306 thunk=false
// signature: undefined FUN_1802342e0()
// status: ok


longlong * FUN_1802342e0(longlong param_1,longlong *param_2,longlong param_3,byte *param_4)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  undefined1 local_48 [16];
  
  bVar2 = *param_4;
  if ((*(uint *)(param_1 + 0xd0) & 0x100) != 0) {
    bVar2 = std::ctype<char>::tolower(*(ctype<char> **)(*(longlong *)(param_1 + 0xe8) + 8),bVar2);
  }
  if (*(longlong *)(param_3 + 0x20) == 0) {
LAB_180234367:
    lVar1 = *(longlong *)(param_3 + 0x38);
    pbVar7 = param_4 + 1;
    if (lVar1 != 0) {
      if ((*(uint *)(param_1 + 0xd0) & 0x800) == 0) {
        if (*(uint *)(lVar1 + 4) != 0) {
          uVar6 = 0;
          do {
            if ((*(byte *)(uVar6 + *(longlong *)(lVar1 + 8)) <= bVar2) &&
               (bVar2 <= *(byte *)((ulonglong)((int)uVar6 + 1) + *(longlong *)(lVar1 + 8)))) {
              cVar3 = '\x01';
              goto LAB_1802343bd;
            }
            uVar5 = (int)uVar6 + 2;
            uVar6 = (ulonglong)uVar5;
          } while (uVar5 < *(uint *)(lVar1 + 4));
        }
        cVar3 = '\0';
      }
      else {
        cVar3 = FUN_18023b490(bVar2,lVar1,*(undefined8 *)(param_1 + 0xe8));
      }
LAB_1802343bd:
      if (cVar3 != '\0') goto LAB_1802343e5;
    }
    if ((*(longlong *)(param_3 + 0x28) == 0) ||
       ((*(byte *)((ulonglong)(bVar2 >> 3) + *(longlong *)(param_3 + 0x28)) &
        (byte)(1 << (bVar2 & 7))) == 0)) {
      bVar2 = 0;
      goto LAB_1802343ef;
    }
  }
  else {
    puVar4 = (undefined8 *)
             FUN_18023b2d0(local_48,bVar2,param_4,*(undefined8 *)(param_1 + 0xc0),
                           *(longlong *)(param_3 + 0x20),*(undefined8 *)(param_1 + 0xe8),
                           *(undefined4 *)(param_1 + 0xd0));
    pbVar7 = (byte *)*puVar4;
    if (pbVar7 == param_4) goto LAB_180234367;
  }
LAB_1802343e5:
  bVar2 = 1;
LAB_1802343ef:
  if (bVar2 == (*(byte *)(param_3 + 0xc) & 1)) {
    pbVar7 = param_4;
  }
  *param_2 = (longlong)pbVar7;
  return param_2;
}



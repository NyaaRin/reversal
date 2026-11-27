// 0x1800c4740  FUN_1800c4740
// size=174 thunk=false
// signature: undefined FUN_1800c4740()
// status: ok


longlong FUN_1800c4740(ulonglong param_1)

{
  int iVar1;
  longlong lVar2;
  uint7 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  iVar4 = (int)param_1;
  plVar5 = (longlong *)
           ((((ulonglong)(iVar4 >> 0x18 & 0xff) ^
             (((param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
              (ulonglong)(iVar4 >> 8 & 0xff)) * 0x100000001b3 ^ (ulonglong)(iVar4 >> 0x10 & 0xff)) *
             0x100000001b3) * 0x100000001b3 & DAT_1803fa7e0) * 0x10 + DAT_1803fa7c8);
  lVar2 = plVar5[1];
  if (lVar2 == DAT_1803fa7b8) {
LAB_1800c47d1:
    lVar2 = 0;
  }
  else {
    iVar1 = *(int *)(lVar2 + 0x10);
    while (iVar4 != iVar1) {
      if (lVar2 == *plVar5) goto LAB_1800c47d1;
      lVar2 = *(longlong *)(lVar2 + 8);
      iVar1 = *(int *)(lVar2 + 0x10);
    }
  }
  lVar6 = DAT_1803fa7b8;
  if (lVar2 != 0) {
    lVar6 = lVar2;
  }
  uVar3 = (uint7)((ulonglong)lVar2 >> 8);
  if ((lVar6 != DAT_1803fa7b8) && (2 < *(int *)(lVar6 + 0x14))) {
    return CONCAT71(uVar3,1);
  }
  return (ulonglong)uVar3 << 8;
}



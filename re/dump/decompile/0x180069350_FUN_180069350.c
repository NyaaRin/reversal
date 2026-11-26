// 0x180069350  FUN_180069350
// size=400 thunk=false
// signature: undefined FUN_180069350()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180069350(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  byte ****ppppbVar3;
  byte ****ppppbVar4;
  byte ****ppppbVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [32];
  byte ***local_38 [2];
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  uVar2 = FUN_180066000(param_1,local_58);
  FUN_180065810(uVar2,local_38);
  FUN_18021e290(local_58);
  ppppbVar3 = (byte ****)local_38[0];
  if (local_20 < 0x10) {
    ppppbVar3 = local_38;
  }
  ppppbVar4 = (byte ****)((longlong)ppppbVar3 + local_28);
  for (ppppbVar5 = ppppbVar3; ppppbVar5 != ppppbVar4;
      ppppbVar5 = (byte ****)((longlong)ppppbVar5 + 1)) {
    iVar1 = tolower((uint)*(byte *)ppppbVar5);
    *(byte *)ppppbVar3 = (byte)iVar1;
    ppppbVar3 = (byte ****)((longlong)ppppbVar3 + 1);
  }
  ppppbVar3 = local_38;
  if (0xf < local_20) {
    ppppbVar3 = (byte ****)local_38[0];
  }
  if ((local_28 != 4) || (*(int *)ppppbVar3 != 0x7478742e)) {
    ppppbVar3 = local_38;
    if (0xf < local_20) {
      ppppbVar3 = (byte ****)local_38[0];
    }
    if ((local_28 != 4) || (*(int *)ppppbVar3 != 0x676f6c2e)) {
      ppppbVar3 = local_38;
      if (0xf < local_20) {
        ppppbVar3 = (byte ****)local_38[0];
      }
      if (local_28 == 5) {
        iVar1 = *(int *)ppppbVar3 + -0x6f736a2e;
        if (iVar1 == 0) {
          iVar1 = *(byte *)((longlong)ppppbVar3 + 4) - 0x6e;
        }
        if (iVar1 == 0) goto LAB_1800694ae;
      }
      ppppbVar3 = local_38;
      if (0xf < local_20) {
        ppppbVar3 = (byte ****)local_38[0];
      }
      if ((local_28 != 4) || (*(int *)ppppbVar3 != 0x7461642e)) {
        ppppbVar3 = local_38;
        if (0xf < local_20) {
          ppppbVar3 = (byte ****)local_38[0];
        }
        if ((local_28 != 4) || (*(int *)ppppbVar3 != 0x7673632e)) {
          ppppbVar3 = local_38;
          if (0xf < local_20) {
            ppppbVar3 = (byte ****)local_38[0];
          }
          if ((local_28 != 4) || (*(int *)ppppbVar3 != 0x6766632e)) {
            uVar2 = 0;
            goto LAB_1800694b4;
          }
        }
      }
    }
  }
LAB_1800694ae:
  uVar2 = 1;
LAB_1800694b4:
  FUN_18020e450(local_38);
  return uVar2;
}



// 0x1801cab40  FUN_1801cab40
// size=382 thunk=false
// signature: undefined FUN_1801cab40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1801cab40(undefined8 param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  byte bVar4;
  size_t sVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 ****ppppuVar9;
  undefined1 auStack_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined8 ***local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  if (DAT_1803fcfc0 == '\0') {
    return CONCAT71((int7)(local_18 >> 8),1);
  }
  local_38 = (undefined8 ****)0x0;
  uStack_30 = 0;
  local_28 = 0;
  local_20 = 0;
  sVar5 = strlen(&DAT_1803fcfc0);
  FUN_18001d080(&local_38,&DAT_1803fcfc0,sVar5);
  ppppuVar9 = &local_38;
  if (0xf < local_20) {
    ppppuVar9 = (undefined8 ****)local_38;
  }
  if (((local_28 != 0) &&
      (lVar3 = local_28 + (longlong)ppppuVar9, lVar6 = thunk_FUN_1802d5c20(ppppuVar9,lVar3,0x2a),
      lVar6 != lVar3)) && (lVar6 - (longlong)ppppuVar9 != -1)) {
    bVar4 = FUN_180121f30(&local_38,param_2);
    goto LAB_1801cac8c;
  }
  puVar7 = (undefined8 *)FUN_18019a270(local_58,param_2);
  puVar8 = (undefined8 *)FUN_18019a270(local_78,&local_38);
  puVar1 = puVar8 + 2;
  if (0xf < (ulonglong)puVar8[3]) {
    puVar8 = (undefined8 *)*puVar8;
  }
  puVar2 = puVar7 + 2;
  if (0xf < (ulonglong)puVar7[3]) {
    puVar7 = (undefined8 *)*puVar7;
  }
  if (*puVar2 < *puVar1) {
LAB_1801cac68:
    lVar6 = -1;
  }
  else if (*puVar1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar3 = *puVar2 + (longlong)puVar7;
    lVar6 = thunk_FUN_1802d6b60(puVar7,lVar3,puVar8);
    if (lVar6 == lVar3) goto LAB_1801cac68;
    lVar6 = lVar6 - (longlong)puVar7;
  }
  bVar4 = lVar6 != -1;
  FUN_18020e450(local_78);
  FUN_18020e450(local_58);
LAB_1801cac8c:
  FUN_18020e450(&local_38);
  return (ulonglong)bVar4;
}



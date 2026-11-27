// 0x180191a10  FUN_180191a10
// size=1397 thunk=false
// signature: undefined FUN_180191a10()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180191a10(void)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  longlong *plVar6;
  undefined8 ****_Buf1;
  undefined8 ****ppppuVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  float fVar10;
  undefined1 auStack_a18 [8];
  undefined1 auStack_a10 [24];
  char local_9f8;
  float local_9f4;
  longlong *local_9f0;
  undefined8 local_9e8 [5];
  undefined2 local_9bc;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined4 local_b0;
  undefined8 ***local_a8;
  undefined8 uStack_a0;
  size_t local_98;
  ulonglong local_90;
  undefined8 ***local_88;
  undefined8 uStack_80;
  size_t local_78;
  ulonglong local_70;
  ulonglong local_68;
  
  puVar8 = auStack_a18;
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_a18;
  if ((DAT_1805c7b04 & 1) == 0) {
    DAT_1805c7b04 = DAT_1805c7b04 | 1;
    atexit(FUN_18030ae20);
  }
  fVar10 = DAT_180381384;
  uStack_a0 = 0;
  plVar6 = (longlong *)0x0;
  local_98 = 0;
  local_90 = 0xf;
  local_a8 = (undefined8 ****)0x0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0xf;
  local_88 = (undefined8 ****)0x0;
  local_9f0 = (longlong *)0x0;
  local_9f4 = DAT_180381384;
  if (((DAT_1803fa668 == (longlong *)0x0) ||
      (cVar2 = (**(code **)(*DAT_1803fa668 + 0xd8))(), cVar2 == '\0')) ||
     (cVar2 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar2 == '\0')) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  local_9f8 = cVar2;
  if (DAT_1803fa668 != (longlong *)0x0) {
    pcVar4 = (char *)(**(code **)(*DAT_1803fa668 + 0x198))();
    if ((char *)0x10000 < pcVar4) {
      sVar5 = strlen(pcVar4);
      FUN_180212700(&local_a8,pcVar4,sVar5);
    }
    plVar6 = (longlong *)(**(code **)(*DAT_1803fa668 + 0x240))();
    local_9f0 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      pcVar4 = (char *)(**(code **)(*plVar6 + 8))(plVar6);
      if ((char *)0x10000 < pcVar4) {
        sVar5 = strlen(pcVar4);
        FUN_180212700(&local_88,pcVar4,sVar5);
      }
      fVar10 = (float)(**(code **)(*plVar6 + 0x18))(plVar6);
      local_9f4 = fVar10;
    }
  }
  sVar5 = local_98;
  if (DAT_1803e9850 == '\0') {
    pcVar4 = "initial session";
LAB_180191d53:
    FUN_1801225a0();
    puVar9 = &DAT_180458ae0;
    do {
      local_9e8[0] = 0;
      local_9bc = 0;
      local_b8 = 0;
      local_b4 = 0;
      local_b0 = 0;
      FUN_18018a8f0(puVar9,local_9e8);
      puVar9 = puVar9 + 0x128;
    } while (puVar9 != (undefined8 *)&DAT_1804ecae0);
    if (DAT_18040a3d3 != '\0') {
      FUN_180191780();
    }
    FUN_180014410("[ESP] Entity List runtime cache reset: %s\n",pcVar4);
    sVar5 = local_98;
  }
  else {
    if (cVar2 != '\0') {
      if (DAT_1803e9851 == '\0') {
        pcVar4 = "connect";
      }
      else {
        if ((local_98 != 0) && (DAT_1803e9868 != 0)) {
          ppppuVar7 = &DAT_1803e9858;
          if (0xf < DAT_1803e9870) {
            ppppuVar7 = DAT_1803e9858;
          }
          _Buf1 = &local_a8;
          if (0xf < local_90) {
            _Buf1 = (undefined8 ****)local_a8;
          }
          if ((local_98 != DAT_1803e9868) ||
             ((local_98 != 0 && (iVar3 = memcmp(_Buf1,ppppuVar7,local_98), iVar3 != 0)))) {
            pcVar4 = "level changed";
            goto LAB_180191d53;
          }
        }
        if ((local_78 != 0) && (DAT_1803e9888 != 0)) {
          puVar9 = &DAT_1803e9878;
          if (0xf < DAT_1803e9890) {
            puVar9 = DAT_1803e9878;
          }
          ppppuVar7 = &local_88;
          if (0xf < local_70) {
            ppppuVar7 = (undefined8 ****)local_88;
          }
          if ((local_78 != DAT_1803e9888) ||
             ((local_78 != 0 && (iVar3 = memcmp(ppppuVar7,puVar9,local_78), iVar3 != 0)))) {
            pcVar4 = "server changed";
            goto LAB_180191d53;
          }
        }
        if (((plVar6 == (longlong *)0x0) || (DAT_1803e9898 == (longlong *)0x0)) ||
           (plVar6 == DAT_1803e9898)) {
          if (((fVar10 < 0.0) || (DAT_1803e98a0 < 0.0)) || (DAT_1803e98a0 <= fVar10 + DAT_180380ac0)
             ) goto LAB_180191dd4;
          pcVar4 = "connection clock reset";
        }
        else {
          pcVar4 = "net channel changed";
        }
      }
      goto LAB_180191d53;
    }
    if (DAT_1803e9851 != '\0') {
      pcVar4 = "disconnect";
      goto LAB_180191d53;
    }
  }
LAB_180191dd4:
  DAT_1803e9850 = 1;
  DAT_1803e9851 = cVar2;
  if (sVar5 == 0) {
LAB_180191e86:
    if (local_78 == 0) goto LAB_180191f33;
    puVar8 = auStack_a18;
    if (0xf < DAT_1803e9890) {
      puVar9 = DAT_1803e9878;
      puVar8 = auStack_a18;
      if ((0xfff < DAT_1803e9890 + 1) &&
         (puVar9 = (undefined8 *)DAT_1803e9878[-1], puVar8 = auStack_a18,
         0x1f < (ulonglong)((longlong)DAT_1803e9878 + (-8 - (longlong)DAT_1803e9878[-1]))))
      goto LAB_180191ecc;
      goto LAB_180191ed6;
    }
  }
  else {
    if (DAT_1803e9870 < 0x10) {
LAB_180191e36:
      DAT_1803e9858 = (undefined8 ****)local_a8;
      _DAT_1803e9860 = uStack_a0;
      DAT_1803e9870 = local_90;
      local_98 = 0;
      local_90 = 0xf;
      local_a8 = (undefined8 ***)((ulonglong)local_a8 & 0xffffffffffffff00);
      DAT_1803e9868 = sVar5;
      goto LAB_180191e86;
    }
    ppppuVar7 = DAT_1803e9858;
    if ((DAT_1803e9870 + 1 < 0x1000) ||
       (ppppuVar7 = (undefined8 ****)DAT_1803e9858[-1],
       (ulonglong)((longlong)DAT_1803e9858 + (-8 - (longlong)ppppuVar7)) < 0x20)) {
      free(ppppuVar7);
      sVar5 = local_98;
      goto LAB_180191e36;
    }
LAB_180191ecc:
    pcVar1 = (code *)swi(0x29);
    puVar9 = (undefined8 *)(*pcVar1)(5);
    puVar8 = auStack_a10;
LAB_180191ed6:
    *(undefined8 *)(puVar8 + -8) = 0x180191edb;
    free(puVar9);
  }
  DAT_1803e9878 = *(undefined8 **)(puVar8 + 0x990);
  _DAT_1803e9880 = *(undefined8 *)(puVar8 + 0x998);
  DAT_1803e9888 = *(size_t *)(puVar8 + 0x9a0);
  DAT_1803e9890 = *(ulonglong *)(puVar8 + 0x9a8);
  *(undefined8 *)(puVar8 + 0x9a0) = 0;
  *(undefined8 *)(puVar8 + 0x9a8) = 0xf;
  puVar8[0x990] = 0;
LAB_180191f33:
  if (plVar6 != (longlong *)0x0) {
    DAT_1803e9898 = plVar6;
  }
  if (0.0 <= fVar10) {
    DAT_1803e98a0 = fVar10;
  }
  *(undefined8 *)(puVar8 + -8) = 0x180191f59;
  FUN_18020e450(puVar8 + 0x990);
  *(undefined8 *)(puVar8 + -8) = 0x180191f67;
  FUN_18020e450(puVar8 + 0x970);
  *(undefined8 *)(puVar8 + -8) = 0x180191f77;
  return;
}



// 1801df700  FUN_1801df700
// signature: undefined FUN_1801df700()
// status: ok


void FUN_1801df700(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  float *pfVar4;
  float *pfVar5;
  float local_28;
  float local_24 [3];
  
  cVar3 = FUN_18019a680(param_2);
  if (cVar3 != '\0') {
    FUN_18027abf0(param_2);
    FUN_1802aabb0(*param_1 + 0xa8,"%s bind",param_3);
    pfVar5 = &local_28;
    local_24[0] = 1.5;
    local_28 = 0.75;
    if (0.75 <= DAT_1803da6a4) {
      pfVar5 = &DAT_1803da6a4;
    }
    pfVar4 = local_24;
    if (DAT_1803da6a4 <= 1.5) {
      pfVar4 = pfVar5;
    }
    local_24[0] = *pfVar4 * 122.0;
    local_24[1] = 0.0;
    FUN_1802d31a0("##spam_bind",param_4,local_24,1);
    local_28 = 5.60519e-45;
    pfVar5 = local_24;
    local_24[0] = 0.0;
    if (-1 < (int)DAT_1803fb24c) {
      pfVar5 = &DAT_1803fb24c;
    }
    pfVar4 = &local_28;
    if ((int)DAT_1803fb24c < 5) {
      pfVar4 = pfVar5;
    }
    DAT_1803fb24c = *pfVar4;
    FUN_1802aabb0(&DAT_1803dca28 + (longlong)(int)DAT_1803fb24c * 200,
                  "Unbound: spams whenever the switch is on.\nBound: spams only while the key is held."
                 );
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
    iVar1 = *(int *)(lVar2 + 0x108);
    if (iVar1 < 2) {
      FUN_18027e9c0("Calling PopID() too many times!");
    }
    else {
      *(int *)(lVar2 + 0x108) = iVar1 + -1;
    }
    if (DAT_1803facfd == '\0') {
      FUN_180281800();
    }
    else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
      DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
      return;
    }
  }
  return;
}



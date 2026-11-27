// 0x180109680  FUN_180109680
// size=126 thunk=false
// signature: undefined FUN_180109680()
// status: ok


void FUN_180109680(void)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = DAT_1804096a8;
  while( true ) {
    if (iVar2 <= iVar3) break;
    plVar1 = (longlong *)(&DAT_18056df40)[iVar3];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0xe8))(plVar1,0x8000,0);
      (&DAT_18056df40)[iVar3] = 0;
      iVar2 = DAT_1804096a8;
    }
    iVar3 = iVar3 + 1;
  }
  if (iVar2 != 0) {
    FUN_180014410("[GLOW] xray: restored %d material(s)\n");
  }
  DAT_1804096a8 = 0;
  return;
}



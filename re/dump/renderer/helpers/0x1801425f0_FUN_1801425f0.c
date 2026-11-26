// 1801425f0  FUN_1801425f0
// signature: undefined FUN_1801425f0()
// status: ok


ulonglong FUN_1801425f0(void)

{
  int iVar1;
  int iVar2;
  undefined **in_RAX;
  undefined **ppuVar3;
  undefined4 extraout_var;
  int iVar4;
  
  iVar1 = DAT_1803ff708;
  if ((DAT_180409840 != '\0') && (iVar4 = 0, 0 < DAT_1803ff708)) {
    do {
      ppuVar3 = (undefined **)(longlong)iVar4;
      in_RAX = ppuVar3;
      if ((char *)(&DAT_1803eb898)[(longlong)ppuVar3 * 0xb] != (char *)0x0) {
        iVar2 = strcmp((char *)(&DAT_1803eb898)[(longlong)ppuVar3 * 0xb],"player_hurt");
        in_RAX = (undefined **)CONCAT44(extraout_var,iVar2);
        if (iVar2 == 0) {
          in_RAX = &PTR_vftable_Core_GameEvents_Sink_1803eb890 + (longlong)ppuVar3 * 0xb;
          if ((in_RAX != (undefined **)0x0) && ((&DAT_1803eb8e4)[(longlong)ppuVar3 * 0x58] != '\0'))
          {
            return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
          }
          break;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



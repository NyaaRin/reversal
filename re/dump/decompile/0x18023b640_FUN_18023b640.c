// 0x18023b640  FUN_18023b640
// size=305 thunk=false
// signature: undefined FUN_18023b640()
// status: ok


ushort FUN_18023b640(longlong param_1,char *param_2,char *param_3,char param_4)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  char *pcVar5;
  char *pcVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  if (PTR_s_alnum_18033a2b0 != (undefined *)0x0) {
    do {
      if ((longlong)param_3 - (longlong)param_2 == (ulonglong)(uint)(&DAT_18033a2c0)[uVar7 * 6]) {
        pcVar6 = (&PTR_s_alnum_18033a2b0)[uVar7 * 3];
        pcVar5 = param_2;
        while( true ) {
          if (pcVar5 == param_3) goto LAB_18023b713;
          cVar2 = *pcVar6;
          cVar1 = std::ctype<char>::tolower(*(ctype<char> **)(param_1 + 8),*pcVar5);
          cVar2 = std::ctype<char>::tolower(*(ctype<char> **)(param_1 + 8),cVar2);
          if (cVar1 != cVar2) break;
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        }
      }
      uVar7 = (ulonglong)((int)uVar7 + 1);
    } while ((&PTR_s_alnum_18033a2b0)[uVar7 * 3] != (undefined *)0x0);
  }
LAB_18023b713:
  uVar4 = 0;
  if ((&PTR_s_alnum_18033a2b0)[uVar7 * 3] != (undefined *)0x0) {
    uVar4 = (&DAT_18033a2c4)[uVar7 * 0xc];
  }
  uVar3 = uVar4;
  if ((param_4 != '\0') && (uVar3 = uVar4 | 3, (uVar4 & 3) == 0)) {
    uVar3 = uVar4;
  }
  return uVar3;
}



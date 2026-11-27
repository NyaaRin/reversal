// 0x18020f650  std_std_D_DU?$char_traits_?$basic_filebuf_vfunc03
// size=439 thunk=false
// signature: undefined std_std_D_DU?$char_traits_?$basic_filebuf_vfunc03()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int std_std_D_DU__char_traits___basic_filebuf_vfunc03(longlong param_1,int param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  size_t sVar6;
  size_t _Count;
  undefined1 auStackY_88 [32];
  char *local_48;
  char *local_40;
  char local_38;
  char local_37 [7];
  char local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStackY_88;
  if (param_2 == -1) {
    iVar5 = 0;
  }
  else {
    uVar1 = **(ulonglong **)(param_1 + 0x40);
    local_38 = (char)param_2;
    if (uVar1 != 0) {
      iVar5 = **(int **)(param_1 + 0x58);
      if (uVar1 < uVar1 + (longlong)iVar5) {
        **(int **)(param_1 + 0x58) = iVar5 + -1;
        pcVar2 = (char *)**(longlong **)(param_1 + 0x40);
        **(longlong **)(param_1 + 0x40) = (longlong)(pcVar2 + 1);
        *pcVar2 = local_38;
        return param_2;
      }
    }
    if (*(longlong *)(param_1 + 0x80) != 0) {
      if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
        lVar3 = *(longlong *)(param_1 + 0x88);
        uVar4 = *(undefined8 *)(param_1 + 0x90);
        **(longlong **)(param_1 + 0x18) = lVar3;
        **(longlong **)(param_1 + 0x38) = lVar3;
        **(int **)(param_1 + 0x50) = (int)uVar4 - (int)lVar3;
      }
      if (*(codecvt<char,char,_Mbstatet> **)(param_1 + 0x68) == (codecvt<char,char,_Mbstatet> *)0x0)
      {
        iVar5 = fputc((int)local_38,*(FILE **)(param_1 + 0x80));
        if (iVar5 == -1) {
          return -1;
        }
        return param_2;
      }
      iVar5 = std::codecvt<char,char,_Mbstatet>::out
                        (*(codecvt<char,char,_Mbstatet> **)(param_1 + 0x68),
                         (_Mbstatet *)(param_1 + 0x74),&local_38,local_37,&local_40,local_30,
                         (char *)&local_10,&local_48);
      if ((iVar5 == 0) || (iVar5 == 1)) {
        _Count = (longlong)local_48 - (longlong)local_30;
        if ((_Count == 0) ||
           (sVar6 = fwrite(local_30,1,_Count,*(FILE **)(param_1 + 0x80)), _Count == sVar6)) {
          *(undefined1 *)(param_1 + 0x71) = 1;
          if (local_40 == &local_38) {
            return -1;
          }
          return param_2;
        }
      }
      else if (iVar5 == 3) {
        iVar5 = fputc((int)local_38,*(FILE **)(param_1 + 0x80));
        if (iVar5 == -1) {
          return -1;
        }
        return param_2;
      }
    }
    iVar5 = -1;
  }
  return iVar5;
}



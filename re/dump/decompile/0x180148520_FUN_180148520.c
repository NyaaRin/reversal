// 0x180148520  FUN_180148520
// size=492 thunk=false
// signature: undefined FUN_180148520()
// status: ok


int FUN_180148520(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char *_Str1;
  int iVar4;
  int iVar5;
  int iVar6;
  char *_Str2;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  int local_58;
  undefined1 local_40 [8];
  
  iVar6 = 0;
  local_58 = 0;
  iVar5 = 0;
  iVar4 = 0;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          if ((int)param_2[2] <= iVar5) {
            if ((0 < iVar6) &&
               (*(undefined4 *)(*param_2 + 0xc4) = *(undefined4 *)(*param_1 + 0xc4), param_2[1] != 0
               )) {
              iVar5 = 0;
              while( true ) {
                if (*(int *)(param_2[1] + 0x98) <= iVar5) break;
                lVar2 = (**(code **)(*DAT_1803f9250 + 0xa8))
                                  (DAT_1803f9250,
                                   *(undefined8 *)
                                    ((longlong)iVar5 * 0xe8 + *(longlong *)(param_2[1] + 0x88)));
                if (lVar2 != 0) {
                  *(undefined4 *)(lVar2 + 0xc4) = *(undefined4 *)(*param_1 + 0xc4);
                }
                iVar5 = iVar5 + 1;
              }
            }
            FUN_180014410("[Toolbox-anim] activity transplant: copied=%d alreadyResolved=%d dstSeqs=%d\n"
                          ,iVar6,iVar4,(int)param_2[2]);
            return iVar6;
          }
          lVar2 = FUN_180147c60(param_2,iVar5,local_40,local_res18,local_res20);
          if (lVar2 != 0) break;
          iVar5 = iVar5 + 1;
        }
        if (*(int *)(lVar2 + 0x10) < 1) break;
        local_58 = iVar4 + 1;
        iVar5 = iVar5 + 1;
        iVar4 = local_58;
      }
      _Str2 = (char *)(*(int *)(lVar2 + 8) + lVar2);
      if ((_Str2 != (char *)0x0) && (*_Str2 != '\0')) break;
      iVar5 = iVar5 + 1;
    }
    iVar4 = 0;
    while( true ) {
      if ((int)param_1[2] <= iVar4) break;
      lVar3 = FUN_180147c60(param_1,iVar4,local_40,local_res18,local_res20);
      if ((lVar3 == 0) || (*(int *)(lVar3 + 0x10) < 1)) {
        iVar4 = iVar4 + 1;
      }
      else {
        _Str1 = (char *)(*(int *)(lVar3 + 8) + lVar3);
        if (_Str1 != (char *)0x0) {
          iVar1 = _stricmp(_Str1,_Str2);
          if (iVar1 == 0) {
            *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(lVar3 + 0x10);
            if (*(int *)(lVar2 + 0x14) < 1) {
              *(undefined4 *)(lVar2 + 0x14) = 1;
            }
            iVar6 = iVar6 + 1;
            break;
          }
        }
        iVar4 = iVar4 + 1;
      }
    }
    iVar5 = iVar5 + 1;
    iVar4 = local_58;
  } while( true );
}



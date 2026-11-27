// 0x180197460  FUN_180197460
// size=338 thunk=false
// signature: undefined FUN_180197460()
// status: ok


void FUN_180197460(longlong *param_1,short *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  short *psVar3;
  
  lVar1 = *(longlong *)(param_2 + 8);
  do {
    if (lVar1 == 0) {
LAB_180197592:
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      if (0xf < *(ulonglong *)(param_2 + 0xc)) {
        param_2 = *(short **)param_2;
      }
      *(char *)param_2 = '\0';
      return;
    }
    uVar2 = *(ulonglong *)(param_2 + 0xc);
    psVar3 = param_2;
    if (0xf < uVar2) {
      psVar3 = *(short **)param_2;
    }
    if (*(char *)(lVar1 + -1 + (longlong)psVar3) != ' ') {
      psVar3 = param_2;
      if (0xf < uVar2) {
        psVar3 = *(short **)param_2;
      }
      if (*(char *)(lVar1 + -1 + (longlong)psVar3) != '.') {
        if (lVar1 != 0) {
          psVar3 = param_2;
          if (0xf < uVar2) {
            psVar3 = *(short **)param_2;
          }
          if ((lVar1 != 1) || ((char)*psVar3 != '.')) {
            psVar3 = param_2;
            if (0xf < uVar2) {
              psVar3 = *(short **)param_2;
            }
            if ((lVar1 == 2) && (*psVar3 == 0x2e2e)) {
              FUN_180212700(param_2,&DAT_180363a2c,1);
            }
            if (0x60 < *(ulonglong *)(param_2 + 8)) {
              FUN_18020e770(param_2,0x60);
            }
            uVar2 = param_1[2];
            if (uVar2 != 0) {
              if (uVar2 < (ulonglong)param_1[3]) {
                param_1[2] = uVar2 + 1;
                if ((ulonglong)param_1[3] < 0x10) {
                  *(undefined2 *)(uVar2 + (longlong)param_1) = 0x2f;
                }
                else {
                  *(undefined2 *)(uVar2 + *param_1) = 0x2f;
                }
              }
              else {
                FUN_18021abd0(param_1);
              }
            }
            psVar3 = param_2;
            if (0xf < *(ulonglong *)(param_2 + 0xc)) {
              psVar3 = *(short **)param_2;
            }
            FUN_18021aef0(param_1,psVar3,*(undefined8 *)(param_2 + 8));
          }
        }
        goto LAB_180197592;
      }
    }
    *(longlong *)(param_2 + 8) = lVar1 + -1;
    psVar3 = param_2;
    if (0xf < uVar2) {
      psVar3 = *(short **)param_2;
    }
    *(char *)(lVar1 + -1 + (longlong)psVar3) = '\0';
    lVar1 = *(longlong *)(param_2 + 8);
  } while( true );
}



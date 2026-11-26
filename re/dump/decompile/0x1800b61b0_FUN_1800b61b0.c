// 0x1800b61b0  FUN_1800b61b0
// size=222 thunk=false
// signature: undefined FUN_1800b61b0()
// status: ok


undefined1 FUN_1800b61b0(void *param_1,float *param_2)

{
  float fVar1;
  undefined1 extraout_AL;
  undefined1 extraout_AL_00;
  char cVar2;
  undefined1 uVar3;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  char extraout_AH_01;
  BOOL BVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  float local_res18 [4];
  
  if ((-1 < DAT_1803e7c84) && (param_1 != (void *)0x0)) {
    BVar4 = IsBadReadPtr(param_1,8);
    if (BVar4 == 0) {
      FUN_1800b58b0();
      if ((CONCAT44(extraout_var_01,CONCAT22(extraout_var,CONCAT11(extraout_AH,extraout_AL))) &
          CONCAT44(extraout_var_01,CONCAT22(extraout_var,CONCAT11(extraout_AH,extraout_AL)))) != 0)
      {
        FUN_1800b5940(param_1,CONCAT44(extraout_var_01,
                                       CONCAT22(extraout_var,CONCAT11(extraout_AH,extraout_AL))));
        if ((CONCAT44(extraout_var_02,
                      CONCAT22(extraout_var_00,CONCAT11(extraout_AH_00,extraout_AL_00))) &
            CONCAT44(extraout_var_02,
                     CONCAT22(extraout_var_00,CONCAT11(extraout_AH_00,extraout_AL_00)))) != 0) {
          local_res18[0] = 0.0;
          cVar2 = FUN_1800b2030((longlong)DAT_1803e7c84 + 8 +
                                CONCAT44(extraout_var_02,
                                         CONCAT22(extraout_var_00,
                                                  CONCAT11(extraout_AH_00,extraout_AL_00))),
                                local_res18);
          fVar1 = local_res18[0];
          if (cVar2 != '\0') {
            uVar3 = _fdclass(local_res18[0]);
            if (((CONCAT11(extraout_AH_01,uVar3) == 0 || extraout_AH_01 < '\0') &&
                (DAT_180381428 <= fVar1)) && (fVar1 <= DAT_180381210)) {
              *param_2 = fVar1;
              return 1;
            }
            return 0;
          }
        }
      }
    }
  }
  return 0;
}



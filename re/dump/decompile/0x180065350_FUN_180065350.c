// 0x180065350  FUN_180065350
// size=366 thunk=false
// signature: undefined FUN_180065350()
// status: ok


undefined8 * FUN_180065350(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int extraout_var;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong _Size;
  
  puVar7 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar7 = (undefined8 *)*param_1;
  }
  uVar1 = param_1[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  if (uVar1 != 0) {
    if (0x7fffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1800135c0(0x16);
    }
    uVar4 = FUN_1802d7654(0xfde9,puVar7,uVar1 & 0xffffffff,0,0);
    if ((int)((ulonglong)uVar4 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180013900();
    }
    uVar2 = param_2[2];
    uVar6 = (ulonglong)(int)uVar4;
    if (uVar2 < uVar6) {
      _Size = uVar6 - uVar2;
      uVar3 = param_2[3];
      if (uVar3 - uVar2 < _Size) {
        FUN_180234150(param_2,_Size,uVar3,_Size);
      }
      else {
        param_2[2] = uVar6;
        puVar5 = param_2;
        if (0xf < uVar3) {
          puVar5 = (undefined8 *)*param_2;
        }
        memset((void *)(uVar2 + (longlong)puVar5),0,_Size);
        *(undefined1 *)(_Size + (longlong)(uVar2 + (longlong)puVar5)) = 0;
      }
    }
    else {
      param_2[2] = uVar6;
      puVar5 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar5 = (undefined8 *)*param_2;
      }
      *(undefined1 *)(uVar6 + (longlong)puVar5) = 0;
    }
    puVar5 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar5 = (undefined8 *)*param_2;
    }
    FUN_1802d7654(0xfde9,puVar7,uVar1 & 0xffffffff,puVar5,(int)uVar4);
    if (extraout_var != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180013900(extraout_var);
    }
  }
  return param_2;
}



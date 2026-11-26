// 0x18021ad40  FUN_18021ad40
// size=427 thunk=false
// signature: undefined FUN_18021ad40()
// status: ok


undefined8 *
FUN_18021ad40(undefined8 *param_1,ulonglong param_2,ulonglong param_3,void *param_4,size_t param_5)

{
  void *pvVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  void *_Src;
  size_t _Size;
  size_t _Size_00;
  ulonglong uVar5;
  
  uVar2 = param_1[2];
  if (uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18022ec00();
  }
  uVar3 = param_1[3];
  if (uVar2 - param_2 < param_3) {
    param_3 = uVar2 - param_2;
  }
  if (param_3 != param_5) {
    _Size_00 = ((uVar2 - param_3) - param_2) + 1;
    if (param_3 <= param_5) {
      uVar5 = param_5 - param_3;
      if (uVar3 - uVar2 < uVar5) {
        param_1 = (undefined8 *)
                  FUN_180229ea0(param_1,uVar5,_Size_00,param_2,param_3,param_4,param_5);
      }
      else {
        param_1[2] = uVar5 + uVar2;
        puVar4 = param_1;
        if (0xf < uVar3) {
          puVar4 = (undefined8 *)*param_1;
        }
        pvVar1 = (void *)(param_2 + (longlong)puVar4);
        _Src = (void *)(param_3 + (longlong)pvVar1);
        _Size = param_5;
        if ((pvVar1 < (void *)(param_5 + (longlong)param_4)) &&
           (param_4 <= (void *)(uVar2 + (longlong)puVar4))) {
          if (param_4 < _Src) {
            _Size = (longlong)_Src - (longlong)param_4;
          }
          else {
            _Size = 0;
          }
        }
        memmove((void *)((longlong)_Src + uVar5),_Src,_Size_00);
        memmove(pvVar1,param_4,_Size);
        memcpy((void *)(_Size + (longlong)pvVar1),(void *)((longlong)param_4 + _Size + uVar5),
               param_5 - _Size);
      }
      return param_1;
    }
    puVar4 = param_1;
    if (0xf < uVar3) {
      puVar4 = (undefined8 *)*param_1;
    }
    pvVar1 = (void *)(param_2 + (longlong)puVar4);
    memmove(pvVar1,param_4,param_5);
    memmove((void *)((longlong)pvVar1 + param_5),(void *)((longlong)pvVar1 + param_3),_Size_00);
    param_1[2] = (uVar2 - param_3) + param_5;
    return param_1;
  }
  puVar4 = param_1;
  if (0xf < uVar3) {
    puVar4 = (undefined8 *)*param_1;
  }
  memmove((void *)(param_2 + (longlong)puVar4),param_4,param_5);
  return param_1;
}



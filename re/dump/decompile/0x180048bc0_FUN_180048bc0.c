// 0x180048bc0  FUN_180048bc0
// size=344 thunk=false
// signature: undefined FUN_180048bc0()
// status: ok


undefined8 FUN_180048bc0(longlong param_1)

{
  double dVar1;
  char cVar2;
  longlong *plVar3;
  char *_Str;
  size_t sVar4;
  undefined4 uVar5;
  float fVar6;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);
    if (cVar2 != '\0') {
      _Str = (char *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);
      if (_Str != (char *)0x0) {
        cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,2,5);
        if (cVar2 != '\0') {
          fVar6 = 0.0;
          (**(code **)(*plVar3 + 0x20))(plVar3,2,&DAT_180342c14);
          cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,0xffffffff,3);
          if (cVar2 != '\0') {
            dVar1 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,0xffffffff);
            fVar6 = (float)dVar1;
          }
          (**(code **)(*plVar3 + 0x10))(plVar3,1);
          if (0.0 < fVar6) {
            local_48 = 0;
            uStack_40 = 0;
            local_38 = 0;
            uStack_30 = 0;
            sVar4 = strlen(_Str);
            uVar5 = FUN_18001d080(&local_48,_Str,sVar4);
            plVar3 = (longlong *)FUN_180218200(uVar5,local_58,&local_48);
            *(float *)(*plVar3 + 0x40) = fVar6;
            FUN_18020e450(&local_48);
          }
        }
      }
    }
  }
  return 0;
}



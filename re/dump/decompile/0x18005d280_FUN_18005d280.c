// 0x18005d280  FUN_18005d280
// size=901 thunk=false
// signature: undefined FUN_18005d280()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18005d280(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  double dVar7;
  undefined1 auStack_68 [32];
  int local_48 [2];
  undefined1 *local_40;
  undefined8 local_38;
  int local_30;
  undefined8 local_28;
  undefined4 local_20;
  char local_1c;
  undefined4 local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_2)) {
    uVar4 = 0;
  }
  else {
    if ((DAT_1803fa668 != (longlong *)0x0) &&
       (lVar3 = (**(code **)(*DAT_1803fa668 + 0x240))(), lVar3 != 0)) {
      if (DAT_1803ff920 == (code *)0x0) {
        (**(code **)(*plVar2 + 0xf8))(plVar2,0);
        return 1;
      }
      local_48[0] = 0;
      local_40 = &DAT_18033e5ea;
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      local_1c = '\0';
      dVar7 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
      local_18[0] = 0;
      local_48[0] = (int)dVar7;
      cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,5);
      if (cVar1 != '\0') {
        (**(code **)(*plVar2 + 0x20))(plVar2,2,&DAT_180344c24);
        cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,0xffffffff,4);
        if (cVar1 != '\0') {
          local_40 = (undefined1 *)(**(code **)(*plVar2 + 0xb8))(plVar2,0xffffffff,0);
        }
        (**(code **)(*plVar2 + 0x10))(plVar2,1);
        (**(code **)(*plVar2 + 0x20))(plVar2,2,&DAT_180344c28);
        cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,0xffffffff,3);
        if (cVar1 != '\0') {
          dVar7 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,0xffffffff);
          local_38 = CONCAT44(local_38._4_4_,(int)(longlong)dVar7);
        }
        (**(code **)(*plVar2 + 0x10))(plVar2,1);
        (**(code **)(*plVar2 + 0x20))(plVar2,2,&DAT_180344c2c);
        cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,0xffffffff,3);
        if (cVar1 != '\0') {
          dVar7 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,0xffffffff);
          local_38 = CONCAT44((int)dVar7,(undefined4)local_38);
        }
        (**(code **)(*plVar2 + 0x10))(plVar2,1);
        (**(code **)(*plVar2 + 0x20))(plVar2,2,"cookie");
        cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,0xffffffff,3);
        if (cVar1 != '\0') {
          dVar7 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,0xffffffff);
          local_30 = (int)dVar7;
        }
        (**(code **)(*plVar2 + 0x10))(plVar2,1);
        (**(code **)(*plVar2 + 0x20))(plVar2,2,"reliable");
        cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,0xffffffff,1);
        if (cVar1 != '\0') {
          local_1c = (**(code **)(*plVar2 + 200))(plVar2,0xffffffff);
        }
        (**(code **)(*plVar2 + 0x10))(plVar2,1);
        (**(code **)(*plVar2 + 0x20))(plVar2,2,"voice");
        cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,0xffffffff,4);
        if (cVar1 != '\0') {
          local_28 = (**(code **)(*plVar2 + 0xb8))(plVar2,0xffffffff,local_18);
          local_20 = local_18[0];
        }
        (**(code **)(*plVar2 + 0x10))(plVar2,1);
      }
      _DAT_1803ff928 = _DAT_1803ff928 + 1;
      cVar1 = (*DAT_1803ff920)(local_48);
      pcVar6 = "refused";
      pcVar5 = "unreliable";
      if (cVar1 != '\0') {
        pcVar6 = "sent";
      }
      if (local_1c != '\0') {
        pcVar5 = "reliable";
      }
      FUN_180014410("[LUANET] script sent message type %d (%s) -> %s\n",local_48[0],pcVar5,pcVar6);
      (**(code **)(*plVar2 + 0xf8))(plVar2,cVar1);
      return 1;
    }
    (**(code **)(*plVar2 + 0xe0))(plVar2);
    uVar4 = 1;
  }
  return uVar4;
}



// 0x18012abb0  FUN_18012abb0
// size=97 thunk=false
// signature: undefined FUN_18012abb0()
// status: ok


longlong * FUN_18012abb0(undefined8 param_1)

{
  char cVar1;
  longlong *plVar2;
  
  if (((DAT_1803fa640 != (longlong *)0x0) &&
      (plVar2 = (longlong *)
                (**(code **)(*DAT_1803fa640 + 0x298))(DAT_1803fa640,param_1,"SkyBox textures",0,0),
      plVar2 != (longlong *)0x0)) && (cVar1 = (**(code **)(*plVar2 + 0x78))(plVar2), cVar1 == '\0'))
  {
    (**(code **)(*plVar2 + 0x50))(plVar2);
    return plVar2;
  }
  return (longlong *)0x0;
}



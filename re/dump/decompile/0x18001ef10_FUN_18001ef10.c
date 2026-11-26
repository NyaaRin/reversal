// 0x18001ef10  FUN_18001ef10
// size=213 thunk=false
// signature: undefined FUN_18001ef10()
// status: ok


bool FUN_18001ef10(longlong param_1,char *param_2,char *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  byte *_Src;
  
  if (param_1 == 0) {
    return false;
  }
  if (param_3 == (char *)0x0) {
    return false;
  }
  _Src = (byte *)FUN_18001ea40();
  if ((_Src == (byte *)0x0) || (*_Src != 0x23)) {
    bVar1 = false;
    bVar2 = false;
    if ((_Src != (byte *)0x0) &&
       ((0x3c < *_Src || ((0x1000000800000001U >> ((longlong)(char)*_Src & 0x3fU) & 1) == 0)))) {
      bVar2 = true;
      goto LAB_18001ef48;
    }
  }
  else {
    bVar2 = true;
  }
  bVar1 = bVar2;
  bVar2 = false;
LAB_18001ef48:
  if ((((bVar1) && (_Src != (byte *)0x0)) && (*_Src != 0)) &&
     (cVar3 = FUN_18001ed70(_Src,param_3), cVar3 != '\0')) {
    return true;
  }
  if (((param_2 != (char *)0x0) && (*param_2 != '\0')) &&
     (cVar3 = FUN_18001ed70(param_2,param_3), cVar3 != '\0')) {
    return true;
  }
  if (!bVar2) {
    return false;
  }
  strncpy_s(param_3,0xc0,(char *)_Src,0xffffffffffffffff);
  return *param_3 != '\0';
}



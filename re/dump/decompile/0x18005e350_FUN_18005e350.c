// 0x18005e350  FUN_18005e350
// size=3785 thunk=false
// signature: undefined FUN_18005e350()
// status: ok


void FUN_18005e350(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  HMODULE pHVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if ((param_1 != (longlong *)0x0) && (lVar1 = param_1[1], lVar1 != 0)) {
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar4 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar4,"lua_gettop");
    }
    uVar5 = (*DAT_1803fcfa0)(lVar1);
    cVar3 = FUN_1800260c0(lVar1,0x2736efefe1fb290);
    pcVar2 = DAT_1803fcbe0;
    if (cVar3 == '\0') {
      FUN_180014410("[LUABF] api table unavailable -- persist not ready\n");
    }
    else if (DAT_1803fcbe0 != (code *)0x0) {
      uVar7 = 0;
      uVar8 = uVar7;
      uVar9 = uVar7;
      do {
        if ((&DAT_1805b88e0)[uVar7] != '\0') {
          (&DAT_1805b88e0)[uVar7] = 0;
          *(undefined4 *)((longlong)&DAT_1805b88e8 + uVar7) = 0;
          local_68 = 0;
          uStack_60 = 0;
          local_58 = 0;
          puVar6 = (undefined8 *)((longlong)&DAT_1805b88f0 + uVar7);
          if (&local_68 != puVar6) {
            local_68 = *puVar6;
            *puVar6 = 0;
            uStack_60 = *(undefined8 *)((longlong)&DAT_1805b88f8 + uVar7);
            *(undefined8 *)((longlong)&DAT_1805b88f8 + uVar7) = 0;
            local_58 = *(undefined8 *)((longlong)&DAT_1805b8900 + uVar7);
            *(undefined8 *)((longlong)&DAT_1805b8900 + uVar7) = 0;
          }
          FUN_18021e060(&local_68);
          uVar8 = (ulonglong)((int)uVar8 + 1);
        }
        uVar9 = uVar9 + 1;
        uVar7 = uVar7 + 0x68;
      } while (uVar9 != 0x40);
      if ((int)uVar8 != 0) {
        FUN_180014410("[LUABF] reclaimed %d buffer(s) left open by the previous state (%u of them script-owned)\n"
                      ,uVar8,DAT_1803ff7b8);
      }
      DAT_1803ff7b8 = 0;
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005f220);
      (*pcVar2)(lVar1,0xfffffffe,&DAT_18034260c);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005f310);
      (*pcVar2)(lVar1,0xfffffffe,"Create");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005f3f0);
      (*pcVar2)(lVar1,0xfffffffe,"Close");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005f460);
      (*pcVar2)(lVar1,0xfffffffe,"IsValid");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005f4f0);
      (*pcVar2)(lVar1,0xfffffffe,"IsReader");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005f5d0);
      (*pcVar2)(lVar1,0xfffffffe,"IsWriter");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005f6b0);
      (*pcVar2)(lVar1,0xfffffffe,"Reset");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005f780);
      (*pcVar2)(lVar1,0xfffffffe,"IsOverflowed");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005f840);
      (*pcVar2)(lVar1,0xfffffffe,"GetNumBitsLeft");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005f920);
      (*pcVar2)(lVar1,0xfffffffe,&DAT_1803455b0);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005f920);
      (*pcVar2)(lVar1,0xfffffffe,"GetNumBitsRead");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005f9e0);
      (*pcVar2)(lVar1,0xfffffffe,"GetNumBytesRead");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005fab0);
      (*pcVar2)(lVar1,0xfffffffe,"GetNumBytesLeft");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005fb80);
      (*pcVar2)(lVar1,0xfffffffe,"TotalBytes");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005fc40);
      (*pcVar2)(lVar1,0xfffffffe,&DAT_1803455f4);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005fd40);
      (*pcVar2)(lVar1,0xfffffffe,"SeekRelative");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005fe40);
      (*pcVar2)(lVar1,0xfffffffe,"ReadOneBit");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005ff50);
      (*pcVar2)(lVar1,0xfffffffe,"ReadUBitLong");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800600f0);
      (*pcVar2)(lVar1,0xfffffffe,"ReadSBitLong");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800601f0);
      (*pcVar2)(lVar1,0xfffffffe,"PeekUBitLong");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180060510);
      (*pcVar2)(lVar1,0xfffffffe,"ReadUBitVar");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180060520);
      (*pcVar2)(lVar1,0xfffffffe,"ReadVarInt32");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800605f0);
      (*pcVar2)(lVar1,0xfffffffe,"ReadSignedVarInt32");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800606c0);
      (*pcVar2)(lVar1,0xfffffffe,"ReadVarInt64");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800607c0);
      (*pcVar2)(lVar1,0xfffffffe,"ReadSignedVarInt64");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800608a0);
      (*pcVar2)(lVar1,0xfffffffe,"ReadBitFloat");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800609e0);
      (*pcVar2)(lVar1,0xfffffffe,"ReadChar");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180060b20);
      (*pcVar2)(lVar1,0xfffffffe,"ReadByte");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180060c60);
      (*pcVar2)(lVar1,0xfffffffe,"ReadShort");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180060da0);
      (*pcVar2)(lVar1,0xfffffffe,"ReadWord");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180060ee0);
      (*pcVar2)(lVar1,0xfffffffe,"ReadLong");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800611d0);
      (*pcVar2)(lVar1,0xfffffffe,"ReadLongLong");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800611e0);
      (*pcVar2)(lVar1,0xfffffffe,"ReadFloat");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180061530);
      (*pcVar2)(lVar1,0xfffffffe,"ReadString");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180061540);
      (*pcVar2)(lVar1,0xfffffffe,"ReadBytes");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180061690);
      (*pcVar2)(lVar1,0xfffffffe,"ReadBits");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800617f0);
      (*pcVar2)(lVar1,0xfffffffe,"ReadBitAngle");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800619c0);
      (*pcVar2)(lVar1,0xfffffffe,"ReadBitAngles");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180061ac0);
      (*pcVar2)(lVar1,0xfffffffe,"ReadBitCoord");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180061b90);
      (*pcVar2)(lVar1,0xfffffffe,"ReadBitCoordMP");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180061d00);
      (*pcVar2)(lVar1,0xfffffffe,"ReadBitCellCoord");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180062050);
      (*pcVar2)(lVar1,0xfffffffe,"GrabNextDWord");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180062060);
      (*pcVar2)(lVar1,0xfffffffe,"FetchNext");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180062140);
      (*pcVar2)(lVar1,0xfffffffe,"ReadBitNormal");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180062210);
      (*pcVar2)(lVar1,0xfffffffe,"ReadBitVec3Coord");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180062330);
      (*pcVar2)(lVar1,0xfffffffe,"ReadBitVec3Normal");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180062450);
      (*pcVar2)(lVar1,0xfffffffe,"WriteOneBit");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180062570);
      (*pcVar2)(lVar1,0xfffffffe,"WriteOneBitAt");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800628d0);
      (*pcVar2)(lVar1,0xfffffffe,"WriteUBitLong");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800628e0);
      (*pcVar2)(lVar1,0xfffffffe,"WriteSBitLong");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180062c40);
      (*pcVar2)(lVar1,0xfffffffe,"WriteUBitVar");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180062c50);
      (*pcVar2)(lVar1,0xfffffffe,"WriteVarInt32");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180062d30);
      (*pcVar2)(lVar1,0xfffffffe,"WriteSignedVarInt32");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180062e20);
      (*pcVar2)(lVar1,0xfffffffe,"WriteVarInt64");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180062f00);
      (*pcVar2)(lVar1,0xfffffffe,"WriteSignedVarInt64");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180062ff0);
      (*pcVar2)(lVar1,0xfffffffe,"WriteBitFloat");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180063170);
      (*pcVar2)(lVar1,0xfffffffe,"WriteChar");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180063260);
      (*pcVar2)(lVar1,0xfffffffe,"WriteByte");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800633c0);
      (*pcVar2)(lVar1,0xfffffffe,"WriteShort");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800634b0);
      (*pcVar2)(lVar1,0xfffffffe,"WriteWord");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180063610);
      (*pcVar2)(lVar1,0xfffffffe,"WriteLong");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180063910);
      (*pcVar2)(lVar1,0xfffffffe,"WriteLongLong");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180063920);
      (*pcVar2)(lVar1,0xfffffffe,"WriteFloat");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180063a20);
      (*pcVar2)(lVar1,0xfffffffe,"WriteString");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180063b60);
      (*pcVar2)(lVar1,0xfffffffe,"WriteBytes");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180063ec0);
      (*pcVar2)(lVar1,0xfffffffe,"WriteBits");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180063ed0);
      (*pcVar2)(lVar1,0xfffffffe,"WriteBitsFromBuffer");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180064240);
      (*pcVar2)(lVar1,0xfffffffe,"WriteBitAngle");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180064250);
      (*pcVar2)(lVar1,0xfffffffe,"WriteBitAngles");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800643a0);
      (*pcVar2)(lVar1,0xfffffffe,"WriteBitCoord");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180064480);
      (*pcVar2)(lVar1,0xfffffffe,"WriteBitCoordMP");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180064600);
      (*pcVar2)(lVar1,0xfffffffe,"WriteBitCellCoord");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180064780);
      (*pcVar2)(lVar1,0xfffffffe,"WriteOneBitNoCheck");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800648b0);
      (*pcVar2)(lVar1,0xfffffffe,"WriteBitNormal");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180064250);
      (*pcVar2)(lVar1,0xfffffffe,"WriteBitVec3Coord");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180064990);
      (*pcVar2)(lVar1,0xfffffffe,"WriteBitVec3Normal");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180064ae0);
      (*pcVar2)(lVar1,0xfffffffe,"SeekToBit");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180064bc0);
      (*pcVar2)(lVar1,0xfffffffe,"GetNumBitsWritten");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180064c90);
      (*pcVar2)(lVar1,0xfffffffe,"GetNumBytesWritten");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180064d60);
      (*pcVar2)(lVar1,0xfffffffe,"GetData");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180064e50);
      (*pcVar2)(lVar1,0xfffffffe,"ByteSizeVarInt32");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180064ee0);
      (*pcVar2)(lVar1,0xfffffffe,"ByteSizeSignedVarInt32");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180064f80);
      (*pcVar2)(lVar1,0xfffffffe,"ByteSizeVarInt64");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180065040);
      (*pcVar2)(lVar1,0xfffffffe,"ByteSizeSignedVarInt64");
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0xf0))(param_1,0);
      (*pcVar2)(lVar1,0xfffffffe,&DAT_18033ea58);
      (**(code **)(*param_1 + 0xf0))(param_1,DAT_180380d08);
      (*pcVar2)(lVar1,0xfffffffe,"LowPrecision");
      (**(code **)(*param_1 + 0xf0))(param_1,DAT_180380d38);
      (*pcVar2)(lVar1,0xfffffffe,"Integral");
      (*pcVar2)(lVar1,0xfffffffe,"COORD");
      (*pcVar2)(lVar1,0xfffffffe,&DAT_180345ae4);
      DAT_1803ff968 = FUN_18005e270;
      DAT_1803ff958 = &LAB_18005e290;
      DAT_1803ff970 = &LAB_18005e2d0;
      if (DAT_180425540 == (FARPROC)0x0) {
        pHVar4 = GetModuleHandleA("lua_shared.dll");
        DAT_180425540 = GetProcAddress(pHVar4,"lua_settop");
      }
      (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);
      FUN_180014410("[LUABF] bf table registered (%d slots)\n",0x40);
      return;
    }
    if (DAT_180425540 == (FARPROC)0x0) {
      pHVar4 = GetModuleHandleA("lua_shared.dll");
      DAT_180425540 = GetProcAddress(pHVar4,"lua_settop");
    }
    (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);
  }
  return;
}



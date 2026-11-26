// 0x1800594e0  FUN_1800594e0
// size=3448 thunk=false
// signature: undefined FUN_1800594e0()
// status: ok


void FUN_1800594e0(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  HMODULE pHVar4;
  ulonglong uVar5;
  char **ppcVar6;
  char *local_98;
  undefined4 local_90 [2];
  undefined *local_88;
  undefined4 local_80;
  char *local_78;
  undefined4 local_70;
  char *local_68;
  undefined4 local_60;
  char *local_58;
  undefined4 local_50;
  char *local_48;
  undefined4 local_40;
  char *local_38;
  undefined4 local_30;
  char *local_28;
  undefined4 local_20;
  
  if ((param_1 != (longlong *)0x0) && (lVar1 = param_1[1], lVar1 != 0)) {
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar4 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar4,"lua_gettop");
    }
    uVar5 = (*DAT_1803fcfa0)(lVar1);
    cVar3 = FUN_1800260c0(lVar1,0x2736efefe1fb290);
    pcVar2 = DAT_1803fcbe0;
    if (cVar3 == '\0') {
      FUN_180014410("[LUANET] api table unavailable -- persist not ready\n");
    }
    else if (DAT_1803fcbe0 != (code *)0x0) {
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005a260);
      (*pcVar2)(lVar1,0xfffffffe,"GetName");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005a300);
      (*pcVar2)(lVar1,0xfffffffe,"GetAddress");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005a3a0);
      (*pcVar2)(lVar1,0xfffffffe,"IsLoopback");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005a430);
      (*pcVar2)(lVar1,0xfffffffe,"IsTimingOut");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005a4c0);
      (*pcVar2)(lVar1,0xfffffffe,"IsPlayback");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005a550);
      (*pcVar2)(lVar1,0xfffffffe,"GetTime");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005a5e0);
      (*pcVar2)(lVar1,0xfffffffe,"GetTimeConnected");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005a670);
      (*pcVar2)(lVar1,0xfffffffe,"GetTimeSinceLastReceived");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005a710);
      (*pcVar2)(lVar1,0xfffffffe,"GetTimeoutSeconds");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005a7b0);
      (*pcVar2)(lVar1,0xfffffffe,"GetClearTime");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005a840);
      (*pcVar2)(lVar1,0xfffffffe,"GetQueuedPackets");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005a8d0);
      (*pcVar2)(lVar1,0xfffffffe,"GetRemoteFrameTime");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005a960);
      (*pcVar2)(lVar1,0xfffffffe,"GetRemoteFrameTimeStdDeviation");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005a9f0);
      (*pcVar2)(lVar1,0xfffffffe,"GetLatency");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005aab0);
      (*pcVar2)(lVar1,0xfffffffe,"GetAvgLatency");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005ab70);
      (*pcVar2)(lVar1,0xfffffffe,"GetAvgLoss");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005ac30);
      (*pcVar2)(lVar1,0xfffffffe,"GetAvgChoke");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005acf0);
      (*pcVar2)(lVar1,0xfffffffe,"GetAvgData");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005adb0);
      (*pcVar2)(lVar1,0xfffffffe,"GetAvgPackets");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005ae70);
      (*pcVar2)(lVar1,0xfffffffe,"GetTotalData");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005af30);
      (*pcVar2)(lVar1,0xfffffffe,"GetSequenceNr");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005aff0);
      (*pcVar2)(lVar1,0xfffffffe,"GetBufferSize");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005b080);
      (*pcVar2)(lVar1,0xfffffffe,"GetDataRate");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005b110);
      (*pcVar2)(lVar1,0xfffffffe,"IsValidPacket");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005b1f0);
      (*pcVar2)(lVar1,0xfffffffe,"GetPacketTime");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005b2e0);
      (*pcVar2)(lVar1,0xfffffffe,"GetPacketBytes");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005b400);
      (*pcVar2)(lVar1,0xfffffffe,"GetOutSequenceNr");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005b490);
      (*pcVar2)(lVar1,0xfffffffe,"GetInSequenceNr");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005b520);
      (*pcVar2)(lVar1,0xfffffffe,"GetOutSequenceNrAck");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005b5b0);
      (*pcVar2)(lVar1,0xfffffffe,"GetChokedPackets");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005b640);
      (*pcVar2)(lVar1,0xfffffffe,"GetPacketDrop");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005b6d0);
      (*pcVar2)(lVar1,0xfffffffe,"GetOutReliableState");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005b760);
      (*pcVar2)(lVar1,0xfffffffe,"GetInReliableState");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005b7f0);
      (*pcVar2)(lVar1,0xfffffffe,"GetChallengeNr");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005b890);
      (*pcVar2)(lVar1,0xfffffffe,"GetDropNumber");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005b930);
      (*pcVar2)(lVar1,0xfffffffe,"GetSocket");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005b9d0);
      (*pcVar2)(lVar1,0xfffffffe,"IsOverflowed");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005ba60);
      (*pcVar2)(lVar1,0xfffffffe,"CanPacket");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005baf0);
      (*pcVar2)(lVar1,0xfffffffe,"HasPendingReliableData");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005bb80);
      (*pcVar2)(lVar1,0xfffffffe,"GetMaxRoutablePayloadSize");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005bc20);
      (*pcVar2)(lVar1,0xfffffffe,"GetNumBitsWritten");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005bcf0);
      (*pcVar2)(lVar1,0xfffffffe,"SetRate");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005bdb0);
      (*pcVar2)(lVar1,0xfffffffe,"SetSendPacket");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005be60);
      (*pcVar2)(lVar1,0xfffffffe,"GetSendPacket");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005bef0);
      (*pcVar2)(lVar1,0xfffffffe,"SetSequenceNr");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005bf90);
      (*pcVar2)(lVar1,0xfffffffe,"SetInSequenceNr");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005c030);
      (*pcVar2)(lVar1,0xfffffffe,"SetOutSequenceNrAck");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005c0d0);
      (*pcVar2)(lVar1,0xfffffffe,"SetChokedPackets");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005c170);
      (*pcVar2)(lVar1,0xfffffffe,"SetPacketDrop");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005c210);
      (*pcVar2)(lVar1,0xfffffffe,"SetOutReliableState");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005c2b0);
      (*pcVar2)(lVar1,0xfffffffe,"SetInReliableState");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005c350);
      (*pcVar2)(lVar1,0xfffffffe,"SetChallengeNr");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005c3f0);
      (*pcVar2)(lVar1,0xfffffffe,"SetTimeout");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005c4b0);
      (*pcVar2)(lVar1,0xfffffffe,"SetMaxRoutablePayloadSize");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005c550);
      (*pcVar2)(lVar1,0xfffffffe,"SetCompressionMode");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005c630);
      (*pcVar2)(lVar1,0xfffffffe,"SetRemoteFramerate");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005c730);
      (*pcVar2)(lVar1,0xfffffffe,"SetInterpolationAmount");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005c7f0);
      (*pcVar2)(lVar1,0xfffffffe,"SetClearTime");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005c8b0);
      (*pcVar2)(lVar1,0xfffffffe,"SetTimeConnected");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005c970);
      (*pcVar2)(lVar1,0xfffffffe,"SetLastReceived");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005ca40);
      (*pcVar2)(lVar1,0xfffffffe,"SetQueuedPackets");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005caf0);
      (*pcVar2)(lVar1,0xfffffffe,"SendFile");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005cc20);
      (*pcVar2)(lVar1,0xfffffffe,"RequestFile");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18005d160);
      (*pcVar2)(lVar1,0xfffffffe,"BlockMessage");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005d170);
      (*pcVar2)(lVar1,0xfffffffe,"SendStringCmd");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18005d610);
      (*pcVar2)(lVar1,0xfffffffe,"SendMessage");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005d620);
      (*pcVar2)(lVar1,0xfffffffe,"SendVoice");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005d760);
      (*pcVar2)(lVar1,0xfffffffe,"SendFileCRC");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005d870);
      (*pcVar2)(lVar1,0xfffffffe,"SendDisconnect");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005d9b0);
      (*pcVar2)(lVar1,0xfffffffe,"Transmit");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005dad0);
      (*pcVar2)(lVar1,0xfffffffe,"Disconnect");
      (**(code **)(*param_1 + 0x30))(param_1);
      local_98 = "Disconnect";
      local_88 = &DAT_180345374;
      ppcVar6 = &local_98;
      local_90[0] = 1;
      local_78 = "StringCmd";
      local_68 = "SetConVar";
      local_58 = "VoiceData";
      local_48 = "BaselineAck";
      local_38 = "RespondCvarValue";
      local_28 = "FileCRCCheck";
      local_80 = 2;
      local_70 = 4;
      local_60 = 5;
      local_50 = 10;
      local_40 = 0xb;
      local_30 = 0xd;
      local_20 = 0xe;
      do {
        (**(code **)(*param_1 + 0xf0))(param_1,(double)*(int *)(ppcVar6 + 1));
        (*pcVar2)(lVar1,0xfffffffe,*ppcVar6);
        ppcVar6 = ppcVar6 + 2;
      } while (ppcVar6 != (char **)&stack0xffffffffffffffe8);
      (*pcVar2)(lVar1,0xfffffffe,&DAT_1803453e8);
      (*pcVar2)(lVar1,0xfffffffe,"channel");
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005dc00);
      (*pcVar2)(lVar1,0xfffffffe,"GetLastOutgoingCommand");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005dc70);
      (*pcVar2)(lVar1,0xfffffffe,"GetChokedCommands");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005dce0);
      (*pcVar2)(lVar1,0xfffffffe,"GetLastCommandAck");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005dd50);
      (*pcVar2)(lVar1,0xfffffffe,"GetCommandAck");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005ddc0);
      (*pcVar2)(lVar1,0xfffffffe,"SetLastOutgoingCommand");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005de50);
      (*pcVar2)(lVar1,0xfffffffe,"SetChokedCommands");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18005dee0);
      (*pcVar2)(lVar1,0xfffffffe,"SetLastCommandAck");
      (*pcVar2)(lVar1,0xfffffffe,"clientstate");
      if (DAT_180425540 == (FARPROC)0x0) {
        pHVar4 = GetModuleHandleA("lua_shared.dll");
        DAT_180425540 = GetProcAddress(pHVar4,"lua_settop");
      }
      (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);
      FUN_180014410("[LUANET] channel table registered\n");
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



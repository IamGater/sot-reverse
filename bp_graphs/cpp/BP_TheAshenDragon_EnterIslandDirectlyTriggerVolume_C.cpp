// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_EnterIslandDirectlyTriggerVolume_C::IsQuestParticipant (82 bytes)
void BP_TheAshenDragon_EnterIslandDirectlyTriggerVolume_C::IsQuestParticipant()
{
    bool CallFunc_Array_Contains_ReturnValue = UKismetArrayLibrary::Array_Contains(QuestParticipants, PlayerCharacter);
    return;
}

// Recovered Kismet: BP_TheAshenDragon_EnterIslandDirectlyTriggerVolume_C::CastToAthenaPlayerCharacter (152 bytes)
void BP_TheAshenDragon_EnterIslandDirectlyTriggerVolume_C::CastToAthenaPlayerCharacter()
{
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(Actor);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess) goto L_85;
    bool CastSuccessful = true;
L_85:
    CastSuccessful = false;
    return;
}

// Recovered Kismet: BP_TheAshenDragon_EnterIslandDirectlyTriggerVolume_C::Initialise (30 bytes)
void BP_TheAshenDragon_EnterIslandDirectlyTriggerVolume_C::Initialise()
{
    return;
}

// Recovered Kismet: BP_TheAshenDragon_EnterIslandDirectlyTriggerVolume_C::UserConstructionScript (3 bytes)
void BP_TheAshenDragon_EnterIslandDirectlyTriggerVolume_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_TheAshenDragon_EnterIslandDirectlyTriggerVolume_C::ReceiveActorBeginOverlap (40 bytes)
void BP_TheAshenDragon_EnterIslandDirectlyTriggerVolume_C::ReceiveActorBeginOverlap()
{
    ExecuteUbergraph_BP_TheAshenDragon_EnterIslandDirectlyTriggerVolume();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_EnterIslandDirectlyTriggerVolume_C::ExecuteUbergraph_BP_TheAshenDragon_EnterIslandDirectlyTriggerVolume (96 bytes)
void BP_TheAshenDragon_EnterIslandDirectlyTriggerVolume_C::ExecuteUbergraph_BP_TheAshenDragon_EnterIslandDirectlyTriggerVolume()
{
    CastToAthenaPlayerCharacter(K2Node_Event_OtherActor, CallFunc_CastToAthenaPlayerCharacter_Successful, CallFunc_CastToAthenaPlayerCharacter_AthenaPlayerCharacter);
    if (!CallFunc_CastToAthenaPlayerCharacter_Successful) goto L_5D;
L_5D:
    return;
}

// Recovered Kismet: BP_TheAshenDragon_EnterIslandDirectlyTriggerVolume_C::OnPlayerLeftTrigger__DelegateSignature (3 bytes)
void BP_TheAshenDragon_EnterIslandDirectlyTriggerVolume_C::OnPlayerLeftTrigger__DelegateSignature()
{
    return;
}

// Recovered Kismet: BP_TheAshenDragon_EnterIslandDirectlyTriggerVolume_C::OnPlayerEnteredTrigger__DelegateSignature (3 bytes)
void BP_TheAshenDragon_EnterIslandDirectlyTriggerVolume_C::OnPlayerEnteredTrigger__DelegateSignature()
{
    return;
}

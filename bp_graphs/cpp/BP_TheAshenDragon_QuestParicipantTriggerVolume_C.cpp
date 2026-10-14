// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_QuestParicipantTriggerVolume_C::IsQuestParticipant (82 bytes)
void BP_TheAshenDragon_QuestParicipantTriggerVolume_C::IsQuestParticipant()
{
    bool CallFunc_Array_Contains_ReturnValue = UKismetArrayLibrary::Array_Contains(QuestParticipants, PlayerCharacter);
    return;
}

// Recovered Kismet: BP_TheAshenDragon_QuestParicipantTriggerVolume_C::CastToAthenaPlayerCharacter (152 bytes)
void BP_TheAshenDragon_QuestParicipantTriggerVolume_C::CastToAthenaPlayerCharacter()
{
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(Actor);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess) goto L_85;
    bool CastSuccessful = true;
L_85:
    CastSuccessful = false;
    return;
}

// Recovered Kismet: BP_TheAshenDragon_QuestParicipantTriggerVolume_C::Initialise (30 bytes)
void BP_TheAshenDragon_QuestParicipantTriggerVolume_C::Initialise()
{
    return;
}

// Recovered Kismet: BP_TheAshenDragon_QuestParicipantTriggerVolume_C::UserConstructionScript (3 bytes)
void BP_TheAshenDragon_QuestParicipantTriggerVolume_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_TheAshenDragon_QuestParicipantTriggerVolume_C::BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_39_ComponentBeginOverlapSignature__DelegateSignature (112 bytes)
void BP_TheAshenDragon_QuestParicipantTriggerVolume_C::BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_39_ComponentBeginOverlapSignature__DelegateSignature()
{
    ExecuteUbergraph_BP_TheAshenDragon_QuestParicipantTriggerVolume();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_QuestParicipantTriggerVolume_C::ExecuteUbergraph_BP_TheAshenDragon_QuestParicipantTriggerVolume (96 bytes)
void BP_TheAshenDragon_QuestParicipantTriggerVolume_C::ExecuteUbergraph_BP_TheAshenDragon_QuestParicipantTriggerVolume()
{
    CastToAthenaPlayerCharacter(K2Node_ComponentBoundEvent_OtherActor, CallFunc_CastToAthenaPlayerCharacter_Successful, CallFunc_CastToAthenaPlayerCharacter_AthenaPlayerCharacter);
    if (!CallFunc_CastToAthenaPlayerCharacter_Successful) goto L_5D;
L_5D:
    return;
}

// Recovered Kismet: BP_TheAshenDragon_QuestParicipantTriggerVolume_C::OnPlayerEnteredTrigger__DelegateSignature (3 bytes)
void BP_TheAshenDragon_QuestParicipantTriggerVolume_C::OnPlayerEnteredTrigger__DelegateSignature()
{
    return;
}

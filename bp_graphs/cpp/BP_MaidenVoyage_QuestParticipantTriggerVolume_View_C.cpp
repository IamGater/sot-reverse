// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_MaidenVoyage_QuestParticipantTriggerVolume_View_C::Initialise (30 bytes)
void BP_MaidenVoyage_QuestParticipantTriggerVolume_View_C::Initialise()
{
    return;
}

// Recovered Kismet: BP_MaidenVoyage_QuestParticipantTriggerVolume_View_C::CastToAthenaPlayerCharacter (152 bytes)
void BP_MaidenVoyage_QuestParticipantTriggerVolume_View_C::CastToAthenaPlayerCharacter()
{
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(Actor);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess) goto L_85;
    bool CastSuccessful = true;
L_85:
    CastSuccessful = false;
    return;
}

// Recovered Kismet: BP_MaidenVoyage_QuestParticipantTriggerVolume_View_C::UserConstructionScript (3 bytes)
void BP_MaidenVoyage_QuestParticipantTriggerVolume_View_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_MaidenVoyage_QuestParticipantTriggerVolume_View_C::BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_53_ComponentBeginOverlapSignature__DelegateSignature (112 bytes)
void BP_MaidenVoyage_QuestParticipantTriggerVolume_View_C::BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_53_ComponentBeginOverlapSignature__DelegateSignature()
{
    ExecuteUbergraph_BP_MaidenVoyage_QuestParticipantTriggerVolume_View();
    return;
}

// Recovered Kismet: BP_MaidenVoyage_QuestParticipantTriggerVolume_View_C::ExecuteUbergraph_BP_MaidenVoyage_QuestParticipantTriggerVolume_View (87 bytes)
void BP_MaidenVoyage_QuestParticipantTriggerVolume_View_C::ExecuteUbergraph_BP_MaidenVoyage_QuestParticipantTriggerVolume_View()
{
    CastToAthenaPlayerCharacter(K2Node_ComponentBoundEvent_OtherActor, CallFunc_CastToAthenaPlayerCharacter_Successful, CallFunc_CastToAthenaPlayerCharacter_AthenaPlayerCharacter);
    if (!CallFunc_CastToAthenaPlayerCharacter_Successful) goto L_54;
L_54:
    return;
}

// Recovered Kismet: BP_MaidenVoyage_QuestParticipantTriggerVolume_View_C::OnPlayerEnteredTrigger1__DelegateSignature (3 bytes)
void BP_MaidenVoyage_QuestParticipantTriggerVolume_View_C::OnPlayerEnteredTrigger1__DelegateSignature()
{
    return;
}

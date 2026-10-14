// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_MaidenVoyage_HealPlayer_C::OnBegin (40 bytes)
void BP_MaidenVoyage_HealPlayer_C::OnBegin()
{
    ExecuteUbergraph_BP_MaidenVoyage_HealPlayer();
    return;
}

// Recovered Kismet: BP_MaidenVoyage_HealPlayer_C::ExecuteUbergraph_BP_MaidenVoyage_HealPlayer (241 bytes)
void BP_MaidenVoyage_HealPlayer_C::ExecuteUbergraph_BP_MaidenVoyage_HealPlayer()
{
    UBlueprintStepBase::GetParticipants(CallFunc_GetParticipants_Participants);
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(CallFunc_Array_Get_Item);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess) goto L_EE;
    this->SignalComplete();
L_EE:
    return;
}

// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_GrantSword_C::OnBeginCustom (205 bytes)
void BP_GrantSword_C::OnBeginCustom()
{
    UBlueprintStepBase::GetParticipants(CallFunc_GetParticipants_Participants);
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(CallFunc_Array_Get_Item);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess) goto L_CA;
    UBlueprintStepBase::AddItemToCommonToolsService(BP_wpn_cutlass_MaidenVoyage_smp_01_a_ItemDesc_C, K2Node_DynamicCast_AsAthena_Player_Character);
    this->SignalComplete();
L_CA:
    return;
}

// Recovered Kismet: BP_GrantSword_C::OnBegin (40 bytes)
void BP_GrantSword_C::OnBegin()
{
    ExecuteUbergraph_BP_GrantSword();
    return;
}

// Recovered Kismet: BP_GrantSword_C::ExecuteUbergraph_BP_GrantSword (53 bytes)
void BP_GrantSword_C::ExecuteUbergraph_BP_GrantSword()
{
    this->SignalComplete();
    UBlueprintStepBase::AddItemToCommonToolsService(BP_wpn_cutlass_MaidenVoyage_smp_01_a_ItemDesc_C);
    return;
}

// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_GrantBanana_C::OnBeginCustom (408 bytes)
void BP_GrantBanana_C::OnBeginCustom()
{
    ItemInfo* K2Node_DynamicCast_AsItem_Info = Cast<ItemInfo*>(Banana);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsItem_Info);
    if (!K2Node_DynamicCast_bSuccess) goto L_130;
    UBlueprintStepBase::GetParticipants(CallFunc_GetParticipants_Participants);
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(CallFunc_Array_Get_Item);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess2) goto L_195;
    this->SignalComplete();
L_130:
L_195:
    return;
}

// Recovered Kismet: BP_GrantBanana_C::OnBegin (40 bytes)
void BP_GrantBanana_C::OnBegin()
{
    ExecuteUbergraph_BP_GrantBanana();
    return;
}

// Recovered Kismet: BP_GrantBanana_C::ExecuteUbergraph_BP_GrantBanana (13 bytes)
void BP_GrantBanana_C::ExecuteUbergraph_BP_GrantBanana()
{
    return;
}

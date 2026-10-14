// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_MaidenVoyage_DamagePlayer_C::EnableHealthAdjustmentsAndApplyDamage (110 bytes)
void BP_MaidenVoyage_DamagePlayer_C::EnableHealthAdjustmentsAndApplyDamage()
{
    ApplyDamage(InputPin);
    return;
}

// Recovered Kismet: BP_MaidenVoyage_DamagePlayer_C::ApplyDamage (105 bytes)
void BP_MaidenVoyage_DamagePlayer_C::ApplyDamage()
{
    auto idx_283052 = idx_283052;
    idx_283052 = idx_283052;
    return;
}

// Recovered Kismet: BP_MaidenVoyage_DamagePlayer_C::OnBegin (40 bytes)
void BP_MaidenVoyage_DamagePlayer_C::OnBegin()
{
    ExecuteUbergraph_BP_MaidenVoyage_DamagePlayer();
    return;
}

// Recovered Kismet: BP_MaidenVoyage_DamagePlayer_C::ExecuteUbergraph_BP_MaidenVoyage_DamagePlayer (369 bytes)
void BP_MaidenVoyage_DamagePlayer_C::ExecuteUbergraph_BP_MaidenVoyage_DamagePlayer()
{
    UBlueprintStepBase::GetParticipants(CallFunc_GetParticipants_Participants);
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(CallFunc_Array_Get_Item);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess) goto L_16E;
    bool idx_283048 = K2Node_DynamicCast_AsAthena_Player_Character->CanAdjustHealth();
    if (!idx_283048) goto L_13C;
    ApplyDamage(K2Node_DynamicCast_AsAthena_Player_Character);
    this->SignalComplete();
L_13C:
    EnableHealthAdjustmentsAndApplyDamage(K2Node_DynamicCast_AsAthena_Player_Character);
L_16E:
    return;
}

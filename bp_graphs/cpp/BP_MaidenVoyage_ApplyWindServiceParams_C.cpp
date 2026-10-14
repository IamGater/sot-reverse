// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_MaidenVoyage_ApplyWindServiceParams_C::OnBeginCustom (412 bytes)
void BP_MaidenVoyage_ApplyWindServiceParams_C::OnBeginCustom()
{
    auto CallFunc_GetGameState_ReturnValue = this->GetGameState();
    AthenaGameState* K2Node_DynamicCast_AsAthena_Game_State = Cast<AthenaGameState*>(CallFunc_GetGameState_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Game_State);
    if (!K2Node_DynamicCast_bSuccess) goto L_199;
    auto CallFunc_GetService_ReturnValue = K2Node_DynamicCast_AsAthena_Game_State->GetService(WindInterface);
    WindService* idx_282885 = Cast<WindService*>(CallFunc_GetService_ReturnValue);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(idx_282885);
    if (!K2Node_DynamicCast_bSuccess2) goto L_199;
    this->SignalComplete();
L_199:
    return;
}

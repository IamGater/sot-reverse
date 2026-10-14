// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_MaidenVoyage_Automation_FireShipEnteredEventToPuppet_C::OnBegin (40 bytes)
void BP_MaidenVoyage_Automation_FireShipEnteredEventToPuppet_C::OnBegin()
{
    idx:286088();
    return;
}

// Recovered Kismet: BP_MaidenVoyage_Automation_FireShipEnteredEventToPuppet_C::fn_idx_286088 (549 bytes)
void BP_MaidenVoyage_Automation_FireShipEnteredEventToPuppet_C::fn_idx_286088()
{
    TArray<AShip*> CallFunc_GetCrewShips_ReturnValue = UBlueprintStepBase::GetCrewShips();
    auto idx_286069 = idx_286073->();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(idx_286069);
    auto idx_286089 = idx_286089;
    idx_286089 = idx_286089;
    this->SignalComplete();
    auto CallFunc_GetService_ReturnValue = this->GetService(_null_);
    _null_* idx_286073 = Cast<_null_*>(CallFunc_GetService_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_286073);
    if (!K2Node_DynamicCast_bSuccess) goto L_1B9;
L_1B9:
    return;
}

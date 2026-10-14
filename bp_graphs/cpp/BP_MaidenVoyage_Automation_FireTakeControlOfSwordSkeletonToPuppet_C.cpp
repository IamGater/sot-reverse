// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_MaidenVoyage_Automation_FireTakeControlOfSwordSkeletonToPuppet_C::OnBegin (40 bytes)
void BP_MaidenVoyage_Automation_FireTakeControlOfSwordSkeletonToPuppet_C::OnBegin()
{
    idx:286098();
    return;
}

// Recovered Kismet: BP_MaidenVoyage_Automation_FireTakeControlOfSwordSkeletonToPuppet_C::fn_idx_286098 (403 bytes)
void BP_MaidenVoyage_Automation_FireTakeControlOfSwordSkeletonToPuppet_C::fn_idx_286098()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetService_ReturnValue = this->GetService(_null_);
    _null_* idx_286073 = Cast<_null_*>(CallFunc_GetService_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_286073);
    if (!K2Node_DynamicCast_bSuccess) goto L_190;
    auto idx_286069 = idx_286073->();
    AController* CallFunc_GetController_ReturnValue = idx_286069->GetController();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetController_ReturnValue);
    auto idx_286099 = idx_286099;
    this->SignalComplete();
L_190:
    return;
}

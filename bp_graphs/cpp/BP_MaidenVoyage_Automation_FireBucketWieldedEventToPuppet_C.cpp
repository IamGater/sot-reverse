// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_MaidenVoyage_Automation_FireBucketWieldedEventToPuppet_C::OnBegin (40 bytes)
void BP_MaidenVoyage_Automation_FireBucketWieldedEventToPuppet_C::OnBegin()
{
    idx:286071();
    return;
}

// Recovered Kismet: BP_MaidenVoyage_Automation_FireBucketWieldedEventToPuppet_C::fn_idx_286071 (789 bytes)
void BP_MaidenVoyage_Automation_FireBucketWieldedEventToPuppet_C::fn_idx_286071()
{
    auto CallFunc_GetService_ReturnValue = this->GetService(_null_);
    _null_* idx_286073 = Cast<_null_*>(CallFunc_GetService_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_286073);
    if (!K2Node_DynamicCast_bSuccess) goto L_239;
    auto idx_286069 = idx_286073->();
    auto CallFunc_SpawnActor_ReturnValue = this->SpawnActor(Bucket, CallFunc_MakeTransform_ReturnValue, true);
    WieldableItem* K2Node_DynamicCast_AsWieldable_Item = Cast<WieldableItem*>(CallFunc_SpawnActor_ReturnValue);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsWieldable_Item);
    if (!K2Node_DynamicCast_bSuccess2) goto L_2A7;
    AController* CallFunc_GetController_ReturnValue = idx_286069->GetController();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetController_ReturnValue);
    auto idx_286074 = idx_286074;
    this->SignalComplete();
L_239:
L_2A7:
    return;
}

// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_MaidenVoyage_Automation_FireObjectWieldedEventToPuppet_C::OnBegin (40 bytes)
void BP_MaidenVoyage_Automation_FireObjectWieldedEventToPuppet_C::OnBegin()
{
    idx:230623();
    return;
}

// Recovered Kismet: BP_MaidenVoyage_Automation_FireObjectWieldedEventToPuppet_C::fn_idx_230623 (789 bytes)
void BP_MaidenVoyage_Automation_FireObjectWieldedEventToPuppet_C::fn_idx_230623()
{
L_A:
    auto CallFunc_GetService_ReturnValue = this->GetService(_null_);
    _null_* idx_230625 = Cast<_null_*>(CallFunc_GetService_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_230625);
    if (!K2Node_DynamicCast_bSuccess) goto L_29F;
    auto idx_230621 = idx_230625->();
    auto idx_230490 = this->SpawnActor(Flintlock, CallFunc_MakeTransform_ReturnValue, true);
    WieldableItem* K2Node_DynamicCast_AsWieldable_Item = Cast<WieldableItem*>(idx_230490);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsWieldable_Item);
    if (!K2Node_DynamicCast_bSuccess2) goto L_A;
    AController* idx_229301 = idx_230621->GetController();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(idx_229301);
    auto idx_230626 = idx_230626;
    this->SignalComplete();
L_29F:
    return;
}

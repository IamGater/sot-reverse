// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CT_Cargo_CreateDeliveryPrompts_C::OnBeginCustom (563 bytes)
void BP_CT_Cargo_CreateDeliveryPrompts_C::OnBeginCustom()
{
    AActor* idx_227774 = UBlueprintStepBase::SpawnPhasedActor(idx_228765, CallFunc_MakeTransform_ReturnValue);
    idx_228759* idx_228763 = Cast<idx_228759*>(idx_227774);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_228763);
    if (!K2Node_DynamicCast_bSuccess) goto L_225;
    auto CallFunc_FlushNetDormancy_ReturnValue = idx_228763->this->FlushNetDormancy();
    idx_228763 = idx_228763;
    auto CallFunc_FlushNetDormancy_ReturnValue3 = idx_228763->this->FlushNetDormancy();
    FVector CallFunc_K2_GetActorLocation_ReturnValue = DeliverToNPC->K2_GetActorLocation();
    idx_228763 = idx_228763;
    auto CallFunc_FlushNetDormancy_ReturnValue2 = idx_228763->this->FlushNetDormancy();
    idx_228763 = idx_228763;
L_225:
    return;
}

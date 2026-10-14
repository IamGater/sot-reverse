// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_MAVoyage_EnablePhysics_C::OnBeginCustom (329 bytes)
void BP_MAVoyage_EnablePhysics_C::OnBeginCustom()
{
    ItemInfo* K2Node_DynamicCast_AsItem_Info = Cast<ItemInfo*>(Item);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsItem_Info);
    if (!K2Node_DynamicCast_bSuccess) goto L_146;
    auto CallFunc_GetItem_ReturnValue = K2Node_DynamicCast_AsItem_Info->this->GetItem();
    USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_GetItem_ReturnValue->K2_GetRootComponent();
    PrimitiveComponent* K2Node_DynamicCast_AsPrimitive_Component = Cast<PrimitiveComponent*>(CallFunc_K2_GetRootComponent_ReturnValue);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsPrimitive_Component);
    if (!K2Node_DynamicCast_bSuccess2) goto L_146;
    this->SignalComplete();
L_146:
    return;
}

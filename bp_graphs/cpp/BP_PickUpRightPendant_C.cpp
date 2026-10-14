// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PickUpRightPendant_C::OnPendantPickedUp (22 bytes)
void BP_PickUpRightPendant_C::OnPendantPickedUp()
{
    ExecuteUbergraph_BP_PickUpRightPendant();
    return;
}

// Recovered Kismet: BP_PickUpRightPendant_C::OnBegin (40 bytes)
void BP_PickUpRightPendant_C::OnBegin()
{
    ExecuteUbergraph_BP_PickUpRightPendant();
    return;
}

// Recovered Kismet: BP_PickUpRightPendant_C::ExecuteUbergraph_BP_PickUpRightPendant (244 bytes)
void BP_PickUpRightPendant_C::ExecuteUbergraph_BP_PickUpRightPendant()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UBlueprintStepBase::ChangeCompassTargetByActor(CallFunc_GetVariables_OutStruct);
    ItemInfo* K2Node_DynamicCast_AsItem_Info = Cast<ItemInfo*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsItem_Info);
    if (!K2Node_DynamicCast_bSuccess) goto L_F1;
    this->SignalComplete();
L_F1:
    return;
}

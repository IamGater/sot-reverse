// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TallTales_WaitForPickup_C::GetStepName (132 bytes)
void BP_TallTales_WaitForPickup_C::GetStepName()
{
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass();
    FString CallFunc_GetClassDisplayName_ReturnValue = UKismetSystemLibrary::GetClassDisplayName(CallFunc_GetObjectClass_ReturnValue);
    return;
}

// Recovered Kismet: BP_TallTales_WaitForPickup_C::OnBegin (40 bytes)
void BP_TallTales_WaitForPickup_C::OnBegin()
{
    ExecuteUbergraph_BP_TallTales_WaitForPickup();
    return;
}

// Recovered Kismet: BP_TallTales_WaitForPickup_C::OnPickup (22 bytes)
void BP_TallTales_WaitForPickup_C::OnPickup()
{
    ExecuteUbergraph_BP_TallTales_WaitForPickup();
    return;
}

// Recovered Kismet: BP_TallTales_WaitForPickup_C::ExecuteUbergraph_BP_TallTales_WaitForPickup (452 bytes)
void BP_TallTales_WaitForPickup_C::ExecuteUbergraph_BP_TallTales_WaitForPickup()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    ItemProxy* K2Node_DynamicCast_AsItem_Proxy = Cast<ItemProxy*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsItem_Proxy);
    if (!K2Node_DynamicCast_bSuccess) goto L_E4;
    auto CallFunc_GetItemInfo_ReturnValue = K2Node_DynamicCast_AsItem_Proxy->this->GetItemInfo();
L_E4:
    GetStepName(idx_282655);
    FString CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(idx_282655);
    this->SignalComplete();
    return;
}

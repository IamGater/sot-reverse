// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_WaitForPickup_C::OnBeginCustom (468 bytes)
void BP_WaitForPickup_C::OnBeginCustom()
{
    ItemProxy* K2Node_DynamicCast_AsItem_Proxy = Cast<ItemProxy*>(ItemProxy);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsItem_Proxy);
    if (!K2Node_DynamicCast_bSuccess) goto L_BE;
    auto CallFunc_GetItemInfo_ReturnValue = K2Node_DynamicCast_AsItem_Proxy->this->GetItemInfo();
L_BE:
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass();
    FString CallFunc_GetClassDisplayName_ReturnValue = UKismetSystemLibrary::GetClassDisplayName(CallFunc_GetObjectClass_ReturnValue);
    FString CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(CallFunc_GetClassDisplayName_ReturnValue);
    return;
}

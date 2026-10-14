// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_AddItemToNPCCustomPurchaseList_C::OnBeginCustom (1099 bytes)
void BP_AddItemToNPCCustomPurchaseList_C::OnBeginCustom()
{
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CallFunc_Array_Get_Item);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(idx_282551);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
    if (!CallFunc_BooleanAND_ReturnValue) goto L_242;
    TScriptInterface<UNPCCustomItemPurchaseInterface> idx_281873 = TScriptInterface<UNPCCustomItemPurchaseInterface>(CallFunc_Array_Get_Item);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(idx_281873);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_438;
    bool idx_281869 = idx_281873->AddItemToPurchaseList(ItemDesc);
    this->SignalComplete();
L_242:
    FString CallFunc_GetDisplayName_ReturnValue = UKismetSystemLibrary::GetDisplayName(TargetNpc);
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass();
    FString CallFunc_GetClassDisplayName_ReturnValue = UKismetSystemLibrary::GetClassDisplayName(CallFunc_GetObjectClass_ReturnValue);
    FString CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(CallFunc_GetClassDisplayName_ReturnValue);
    FString CallFunc_Concat_StrStr_ReturnValue2 = UKismetStringLibrary::Concat_StrStr(CallFunc_GetDisplayName_ReturnValue, CallFunc_Concat_StrStr_ReturnValue);
    FString CallFunc_Concat_StrStr_ReturnValue3 = UKismetStringLibrary::Concat_StrStr(CallFunc_Concat_StrStr_ReturnValue2);
L_438:
    idx_281869 = false;
    return;
}

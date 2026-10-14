// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_SetupStarsOfAThiefVariables_C::SelectPuzzlePair (232 bytes)
void BP_SetupStarsOfAThiefVariables_C::SelectPuzzlePair()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length();
    auto CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    auto CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_SetupStarsOfAThiefVariables_C::OnBegin (40 bytes)
void BP_SetupStarsOfAThiefVariables_C::OnBegin()
{
    ExecuteUbergraph_BP_SetupStarsOfAThiefVariables();
    return;
}

// Recovered Kismet: BP_SetupStarsOfAThiefVariables_C::ExecuteUbergraph_BP_SetupStarsOfAThiefVariables (1281 bytes)
void BP_SetupStarsOfAThiefVariables_C::ExecuteUbergraph_BP_SetupStarsOfAThiefVariables()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    SelectPuzzlePair(CallFunc_GetVariables_OutStruct, idx_284051);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue2 = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    AActor* UniqueObjectNameForCooking_AsActor2 = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue2);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(UniqueObjectNameForCooking_AsActor2);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue3 = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue4 = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    AActor* UniqueObjectNameForCooking_AsActor3 = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue3);
    bool UniqueObjectNameForCooking_bSuccess3 = static_cast<bool>(UniqueObjectNameForCooking_AsActor3);
    AActor* UniqueObjectNameForCooking_AsActor4 = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue4);
    bool UniqueObjectNameForCooking_bSuccess4 = static_cast<bool>(UniqueObjectNameForCooking_AsActor4);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue5 = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue6 = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    AActor* UniqueObjectNameForCooking_AsActor5 = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue5);
    bool UniqueObjectNameForCooking_bSuccess5 = static_cast<bool>(UniqueObjectNameForCooking_AsActor5);
    AActor* UniqueObjectNameForCooking_AsActor6 = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue6);
    bool UniqueObjectNameForCooking_bSuccess6 = static_cast<bool>(UniqueObjectNameForCooking_AsActor6);
    auto idx_284054 = idx_284054;
    idx_284054 = idx_284054;
    idx_284054 = idx_284054;
    idx_284054 = idx_284054;
    idx_284054 = idx_284054;
    idx_284054 = idx_284054;
    idx_284054 = idx_284054;
    idx_284054 = idx_284054;
    idx_284054 = idx_284054;
    idx_284054 = idx_284054;
    idx_284054 = idx_284054;
    idx_284054 = idx_284054;
    idx_284054 = idx_284054;
    idx_284054 = idx_284054;
    idx_284054 = idx_284054;
    idx_284054 = idx_284054;
    UBlueprintStepBase::SetVariables(idx_284054);
    return;
}

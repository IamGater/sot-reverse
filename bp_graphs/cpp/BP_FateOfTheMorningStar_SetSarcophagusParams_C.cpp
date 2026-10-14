// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_FateOfTheMorningStar_SetSarcophagusParams_C::OnBegin (40 bytes)
void BP_FateOfTheMorningStar_SetSarcophagusParams_C::OnBegin()
{
    ExecuteUbergraph_BP_FateOfTheMorningStar_SetSarcophagusParams();
    return;
}

// Recovered Kismet: BP_FateOfTheMorningStar_SetSarcophagusParams_C::ExecuteUbergraph_BP_FateOfTheMorningStar_SetSarcophagusParams (928 bytes)
void BP_FateOfTheMorningStar_SetSarcophagusParams_C::ExecuteUbergraph_BP_FateOfTheMorningStar_SetSarcophagusParams()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetVariables_OutStruct);
    auto CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    auto CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
    UBlueprintStepBase::SetVariables(CallFunc_Array_Get_Item);
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetVariables_OutStruct);
    CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_Array_Get_Item);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue2 = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_Array_Get_Item);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    AActor* UniqueObjectNameForCooking_AsActor2 = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue2);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(UniqueObjectNameForCooking_AsActor2);
    auto CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct2);
    return;
}

// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_FateOfTheMorningstar_SetupVariables_C::OnBegin (40 bytes)
void BP_FateOfTheMorningstar_SetupVariables_C::OnBegin()
{
    ExecuteUbergraph_BP_FateOfTheMorningstar_SetupVariables();
    return;
}

// Recovered Kismet: BP_FateOfTheMorningstar_SetupVariables_C::ExecuteUbergraph_BP_FateOfTheMorningstar_SetupVariables (855 bytes)
void BP_FateOfTheMorningstar_SetupVariables_C::ExecuteUbergraph_BP_FateOfTheMorningstar_SetupVariables()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct2);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue2 = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct2);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    AActor* UniqueObjectNameForCooking_AsActor2 = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue2);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(UniqueObjectNameForCooking_AsActor2);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue3 = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct2);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue4 = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct2);
    AActor* UniqueObjectNameForCooking_AsActor3 = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue3);
    bool UniqueObjectNameForCooking_bSuccess3 = static_cast<bool>(UniqueObjectNameForCooking_AsActor3);
    AActor* UniqueObjectNameForCooking_AsActor4 = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue4);
    bool UniqueObjectNameForCooking_bSuccess4 = static_cast<bool>(UniqueObjectNameForCooking_AsActor4);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue5 = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct2);
    AActor* UniqueObjectNameForCooking_AsActor5 = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue5);
    bool UniqueObjectNameForCooking_bSuccess5 = static_cast<bool>(UniqueObjectNameForCooking_AsActor5);
    auto CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    return;
}

// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_WildRose_SpawnLoreBooks_C::OnBeginCustom (664 bytes)
void BP_WildRose_SpawnLoreBooks_C::OnBeginCustom()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length();
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_240;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_Array_Get_Item);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    auto LocationActor = UniqueObjectNameForCooking_AsActor;
    auto CallFunc_GetTransform_ReturnValue = LocationActor->this->GetTransform();
    AActor* CallFunc_SpawnPhasedActor_ReturnValue = UBlueprintStepBase::SpawnPhasedActor(CallFunc_Array_Get_Item, CallFunc_GetTransform_ReturnValue, LocationActor);
L_240:
    this->SignalComplete();
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_ResolveActorIDArray_C::OnBeginCustom (1012 bytes)
void BP_ResolveActorIDArray_C::OnBeginCustom()
{
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length();
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue2;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_221;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length();
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_387;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_Array_Get_Item);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(Actors, UniqueObjectNameForCooking_AsActor);
L_221:
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass();
    FString CallFunc_GetClassDisplayName_ReturnValue = UKismetSystemLibrary::GetClassDisplayName(CallFunc_GetObjectClass_ReturnValue);
    FString CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(CallFunc_GetClassDisplayName_ReturnValue);
    FString CallFunc_Concat_StrStr_ReturnValue2 = UKismetStringLibrary::Concat_StrStr(CallFunc_Concat_StrStr_ReturnValue);
L_387:
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

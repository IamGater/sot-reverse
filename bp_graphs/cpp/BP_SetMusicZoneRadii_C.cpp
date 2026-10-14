// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_SetMusicZoneRadii_C::GetName (191 bytes)
void BP_SetMusicZoneRadii_C::GetName()
{
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass();
    FString CallFunc_GetClassDisplayName_ReturnValue = UKismetSystemLibrary::GetClassDisplayName(CallFunc_GetObjectClass_ReturnValue);
    FText CallFunc_Conv_StringToText_ReturnValue = UKismetTextLibrary::Conv_StringToText(CallFunc_GetClassDisplayName_ReturnValue);
    return;
}

// Recovered Kismet: BP_SetMusicZoneRadii_C::OnBeginCustom (1701 bytes)
void BP_SetMusicZoneRadii_C::OnBeginCustom()
{
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(idx_282618);
    if (!CallFunc_IsValid_ReturnValue) goto L_23C;
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue = idx_282618->GetComponentsByClass(MusicZoneComponent);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetComponentsByClass_ReturnValue);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_46C;
    CallFunc_GetComponentsByClass_ReturnValue = idx_282618->GetComponentsByClass(MusicZoneComponent);
    auto CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
    CallFunc_GetComponentsByClass_ReturnValue = idx_282618->GetComponentsByClass(MusicZoneComponent);
    CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
    this->SignalComplete();
L_23C:
    FString CallFunc_GetDisplayName_ReturnValue = UKismetSystemLibrary::GetDisplayName(idx_282618);
    FText CallFunc_Conv_StringToText_ReturnValue = UKismetTextLibrary::Conv_StringToText(CallFunc_GetDisplayName_ReturnValue);
    auto UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    GetName(idx_282615);
    auto idx_282619 = idx_282619;
    idx_282619 = idx_282619;
    FText CallFunc_Format_ReturnValue2 = UKismetTextLibrary::Format(UniqueObjectNameForCooking_Array2);
    this->SignalComplete();
L_46C:
    FString CallFunc_GetDisplayName_ReturnValue2 = UKismetSystemLibrary::GetDisplayName(idx_282618);
    FText CallFunc_Conv_StringToText_ReturnValue2 = UKismetTextLibrary::Conv_StringToText(CallFunc_GetDisplayName_ReturnValue2);
    auto UniqueObjectNameForCooking_FormatTextArgument2 = UniqueObjectNameForCooking_FormatTextArgument2;
    UniqueObjectNameForCooking_FormatTextArgument2 = UniqueObjectNameForCooking_FormatTextArgument2;
    GetName(idx_282614);
    auto UniqueObjectNameForCooking_FormatTextArgument3 = UniqueObjectNameForCooking_FormatTextArgument3;
    UniqueObjectNameForCooking_FormatTextArgument3 = UniqueObjectNameForCooking_FormatTextArgument3;
    FText CallFunc_Format_ReturnValue = UKismetTextLibrary::Format(UniqueObjectNameForCooking_Array);
    this->SignalComplete();
    return;
}

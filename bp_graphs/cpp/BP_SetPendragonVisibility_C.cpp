// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_SetPendragonVisibility_C::OnBeginCustom (772 bytes)
void BP_SetPendragonVisibility_C::OnBeginCustom()
{
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(idx_282266);
    if (!CallFunc_IsValid_ReturnValue) goto L_F4;
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(idx_282266);
    if (!Visible) goto L_2A1;
    auto idx_281886 = idx_281886;
    this->SignalComplete();
L_F4:
    FString CallFunc_GetDisplayName_ReturnValue = UKismetSystemLibrary::GetDisplayName(idx_282266);
    FText CallFunc_Conv_StringToText_ReturnValue = UKismetTextLibrary::Conv_StringToText(CallFunc_GetDisplayName_ReturnValue);
    auto UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    FText CallFunc_Format_ReturnValue = UKismetTextLibrary::Format(UniqueObjectNameForCooking_Array);
L_2A1:
    auto K2Node_MakeStruct_PendragonDisappearEvent = K2Node_MakeStruct_PendragonDisappearEvent;
    return;
}

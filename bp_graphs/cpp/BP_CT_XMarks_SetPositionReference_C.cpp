// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CT_XMarks_SetPositionReference_C::OnBeginCustom (443 bytes)
void BP_CT_XMarks_SetPositionReference_C::OnBeginCustom()
{
    UBlueprintStepBase::GetParticipants(idx_281947);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(idx_281947);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_130;
    UBlueprintStepBase::GetParticipants(idx_281947);
    FVector CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_Array_Get_Item->K2_GetActorLocation();
L_130:
    return;
}

// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_GH_SelectAmbushAI_C::fn_idx_285553 (359 bytes)
void BP_GH_SelectAmbushAI_C::fn_idx_285553()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length();
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_151;
    CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length();
    auto CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    auto CallFunc_Clamp_ReturnValue = Rank;
    auto idx_285552 = CallFunc_Array_Get_Item;
L_151:
    return;
}

// Recovered Kismet: BP_GH_SelectAmbushAI_C::OnBeginCustom (161 bytes)
void BP_GH_SelectAmbushAI_C::OnBeginCustom()
{
    idx:285553(Rank, idx_285547);
    auto idx_285552 = idx_285547;
    idx:285553(Rank, idx_285546);
    auto idx_285551 = idx_285546;
    return;
}

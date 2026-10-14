// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_GH_WayfinderVoyage_GetIslandNamesFromRegion_C::OnBeginCustom (657 bytes)
void BP_GH_WayfinderVoyage_GetIslandNamesFromRegion_C::OnBeginCustom()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(Region);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_192;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(Names, CallFunc_Array_Get_Item);
L_192:
    auto CallFunc_MakeVector_ReturnValue = CallFunc_BreakVector2D_X;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_GH_WayfinderVoyage_BuryChests_C::fn_idx_285594 (194 bytes)
void BP_GH_WayfinderVoyage_BuryChests_C::fn_idx_285594()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length();
    auto CallFunc_Percent_IntInt_ReturnValue = Index;
    return;
}

// Recovered Kismet: BP_GH_WayfinderVoyage_BuryChests_C::fn_idx_285568 (662 bytes)
void BP_GH_WayfinderVoyage_BuryChests_C::fn_idx_285568()
{
    TArray<UClass*> idx_285575 = UItemSpawningBlueprintFunctions::SelectItems(idx_285596, CallFunc_RandomIntegerInRange_ReturnValue);
    auto SelectedItems = idx_285575;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(SelectedItems);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_229;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    auto idx_285588 = idx_285588;
    idx_285588 = idx_285588;
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(idx_285591, idx_285588);
L_229:
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_GH_WayfinderVoyage_BuryChests_C::fn_idx_285567 (146 bytes)
void BP_GH_WayfinderVoyage_BuryChests_C::fn_idx_285567()
{
    auto idx_285588 = idx_285588;
    idx_285588 = idx_285588;
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(idx_285591, idx_285588);
    return;
}

// Recovered Kismet: BP_GH_WayfinderVoyage_BuryChests_C::fn_idx_285578 (258 bytes)
void BP_GH_WayfinderVoyage_BuryChests_C::fn_idx_285578()
{
    auto CallFunc_Less_FloatFloat_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
    auto idx_285590 = idx_285590;
    idx_285590 = idx_285590;
    idx_285590 = idx_285590;
    UTaleQuestParallelForeachStep::ToContext(idx_285590);
    return;
}

// Recovered Kismet: BP_GH_WayfinderVoyage_BuryChests_C::OnStartCustom (645 bytes)
void BP_GH_WayfinderVoyage_BuryChests_C::OnStartCustom()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(idx_285584);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    int idx_285573 = UTaleQuestParallelForeachStep::GetCount();
    auto CallFunc_Subtract_IntInt_ReturnValue = idx_285573;
    auto CallFunc_LessEqual_IntInt_ReturnValue = Temp_int_Variable;
    idx:285567(idx_285571);
    idx:285568(idx_285571, ItemList, idx_285572);
    idx:285594(Temp_int_Variable, idx_285584, idx_285574);
    auto idx_285589 = idx_285589;
    idx_285589 = idx_285589;
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(Items, idx_285589);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Variable;
    auto Temp_int_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_GH_WayfinderVoyage_BuryChests_C::ForIndex (40 bytes)
void BP_GH_WayfinderVoyage_BuryChests_C::ForIndex()
{
    idx:285577();
    return;
}

// Recovered Kismet: BP_GH_WayfinderVoyage_BuryChests_C::fn_idx_285577 (36 bytes)
void BP_GH_WayfinderVoyage_BuryChests_C::fn_idx_285577()
{
    idx:285578(K2Node_Event_Index);
    return;
}

// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CT_TutorialProgress_C::GetCompanyTutorials (468 bytes)
void BP_CT_TutorialProgress_C::GetCompanyTutorials()
{
    FString CallFunc_Conv_NameToString_ReturnValue = UKismetStringLibrary::Conv_NameToString(CompanyName);
    bool K2Node_SwitchString_CmpSuccess = UKismetStringLibrary::NotEqual_StriStri(CallFunc_Conv_NameToString_ReturnValue);
    if (!K2Node_SwitchString_CmpSuccess) goto L_131;
    K2Node_SwitchString_CmpSuccess = UKismetStringLibrary::NotEqual_StriStri(CallFunc_Conv_NameToString_ReturnValue);
    if (!K2Node_SwitchString_CmpSuccess) goto L_168;
    K2Node_SwitchString_CmpSuccess = UKismetStringLibrary::NotEqual_StriStri(CallFunc_Conv_NameToString_ReturnValue);
    if (!K2Node_SwitchString_CmpSuccess) goto L_19F;
L_131:
    GetGoldhoarderTutorials(CallFunc_GetGoldhoarderTutorials_Result);
L_168:
    GetOrderOfSoulsTutorials(CallFunc_GetOrderOfSoulsTutorials_Result);
L_19F:
    GetMerchantAllianceTutorials(CallFunc_GetMerchantAllianceTutorials_Result);
    return;
}

// Recovered Kismet: BP_CT_TutorialProgress_C::GetOrderOfSoulsTutorials (50 bytes)
void BP_CT_TutorialProgress_C::GetOrderOfSoulsTutorials()
{
    return;
}

// Recovered Kismet: BP_CT_TutorialProgress_C::GetMerchantAllianceTutorials (59 bytes)
void BP_CT_TutorialProgress_C::GetMerchantAllianceTutorials()
{
    return;
}

// Recovered Kismet: BP_CT_TutorialProgress_C::GetGoldhoarderTutorials (59 bytes)
void BP_CT_TutorialProgress_C::GetGoldhoarderTutorials()
{
    return;
}

// Recovered Kismet: BP_CT_TutorialProgress_C::AreAllTutorialsOnState (432 bytes)
void BP_CT_TutorialProgress_C::AreAllTutorialsOnState()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(TutorialVoyageProgressTrackers);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_148;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    auto CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_Array_Get_Item;
    if (!CallFunc_EqualEqual_ByteByte_ReturnValue) goto L_1A2;
L_148:
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
L_1A2:
    return;
}

// Recovered Kismet: BP_CT_TutorialProgress_C::IsAnyTutorialOnState (432 bytes)
void BP_CT_TutorialProgress_C::IsAnyTutorialOnState()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(TutorialVoyageProgressTrackers);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_153;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    auto CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_Array_Get_Item;
L_153:
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_CT_TutorialProgress_C::FindTutorialProgressObject (490 bytes)
void BP_CT_TutorialProgress_C::FindTutorialProgressObject()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(TutorialVoyageProgressTrackers);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_18D;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    bool CallFunc_IsSameVoyage_ReturnValue = CallFunc_Array_Get_Item->IsSameVoyage(VoyageName);
L_18D:
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_CT_TutorialProgress_C::CreateTutorialProgressTracker (363 bytes)
void BP_CT_TutorialProgress_C::CreateTutorialProgressTracker()
{
    UObject* CallFunc_SpawnObject_ReturnValue = UGameplayStatics::SpawnObject(BP_CT_VoyageProgress_C);
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(TutorialVoyageProgressTrackers, CallFunc_SpawnObject_ReturnValue);
    return;
}

// Recovered Kismet: BP_CT_TutorialProgress_C::Start (22 bytes)
void BP_CT_TutorialProgress_C::Start()
{
    ExecuteUbergraph_BP_CT_TutorialProgress();
    return;
    ExecuteUbergraph_BP_CT_TutorialProgress();
    return;
}

// Recovered Kismet: BP_CT_TutorialProgress_C::ExecuteUbergraph_BP_CT_TutorialProgress (441 bytes)
void BP_CT_TutorialProgress_C::ExecuteUbergraph_BP_CT_TutorialProgress()
{
    CreateTutorialProgressTracker(Proposal_CompanyTales_GH_Rank0_C, BP_CT_Rank_0_XMarks_C, BP_GH_Rank01_RankDesc_C, false, CallFunc_CreateTutorialProgressTracker_Result);
    auto XMarksTutorialProgress = CallFunc_CreateTutorialProgressTracker_Result;
    FindTutorialProgressObject(K2Node_CustomEvent_VoyageName, CallFunc_FindTutorialProgressObject_Voyage);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CallFunc_FindTutorialProgressObject_Voyage);
    CreateTutorialProgressTracker(true, CallFunc_CreateTutorialProgressTracker_Result5);
    auto RiddleTutorialProgress = CallFunc_CreateTutorialProgressTracker_Result5;
    CreateTutorialProgressTracker(true, CallFunc_CreateTutorialProgressTracker_Result4);
    auto FaunaTutorialProgress = CallFunc_CreateTutorialProgressTracker_Result4;
    CreateTutorialProgressTracker(true, CallFunc_CreateTutorialProgressTracker_Result3);
    auto CargoTutorialProgress = CallFunc_CreateTutorialProgressTracker_Result3;
    CreateTutorialProgressTracker(true, CallFunc_CreateTutorialProgressTracker_Result2);
    auto BootyTutorialProgress = CallFunc_CreateTutorialProgressTracker_Result2;
    return;
}

// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::ShowAppropriateMerchantPrompt (204 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::ShowAppropriateMerchantPrompt()
{
    ShouldShowGoldHoarderCompanyPrompts(CallFunc_ShouldShowGoldHoarderCompanyPrompts_Result);
    UBasePromptCoordinator::SetPromptAs(Prompt_GoToGoldhoarders);
    ShouldShowOrderOfSoulsCompanyPrompts(CallFunc_ShouldShowOrderOfSoulsCompanyPrompts_Result);
    UBasePromptCoordinator::SetPromptAs(Prompt_GoToOrderOfSouls);
    ShouldShowMerchantAllianceCompanyPrompts(CallFunc_ShouldShowMerchantAllianceCompanyPrompts_Result);
    UBasePromptCoordinator::SetPromptAs(Prompt_GoToMerchantAlliance);
    UBasePromptCoordinator::DismissAllPrompts();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::SetIsHidden (22 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::SetIsHidden()
{
    auto State_IsHidden = NewHidden;
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::PlayerLeftGoldhoarderRadiusFunc (74 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::PlayerLeftGoldhoarderRadiusFunc()
{
    IsCurrentlyControlledCharacter(Actor, CallFunc_IsCurrentlyControlledCharacter_Result);
    if (!CallFunc_IsCurrentlyControlledCharacter_Result) goto L_47;
    bool State_InsideGoldhoardersRadius = false;
    Evaluate();
L_47:
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::PlayerEnteredGoldhoarderRadiusFunc (74 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::PlayerEnteredGoldhoarderRadiusFunc()
{
    IsCurrentlyControlledCharacter(Actor, CallFunc_IsCurrentlyControlledCharacter_Result);
    if (!CallFunc_IsCurrentlyControlledCharacter_Result) goto L_47;
    bool State_InsideGoldhoardersRadius = true;
    Evaluate();
L_47:
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::PlayerLeftOutpostRadiusFunc (74 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::PlayerLeftOutpostRadiusFunc()
{
    IsCurrentlyControlledCharacter(Actor, CallFunc_IsCurrentlyControlledCharacter_Result);
    if (!CallFunc_IsCurrentlyControlledCharacter_Result) goto L_47;
    bool State_InsideOutpostRadius = false;
    Evaluate();
L_47:
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::PlayerEnteredOutpostRadiusFunc (74 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::PlayerEnteredOutpostRadiusFunc()
{
    IsCurrentlyControlledCharacter(Actor, CallFunc_IsCurrentlyControlledCharacter_Result);
    if (!CallFunc_IsCurrentlyControlledCharacter_Result) goto L_47;
    bool State_InsideOutpostRadius = true;
    Evaluate();
L_47:
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::OnCompanyRankPurchasedFunc (735 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::OnCompanyRankPurchasedFunc()
{
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_BreakEventCompanyRankProgressUpdateNotification_OutRank;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetCompanyTutorials_CompanyTutorials);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_283;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    auto CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
L_283:
    Evaluate();
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::OnPlayerWithdrewVoyageFunc (73 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::OnPlayerWithdrewVoyageFunc()
{
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::OnVoyageDiscardFromInventoryFunc (132 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::OnVoyageDiscardFromInventoryFunc()
{
    FText CallFunc_Conv_StringToText_ReturnValue = UKismetTextLibrary::Conv_StringToText(this);
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::OnPlayerProposedVoyageFunc (132 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::OnPlayerProposedVoyageFunc()
{
    FText CallFunc_Conv_StringToText_ReturnValue = UKismetTextLibrary::Conv_StringToText(this);
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::OnOfferPurchasedFunc (141 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::OnOfferPurchasedFunc()
{
    FText CallFunc_Conv_StringToText_ReturnValue = UKismetTextLibrary::Conv_StringToText(this);
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::OnPlayerCancelledVoyageFunc (73 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::OnPlayerCancelledVoyageFunc()
{
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::OnPlayerExitedShipFunc (28 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::OnPlayerExitedShipFunc()
{
    bool State_OnShip = false;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::OnSomethingEnteredShipFunc (402 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::OnSomethingEnteredShipFunc()
{
    Ship* K2Node_DynamicCast_AsShip = Cast<Ship*>(nullptr);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsShip);
    if (!K2Node_DynamicCast_bSuccess) goto L_18F;
    TScriptInterface<UCrewMembershipInterface> CallFunc_GetCrewId_CrewMember_CastInput = TScriptInterface<UCrewMembershipInterface>(PlayerController);
    auto CallFunc_GetCrewId_ReturnValue = CrewMembershipFunctions->this->GetCrewId(CallFunc_GetCrewId_CrewMember_CastInput);
    TScriptInterface<UCrewMembershipInterface> CallFunc_GetCrewId_CrewMember2_CastInput = TScriptInterface<UCrewMembershipInterface>(K2Node_DynamicCast_AsShip);
    auto CallFunc_GetCrewId_ReturnValue2 = CrewMembershipFunctions->this->GetCrewId(CallFunc_GetCrewId_CrewMember2_CastInput);
    bool CallFunc_EqualEqual_GuidGuid_ReturnValue = UKismetGuidLibrary::EqualEqual_GuidGuid(CallFunc_GetCrewId_ReturnValue2, CallFunc_GetCrewId_ReturnValue);
    if (!CallFunc_EqualEqual_GuidGuid_ReturnValue) goto L_18F;
    bool State_OnShip = true;
    Evaluate();
L_18F:
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::OnVoyageCompletedFunc (73 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::OnVoyageCompletedFunc()
{
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::OnVoyageBegunFunc (73 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::OnVoyageBegunFunc()
{
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::IsNearAnyShopkeeper (98 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::IsNearAnyShopkeeper()
{
    auto CallFunc_BooleanOR_ReturnValue = State_InsideGoldhoardersRadius;
    auto CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue;
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::AreTutorialsForceDisabled (22 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::AreTutorialsForceDisabled()
{
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::IsCurrentlyControlledCharacter (102 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::IsCurrentlyControlledCharacter()
{
    APawn* CallFunc_K2_GetPawn_ReturnValue = PlayerController->K2_GetPawn();
    auto CallFunc_EqualEqual_ObjectObject_ReturnValue = Actor;
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::ShouldShowMerchantAllianceCompanyPrompts (232 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::ShouldShowMerchantAllianceCompanyPrompts()
{
    auto CallFunc_BooleanOR_ReturnValue = CallFunc_IsPurchaseable_Result2;
    auto CallFunc_BooleanAND_ReturnValue = State_InsideMerchantAllianceRadius;
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::ShouldShowOrderOfSoulsCompanyPrompts (127 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::ShouldShowOrderOfSoulsCompanyPrompts()
{
    auto CallFunc_BooleanAND_ReturnValue = State_InsideOrderOfSouls;
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::ClearAllOutpostOverlapActors (409 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::ClearAllOutpostOverlapActors()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(OutpostOverlapActors);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_11E;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
L_11E:
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::ShouldShowGoldHoarderCompanyPrompts (232 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::ShouldShowGoldHoarderCompanyPrompts()
{
    auto CallFunc_BooleanOR_ReturnValue = CallFunc_IsPurchaseable_Result;
    auto CallFunc_BooleanAND_ReturnValue = State_InsideOutpostRadius;
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::ClearAllGoldHoarderOverlapActors (432 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::ClearAllGoldHoarderOverlapActors()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(GoldHoarderOverlapActors);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_11E;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
L_11E:
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::SetGoldHoardersLocations (40 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::SetGoldHoardersLocations()
{
    ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::Evaluate (22 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::Evaluate()
{
    ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::Complete (22 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::Complete()
{
    ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::SetOutposts (40 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::SetOutposts()
{
    ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::UninitializeImplementable (22 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::UninitializeImplementable()
{
    ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::PostInitialize (22 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::PostInitialize()
{
    ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::SetOrderOfSoulsLocations (40 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::SetOrderOfSoulsLocations()
{
    ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::SetMerchantAllianceLocations (40 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::SetMerchantAllianceLocations()
{
    ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::RegisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::RegisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::UnregisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::UnregisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::UnregisterOtherEvents_Implementable (22 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::UnregisterOtherEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::RegisterOtherEvents_Implementable (22 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::RegisterOtherEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::ForceDisableTutorials (22 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::ForceDisableTutorials()
{
    ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence();
    return;
    ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::OnOfferPurchased (40 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::OnOfferPurchased()
{
    ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::OnPlayerProposedVoyage (40 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::OnPlayerProposedVoyage()
{
    ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::OnVoyageDiscardFromInventory (40 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::OnVoyageDiscardFromInventory()
{
    ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::OnVoyageBegun (40 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::OnVoyageBegun()
{
    ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::OnVoyageCompleted (40 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::OnVoyageCompleted()
{
    ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::OnSomethingEnteredShip (40 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::OnSomethingEnteredShip()
{
    ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::OnPlayerExitedShip (40 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::OnPlayerExitedShip()
{
    ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::PlayerLeftOutpostRadius (40 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::PlayerLeftOutpostRadius()
{
    ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::PlayerEnteredOutpostRadius (40 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::PlayerEnteredOutpostRadius()
{
    ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::PlayerLeftGoldhoarderRadius (40 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::PlayerLeftGoldhoarderRadius()
{
    ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::PlayerEnteredGoldhoarderRadius (40 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::PlayerEnteredGoldhoarderRadius()
{
    ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::OnPlayerWithdrewVoyage (40 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::OnPlayerWithdrewVoyage()
{
    ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::OnPlayerCancelledVoyage (40 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::OnPlayerCancelledVoyage()
{
    ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::OnCompanyRankPurchased (40 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::OnCompanyRankPurchased()
{
    ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::OnEndPlay_HUD (40 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::OnEndPlay_HUD()
{
    ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence();
    return;
}

// Recovered Kismet: BP_Prompt_CTPurchaseVoyageSequence_C::ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence (5313 bytes)
void BP_Prompt_CTPurchaseVoyageSequence_C::ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence()
{
    Unregister HUD Events();
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher2);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher3);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher4);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher5);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher3);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher2);
    Unregister HUD Events();
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher4);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher5);
    GetHUDObjectMessageDispatcher(CallFunc_GetHUDObjectMessageDispatcher_HUD_Dispatcher4);
    GetHUDObjectMessageDispatcher(CallFunc_GetHUDObjectMessageDispatcher_HUD_Dispatcher3);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher6);
    AHUD* CallFunc_GetHUD_ReturnValue2 = PlayerController->GetHUD();
    AreTutorialsForceDisabled(CallFunc_AreTutorialsForceDisabled_Result);
    if (!CallFunc_AreTutorialsForceDisabled_Result) goto L_709;
L_709:
    auto CallFunc_BooleanOR_ReturnValue = CallFunc_AreAllTutorialsOnState_Result;
    auto CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue;
    if (!CallFunc_BooleanOR_ReturnValue2) goto L_7CC;
    UBasePromptCoordinator::DismissAllPrompts();
L_7CC:
    if (!CallFunc_IsAnyTutorialOnState_Result3) goto L_81D;
    UBasePromptCoordinator::SetPromptAs(Prompt_VoteOnVoyage);
L_81D:
    auto CallFunc_BooleanAND_ReturnValue = State_OnShip;
    if (!CallFunc_BooleanAND_ReturnValue) goto L_894;
    UBasePromptCoordinator::SetPromptAs(Prompt_ProposeVoyage);
L_894:
    if (!CallFunc_IsAnyTutorialOnState_Result4) goto L_8E5;
    UBasePromptCoordinator::SetPromptAs(Prompt_BoardShip);
L_8E5:
    auto CallFunc_BooleanAND_ReturnValue2 = CallFunc_IsAnyTutorialOnState_Result5;
    if (!CallFunc_BooleanAND_ReturnValue2) goto L_957;
    ShowAppropriateMerchantPrompt();
L_957:
    UBasePromptCoordinator::DismissAllPrompts();
    bool State_IsTutorialForceDisabled = true;
    UBasePromptCoordinator::DismissAllPrompts();
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(PlayerController);
    AHUD* CallFunc_GetHUD_ReturnValue = PlayerController->GetHUD();
    auto CallFunc_IsValid_ReturnValue2 = KismetSystemLibrary->this->IsValid(CallFunc_GetHUD_ReturnValue);
    bool CallFunc_IsHandleRegistered_ReturnValue2 = UObjectMessagingFunctions::IsHandleRegistered(Handle_VoyageProposalDiscarded);
    GetHUDObjectMessageDispatcher(CallFunc_GetHUDObjectMessageDispatcher_HUD_Dispatcher2);
    bool CallFunc_IsHandleRegistered_ReturnValue = UObjectMessagingFunctions::IsHandleRegistered(Handle_VoyageProposed);
    GetHUDObjectMessageDispatcher(CallFunc_GetHUDObjectMessageDispatcher_HUD_Dispatcher);
    OnOfferPurchasedFunc(K2Node_CustomEvent_Event10);
    OnPlayerProposedVoyageFunc(K2Node_CustomEvent_Event9);
    OnVoyageDiscardFromInventoryFunc(K2Node_CustomEvent_Event8);
    OnVoyageBegunFunc(K2Node_CustomEvent_Event7);
    OnVoyageCompletedFunc(K2Node_CustomEvent_Event6);
    OnPlayerExitedShipFunc();
    OnSomethingEnteredShipFunc(K2Node_CustomEvent_Event5);
    UObject* CallFunc_SpawnObject_ReturnValue = UGameplayStatics::SpawnObject(BP_CT_TutorialProgress_C);
    auto CompanyTutorialProgress = CallFunc_SpawnObject_ReturnValue;
    ClearAllOutpostOverlapActors();
    PlayerLeftOutpostRadiusFunc(K2Node_CustomEvent_ActorInZone4);
    PlayerEnteredOutpostRadiusFunc(K2Node_CustomEvent_ActorInZone3);
    ClearAllGoldHoarderOverlapActors();
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(K2Node_CustomEvent_OutpostNames);
    auto CallFunc_Less_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Array_Index_Variable2 = Temp_int_Loop_Counter_Variable2;
    if (!CallFunc_GetIslandTriggerCircle_OutHasFoundIsland) goto L_F0C;
    auto CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_GetIslandTriggerCircle_OutCircleRadius;
    AOverlapTriggerActor* CallFunc_CreateOverlapTriggerActor_ReturnValue2 = AOverlapTriggerActor::CreateOverlapTriggerActor(CallFunc_GetIslandTriggerCircle_OutCircleCentre, CallFunc_Subtract_FloatFloat_ReturnValue);
    int CallFunc_Array_Add_ReturnValue2 = UKismetArrayLibrary::Array_Add(OutpostOverlapActors, CallFunc_CreateOverlapTriggerActor_ReturnValue2);
L_F0C:
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass();
    FString CallFunc_GetClassDisplayName_ReturnValue = UKismetSystemLibrary::GetClassDisplayName(CallFunc_GetObjectClass_ReturnValue);
    FText CallFunc_Conv_StringToText_ReturnValue = UKismetTextLibrary::Conv_StringToText(CallFunc_GetClassDisplayName_ReturnValue);
    auto UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    FText CallFunc_Conv_NameToText_ReturnValue = UKismetTextLibrary::Conv_NameToText(CallFunc_Array_Get_Item2);
    auto UniqueObjectNameForCooking_FormatTextArgument2 = UniqueObjectNameForCooking_FormatTextArgument2;
    UniqueObjectNameForCooking_FormatTextArgument2 = UniqueObjectNameForCooking_FormatTextArgument2;
    FText CallFunc_Format_ReturnValue = UKismetTextLibrary::Format(UniqueObjectNameForCooking_Array);
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Loop_Counter_Variable2 = CallFunc_Add_IntInt_ReturnValue2;
    UBasePromptCoordinator::DismissAllPrompts();
    ClearAllGoldHoarderOverlapActors();
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(K2Node_CustomEvent_GoldHoarderLocations);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    AOverlapTriggerActor* CallFunc_CreateOverlapTriggerActor_ReturnValue = AOverlapTriggerActor::CreateOverlapTriggerActor(CallFunc_Array_Get_Item, TriggerVolumeRadius);
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(GoldHoarderOverlapActors, CallFunc_CreateOverlapTriggerActor_ReturnValue);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    PlayerLeftGoldhoarderRadiusFunc(K2Node_CustomEvent_ActorInZone2);
    PlayerEnteredGoldhoarderRadiusFunc(K2Node_CustomEvent_ActorInZone);
    OnPlayerWithdrewVoyageFunc(K2Node_CustomEvent_Event3);
    OnPlayerCancelledVoyageFunc(K2Node_CustomEvent_Event2);
    OnCompanyRankPurchasedFunc(K2Node_CustomEvent_Event);
    return;
}

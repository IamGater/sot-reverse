// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Component_Tutorial2019_C::SwapMysteriousStrangerToTutorialModeOnClient (173 bytes)
void BP_Component_Tutorial2019_C::SwapMysteriousStrangerToTutorialModeOnClient()
{
    auto CallFunc_GetPlayerController_ReturnValue = GameplayStatics->this->GetPlayerController();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetPlayerController_ReturnValue);
    return;
}

// Recovered Kismet: BP_Component_Tutorial2019_C::TeleportPlayerToOnboardingSpawnPoint (266 bytes)
void BP_Component_Tutorial2019_C::TeleportPlayerToOnboardingSpawnPoint()
{
    GetPlayerController(CallFunc_GetPlayerController_Player_Controller);
    APawn* CallFunc_K2_GetPawn_ReturnValue = CallFunc_GetPlayerController_Player_Controller->K2_GetPawn();
    AthenaCharacter* K2Node_DynamicCast_AsAthena_Character = Cast<AthenaCharacter*>(CallFunc_K2_GetPawn_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Character);
    if (!K2Node_DynamicCast_bSuccess) goto L_107;
    FTeleportLocation CallFunc_GetNearestOnboardingSpawnPoint_ReturnValue = UTutorial2019FunctionLibrary::GetNearestOnboardingSpawnPoint(K2Node_DynamicCast_AsAthena_Character);
    bool CallFunc_TeleportPlayerToLocationDuringSpawning_ReturnValue = UAthenaCharacterFunctions::TeleportPlayerToLocationDuringSpawning(K2Node_DynamicCast_AsAthena_Character, CallFunc_GetNearestOnboardingSpawnPoint_ReturnValue);
L_107:
    return;
}

// Recovered Kismet: BP_Component_Tutorial2019_C::GetPlayerController (607 bytes)
void BP_Component_Tutorial2019_C::GetPlayerController()
{
    auto CallFunc_GetOwner_ReturnValue = this->GetOwner();
    AthenaPlayerController* K2Node_DynamicCast_AsAthena_Player_Controller = Cast<AthenaPlayerController*>(CallFunc_GetOwner_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Controller);
    if (!K2Node_DynamicCast_bSuccess) goto L_7B;
L_7B:
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass();
    FString CallFunc_GetClassDisplayName_ReturnValue = UKismetSystemLibrary::GetClassDisplayName(CallFunc_GetObjectClass_ReturnValue);
    FText CallFunc_Conv_StringToText_ReturnValue = UKismetTextLibrary::Conv_StringToText(CallFunc_GetClassDisplayName_ReturnValue);
    auto UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    FText CallFunc_Format_ReturnValue = UKismetTextLibrary::Format(UniqueObjectNameForCooking_Array);
    return;
}

// Recovered Kismet: BP_Component_Tutorial2019_C::ConvertActorIdsToActors (520 bytes)
void BP_Component_Tutorial2019_C::ConvertActorIdsToActors()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length();
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_1B6;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_Array_Get_Item);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(UniqueObjectNameForCooking_AsActor);
L_1B6:
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_Component_Tutorial2019_C::Debug_SearchForMissingGoldHoarders (1227 bytes)
void BP_Component_Tutorial2019_C::Debug_SearchForMissingGoldHoarders()
{
    bool CallFunc_IsEditor_ReturnValue = UAutomationBlueprintFunctionLibrary::IsEditor();
    ConvertActorIdsToActors(GoldHoarders, GoldHoarderHardRefs);
    ConvertActorIdsToActors(NPCBlacklist, NPCBlacklistHardRefs);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetAllActorsOfClass_OutActors);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    bool CallFunc_Array_Contains_ReturnValue2 = UKismetArrayLibrary::Array_Contains(NPCBlacklistHardRefs, CallFunc_Array_Get_Item);
    auto CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Array_Contains_ReturnValue2;
    bool CallFunc_Array_Contains_ReturnValue = UKismetArrayLibrary::Array_Contains(GoldHoarderHardRefs, CallFunc_Array_Get_Item);
    auto CallFunc_Not_PreBool_ReturnValue = CallFunc_Array_Contains_ReturnValue;
    FString CallFunc_GetDisplayName_ReturnValue = UKismetSystemLibrary::GetDisplayName(CallFunc_Array_Get_Item);
    FString CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(CallFunc_GetDisplayName_ReturnValue);
    FString CallFunc_Concat_StrStr_ReturnValue2 = UKismetStringLibrary::Concat_StrStr(CallFunc_Concat_StrStr_ReturnValue);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_Component_Tutorial2019_C::PopulateGoldHoarderLocationsFromGoldHoarders (893 bytes)
void BP_Component_Tutorial2019_C::PopulateGoldHoarderLocationsFromGoldHoarders()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(GoldHoarders);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_32B;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_Array_Get_Item);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(UniqueObjectNameForCooking_AsActor);
    CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_Array_Get_Item);
    UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    auto CallFunc_GetTransform_ReturnValue = UniqueObjectNameForCooking_AsActor->this->GetTransform();
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(GoldHoarderLocations, CallFunc_BreakTransform_Location);
L_32B:
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_Component_Tutorial2019_C::EnsurePurchaseVoyageSequenceCreatedAndPopulated (71 bytes)
void BP_Component_Tutorial2019_C::EnsurePurchaseVoyageSequenceCreatedAndPopulated()
{
    EnsurePurchaseVoyageSequenceObjectCreated(CallFunc_EnsurePurchaseVoyageSequenceObjectCreated_PromptObject);
    return;
}

// Recovered Kismet: BP_Component_Tutorial2019_C::EnsurePurchaseVoyageSequenceObjectCreated (669 bytes)
void BP_Component_Tutorial2019_C::EnsurePurchaseVoyageSequenceObjectCreated()
{
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(GoToVendorPromptObject);
    if (!CallFunc_IsValid_ReturnValue) goto L_59;
L_59:
    UObject* CallFunc_CreateObject_ReturnValue = UObjectUtilities::CreateObject(BP_Prompt_CTPurchaseVoyageSequence_C);
    BP_Prompt_CTPurchaseVoyageSequence_C* K2Node_DynamicCast_AsBP_Prompt_CTPurchase_Voyage_Sequence = Cast<BP_Prompt_CTPurchaseVoyageSequence_C*>(CallFunc_CreateObject_ReturnValue);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsBP_Prompt_CTPurchase_Voyage_Sequence);
    if (!K2Node_DynamicCast_bSuccess2) goto L_185;
    auto GoToVendorPromptObject = K2Node_DynamicCast_AsBP_Prompt_CTPurchase_Voyage_Sequence;
    auto CallFunc_GetPlayerController_ReturnValue = GameplayStatics->this->GetPlayerController();
    AthenaPlayerController* K2Node_DynamicCast_AsAthena_Player_Controller = Cast<AthenaPlayerController*>(CallFunc_GetPlayerController_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Controller);
    if (!K2Node_DynamicCast_bSuccess) goto L_20F;
L_185:
L_20F:
    return;
}

// Recovered Kismet: BP_Component_Tutorial2019_C::OnRep_GoldHoarderLocations (28 bytes)
void BP_Component_Tutorial2019_C::OnRep_GoldHoarderLocations()
{
    bool GoldHoarderOnRepPrerequiste = true;
    TrySetUpCoordinator();
    return;
}

// Recovered Kismet: BP_Component_Tutorial2019_C::TrySetUpCoordinator (22 bytes)
void BP_Component_Tutorial2019_C::TrySetUpCoordinator()
{
    ExecuteUbergraph_BP_Component_Tutorial2019();
    return;
}

// Recovered Kismet: BP_Component_Tutorial2019_C::ReceiveTutorial2019BeginPlayOnClient (22 bytes)
void BP_Component_Tutorial2019_C::ReceiveTutorial2019BeginPlayOnClient()
{
    ExecuteUbergraph_BP_Component_Tutorial2019();
    return;
}

// Recovered Kismet: BP_Component_Tutorial2019_C::ReceiveTutorial2019BeginPlayOnServer (22 bytes)
void BP_Component_Tutorial2019_C::ReceiveTutorial2019BeginPlayOnServer()
{
    ExecuteUbergraph_BP_Component_Tutorial2019();
    return;
}

// Recovered Kismet: BP_Component_Tutorial2019_C::Set Prompts Visibility (22 bytes)
void BP_Component_Tutorial2019_C::Set Prompts Visibility()
{
    ExecuteUbergraph_BP_Component_Tutorial2019();
    return;
    ExecuteUbergraph_BP_Component_Tutorial2019();
    return;
}

// Recovered Kismet: BP_Component_Tutorial2019_C::ControllerOnEndPlay (40 bytes)
void BP_Component_Tutorial2019_C::ControllerOnEndPlay()
{
    ExecuteUbergraph_BP_Component_Tutorial2019();
    return;
}

// Recovered Kismet: BP_Component_Tutorial2019_C::ExecuteUbergraph_BP_Component_Tutorial2019 (1166 bytes)
void BP_Component_Tutorial2019_C::ExecuteUbergraph_BP_Component_Tutorial2019()
{
    EnsurePurchaseVoyageSequenceObjectCreated(CallFunc_EnsurePurchaseVoyageSequenceObjectCreated_PromptObject2);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(GoToVendorPromptObject);
    auto CallFunc_BooleanAND_ReturnValue = K2Node_CustomEvent_ReEvaluate;
    EnsurePurchaseVoyageSequenceObjectCreated(CallFunc_EnsurePurchaseVoyageSequenceObjectCreated_PromptObject);
    TrySetUpCoordinator();
    auto CallFunc_GetOwner_ReturnValue = this->GetOwner();
    SwapMysteriousStrangerToTutorialModeOnClient();
    PopulateGoldHoarderLocationsFromGoldHoarders();
    Debug_SearchForMissingGoldHoarders();
    TeleportPlayerToOnboardingSpawnPoint();
    GetPlayerController(CallFunc_GetPlayerController_Player_Controller);
    auto CallFunc_LessEqual_FloatFloat_ReturnValue = K2Node_CustomEvent_Delay_In_Seconds;
    if (!CallFunc_LessEqual_FloatFloat_ReturnValue) goto L_2C8;
L_2C8:
    auto CallFunc_IsValid_ReturnValue2 = KismetSystemLibrary->this->IsValid(GoToVendorPromptObject);
    bool CallFunc_IsHandleRegistered_ReturnValue = UObjectMessagingFunctions::IsHandleRegistered(Handle_PlayerFinishedSpawning);
    GetPlayerController(CallFunc_GetPlayerController_Player_Controller2);
    TScriptInterface<UObjectMessagingDispatcherInterface> CallFunc_GetObjectMessagingDispatcher_ObjectMessagingDispatcher_CastInput = TScriptInterface<UObjectMessagingDispatcherInterface>(CallFunc_GetPlayerController_Player_Controller2);
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcher_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcher(CallFunc_GetObjectMessagingDispatcher_ObjectMessagingDispatcher_CastInput);
    return;
}

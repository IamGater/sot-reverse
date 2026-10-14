// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_MaidenVoyage_IslandInnerBoundary_C::UserConstructionScript (3 bytes)
void BP_MaidenVoyage_IslandInnerBoundary_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_MaidenVoyage_IslandInnerBoundary_C::ReceiveBeginPlay (22 bytes)
void BP_MaidenVoyage_IslandInnerBoundary_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_MaidenVoyage_IslandInnerBoundary();
    return;
}

// Recovered Kismet: BP_MaidenVoyage_IslandInnerBoundary_C::OnOverlapEnd (76 bytes)
void BP_MaidenVoyage_IslandInnerBoundary_C::OnOverlapEnd()
{
    ExecuteUbergraph_BP_MaidenVoyage_IslandInnerBoundary();
    return;
}

// Recovered Kismet: BP_MaidenVoyage_IslandInnerBoundary_C::OnOverlapBegin (112 bytes)
void BP_MaidenVoyage_IslandInnerBoundary_C::OnOverlapBegin()
{
    ExecuteUbergraph_BP_MaidenVoyage_IslandInnerBoundary();
    return;
}

// Recovered Kismet: BP_MaidenVoyage_IslandInnerBoundary_C::ReceiveEndPlay (40 bytes)
void BP_MaidenVoyage_IslandInnerBoundary_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_MaidenVoyage_IslandInnerBoundary();
    return;
}

// Recovered Kismet: BP_MaidenVoyage_IslandInnerBoundary_C::ExecuteUbergraph_BP_MaidenVoyage_IslandInnerBoundary (1278 bytes)
void BP_MaidenVoyage_IslandInnerBoundary_C::ExecuteUbergraph_BP_MaidenVoyage_IslandInnerBoundary()
{
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_31;
L_31:
    this->ReceiveBeginPlay();
    UObject* CallFunc_CreateObject_ReturnValue = UObjectUtilities::CreateObject(idx_279225);
    idx_279225* idx_279236 = Cast<idx_279225*>(CallFunc_CreateObject_ReturnValue);
    bool K2Node_DynamicCast_bSuccess3 = static_cast<bool>(idx_279236);
    if (!K2Node_DynamicCast_bSuccess3) goto L_4FB;
    auto PromptCoordinator = idx_279236;
    bool CallFunc_HasAuthority_ReturnValue2 = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue2) goto L_13C;
L_13C:
    auto CallFunc_GetPlayerController_ReturnValue = GameplayStatics->this->GetPlayerController();
    AthenaPlayerController* K2Node_DynamicCast_AsAthena_Player_Controller = Cast<AthenaPlayerController*>(CallFunc_GetPlayerController_ReturnValue);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Controller);
    if (!K2Node_DynamicCast_bSuccess2) goto L_4FB;
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(idx_279230);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess) goto L_4FB;
    auto CallFunc_GetCurrentShip_ReturnValue = K2Node_DynamicCast_AsAthena_Player_Character->GetCurrentShip();
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CallFunc_GetCurrentShip_ReturnValue);
    ACharacter* CallFunc_GetPlayerCharacter_ReturnValue = UGameplayStatics::GetPlayerCharacter();
    auto CallFunc_Not_PreBool_ReturnValue = CallFunc_IsValid_ReturnValue;
    auto CallFunc_EqualEqual_ObjectObject_ReturnValue = K2Node_DynamicCast_AsAthena_Player_Character;
    bool CallFunc_IsSwimming_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue->IsSwimming();
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
    auto CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue;
    if (!CallFunc_BooleanAND_ReturnValue2) goto L_4FB;
    ACharacter* CallFunc_GetPlayerCharacter_ReturnValue2 = UGameplayStatics::GetPlayerCharacter();
    auto CallFunc_EqualEqual_ObjectObject_ReturnValue2 = idx_279229;
    if (!CallFunc_EqualEqual_ObjectObject_ReturnValue2) goto L_4FB;
    this->ReceiveEndPlay(K2Node_Event_EndPlayReason);
L_4FB:
    return;
}

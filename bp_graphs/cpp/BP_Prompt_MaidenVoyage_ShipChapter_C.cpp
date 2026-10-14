// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnWheelCentredFunc (156 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnWheelCentredFunc()
{
    auto CallFunc_BooleanAND_ReturnValue = MastRepairSequenceComplete;
    auto CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue;
    auto CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue2;
    if (!CallFunc_BooleanAND_ReturnValue3) goto L_99;
    bool State_WheelCentered = true;
    Evaluate();
L_99:
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnPlayerUseWheelFunc (244 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnPlayerUseWheelFunc()
{
    auto CallFunc_BooleanAND_ReturnValue = MastRepairSequenceComplete;
    auto CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue;
    auto CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue2;
    if (!CallFunc_BooleanAND_ReturnValue3) goto L_F1;
    BP_Wheel_C* K2Node_DynamicCast_AsBP_Wheel = Cast<BP_Wheel_C*>(nullptr);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Wheel);
    if (!K2Node_DynamicCast_bSuccess) goto L_F1;
    bool State_UsedWheel = true;
    Evaluate();
L_F1:
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnPlayerRaisedSailsFunc (28 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnPlayerRaisedSailsFunc()
{
    bool State_SailsLowered = false;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnPlayerLowerSailsFunc (53 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnPlayerLowerSailsFunc()
{
    bool State_SailsLowered = true;
    if (!State_AnchorRaised) goto L_24;
    bool SetSailSequenceComplete = true;
L_24:
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnCapstanRaisedFunc (67 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnCapstanRaisedFunc()
{
    if (!PlayerOnShip) goto L_40;
    bool State_AnchorRaised = true;
    if (!State_SailsLowered) goto L_32;
    bool SetSailSequenceComplete = true;
L_32:
    Evaluate();
L_40:
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnDockWithCapstanFunc (42 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnDockWithCapstanFunc()
{
    if (!PlayerOnShip) goto L_27;
    bool State_AnchorUsed = true;
    Evaluate();
L_27:
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnPlayerScoopWaterFunc (84 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnPlayerScoopWaterFunc()
{
    auto CallFunc_NearlyEqual_FloatFloat_ReturnValue = this;
    auto State_WaterBailedFromShip = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnBucketWieldFunc (199 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnBucketWieldFunc()
{
    UObject* CallFunc_Conv_InterfaceToObject_ReturnValue = UKismetSystemLibrary::Conv_InterfaceToObject(this);
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass(CallFunc_Conv_InterfaceToObject_ReturnValue);
    auto CallFunc_ClassIsChildOf_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
    auto State_BucketEquipped = CallFunc_ClassIsChildOf_ReturnValue;
    if (!State_BucketEquipped) goto L_C4;
    Evaluate();
L_C4:
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnHideInventoryFunc (28 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnHideInventoryFunc()
{
    bool State_RadialOpen = false;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnShowInventoryFunc (83 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnShowInventoryFunc()
{
    auto CallFunc_EqualEqual_IntInt_ReturnValue = RequiredRadialID;
    auto State_RadialOpen = CallFunc_EqualEqual_IntInt_ReturnValue;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnMastFallenFunc (28 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnMastFallenFunc()
{
    bool State_MastRaised = false;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnMastRaisedFunc (28 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnMastRaisedFunc()
{
    bool State_MastRaised = true;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnRelinquishSailRopeFunc (116 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnRelinquishSailRopeFunc()
{
    BP_SailHoist_C* K2Node_DynamicCast_AsBP_Sail_Hoist = Cast<BP_SailHoist_C*>(nullptr);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Sail_Hoist);
    if (!K2Node_DynamicCast_bSuccess) goto L_71;
    bool State_UsedSailRope1 = false;
    Evaluate();
L_71:
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnUseSailRope1Func (130 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnUseSailRope1Func()
{
    if (!State_OnShip) goto L_7F;
    BP_SailHoist_C* K2Node_DynamicCast_AsBP_Sail_Hoist = Cast<BP_SailHoist_C*>(nullptr);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Sail_Hoist);
    if (!K2Node_DynamicCast_bSuccess) goto L_7F;
    bool State_UsedSailRope1 = true;
    Evaluate();
L_7F:
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnReleaseCapstanFunc (39 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnReleaseCapstanFunc()
{
    bool State_AnchorUsed = false;
    bool State_AnchorRaised = false;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnWoodStowedFunc (72 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnWoodStowedFunc()
{
    if (!this) goto L_1C;
L_1C:
    bool State_WoodEquipped = false;
    bool State_BucketEquipped = false;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnWoodWieldFunc (359 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnWoodWieldFunc()
{
    UObject* CallFunc_Conv_InterfaceToObject_ReturnValue = UKismetSystemLibrary::Conv_InterfaceToObject(this);
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass(CallFunc_Conv_InterfaceToObject_ReturnValue);
    auto CallFunc_ClassIsChildOf_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
    auto State_WoodEquipped = CallFunc_ClassIsChildOf_ReturnValue;
    CallFunc_Conv_InterfaceToObject_ReturnValue = UKismetSystemLibrary::Conv_InterfaceToObject(this);
    CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass(CallFunc_Conv_InterfaceToObject_ReturnValue);
    CallFunc_ClassIsChildOf_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
    if (!CallFunc_ClassIsChildOf_ReturnValue) goto L_156;
    bool State_WoodAcquired = true;
L_156:
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnPlayerBoardShipFunc (53 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnPlayerBoardShipFunc()
{
    bool PlayerOnShip = true;
    bool State_OnShip = true;
    if (!State_OnShip) goto L_32;
    Evaluate();
L_32:
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::SetStateShipSunk (36 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::SetStateShipSunk()
{
    auto State_ShipSunk = InShipSunk;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::IncrementNumRepairs (97 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::IncrementNumRepairs()
{
    auto NumRepairs = InNumRepairs;
    auto CallFunc_Greater_IntInt_ReturnValue = NumRepairs;
    auto MastRepairSequenceComplete = CallFunc_Greater_IntInt_ReturnValue;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::SetStateOnShip (36 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::SetStateOnShip()
{
    auto State_OnShip = InStateOnShip;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::SetShouldDisplayPrompts (36 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::SetShouldDisplayPrompts()
{
    auto ShouldDisplayPrompts = InShouldDisplayPrompts;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::BucketThrowImpact (104 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::BucketThrowImpact()
{
    if (!State_WaterBailedFromShip) goto L_65;
    auto State_WaterOffShip = WaterOffShip;
    auto BailWaterSequenceComplete = State_WaterOffShip;
    if (!WaterOffShip) goto L_55;
    Evaluate();
L_55:
    bool State_WaterBailedFromShip = false;
L_65:
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::WaterAmountChanged (28 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::WaterAmountChanged()
{
    bool State_WaterBailedFromShip = true;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::Evaluate (22 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::Evaluate()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_ShipChapter();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::PostInitialize (22 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::PostInitialize()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_ShipChapter();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::UnregisterHandles_Copy (22 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::UnregisterHandles_Copy()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_ShipChapter();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::RegisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::RegisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_ShipChapter();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::UnregisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::UnregisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_ShipChapter();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnPlayerLeaveShip (40 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnPlayerLeaveShip()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_ShipChapter();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnPlayerBoadShip (40 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnPlayerBoadShip()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_ShipChapter();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnRelinquishSailRope (40 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnRelinquishSailRope()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_ShipChapter();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnUseSailRope1 (40 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnUseSailRope1()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_ShipChapter();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnMastFallen (40 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnMastFallen()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_ShipChapter();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnMastRaised (40 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnMastRaised()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_ShipChapter();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnWoodStowed (40 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnWoodStowed()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_ShipChapter();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnWoodWield (40 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnWoodWield()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_ShipChapter();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnPlayerScoopWater (40 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnPlayerScoopWater()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_ShipChapter();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnPlayerRaisedSails (40 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnPlayerRaisedSails()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_ShipChapter();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnPlayerLowerSails (40 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnPlayerLowerSails()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_ShipChapter();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnPlayerUseWheel (40 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnPlayerUseWheel()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_ShipChapter();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnBucketWield (40 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnBucketWield()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_ShipChapter();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnDockWithCapstan (40 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnDockWithCapstan()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_ShipChapter();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnCaptanRaised (40 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnCaptanRaised()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_ShipChapter();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnWheelCentered (40 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnWheelCentered()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_ShipChapter();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnHideInventory (40 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnHideInventory()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_ShipChapter();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnShowInventory (40 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnShowInventory()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_ShipChapter();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::OnReleaseCapstan (40 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::OnReleaseCapstan()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_ShipChapter();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ShipChapter_C::ExecuteUbergraph_BP_Prompt_MaidenVoyage_ShipChapter (6534 bytes)
void BP_Prompt_MaidenVoyage_ShipChapter_C::ExecuteUbergraph_BP_Prompt_MaidenVoyage_ShipChapter()
{
    OnReleaseCapstanFunc();
    bool DamageWarningShown = true;
    Evaluate();
L_38:
    UBasePromptCoordinator::SetPromptAs(Prompt_UseSailRope1);
    UBasePromptCoordinator::SetPromptAs(Prompt_RaiseMast);
    UBasePromptCoordinator::SetPromptAs(Prompt_GetWood);
    UBasePromptCoordinator::SetPromptAs(Prompt_UseWood1);
    UGameInstance* CallFunc_GetGameInstance_ReturnValue = UGameplayStatics::GetGameInstance();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetGameInstance_ReturnValue);
    AHUD* CallFunc_GetHUD_ReturnValue = PlayerController->GetHUD();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue5 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetHUD_ReturnValue);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher2);
    auto CallFunc_GetGameState_ReturnValue = GameplayStatics->this->GetGameState();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue2 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetGameState_ReturnValue);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher3);
    auto CallFunc_GetGameState_ReturnValue3 = GameplayStatics->this->GetGameState();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue4 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetGameState_ReturnValue3);
    auto CallFunc_GetGameState_ReturnValue2 = GameplayStatics->this->GetGameState();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue3 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetGameState_ReturnValue2);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher4);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher5);
    UBasePromptCoordinator::SetPromptAs(Prompt);
    UBasePromptCoordinator::SetPromptAs(Prompt);
    UBasePromptCoordinator::SetPromptAs(Prompt_ScoopWater);
L_6BE:
    auto CallFunc_Greater_IntInt_ReturnValue = NumRepairs;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_74E;
    UBasePromptCoordinator::SetPromptAs(Prompt_ShipCanBeDamaged);
L_74E:
    auto CallFunc_Greater_IntInt_ReturnValue2 = NumRepairs;
    auto CallFunc_BooleanAND_ReturnValue15 = CallFunc_Greater_IntInt_ReturnValue2;
    if (!CallFunc_BooleanAND_ReturnValue15) goto L_7A9;
L_7A9:
    auto CallFunc_Greater_IntInt_ReturnValue3 = NumRepairs;
    auto CallFunc_BooleanAND_ReturnValue16 = CallFunc_Greater_IntInt_ReturnValue3;
    if (!CallFunc_BooleanAND_ReturnValue16) goto L_804;
L_804:
    auto CallFunc_BooleanAND_ReturnValue22 = State_WoodEquipped;
    if (!CallFunc_BooleanAND_ReturnValue22) goto L_83D;
L_83D:
    auto CallFunc_BooleanAND_ReturnValue17 = State_RadialOpen;
    auto CallFunc_BooleanAND_ReturnValue23 = CallFunc_BooleanAND_ReturnValue17;
    if (!CallFunc_BooleanAND_ReturnValue23) goto L_8AB;
    UBasePromptCoordinator::SetPromptAs(Prompt_EquipWood);
L_8AB:
    auto CallFunc_BooleanAND_ReturnValue24 = State_WoodAcquired;
    if (!CallFunc_BooleanAND_ReturnValue24) goto L_8F3;
    UBasePromptCoordinator::SetPromptAs(Prompt_OpenRadial);
L_8F3:
    if (!State_MastRaised) goto L_906;
L_906:
    if (!State_UsedSailRope1) goto L_38;
    UBasePromptCoordinator::SetPromptAs(Prompt_EmptyBucket);
    UBasePromptCoordinator::SetPromptAs(Prompt_DockWithAnchor);
    UBasePromptCoordinator::SetPromptAs(Prompt_UseSailRopeAgain);
    UBasePromptCoordinator::SetPromptAs(Prompt_LowerSail);
    UBasePromptCoordinator::SetPromptAs(Prompt_UseWheelToSteer);
    UBasePromptCoordinator::SetPromptAs(Prompt_OpenRadial);
    UBasePromptCoordinator::SetPromptAs(Prompt_EquipBucket);
L_9A5:
    auto CallFunc_BooleanAND_ReturnValue = MastRepairSequenceComplete;
    if (!CallFunc_BooleanAND_ReturnValue) goto L_9DE;
L_9DE:
    CallFunc_Greater_IntInt_ReturnValue = NumRepairs;
    auto CallFunc_BooleanAND_ReturnValue25 = DamageWarningShown;
    if (!CallFunc_BooleanAND_ReturnValue25) goto L_6BE;
L_A39:
    auto CallFunc_BooleanAND_ReturnValue2 = MastRepairSequenceComplete;
    auto CallFunc_BooleanAND_ReturnValue4 = CallFunc_BooleanAND_ReturnValue2;
    if (!CallFunc_BooleanAND_ReturnValue4) goto L_AA7;
    UBasePromptCoordinator::SetPromptAs(Prompt_RaiseAnchor);
L_AA7:
    auto CallFunc_BooleanAND_ReturnValue3 = MastRepairSequenceComplete;
    auto CallFunc_BooleanAND_ReturnValue19 = CallFunc_BooleanAND_ReturnValue3;
    if (!CallFunc_BooleanAND_ReturnValue19) goto L_B06;
L_B06:
    auto CallFunc_BooleanAND_ReturnValue18 = MastRepairSequenceComplete;
    auto CallFunc_BooleanAND_ReturnValue20 = CallFunc_BooleanAND_ReturnValue18;
    if (!CallFunc_BooleanAND_ReturnValue20) goto L_B65;
L_B65:
    auto CallFunc_BooleanAND_ReturnValue6 = MastRepairSequenceComplete;
    if (!CallFunc_BooleanAND_ReturnValue6) goto L_9A5;
L_B9E:
    auto CallFunc_BooleanAND_ReturnValue7 = MastRepairSequenceComplete;
    auto CallFunc_BooleanAND_ReturnValue8 = CallFunc_BooleanAND_ReturnValue7;
    if (!CallFunc_BooleanAND_ReturnValue8) goto L_BFD;
L_BFD:
    auto CallFunc_BooleanAND_ReturnValue5 = MastRepairSequenceComplete;
    auto CallFunc_BooleanAND_ReturnValue26 = CallFunc_BooleanAND_ReturnValue5;
    if (!CallFunc_BooleanAND_ReturnValue26) goto L_A39;
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher);
    auto CallFunc_BooleanAND_ReturnValue12 = MastRepairSequenceComplete;
    auto CallFunc_BooleanAND_ReturnValue13 = CallFunc_BooleanAND_ReturnValue12;
    auto CallFunc_BooleanAND_ReturnValue14 = CallFunc_BooleanAND_ReturnValue13;
    if (!CallFunc_BooleanAND_ReturnValue14) goto L_D4B;
L_D4B:
    auto CallFunc_BooleanAND_ReturnValue10 = MastRepairSequenceComplete;
    auto CallFunc_BooleanAND_ReturnValue11 = CallFunc_BooleanAND_ReturnValue10;
    auto CallFunc_BooleanAND_ReturnValue29 = CallFunc_BooleanAND_ReturnValue11;
    if (!CallFunc_BooleanAND_ReturnValue29) goto L_DD6;
    UBasePromptCoordinator::DismissAllPrompts();
L_DD6:
    auto CallFunc_BooleanAND_ReturnValue9 = MastRepairSequenceComplete;
    auto CallFunc_BooleanAND_ReturnValue21 = CallFunc_BooleanAND_ReturnValue9;
    auto CallFunc_BooleanAND_ReturnValue28 = CallFunc_BooleanAND_ReturnValue21;
    if (!CallFunc_BooleanAND_ReturnValue28) goto L_B9E;
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher3);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher3);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher4);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher4);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher5);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher6);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher6);
    UGameInstance* CallFunc_GetGameInstance_ReturnValue2 = UGameplayStatics::GetGameInstance();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue6 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetGameInstance_ReturnValue2);
    AHUD* CallFunc_GetHUD_ReturnValue2 = PlayerController->GetHUD();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue10 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetHUD_ReturnValue2);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher7);
    auto CallFunc_GetGameState_ReturnValue4 = GameplayStatics->this->GetGameState();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue7 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetGameState_ReturnValue4);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher8);
    auto CallFunc_GetGameState_ReturnValue6 = GameplayStatics->this->GetGameState();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue9 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetGameState_ReturnValue6);
    auto CallFunc_GetGameState_ReturnValue5 = GameplayStatics->this->GetGameState();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue8 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetGameState_ReturnValue5);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher9);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher10);
L_1512:
    UBasePromptCoordinator::DismissAllPrompts();
L_151D:
    UBasePromptCoordinator::SetPromptAs(Prompt_BoardShip);
    if (!State_OnShip) goto L_151D;
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher6);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher6);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher2);
    auto CallFunc_Not_PreBool_ReturnValue = State_ShipSunk;
    auto CallFunc_BooleanAND_ReturnValue27 = ShouldDisplayPrompts;
    if (!CallFunc_BooleanAND_ReturnValue27) goto L_1512;
    bool PlayerOnShip = false;
    OnPlayerBoardShipFunc();
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher);
    OnRelinquishSailRopeFunc(K2Node_CustomEvent_Event16);
    OnUseSailRope1Func(K2Node_CustomEvent_Event15);
    OnMastFallenFunc();
    OnMastRaisedFunc();
    OnWoodStowedFunc(K2Node_CustomEvent_Event12);
    OnWoodWieldFunc(K2Node_CustomEvent_Event11);
    OnPlayerScoopWaterFunc(K2Node_CustomEvent_Event10);
    OnPlayerRaisedSailsFunc();
    OnPlayerLowerSailsFunc();
    OnPlayerUseWheelFunc(K2Node_CustomEvent_Event7);
    OnBucketWieldFunc(K2Node_CustomEvent_NewParam);
    OnDockWithCapstanFunc();
    OnCapstanRaisedFunc();
    OnWheelCentredFunc();
    OnHideInventoryFunc();
    OnShowInventoryFunc(K2Node_CustomEvent_Event2);
    return;
}

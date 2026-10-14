// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PromptActor_EmissaryEntitlementPurchased_OOS_C::UserConstructionScript (13 bytes)
void BP_PromptActor_EmissaryEntitlementPurchased_OOS_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_PromptActor_EmissaryEntitlementPurchased_OOS_C::ReceiveEndPlay (40 bytes)
void BP_PromptActor_EmissaryEntitlementPurchased_OOS_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_PromptActor_EmissaryEntitlementPurchased_OOS();
    return;
}

// Recovered Kismet: BP_PromptActor_EmissaryEntitlementPurchased_OOS_C::ReceiveBeginPlay (22 bytes)
void BP_PromptActor_EmissaryEntitlementPurchased_OOS_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_PromptActor_EmissaryEntitlementPurchased_OOS();
    return;
}

// Recovered Kismet: BP_PromptActor_EmissaryEntitlementPurchased_OOS_C::ExecuteUbergraph_BP_PromptActor_EmissaryEntitlementPurchased_OOS (533 bytes)
void BP_PromptActor_EmissaryEntitlementPurchased_OOS_C::ExecuteUbergraph_BP_PromptActor_EmissaryEntitlementPurchased_OOS()
{
    bool CallFunc_IsServer_ReturnValue = UKismetSystemLibrary::IsServer();
    if (!CallFunc_IsServer_ReturnValue) goto L_48;
L_48:
    UObject* CallFunc_CreateObject_ReturnValue = UObjectUtilities::CreateObject(BP_Prompt_EmissaryEntitlementPurchased_C);
    BP_Prompt_EmissaryEntitlementPurchased_C* K2Node_DynamicCast_AsBP_Prompt_Emissary_Entitlement_Purchased = Cast<BP_Prompt_EmissaryEntitlementPurchased_C*>(CallFunc_CreateObject_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Prompt_Emissary_Entitlement_Purchased);
    if (!K2Node_DynamicCast_bSuccess) goto L_212;
    K2Node_DynamicCast_AsBP_Prompt_Emissary_Entitlement_Purchased = K2Node_DynamicCast_AsBP_Prompt_Emissary_Entitlement_Purchased;
    K2Node_DynamicCast_AsBP_Prompt_Emissary_Entitlement_Purchased = K2Node_DynamicCast_AsBP_Prompt_Emissary_Entitlement_Purchased;
    K2Node_DynamicCast_AsBP_Prompt_Emissary_Entitlement_Purchased = K2Node_DynamicCast_AsBP_Prompt_Emissary_Entitlement_Purchased;
    GetAthenaPlayerController(CallFunc_GetAthenaPlayerController_AthenaPlayerController);
    auto PromptCoordinator = K2Node_DynamicCast_AsBP_Prompt_Emissary_Entitlement_Purchased;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(PromptCoordinator);
    if (!CallFunc_IsValid_ReturnValue) goto L_212;
L_212:
    return;
}
